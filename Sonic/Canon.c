/*
 * Canon.c
 *
 * Created: 2012/10/14 2:12:45
 *  Author: Genius
 */ 


#include "m_general.h"

#define NoteNumber 131
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

unsigned int NoteC[NoteNumber]  = {0};
unsigned int RythmeC[NoteNumber] = {0};

void Canon(void)
{
	//NoteC[0] = Do1;
	//RythmeC[0] = 2;
	//NoteC[1] = Re1;
	//RythmeC[1] = 2;
	//NoteC[2] = Mi1;
	//RythmeC[2] = 2;
	//NoteC[3] = Fa1;
	//RythmeC[3] = 2;
	//NoteC[4] = So1;
	//RythmeC[4] = 2;
	//NoteC[5] = La1;
	//RythmeC[5] = 2;
	//NoteC[6] = Si1;
	//RythmeC[6] = 2;
	//NoteC[NumberOfNotes] = Stop;
	//RythmeC[NumberOfNotes] = 2;
	NoteC[0] = Mi2;
	RythmeC[0] = 2;
	NoteC[1] = Re2;
	RythmeC[1] = 2;
	NoteC[2] = Do2;
	RythmeC[2] = 2;
	NoteC[3] = Si1;
	RythmeC[3] = 2;
	NoteC[4] = La1;
	RythmeC[4] = 2;
	NoteC[5] = So1;
	RythmeC[5] = 2;
	NoteC[6] = La1;
	RythmeC[6] = 2;
	NoteC[7] = Si1;
	RythmeC[7] = 2;
	NoteC[8] = Do2;
	RythmeC[8] = 2;
	NoteC[9] = Si1;
	RythmeC[9] = 2;
	NoteC[10] = La1;
	RythmeC[10] = 2;
	NoteC[11] = So1;
	RythmeC[11] = 2;
	NoteC[12] = Fa1;
	RythmeC[12] = 2;
	NoteC[13] = Mi1;
	RythmeC[13] = 2;
	NoteC[14] = Fa1;
	RythmeC[14] = 2;
	NoteC[15] = Re1;
	RythmeC[15] = 2;
	NoteC[16] = Do2;
	RythmeC[16] = 8;
	NoteC[17] = Si1;
	RythmeC[17] = 8;
	NoteC[18] = Do2;
	RythmeC[18] = 8;
	NoteC[19] = Do1;
	RythmeC[19] = 8;
	NoteC[20] = 230;
	RythmeC[20] = 8;
	NoteC[21] = So1;
	RythmeC[21] = 8;
	NoteC[22] = Re1;
	RythmeC[22] = 8;
	NoteC[23] = Mi1;
	RythmeC[23] = 8;
	NoteC[24] = Do1;
	RythmeC[24] = 8;
	NoteC[25] = Do2;
	RythmeC[25] = 8;
	NoteC[26] = Si1;
	RythmeC[26] = 8;
	NoteC[27] = La1;
	RythmeC[27] = 8;
	NoteC[28] = Si1;
	RythmeC[28] = 8;
	NoteC[29] = Mi2;
	RythmeC[29] = 8;
	NoteC[30] = So2;
	RythmeC[30] = 8;
	NoteC[31] = La2;
	RythmeC[31] = 8;
	NoteC[32] = Fa2;
	RythmeC[32] = 8;
	NoteC[33] = Mi2;
	RythmeC[33] = 8;
	NoteC[34] = Re2;
	RythmeC[34] = 8;
	NoteC[35] = Fa2;
	RythmeC[35] = 8;
	NoteC[36] = Fa2;
	RythmeC[36] = 8;
	NoteC[37] = Mi2;
	RythmeC[37] = 8;
	NoteC[38] = Do2;
	RythmeC[38] = 8;
	NoteC[39] = Si1;
	RythmeC[39] = 8;
	NoteC[40] = La1;
	RythmeC[40] = 8;
	NoteC[41] = So1;
	RythmeC[41] = 8;
	NoteC[42] = Fa1;
	RythmeC[42] = 8;
	NoteC[43] = Mi1;
	RythmeC[43] = 8;
	NoteC[44] = Re1;
	RythmeC[44] = 8;
	NoteC[45] = Fa1;
	RythmeC[45] = 8;
	NoteC[46] = Mi1;
	RythmeC[46] = 8;
	NoteC[47] = Re1;
	RythmeC[47] = 8;
	NoteC[48] = Do1;
	RythmeC[48] = 8;
	NoteC[49] = Re1;
	RythmeC[49] = 8;
	NoteC[50] = Mi1;
	RythmeC[50] = 8;
	NoteC[51] = Fa1;
	RythmeC[51] = 8;
	NoteC[52] = So1;
	RythmeC[52] = 8;
	NoteC[53] = Re1;
	RythmeC[53] = 8;
	NoteC[54] = So1;
	RythmeC[54] = 8;
	NoteC[55] = Fa1;
	RythmeC[55] = 8;
	NoteC[56] = Mi1;
	RythmeC[56] = 8;
	NoteC[57] = La1;
	RythmeC[57] = 8;
	NoteC[58] = So1;
	RythmeC[58] = 8;
	NoteC[59] = Fa1;
	RythmeC[59] = 8;
	NoteC[60] = So1;
	RythmeC[60] = 8;
	NoteC[61] = Fa1;
	RythmeC[61] = 8;
	NoteC[62] = Mi1;
	RythmeC[62] = 8;
	NoteC[63] = Re1;
	RythmeC[63] = 8;
	//
	NoteC[64] = Do1;
	RythmeC[64] = 8;
	NoteC[65] = 200;
	RythmeC[65] = 8;
	NoteC[66] = La1;
	RythmeC[66] = 8;
	NoteC[67] = Si1;
	RythmeC[67] = 8;
	NoteC[68] = Do2;
	RythmeC[68] = 8;
	NoteC[69] = Si1;
	RythmeC[69] = 8;
	NoteC[70] = La1;
	RythmeC[70] = 8;
	NoteC[71] = So1;
	RythmeC[71] = 8;
	NoteC[72] = Fa1;
	RythmeC[72] = 8;
	NoteC[73] = Mi1;
	RythmeC[73] = 8;
	NoteC[74] = Re1;
	RythmeC[74] = 8;
	NoteC[75] = La1;
	RythmeC[75] = 8;
	NoteC[76] = So1;
	RythmeC[76] = 8;
	NoteC[77] = La1;
	RythmeC[77] = 8;
	NoteC[78] = So1;
	RythmeC[78] = 8;
	NoteC[79] = Fa1;
	RythmeC[79] = 8;
	NoteC[80] = Mi1;
	RythmeC[80] = 4;
	NoteC[81] = Mi2;
	RythmeC[81] = 4;
	NoteC[82] = Re2;
	RythmeC[82] = 2;
	NoteC[83] = Do2;
	RythmeC[83] = 2;
	NoteC[84] = Re2;
	RythmeC[84] = 2;
	NoteC[85] = Do2;
	RythmeC[85] = 4;
	NoteC[86] = Mi2;
	RythmeC[86] = 4;
	NoteC[87] = Re2;
	RythmeC[87] = 4;
	NoteC[88] = Fa2;
	RythmeC[88] = 4;
	
	NoteC[89] = So2;
	RythmeC[89] = 8;
	NoteC[90] = Mi2;
	RythmeC[90] = 16;
	NoteC[91] = Fa2;
	RythmeC[91] = 16;
	NoteC[92] = So2;
	RythmeC[92] = 8;
	NoteC[93] = Mi2;
	RythmeC[93] = 16;
	NoteC[94] = Fa2;
	RythmeC[94] = 16;
	NoteC[95] = So2;
	RythmeC[95] = 16;
	NoteC[96] = So1;
	RythmeC[96] = 16;
	NoteC[97] = La1;
	RythmeC[97] = 16;
	NoteC[98] = Si1;
	RythmeC[98] = 16;
	NoteC[99] = Do2;
	RythmeC[99] = 16;
	NoteC[100] = Re2;
	RythmeC[100] = 16;
	NoteC[101] = Mi2;
	RythmeC[101] = 16;
	NoteC[102] = Fa2;
	RythmeC[102] = 16;
	NoteC[103] = Mi2;
	RythmeC[103] = 8;
	NoteC[104] = Do2;
	RythmeC[104] = 16;
	NoteC[105] = Re2;
	RythmeC[105] = 16;
	NoteC[106] = Mi2;
	RythmeC[106] = 8;
	NoteC[107] = Mi1;
	RythmeC[107] = 16;
	NoteC[108] = Fa1;
	RythmeC[108] = 16;
	NoteC[109] = So1;
	RythmeC[109] = 16;
	NoteC[110] = La1;
	RythmeC[110] = 16;
	NoteC[111] = So1;
	RythmeC[111] = 16;
	NoteC[112] = Fa1;
	RythmeC[112] = 16;
	NoteC[113] = So1;
	RythmeC[113] = 16;
	NoteC[114] = Mi1;
	RythmeC[114] = 16;
	NoteC[115] = Fa1;
	RythmeC[115] = 16;
	NoteC[116] = So1;
	RythmeC[116] = 16;
	NoteC[117] = Fa1;
	RythmeC[117] = 8;
	NoteC[118] = La1;
	RythmeC[118] = 16;
	NoteC[119] = So1;
	RythmeC[119] = 16;
	NoteC[120] = Fa1;
	RythmeC[120] = 8;
	NoteC[121] = Mi1;
	RythmeC[121] = 16;
	NoteC[122] = Re1;
	RythmeC[122] = 16;
	NoteC[123] = Mi1;
	RythmeC[123] = 16;
	NoteC[124] = Re1;
	RythmeC[124] = 16;
	NoteC[125] = Do1;
	RythmeC[125] = 16;
	NoteC[126] = Re1;
	RythmeC[126] = 16;
	NoteC[127] = Mi1;
	RythmeC[127] = 16;
	NoteC[128] = Fa1;
	RythmeC[128] = 16;
	NoteC[129] = So1;
	RythmeC[129] = 16;
	NoteC[130] = La1;
	RythmeC[130] = 16;
	//
	NoteC[131] = Fa1;
	RythmeC[131] = 8;
	NoteC[132] = La1;
	RythmeC[132] = 16;
	NoteC[133] = So1;
	RythmeC[133] = 16;
	NoteC[134] = La1;
	RythmeC[134] = 8;
	NoteC[135] = Si1;
	RythmeC[135] = 16;
	NoteC[136] = Do2;
	RythmeC[136] = 16;
	NoteC[137] = So1;
	RythmeC[137] = 16;
	NoteC[138] = La1;
	RythmeC[138] = 16;
	NoteC[139] = Si1;
	RythmeC[139] = 16;
	NoteC[140] = Do2;
	RythmeC[140] = 16;
	NoteC[141] = Re2;
	RythmeC[141] = 16;
	NoteC[142] = Mi2;
	RythmeC[142] = 16;
	NoteC[143] = Fa2;
	RythmeC[143] = 16;
	NoteC[144] = So2;
	RythmeC[144] = 16;
	//
	NoteC[145] = Mi2;
	RythmeC[145] = 8;
	NoteC[146] = Do2;
	RythmeC[146] = 16;
	NoteC[147] = Re2;
	RythmeC[147] = 16;
	
	NoteC[148] = Mi2;
	RythmeC[148] = 8;
	NoteC[149] = Re2;
	RythmeC[149] = 16;
	NoteC[150] = Do2;
	RythmeC[150] = 16;
	
	NoteC[151] = Re2;
	RythmeC[151] = 16;
	NoteC[152] = Si1;
	RythmeC[152] = 16;
	NoteC[153] = Do2;
	RythmeC[153] = 16;
	NoteC[154] = Re2;
	RythmeC[154] = 16;
	
	NoteC[155] = Mi2;
	RythmeC[155] = 16;
	NoteC[156] = Re2;
	RythmeC[156] = 16;
	NoteC[157] = Do2;
	RythmeC[157] = 16;
	NoteC[158] = Si1;
	RythmeC[158] = 16;
	//
	NoteC[159] = Do2;
	RythmeC[159] = 8;
	NoteC[160] = La1;
	RythmeC[160] = 16;
	NoteC[161] = Si1;
	RythmeC[161] = 16;
	
	NoteC[162] = Do2;
	RythmeC[162] = 8;
	NoteC[163] = Do1;
	RythmeC[163] = 16;
	NoteC[164] = Re1;
	RythmeC[164] = 16;
	
	NoteC[165] = Mi1;
	RythmeC[165] = 16;
	NoteC[166] = Fa1;
	RythmeC[166] = 16;
	NoteC[167] = Mi1;
	RythmeC[167] = 16;
	NoteC[168] = Re1;
	RythmeC[168] = 16;
	
	NoteC[169] = Mi1;
	RythmeC[169] = 16;
	NoteC[170] = Do2;
	RythmeC[170] = 16;
	NoteC[171] = Si1;
	RythmeC[171] = 16;
	NoteC[172] = Do2;
	RythmeC[172] = 16;
	//
	NoteC[173] = La1;
	RythmeC[173] = 8;
	NoteC[174] = Do2;
	RythmeC[174] = 16;
	NoteC[175] = Si1;
	RythmeC[175] = 16;
	
	NoteC[176] = La1;
	RythmeC[176] = 8;
	NoteC[177] = So1;
	RythmeC[177] = 16;
	NoteC[178] = Fa1;
	RythmeC[178] = 16;
	
	NoteC[179] = So1;
	RythmeC[179] = 16;
	NoteC[180] = Fa1;
	RythmeC[180] = 16;
	NoteC[181] = Mi1;
	RythmeC[181] = 16;
	NoteC[182] = Fa1;
	RythmeC[182] = 16;
	
	NoteC[183] = So1;
	RythmeC[183] = 16;
	NoteC[184] = La1;
	RythmeC[184] = 16;
	NoteC[185] = Si1;
	RythmeC[185] = 16;
	NoteC[186] = Do1;
	RythmeC[186] = 16;
	//
	NoteC[187] = La1;
	RythmeC[187] = 8;
	NoteC[188] = Do2;
	RythmeC[188] = 16;
	NoteC[189] = Si1;
	RythmeC[189] = 16;
	
	NoteC[190] = Do2;
	RythmeC[190] = 8;
	NoteC[191] = Si1;
	RythmeC[191] = 16;
	NoteC[192] = La1;
	RythmeC[192] = 16;
	
	NoteC[193] = Si1;
	RythmeC[193] = 16;
	NoteC[194] = Do2;
	RythmeC[194] = 16;
	NoteC[195] = Re2;
	RythmeC[195] = 16;
	NoteC[196] = Do2;
	RythmeC[196] = 16;
	
	NoteC[197] = Si1;
	RythmeC[197] = 16;
	NoteC[198] = Do2;
	RythmeC[198] = 16;
	NoteC[199] = La1;
	RythmeC[199] = 16;
	NoteC[200] = Si1;
	RythmeC[200] = 16;
	//
	//
	NoteC[201] = Mi2;
	RythmeC[201] = 8;
	NoteC[202] = Mi1;
	RythmeC[202] = 8;
	NoteC[203] = Fa1;
	RythmeC[203] = 8;
	NoteC[204] = Mi1;
	RythmeC[204] = 8;
	
	NoteC[205] = Re1;
	RythmeC[205] = 8;
	NoteC[206] = Re2;
	RythmeC[206] = 8;
	NoteC[207] = Mi2;
	RythmeC[207] = 8;
	NoteC[208] = Re2;
	RythmeC[208] = 8;
	//
	NoteC[209] = Do2;
	RythmeC[209] = 8;
	NoteC[210] = Mi1;
	RythmeC[210] = 8;
	NoteC[211] = Do1;
	RythmeC[211] = 8;
	NoteC[212] = La1;
	RythmeC[212] = 8;
	
	NoteC[213] = So1;
	RythmeC[213] = 8;
	NoteC[214] = 5;
	RythmeC[214] = 8;
	NoteC[215] = 4;
	RythmeC[215] = 8;
	NoteC[216] = 5;
	RythmeC[216] = 8;
	//
	NoteC[217] = 6;
	RythmeC[217] = 8;
	NoteC[218] = La1;
	RythmeC[218] = 8;
	NoteC[219] = Si1;
	RythmeC[219] = 8;
	NoteC[220] = La1;
	RythmeC[220] = 8;
	
	NoteC[221] = Si1;
	RythmeC[221] = 8;
	NoteC[222] = 5;
	RythmeC[222] = 8;
	NoteC[223] = 4;
	RythmeC[223] = 8;
	NoteC[224] = 5;
	RythmeC[224] = 8;
	//
	NoteC[225] = 6;
	RythmeC[225] = 8;
	NoteC[226] = La1;
	RythmeC[226] = 8;
	NoteC[227] = So1;
	RythmeC[227] = 8;
	NoteC[228] = La1;
	RythmeC[228] = 8;
	
	NoteC[229] = Si1;
	RythmeC[229] = 8;
	NoteC[230] = Si1;
	RythmeC[230] = 8;
	NoteC[231] = La1;
	RythmeC[231] = 8;
	NoteC[232] = Si1;
	RythmeC[232] = 8;
	//
	
	NoteC[233] = Do1;
	RythmeC[233] = 8;
	NoteC[234] = Do2;
	RythmeC[234] = 8;
	NoteC[235] = Re2;
	RythmeC[235] = 8;
	NoteC[236] = Do2;
	RythmeC[236] = 8;
	
	NoteC[237] = Si1;
	RythmeC[237] = 8;
	NoteC[238] = 7;
	RythmeC[238] = 8;
	NoteC[239] = Do1;
	RythmeC[239] = 8;
	NoteC[240] = 7;
	RythmeC[240] = 8;
	//
	NoteC[241] = 6;
	RythmeC[241] = 8;
	NoteC[242] = La1;
	RythmeC[242] = 8;
	NoteC[243] = So1;
	RythmeC[243] = 8;
	NoteC[244] = La1;
	RythmeC[244] = 8;
	
	NoteC[245] = Si1;
	RythmeC[245] = 8;
	NoteC[246] = 7;
	RythmeC[246] = 8;
	NoteC[247] = Mi1;
	RythmeC[247] = 8;
	NoteC[248] = Re1;
	RythmeC[248] = 8;
	//
	NoteC[249] = Do1;
	RythmeC[249] = 8;
	NoteC[250] = Do2;
	RythmeC[250] = 8;
	NoteC[251] = Re2;
	RythmeC[251] = 8;
	NoteC[252] = Fa2;
	RythmeC[252] = 8;
	
	NoteC[253] = Mi2;
	RythmeC[253] = 8;
	NoteC[254] = Mi1;
	RythmeC[254] = 8;
	NoteC[255] = So1;
	RythmeC[255] = 8;
	NoteC[256] = Mi2;
	RythmeC[256] = 8;
	//
	NoteC[257] = Do2;
	RythmeC[257] = 8;
	NoteC[258] = Fa2;
	RythmeC[258] = 8;
	NoteC[259] = Mi2;
	RythmeC[259] = 8;
	NoteC[260] = Fa2;
	RythmeC[260] = 8;
	
	NoteC[261] = Re2;
	RythmeC[261] = 8;
	NoteC[262] = So1;
	RythmeC[262] = 8;
	NoteC[263] = Fa1;
	RythmeC[263] = 8;
	NoteC[264] = So1;
	RythmeC[264] = 8;
	//
	//
	NoteC[265] = Mi1;
	RythmeC[265] = 8;
	NoteC[266] = Do2;
	RythmeC[266] = 16;
	NoteC[267] = Si1;
	RythmeC[267] = 16;
	
	NoteC[268] = Do2;
	RythmeC[268] = 8;
	NoteC[269] = Mi1;
	RythmeC[269] = 8;
	
	NoteC[270] = So1;
	RythmeC[270] = 8;
	NoteC[271] = So1;
	RythmeC[271] = 16;
	NoteC[272] = La1;
	RythmeC[272] = 16;
	
	NoteC[273] = Si1;
	RythmeC[273] = 8;
	NoteC[274] = So1;
	RythmeC[274] = 8;
	//
	NoteC[275] = Mi1;
	RythmeC[275] = 8;
	NoteC[276] = Do2;
	RythmeC[276] = 16;
	NoteC[277] = Re2;
	RythmeC[277] = 16;
	
	NoteC[278] = Mi2;
	RythmeC[278] = 8;
	NoteC[279] = Do2;
	RythmeC[279] = 8;
	
	NoteC[280] = Mi2;
	RythmeC[280] = 8;
	NoteC[281] = Mi2;
	RythmeC[281] = 16;
	NoteC[282] = Re2;
	RythmeC[282] = 16;
	
	NoteC[283] = Do2;
	RythmeC[283] = 8;
	NoteC[284] = Si1;
	RythmeC[284] = 8;
	//
	NoteC[285] = La1;
	RythmeC[285] = 8;
	NoteC[286] = La1;
	RythmeC[286] = 16;
	NoteC[287] = So1;
	RythmeC[287] = 16;
	
	NoteC[288] = La1;
	RythmeC[288] = 8;
	NoteC[289] = Si1;
	RythmeC[289] = 8;
	
	NoteC[290] = Do2;
	RythmeC[290] = 8;
	NoteC[291] = Mi2;
	RythmeC[291] = 16;
	NoteC[292] = Re2;
	RythmeC[292] = 16;
	
	NoteC[293] = Do2;
	RythmeC[293] = 8;
	NoteC[294] = Mi2;
	RythmeC[294] = 8;
	//
}