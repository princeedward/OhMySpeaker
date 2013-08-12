/*
 * IncFile1.h
 *
 * Created: 2012/10/14 2:20:48
 *  Author: Genius
 */ 


#ifndef CANON_H_
#define CANON_H_

#define NoteNumber 295
//**************define all the frequecy of notes************************************
#define Do1 262
#define Re1 294
#define Mi1 330
#define Fa1 349
#define So1 392
#define La1 440
#define Si1 494
#define Do2 523
#define Re2 578
#define Mi2 659
#define Fa2 698
#define So2 784
#define La2 880
#define Si2 988
//the high part will have distortion
#define Do3 1046
#define Re3 1175
#define Mi3 1318
#define Fa3 1397
#define So3 1568
#define La3 1760
#define Si3 1976
#define Stop 15
//**********************************************************************************

extern unsigned int NoteC[NoteNumber] ;
extern unsigned int RythmeC[NoteNumber];

extern void Canon(void);

#endif /* INCFILE1_H_ */