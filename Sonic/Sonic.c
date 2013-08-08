/*
 * Sonic.c
 *
 * Created: 10/8/2012 6:51:42 PM
 *  Author: yunkai
 */ 


#include "m_general.h"
#include "Canon.h"
#define COUNTER 533
#define INTERRUPTPERIOD 50	//us
#define PI 3.14159
#define NumberOfNotes 62
#define SAMPLENUM 20
#define SAMPLENUM4LOWTUNE 50

//********************************************************************************** 

volatile int Timer3Flag=0;
volatile int Timer3Flag2=0;
volatile unsigned int FrequencyNow;
//volatile unsigned long NoteLength=0; 
volatile unsigned int NoteLength=0; 
volatile unsigned int Tunes[NumberOfNotes]  = {0};
volatile unsigned int Rythme[NumberOfNotes] = {0};
volatile unsigned int sinValue[SAMPLENUM]={0};
volatile unsigned int sinValue2[SAMPLENUM4LOWTUNE]={0};
volatile unsigned int stopFlag=0;
	
void SetPLL(void)
{
	PLLCSR |= 0x13;
	PLLFRQ = 0x6a;	//lock to 96MHz
	//#define PDIV0 0 0
	//#define PDIV1 1 1
	//#define PDIV2 2 0
	//#define PDIV3 3 1
	//#define PLLTM0 4 0  set high speed timer to 64Mhz
	//#define PLLTM1 5 1
	//#define PLLUSB 6 1 PLL Output frequency is divided by 2 and sent to USB module (if PLL Output = 96MHz)
	//#define PINMUX 7 0
}

void TimerSetup(void){
	//Timer1 is used to generate the PWM
	OCR1A = 50000;		//set frequency, f=1/((OCR1A+1)*(1/CLK));
	//OCR1B = (int)(COUNTER/2);		//set duty cycle, which can be calculate by (OCR1B+1)/(OCR1A+1)
	TCCR1A = 0b00000000;//0x23; //set mode to (mode 15) UP to OCR1A, PWM mode, operating at clearing at OCR1B, seting at rollover
	//#define WGM10 0 0
	//#define WGM11 1 0
	//#define COM1C0 2 0
	//#define COM1C1 3 0
	//#define COM1B0 4 0
	//#define COM1B1 5 0
	//#define COM1A0 6 0
	//#define COM1A1 7 0
	TCCR1B = 0b00001001;//0x19;//clock source /1
	//#define CS10 0 1
	//#define CS11 1 0
	//#define CS12 2 0
	//#define WGM12 3 1
	//#define WGM13 4 0
	//#define ICES1 6 0
	//#define ICNC1 7 0
	//Timer4 is used to get period interrupt
	//OCR3A = 16*INTERRUPTPERIOD;
	set(TIMSK1 , OCIE1A);
	OCR3A = 1600;
	TCCR3A = 0x00;
	//#define WGM30 0 0
	//#define WGM31 1 0
	//#define COM3C0 2 0
	//#define COM3C1 3 0
	//#define COM3B0 4 0
	//#define COM3B1 5 0
	//#define COM3A0 6 0
	//#define COM3A1 7 0
	TCCR3B = 0x09;
	//#define CS30 0 1
	//#define CS31 1 0
	//#define CS32 2 0
	//#define WGM32 3 1
	//#define WGM33 4 0
	//              5 0
	//#define ICES3 6 0
	//#define ICNC3 7 0
	set(TIMSK3,OCIE3A );	//call an interrupt whenever TCNT3 matches OCR3A
	//set(TIMSK3,OCIE3B );
	OCR4C = 0xff;
	OCR4A = 0x80;
	TCCR4A = 0x82;
	//#define PWM4B 0 0
	//#define PWM4A 1 1
	//#define FOC4B 2 0
	//#define FOC4A 3 0
	//#define COM4B0 4 0
	//#define COM4B1 5 0
	//#define COM4A0 6 0
	//#define COM4A1 7 1
	TCCR4B = 0x01;
	//#define CS40 0 1
	//#define CS41 1
	//#define CS42 2
	//#define CS43 3
	//#define DTPS40 4
	//#define DTPS41 5
	//#define PSR4 6
	//#define PWM4X 7
	TCCR4D = 0x00;
	//#define WGM40 0
	//#define WGM41 1
	//#define FPF4 2
	//#define FPAC4 3
	//#define FPES4 4
	//#define FPNC4 5
	//#define FPEN4 6
	//#define FPIE4 7
	TCCR4E = 0x00;
	//#define OC4OE0 0
	//#define OC4OE1 1
	//#define OC4OE2 2
	//#define OC4OE3 3
	//#define OC4OE4 4
	//#define OC4OE5 5
	//#define ENHC4 6
	//#define TLOCK4 7
	
}
void sinCalculation(void)
{
	int i;
	for (i=0;i<SAMPLENUM;i++)
	{
		sinValue[i] = 127*sin(2*PI*i/SAMPLENUM)+128;
	}
	for (i=0;i<SAMPLENUM4LOWTUNE;i++)
	{
		sinValue2[i] = 127*sin(2*PI*i/SAMPLENUM4LOWTUNE)+128;
	}
}
//void SinWaveGenerator(int sFrequency, int Timer)	//sFrequency is the sin wave frequency I want to generate, and Timer is the period interrupt the system use
//void SinWaveGenerator(void)
void SinWaveGenerator(int sFrequency)
{
	static unsigned int recorder=1, reminder=0, innerTimer=0;
	//reminder = 10000/(float)sFrequency*100/SAMPLENUM/Timer;
	//if (innerTimer<reminder)
	//{
		//innerTimer++;
	//} 
	//else
	//{
		//OCR3A = 16000/(float)sFrequency/SAMPLENUM*1000;
	if (sFrequency<350)
	{
		if (recorder<SAMPLENUM4LOWTUNE)
		{
			//OCR4A = sinValue2[recorder];
			recorder++;
		}
		else
		{
			recorder = 1;
		}
		OCR4A = sinValue2[recorder-1];
	}
	else
	{
		if (recorder<SAMPLENUM)
		{
			//OCR4A = sinValue[recorder];
			recorder++;
		}
		else
		{
			recorder = 1;
		}
		OCR4A = sinValue[recorder-1];
	}
		//if (recorder<SAMPLENUM)
		//{
			//OCR4A = sinValue[recorder];
			//recorder++;
		//}
		//else
		//{
			//recorder = 1;
		//}
		//OCR4A = sinValue[recorder-1];
		innerTimer=0;
	//}
}
	
