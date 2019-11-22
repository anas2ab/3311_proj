/*
 * Code for class ETF_EVT_TOKENS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1595_16080(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16081(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16082(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16083(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16084(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1595_16085(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16086(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16087(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16088(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16089(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16090(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16091(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16092(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16093(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16094(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16095(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16096(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16097(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16098(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16099(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16100(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16101(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16102(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16103(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16104(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16105(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16106(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16107(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16108(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16109(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16110(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16111(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16112(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16113(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16114(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16115(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16116(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16117(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16118(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16119(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1595_16120(EIF_REFERENCE);
extern void EIF_Minit1595(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_EVT_TOKENS}.last_detachable_any_value */
EIF_TYPED_VALUE F1595_16080 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11752,Dtype(Current)));
	return r;
}


/* {ETF_EVT_TOKENS}.last_integer_value */
EIF_TYPED_VALUE F1595_16081 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(11753,Dtype(Current)));
	return r;
}


/* {ETF_EVT_TOKENS}.last_real_value */
EIF_TYPED_VALUE F1595_16082 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(11754,Dtype(Current)));
	return r;
}


/* {ETF_EVT_TOKENS}.last_string_value */
EIF_TYPED_VALUE F1595_16083 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11755,Dtype(Current)));
	return r;
}


/* {ETF_EVT_TOKENS}.token_name */
EIF_TYPED_VALUE F1595_16084 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "token_name";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1594, Current, 0, 1, 22085);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1594, Current, 22085);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 0L:
			RTHOOK(2);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("EOF token",9,451139182);
			Result = (EIF_REFERENCE) tr1;
			break;
		case -1L:
			RTHOOK(3);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("Error token",11,1176850798);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 258L:
			RTHOOK(4);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("NUMBER",6,1450195794);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 259L:
			RTHOOK(5);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("REAL",4,1380270412);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 260L:
			RTHOOK(6);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("IDENT",5,1145953364);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 261L:
			RTHOOK(7);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("CHAR_LIT",8,1474326612);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 262L:
			RTHOOK(8);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("STR_LIT",7,590287188);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 263L:
			RTHOOK(9);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_SYSTEM",9,661771853);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 264L:
			RTHOOK(10);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_BOOL",7,589667660);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 265L:
			RTHOOK(11);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_BOOLEAN",10,1789796174);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 266L:
			RTHOOK(12);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_CHAR",7,605982546);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 267L:
			RTHOOK(13);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_CHARACTER",12,234055762);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 268L:
			RTHOOK(14);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_INTEGER_64",13,429206324);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 269L:
			RTHOOK(15);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_INTEGER",10,898815826);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 270L:
			RTHOOK(16);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_REAL",7,857444172);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 271L:
			RTHOOK(17);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_STR",6,1765023314);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 272L:
			RTHOOK(18);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_VALUE",8,396412741);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 273L:
			RTHOOK(19);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_TUPLE",8,732201541);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 274L:
			RTHOOK(20);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_ARRAY",8,681852249);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 275L:
			RTHOOK(21);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_TRUE",7,891855685);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 276L:
			RTHOOK(22);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_FALSE",8,396289349);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 277L:
			RTHOOK(23);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_COMMA",8,631211329);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 278L:
			RTHOOK(24);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_COLON",8,631146318);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 279L:
			RTHOOK(25);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_SEMI_COLON",13,429495630);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 280L:
			RTHOOK(26);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_LPAREN",9,345819214);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 281L:
			RTHOOK(27);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_RPAREN",9,357615694);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 282L:
			RTHOOK(28);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_LSBRAC",9,362618435);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 283L:
			RTHOOK(29);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_RSBRAC",9,374414915);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 284L:
			RTHOOK(30);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_LABRAC",9,362480195);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 285L:
			RTHOOK(31);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_RABRAC",9,374276675);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 286L:
			RTHOOK(32);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_LCBRAC",9,362495555);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 287L:
			RTHOOK(33);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_RCBRAC",9,374292035);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 288L:
			RTHOOK(34);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_DQUOTE",9,665449797);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 289L:
			RTHOOK(35);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_MINUS",8,530692435);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 290L:
			RTHOOK(36);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_UPTO",7,908501583);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 291L:
			RTHOOK(37);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_TYPE",7,892313157);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 292L:
			RTHOOK(38);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("TK_EQ",5,1265179985);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 293L:
			RTHOOK(39);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			tr1 = RTMS_EX_H("EOL",3,4542284);
			Result = (EIF_REFERENCE) tr1;
			break;
		default:
			RTHOOK(40);
			RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
			ui4_1 = arg1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11751, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(41);
		RTCT("token_name_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(42);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {ETF_EVT_TOKENS}.number */
EIF_TYPED_VALUE F1595_16085 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 258L);
	return r;
}

