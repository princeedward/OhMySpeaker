/*
 * Canon.c
 *
 * Created: 2012/10/14 2:12:45
 *  Author: Genius
 */ 


#include "m_general.h"
#include "Canon.h"

//#define NoteNumber 295
////**************define all the frequecy of notes************************************
//#define Do1 262
//#define Re1 294
//#define Mi1 330
//#define Fa1 349
//#define So1 392
//#define La1 440
//#define Si1 494
//#define Do2 523
//#define Re2 578
//#define Mi2 659
//#define Fa2 698
//#define So2 784
//#define La2 880
//#define Si2 988
////the high part will have distortion
//#define Do3 1046
//#define Re3 1175
//#define Mi3 1318
//#define Fa3 1397
//#define So3 1568
//#define La3 1760
//#define Si3 1976
//#define Stop 15
//**********************************************************************************

unsigned int NoteC[NoteNumber]  = {0};
unsigned int RythmeC[NoteNumber] = {0};

void Canon(void)
{
	//NoteC[0] = Do2;
	//RythmeC[0] = 2;
	//NoteC[1] = Re2;
	//RythmeC[1] = 2;
	//NoteC[2] = Mi2;
	//RythmeC[2] = 2;
	//NoteC[3] = Fa2;
	//RythmeC[3] = 2;
	//NoteC[4] = So2;
	//RythmeC[4] = 2;
	//NoteC[5] = La2;
	//RythmeC[5] = 2;
	//NoteC[6] = Si2;
	//RythmeC[6] = 2;
	//NoteC[NumberOfNotes] = Stop;
	//RythmeC[NumberOfNotes] = 2;
	NoteC[0] = Mi3;
	RythmeC[0] = 2;
	NoteC[1] = Re3;
	RythmeC[1] = 2;
	NoteC[2] = Do3;
	RythmeC[2] = 2;
	NoteC[3] = Si2;
	RythmeC[3] = 2;
	NoteC[4] = La2;
	RythmeC[4] = 2;
	NoteC[5] = So2;
	RythmeC[5] = 2;
	NoteC[6] = La2;
	RythmeC[6] = 2;
	NoteC[7] = Si2;
	RythmeC[7] = 2;
	NoteC[8] = Do3;
	RythmeC[8] = 2;
	NoteC[9] = Si2;
	RythmeC[9] = 2;
	NoteC[10] = La2;
	RythmeC[10] = 2;
	NoteC[11] = So2;
	RythmeC[11] = 2;
	NoteC[12] = Fa2;
	RythmeC[12] = 2;
	NoteC[13] = Mi2;
	RythmeC[13] = 2;
	NoteC[14] = Fa2;
	RythmeC[14] = 2;
	NoteC[15] = Re2;
	RythmeC[15] = 2;
	NoteC[16] = Do3;
	RythmeC[16] = 8;
	NoteC[17] = Si2;
	RythmeC[17] = 8;
	NoteC[18] = Do3;
	RythmeC[18] = 8;
	NoteC[19] = Do2;
	RythmeC[19] = 8;
	NoteC[20] = Si1;
	RythmeC[20] = 8;
	NoteC[21] = So2;
	RythmeC[21] = 8;
	NoteC[22] = Re2;
	RythmeC[22] = 8;
	NoteC[23] = Mi2;
	RythmeC[23] = 8;
	NoteC[24] = Do2;
	RythmeC[24] = 8;
	NoteC[25] = Do3;
	RythmeC[25] = 8;
	NoteC[26] = Si2;
	RythmeC[26] = 8;
	NoteC[27] = La2;
	RythmeC[27] = 8;
	NoteC[28] = Si2;
	RythmeC[28] = 8;
	NoteC[29] = Mi3;
	RythmeC[29] = 8;
	NoteC[30] = So3;
	RythmeC[30] = 8;
	NoteC[31] = La3;
	RythmeC[31] = 8;
	NoteC[32] = Fa3;
	RythmeC[32] = 8;
	NoteC[33] = Mi3;
	RythmeC[33] = 8;
	NoteC[34] = Re3;
	RythmeC[34] = 8;
	NoteC[35] = Fa3;
	RythmeC[35] = 8;
	NoteC[36] = Fa3;
	RythmeC[36] = 8;
	NoteC[37] = Mi3;
	RythmeC[37] = 8;
	NoteC[38] = Do3;
	RythmeC[38] = 8;
	NoteC[39] = Si2;
	RythmeC[39] = 8;
	NoteC[40] = La2;
	RythmeC[40] = 8;
	NoteC[41] = So2;
	RythmeC[41] = 8;
	NoteC[42] = Fa2;
	RythmeC[42] = 8;
	NoteC[43] = Mi2;
	RythmeC[43] = 8;
	NoteC[44] = Re2;
	RythmeC[44] = 8;
	NoteC[45] = Fa2;
	RythmeC[45] = 8;
	NoteC[46] = Mi2;
	RythmeC[46] = 8;
	NoteC[47] = Re2;
	RythmeC[47] = 8;
	NoteC[48] = Do2;
	RythmeC[48] = 8;
	NoteC[49] = Re2;
	RythmeC[49] = 8;
	NoteC[50] = Mi2;
	RythmeC[50] = 8;
	NoteC[51] = Fa2;
	RythmeC[51] = 8;
	NoteC[52] = So2;
	RythmeC[52] = 8;
	NoteC[53] = Re2;
	RythmeC[53] = 8;
	NoteC[54] = So2;
	RythmeC[54] = 8;
	NoteC[55] = Fa2;
	RythmeC[55] = 8;
	NoteC[56] = Mi2;
	RythmeC[56] = 8;
	NoteC[57] = La2;
	RythmeC[57] = 8;
	NoteC[58] = So2;
	RythmeC[58] = 8;
	NoteC[59] = Fa2;
	RythmeC[59] = 8;
	NoteC[60] = So2;
	RythmeC[60] = 8;
	NoteC[61] = Fa2;
	RythmeC[61] = 8;
	NoteC[62] = Mi2;
	RythmeC[62] = 8;
	NoteC[63] = Re2;
	RythmeC[63] = 8;
	//
	NoteC[64] = Do2;
	RythmeC[64] = 8;
	NoteC[65] = La1;
	RythmeC[65] = 8;
	NoteC[66] = La2;
	RythmeC[66] = 8;
	NoteC[67] = Si2;
	RythmeC[67] = 8;
	NoteC[68] = Do3;
	RythmeC[68] = 8;
	NoteC[69] = Si2;
	RythmeC[69] = 8;
	NoteC[70] = La2;
	RythmeC[70] = 8;
	NoteC[71] = So2;
	RythmeC[71] = 8;
	NoteC[72] = Fa2;
	RythmeC[72] = 8;
	NoteC[73] = Mi2;
	RythmeC[73] = 8;
	NoteC[74] = Re2;
	RythmeC[74] = 8;
	NoteC[75] = La2;
	RythmeC[75] = 8;
	NoteC[76] = So2;
	RythmeC[76] = 8;
	NoteC[77] = La2;
	RythmeC[77] = 8;
	NoteC[78] = So2;
	RythmeC[78] = 8;
	NoteC[79] = Fa2;
	RythmeC[79] = 8;
	NoteC[80] = Mi2;
	RythmeC[80] = 4;
	NoteC[81] = Mi3;
	RythmeC[81] = 4;
	NoteC[82] = Re3;
	RythmeC[82] = 2;
	NoteC[83] = Do3;
	RythmeC[83] = 2;
	NoteC[84] = Re3;
	RythmeC[84] = 2;
	NoteC[85] = Do3;
	RythmeC[85] = 4;
	NoteC[86] = Mi3;
	RythmeC[86] = 4;
	NoteC[87] = Re3;
	RythmeC[87] = 4;
	NoteC[88] = Fa3;
	RythmeC[88] = 4;
	
	NoteC[89] = So3;
	RythmeC[89] = 8;
	NoteC[90] = Mi3;
	RythmeC[90] = 16;
	NoteC[91] = Fa3;
	RythmeC[91] = 16;
	NoteC[92] = So3;
	RythmeC[92] = 8;
	NoteC[93] = Mi3;
	RythmeC[93] = 16;
	NoteC[94] = Fa3;
	RythmeC[94] = 16;
	NoteC[95] = So3;
	RythmeC[95] = 16;
	NoteC[96] = So2;
	RythmeC[96] = 16;
	NoteC[97] = La2;
	RythmeC[97] = 16;
	NoteC[98] = Si2;
	RythmeC[98] = 16;
	NoteC[99] = Do3;
	RythmeC[99] = 16;
	NoteC[100] = Re3;
	RythmeC[100] = 16;
	NoteC[101] = Mi3;
	RythmeC[101] = 16;
	NoteC[102] = Fa3;
	RythmeC[102] = 16;
	NoteC[103] = Mi3;
	RythmeC[103] = 8;
	NoteC[104] = Do3;
	RythmeC[104] = 16;
	NoteC[105] = Re3;
	RythmeC[105] = 16;
	NoteC[106] = Mi3;
	RythmeC[106] = 8;
	NoteC[107] = Mi2;
	RythmeC[107] = 16;
	NoteC[108] = Fa2;
	RythmeC[108] = 16;
	NoteC[109] = So2;
	RythmeC[109] = 16;
	NoteC[110] = La2;
	RythmeC[110] = 16;
	NoteC[111] = So2;
	RythmeC[111] = 16;
	NoteC[112] = Fa2;
	RythmeC[112] = 16;
	NoteC[113] = So2;
	RythmeC[113] = 16;
	NoteC[114] = Mi2;
	RythmeC[114] = 16;
	NoteC[115] = Fa2;
	RythmeC[115] = 16;
	NoteC[116] = So2;
	RythmeC[116] = 16;
	NoteC[117] = Fa2;
	RythmeC[117] = 8;
	NoteC[118] = La2;
	RythmeC[118] = 16;
	NoteC[119] = So2;
	RythmeC[119] = 16;
	NoteC[120] = Fa2;
	RythmeC[120] = 8;
	NoteC[121] = Mi2;
	RythmeC[121] = 16;
	NoteC[122] = Re2;
	RythmeC[122] = 16;
	NoteC[123] = Mi2;
	RythmeC[123] = 16;
	NoteC[124] = Re2;
	RythmeC[124] = 16;
	NoteC[125] = Do2;
	RythmeC[125] = 16;
	NoteC[126] = Re2;
	RythmeC[126] = 16;
	NoteC[127] = Mi2;
	RythmeC[127] = 16;
	NoteC[128] = Fa2;
	RythmeC[128] = 16;
	NoteC[129] = So2;
	RythmeC[129] = 16;
	NoteC[130] = La2;
	RythmeC[130] = 16;
	//
	NoteC[131] = Fa2;
	RythmeC[131] = 8;
	NoteC[132] = La2;
	RythmeC[132] = 16;
	NoteC[133] = So2;
	RythmeC[133] = 16;
	NoteC[134] = La2;
	RythmeC[134] = 8;
	NoteC[135] = Si2;
	RythmeC[135] = 16;
	NoteC[136] = Do3;
	RythmeC[136] = 16;
	NoteC[137] = So2;
	RythmeC[137] = 16;
	NoteC[138] = La2;
	RythmeC[138] = 16;
	NoteC[139] = Si2;
	RythmeC[139] = 16;
	NoteC[140] = Do3;
	RythmeC[140] = 16;
	NoteC[141] = Re3;
	RythmeC[141] = 16;
	NoteC[142] = Mi3;
	RythmeC[142] = 16;
	NoteC[143] = Fa3;
	RythmeC[143] = 16;
	NoteC[144] = So3;
	RythmeC[144] = 16;
	//
	NoteC[145] = Mi3;
	RythmeC[145] = 8;
	NoteC[146] = Do3;
	RythmeC[146] = 16;
	NoteC[147] = Re3;
	RythmeC[147] = 16;
	
	NoteC[148] = Mi3;
	RythmeC[148] = 8;
	NoteC[149] = Re3;
	RythmeC[149] = 16;
	NoteC[150] = Do3;
	RythmeC[150] = 16;
	
	NoteC[151] = Re3;
	RythmeC[151] = 16;
	NoteC[152] = Si2;
	RythmeC[152] = 16;
	NoteC[153] = Do3;
	RythmeC[153] = 16;
	NoteC[154] = Re3;
	RythmeC[154] = 16;
	
	NoteC[155] = Mi3;
	RythmeC[155] = 16;
	NoteC[156] = Re3;
	RythmeC[156] = 16;
	NoteC[157] = Do3;
	RythmeC[157] = 16;
	NoteC[158] = Si2;
	RythmeC[158] = 16;
	//
	NoteC[159] = Do3;
	RythmeC[159] = 8;
	NoteC[160] = La2;
	RythmeC[160] = 16;
	NoteC[161] = Si2;
	RythmeC[161] = 16;
	
	NoteC[162] = Do3;
	RythmeC[162] = 8;
	NoteC[163] = Do2;
	RythmeC[163] = 16;
	NoteC[164] = Re2;
	RythmeC[164] = 16;
	
	NoteC[165] = Mi2;
	RythmeC[165] = 16;
	NoteC[166] = Fa2;
	RythmeC[166] = 16;
	NoteC[167] = Mi2;
	RythmeC[167] = 16;
	NoteC[168] = Re2;
	RythmeC[168] = 16;
	
	NoteC[169] = Mi2;
	RythmeC[169] = 16;
	NoteC[170] = Do3;
	RythmeC[170] = 16;
	NoteC[171] = Si2;
	RythmeC[171] = 16;
	NoteC[172] = Do3;
	RythmeC[172] = 16;
	//
	NoteC[173] = La2;
	RythmeC[173] = 8;
	NoteC[174] = Do3;
	RythmeC[174] = 16;
	NoteC[175] = Si2;
	RythmeC[175] = 16;
	
	NoteC[176] = La2;
	RythmeC[176] = 8;
	NoteC[177] = So2;
	RythmeC[177] = 16;
	NoteC[178] = Fa2;
	RythmeC[178] = 16;
	
	NoteC[179] = So2;
	RythmeC[179] = 16;
	NoteC[180] = Fa2;
	RythmeC[180] = 16;
	NoteC[181] = Mi2;
	RythmeC[181] = 16;
	NoteC[182] = Fa2;
	RythmeC[182] = 16;
	
	NoteC[183] = So2;
	RythmeC[183] = 16;
	NoteC[184] = La2;
	RythmeC[184] = 16;
	NoteC[185] = Si2;
	RythmeC[185] = 16;
	NoteC[186] = Do2;
	RythmeC[186] = 16;
	//
	NoteC[187] = La2;
	RythmeC[187] = 8;
	NoteC[188] = Do3;
	RythmeC[188] = 16;
	NoteC[189] = Si2;
	RythmeC[189] = 16;
	
	NoteC[190] = Do3;
	RythmeC[190] = 8;
	NoteC[191] = Si2;
	RythmeC[191] = 16;
	NoteC[192] = La2;
	RythmeC[192] = 16;
	
	NoteC[193] = Si2;
	RythmeC[193] = 16;
	NoteC[194] = Do3;
	RythmeC[194] = 16;
	NoteC[195] = Re3;
	RythmeC[195] = 16;
	NoteC[196] = Do3;
	RythmeC[196] = 16;
	
	NoteC[197] = Si2;
	RythmeC[197] = 16;
	NoteC[198] = Do3;
	RythmeC[198] = 16;
	NoteC[199] = La2;
	RythmeC[199] = 16;
	NoteC[200] = Si2;
	RythmeC[200] = 16;
	//
	//
	NoteC[201] = Mi3;
	RythmeC[201] = 8;
	NoteC[202] = Mi2;
	RythmeC[202] = 8;
	NoteC[203] = Fa2;
	RythmeC[203] = 8;
	NoteC[204] = Mi2;
	RythmeC[204] = 8;
	
	NoteC[205] = Re2;
	RythmeC[205] = 8;
	NoteC[206] = Re3;
	RythmeC[206] = 8;
	NoteC[207] = Mi3;
	RythmeC[207] = 8;
	NoteC[208] = Re3;
	RythmeC[208] = 8;
	//
	NoteC[209] = Do3;
	RythmeC[209] = 8;
	NoteC[210] = Mi2;
	RythmeC[210] = 8;
	NoteC[211] = Do2;
	RythmeC[211] = 8;
	NoteC[212] = La2;
	RythmeC[212] = 8;
	
	NoteC[213] = So2;
	RythmeC[213] = 8;
	NoteC[214] = So1;
	RythmeC[214] = 8;
	NoteC[215] = Fa1;
	RythmeC[215] = 8;
	NoteC[216] = So1;
	RythmeC[216] = 8;
	//
	NoteC[217] = La1;
	RythmeC[217] = 8;
	NoteC[218] = La2;
	RythmeC[218] = 8;
	NoteC[219] = Si2;
	RythmeC[219] = 8;
	NoteC[220] = La2;
	RythmeC[220] = 8;
	
	NoteC[221] = Si2;
	RythmeC[221] = 8;
	NoteC[222] = So1;
	RythmeC[222] = 8;
	NoteC[223] = Fa1;
	RythmeC[223] = 8;
	NoteC[224] = So1;
	RythmeC[224] = 8;
	//
	NoteC[225] = La1;
	RythmeC[225] = 8;
	NoteC[226] = La2;
	RythmeC[226] = 8;
	NoteC[227] = So2;
	RythmeC[227] = 8;
	NoteC[228] = La2;
	RythmeC[228] = 8;
	
	NoteC[229] = Si2;
	RythmeC[229] = 8;
	NoteC[230] = Si2;
	RythmeC[230] = 8;
	NoteC[231] = La2;
	RythmeC[231] = 8;
	NoteC[232] = Si2;
	RythmeC[232] = 8;
	//
	
	NoteC[233] = Do2;
	RythmeC[233] = 8;
	NoteC[234] = Do3;
	RythmeC[234] = 8;
	NoteC[235] = Re3;
	RythmeC[235] = 8;
	NoteC[236] = Do3;
	RythmeC[236] = 8;
	
	NoteC[237] = Si2;
	RythmeC[237] = 8;
	NoteC[238] = Si1;
	RythmeC[238] = 8;
	NoteC[239] = Do2;
	RythmeC[239] = 8;
	NoteC[240] = Si1;
	RythmeC[240] = 8;
	//
	NoteC[241] = La1;
	RythmeC[241] = 8;
	NoteC[242] = La2;
	RythmeC[242] = 8;
	NoteC[243] = So2;
	RythmeC[243] = 8;
	NoteC[244] = La2;
	RythmeC[244] = 8;
	
	NoteC[245] = Si2;
	RythmeC[245] = 8;
	NoteC[246] = Si1;
	RythmeC[246] = 8;
	NoteC[247] = Mi2;
	RythmeC[247] = 8;
	NoteC[248] = Re2;
	RythmeC[248] = 8;
	//
	NoteC[249] = Do2;
	RythmeC[249] = 8;
	NoteC[250] = Do3;
	RythmeC[250] = 8;
	NoteC[251] = Re3;
	RythmeC[251] = 8;
	NoteC[252] = Fa3;
	RythmeC[252] = 8;
	
	NoteC[253] = Mi3;
	RythmeC[253] = 8;
	NoteC[254] = Mi2;
	RythmeC[254] = 8;
	NoteC[255] = So2;
	RythmeC[255] = 8;
	NoteC[256] = Mi3;
	RythmeC[256] = 8;
	//
	NoteC[257] = Do3;
	RythmeC[257] = 8;
	NoteC[258] = Fa3;
	RythmeC[258] = 8;
	NoteC[259] = Mi3;
	RythmeC[259] = 8;
	NoteC[260] = Fa3;
	RythmeC[260] = 8;
	
	NoteC[261] = Re3;
	RythmeC[261] = 8;
	NoteC[262] = So2;
	RythmeC[262] = 8;
	NoteC[263] = Fa2;
	RythmeC[263] = 8;
	NoteC[264] = So2;
	RythmeC[264] = 8;
	//
	//
	NoteC[265] = Mi2;
	RythmeC[265] = 8;
	NoteC[266] = Do3;
	RythmeC[266] = 16;
	NoteC[267] = Si2;
	RythmeC[267] = 16;
	
	NoteC[268] = Do3;
	RythmeC[268] = 8;
	NoteC[269] = Mi2;
	RythmeC[269] = 8;
	
	NoteC[270] = So2;
	RythmeC[270] = 8;
	NoteC[271] = So2;
	RythmeC[271] = 16;
	NoteC[272] = La2;
	RythmeC[272] = 16;
	
	NoteC[273] = Si2;
	RythmeC[273] = 8;
	NoteC[274] = So2;
	RythmeC[274] = 8;
	//
	NoteC[275] = Mi2;
	RythmeC[275] = 8;
	NoteC[276] = Do3;
	RythmeC[276] = 16;
	NoteC[277] = Re3;
	RythmeC[277] = 16;
	
	NoteC[278] = Mi3;
	RythmeC[278] = 8;
	NoteC[279] = Do3;
	RythmeC[279] = 8;
	
	NoteC[280] = Mi3;
	RythmeC[280] = 8;
	NoteC[281] = Mi3;
	RythmeC[281] = 16;
	NoteC[282] = Re3;
	RythmeC[282] = 16;
	
	NoteC[283] = Do3;
	RythmeC[283] = 8;
	NoteC[284] = Si2;
	RythmeC[284] = 8;
	//
	NoteC[285] = La2;
	RythmeC[285] = 8;
	NoteC[286] = La2;
	RythmeC[286] = 16;
	NoteC[287] = So2;
	RythmeC[287] = 16;
	
	NoteC[288] = La2;
	RythmeC[288] = 8;
	NoteC[289] = Si2;
	RythmeC[289] = 8;
	
	NoteC[290] = Do3;
	RythmeC[290] = 8;
	NoteC[291] = Mi3;
	RythmeC[291] = 16;
	NoteC[292] = Re3;
	RythmeC[292] = 16;
	
	NoteC[293] = Do3;
	RythmeC[293] = 8;
	NoteC[294] = Mi3;
	RythmeC[294] = 8;
	//
}