void note(int pitch, int length)	//if a note is 1/4 then the length here should be 4, if is 1/8 then the length here is 8
{
	FrequencyNow = pitch;
	if (pitch<350)
	{
		OCR3A = 16000/(float)pitch/SAMPLENUM4LOWTUNE*1000;
	} 
	else
	{
		OCR3A = 16000/(float)pitch/SAMPLENUM*1000;
	}
	//OCR3A = 16000/(float)pitch/SAMPLENUM*1000;
	//NoteLength = 2000/length*100;
	if (length>32)
	{
		length=32;
	}
	NoteLength = 32*20/length+10;
}

void Tune(void)
{
	//Tunes[0] = Do1;
	//Rythme[0] = 2;
	//Tunes[1] = Re1;
	//Rythme[1] = 2;
	//Tunes[2] = Mi1;
	//Rythme[2] = 2;
	//Tunes[3] = Fa1;
	//Rythme[3] = 2;
	//Tunes[4] = So1;
	//Rythme[4] = 2;
	//Tunes[5] = La1;
	//Rythme[5] = 2;
	//Tunes[6] = Si1;
	//Rythme[6] = 2;
	//Tunes[NumberOfNotes] = Stop;
	//Rythme[NumberOfNotes] = 2;
	//first
	Tunes[0] = Mi1;
	Rythme[0] = 4;
	Tunes[1] = Mi1;
	Rythme[1] = 4;
	Tunes[2] = Fa1;
	Rythme[2] = 4;
	Tunes[3] = So1;
	Rythme[3] = 4;
	Tunes[4] = So1;
	Rythme[4] = 2;
	Tunes[5] = Fa1;
	Rythme[5] = 8;
	Tunes[6] = Mi1;
	Rythme[6] = 4;
	Tunes[7] = Re1;
	Rythme[7] = 4;
	Tunes[8] = Do1;
	Rythme[8] = 4;
	Tunes[9] = Do1;
	Rythme[9] = 4;
	Tunes[10] = Re1;
	Rythme[10] = 4;
	Tunes[11] = Mi1;
	Rythme[11] = 4;
	Tunes[12] = Mi1;
	Rythme[12] = 2;
	Tunes[13] = Re1;
	Rythme[13] = 8;
	Tunes[14] = Re1;
	Rythme[14] = 4;
	//second
	Tunes[15] = Mi1;
	Rythme[15] = 4;
	Tunes[16] = Mi1;
	Rythme[16] = 4;
	Tunes[17] = Fa1;
	Rythme[17] = 4;
	Tunes[18] = So1;
	Rythme[18] = 4;
	Tunes[19] = So1;
	Rythme[19] = 2;
	Tunes[20] = Fa1;
	Rythme[20] = 8;
	Tunes[21] = Mi1;
	Rythme[21] = 4;
	Tunes[22] = Re1;
	Rythme[22] = 4;
	Tunes[23] = Do1;
	Rythme[23] = 4;
	Tunes[24] = Do1;
	Rythme[24] = 4;
	Tunes[25] = Re1;
	Rythme[25] = 4;
	Tunes[26] = Mi1;
	Rythme[26] = 4;
	Tunes[27] = Re1;
	Rythme[27] = 2;
	Tunes[28] = Do1;
	Rythme[28] = 8;
	Tunes[29] = Do1;
	Rythme[29] = 4;
	//third
	Tunes[30] = Re1;
	Rythme[30] = 4;
	Tunes[31] = Re1;
	Rythme[31] = 4;
	Tunes[32] = Mi1;
	Rythme[32] = 4;
	Tunes[33] = Do1;
	Rythme[33] = 4;
	Tunes[34] = Re1;
	Rythme[34] = 4;
	Tunes[35] = Mi1;
	Rythme[35] = 8;
	Tunes[36] = Fa1;
	Rythme[36] = 8;
	Tunes[37] = Mi1;
	Rythme[37] = 4;
	Tunes[38] = Do1;
	Rythme[38] = 4;
	Tunes[39] = Re1;
	Rythme[39] = 4;
	Tunes[40] = Mi1;
	Rythme[40] = 8;
	Tunes[41] = Fa1;
	Rythme[41] = 8;
	Tunes[42] = Mi1;
	Rythme[42] = 4;
	Tunes[43] = Re1;
	Rythme[43] = 4;
	Tunes[44] = Do1;
	Rythme[44] = 4;
	Tunes[45] = Re1;
	Rythme[45] = 4;
	Tunes[46] = 150;
	Rythme[46] = 4;
	//fourth
	Tunes[47] = Mi1;
	Rythme[47] = 4;
	Tunes[48] = Mi1;
	Rythme[48] = 4;
	Tunes[49] = Fa1;
	Rythme[49] = 4;
	Tunes[50] = So1;
	Rythme[50] = 4;
	Tunes[51] = So1;
	Rythme[51] = 2;
	Tunes[52] = Fa1;
	Rythme[52] = 8;
	Tunes[53] = Mi1;
	Rythme[53] = 4;
	Tunes[54] = Re1;
	Rythme[54] = 4;
	Tunes[55] = Do1;
	Rythme[55] = 4;
	Tunes[56] = Do1;
	Rythme[56] = 4;
	Tunes[57] = Re1;
	Rythme[57] = 4;
	Tunes[58] = Mi1;
	Rythme[58] = 4;
	Tunes[59] = Re1;
	Rythme[59] = 4;
	Tunes[60] = Do1;
	Rythme[60] = 8;
	Tunes[61] = Do1;
	Rythme[61] = 4;
}
int main(void)
{
	//unsigned long NoteCount=0; 
	unsigned int NoteCount=0; 
	unsigned int NoteShouldPlay=0;
	
	m_clockdivide(0);
	SetPLL();
	//set(DDRB,6);		//set 6th bit of portB to output
	set(DDRC,7);		//set 7th bit of portC to output
	//Tune();
	Canon();
	sinCalculation();
	
	TimerSetup();
	sei();
	//3s wait
	int wait3Second = 0;
	OCR4A=50;
	while(1){
		if (Timer3Flag2==1)
		{
			if (wait3Second<900)
			{
				wait3Second++;
			} 
			else
			{
				break;
			}
			Timer3Flag2=0;
		}
	}
	while(1)
	{
		if (Timer3Flag==1)
		{
			//cli();
			//SinWaveGenerator(FrequencyNow, INTERRUPTPERIOD);
			if(stopFlag==0){
				//SinWaveGenerator(FrequencyNow, INTERRUPTPERIOD);
				SinWaveGenerator(FrequencyNow);
			}else{
				OCR4A=50;
			}
			
			//TriWaveGenerator(FrequencyNow, INTERRUPTPERIOD);
			//if (NoteCount<NoteLength)
			//{
				//NoteCount++;
			//} 
			//else
			//{
				//if (NoteShouldPlay<NumberOfNotes)
				//{
					//note(Tunes[NoteShouldPlay],Rythme[NoteShouldPlay]);
					//NoteShouldPlay++;
				//} 
				//NoteCount=0;
			//}
			Timer3Flag=0;
			//set(TIFR1,TOV1);
			//sei();
		}
		if (Timer3Flag2==1)
		{
			//m_green(TOGGLE);
			if (NoteLength<10)
			{
				NoteLength = 10;
			}
			if (NoteCount<(NoteLength-10))
			{
				NoteCount++;
			}
			else
			{
				if (NoteCount<NoteLength)
				{
					stopFlag=1;
					NoteCount++;
				} 
				else
				{
					stopFlag=0;
					//if (NoteShouldPlay<NumberOfNotes)
					if (NoteShouldPlay<NoteNumber)
					{
						m_green(TOGGLE);
						//note(Tunes[NoteShouldPlay],Rythme[NoteShouldPlay]);
						note(NoteC[NoteShouldPlay],RythmeC[NoteShouldPlay]);
						//note(250,4);
						NoteShouldPlay++;
					}else{
						stopFlag=1;
						m_red(ON);
						m_green(OFF);
					}
					NoteCount=0;
				}
			}
			Timer3Flag2=0;
		}
	}
}

ISR(TIMER3_COMPA_vect)	//5us interrupt
{
	if (Timer3Flag==0)
	{
		Timer3Flag=1;
	}	
}
ISR(TIMER1_COMPA_vect) //3.125ms interrupt
{
	//static t3bTimer=0;
	//if (t3bTimer<20)
	//{
		//t3bTimer++;
	//} 
	//else
	//{
		Timer3Flag2 = 1;
		//t3bTimer = 0;
	//}
}