/* {ETF_EVT_TOKENS}.real */
EIF_TYPED_VALUE F1595_16086 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 259L);
	return r;
}

/* {ETF_EVT_TOKENS}.ident */
EIF_TYPED_VALUE F1595_16087 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 260L);
	return r;
}

/* {ETF_EVT_TOKENS}.char_lit */
EIF_TYPED_VALUE F1595_16088 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 261L);
	return r;
}

/* {ETF_EVT_TOKENS}.str_lit */
EIF_TYPED_VALUE F1595_16089 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 262L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_system */
EIF_TYPED_VALUE F1595_16090 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 263L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_bool */
EIF_TYPED_VALUE F1595_16091 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 264L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_boolean */
EIF_TYPED_VALUE F1595_16092 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 265L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_char */
EIF_TYPED_VALUE F1595_16093 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 266L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_character */
EIF_TYPED_VALUE F1595_16094 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 267L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_integer_64 */
EIF_TYPED_VALUE F1595_16095 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 268L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_integer */
EIF_TYPED_VALUE F1595_16096 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 269L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_real */
EIF_TYPED_VALUE F1595_16097 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 270L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_str */
EIF_TYPED_VALUE F1595_16098 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 271L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_value */
EIF_TYPED_VALUE F1595_16099 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 272L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_tuple */
EIF_TYPED_VALUE F1595_16100 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 273L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_array */
EIF_TYPED_VALUE F1595_16101 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 274L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_true */
EIF_TYPED_VALUE F1595_16102 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 275L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_false */
EIF_TYPED_VALUE F1595_16103 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 276L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_comma */
EIF_TYPED_VALUE F1595_16104 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 277L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_colon */
EIF_TYPED_VALUE F1595_16105 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 278L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_semi_colon */
EIF_TYPED_VALUE F1595_16106 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 279L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_lparen */
EIF_TYPED_VALUE F1595_16107 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 280L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_rparen */
EIF_TYPED_VALUE F1595_16108 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 281L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_lsbrac */
EIF_TYPED_VALUE F1595_16109 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 282L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_rsbrac */
EIF_TYPED_VALUE F1595_16110 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 283L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_labrac */
EIF_TYPED_VALUE F1595_16111 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 284L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_rabrac */
EIF_TYPED_VALUE F1595_16112 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 285L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_lcbrac */
EIF_TYPED_VALUE F1595_16113 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 286L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_rcbrac */
EIF_TYPED_VALUE F1595_16114 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 287L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_dquote */
EIF_TYPED_VALUE F1595_16115 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 288L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_minus */
EIF_TYPED_VALUE F1595_16116 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 289L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_upto */
EIF_TYPED_VALUE F1595_16117 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 290L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_type */
EIF_TYPED_VALUE F1595_16118 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 291L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_eq */
EIF_TYPED_VALUE F1595_16119 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 292L);
	return r;
}

/* {ETF_EVT_TOKENS}.eol */
EIF_TYPED_VALUE F1595_16120 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 293L);
	return r;
}

void EIF_Minit1595 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
