/*
 * Code for class VALUE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1219_10432(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1219_10433(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1219_10434(EIF_REFERENCE);
extern void F1219_10435(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10436(EIF_REFERENCE);
extern void F1219_10437(EIF_REFERENCE);
extern void F1219_10438(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1219_10439(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10440(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10441(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10442(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10443(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10444(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10445(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10446(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10447(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10448(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10449(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10450(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1219_10451(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1219_10452(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1219_10453(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1219_10454(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10455(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10456(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1219_10457(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1219_10458(EIF_REFERENCE);
extern void F1219_10459(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10460(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1219_10461(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1219_10462(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1219_10463(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10464(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1219_10465(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1219_10466(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1219_10467(EIF_REFERENCE);
extern void F1219_10468(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10469(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10470(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10471(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10472(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10473(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10474(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10475(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1219_10476(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1219_10477(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1219_10478(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1219_10479(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1219_10480(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1219_10481(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1219_16487(EIF_REFERENCE, int);
extern void EIF_Minit1219(void);

#ifdef __cplusplus
}
#endif

#include <ctype.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {VALUE}.s_ */
EIF_TYPED_VALUE F1219_10432 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7931,Dtype(Current)));
	return r;
}


/* {VALUE}.divisiondecimalprecision_ */
EIF_TYPED_VALUE F1219_10433 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7932,Dtype(Current)));
	return r;
}


/* {VALUE}.default_precision */
EIF_TYPED_VALUE F1219_10434 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	return r;
}

/* {VALUE}.make */
void F1219_10435 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 2, 17024);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17024);
	RTCC(arg1, 1218, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("has_correct_format", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7961, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 7932, 0x10000000, 1); /* divisiondecimalprecision_ */
	*(EIF_INTEGER_32 *)(Current + RTWA(7932, dtype)) = (EIF_INTEGER_32) arg2;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 7931, 0xF80000E8, 0); /* s_ */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7931, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef arg2
#undef arg1
}

/* {VALUE}.clone_me */
EIF_TYPED_VALUE F1219_10436 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "clone_me";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1218, Current, 1, 0, 17025);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17025);
	RTIV(Current, RTAL);
	Result= RTLN(eif_new_type(1218, 0x00).id);
	wstdinit(Result,Result);
	RTLXI(Result);
	RTHOOK(1);
	RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4738, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(0, 0x800004C2, 1,0); /* Result */
	tr1 = RTLN(eif_new_type(1218, 0x00).id);
	ur1 = RTCCL(loc1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7932, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7934, Dtype(tr1)))(tr1, ur1x, ui4_1x);
	RTNHOOK(2,1);
	tr1 = (tr1);
	RTXA(tr1, Result);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {VALUE}.default_create */
void F1219_10437 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1218, Current, 1, 0, 16975);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16975);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7932, 0x10000000, 1); /* divisiondecimalprecision_ */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7933, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(7932, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
	tr1 = RTMS_EX_H("0",1,48);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 7931, 0xF80000E8, 0); /* s_ */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7931, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("s_.is_equal (\"0\")", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tr2 = RTMS_EX_H("0",1,48);
		ur1 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
}

/* {VALUE}.make_from_string */
void F1219_10438 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 1, 16976);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16976);
	RTCC(arg1, 1218, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("has_correct_format", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7961, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 7932, 0x10000000, 1); /* divisiondecimalprecision_ */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7933, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(7932, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 7931, 0xF80000E8, 0); /* s_ */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7931, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7962, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {VALUE}.make_from_int */
void F1219_10439 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_int";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_BOOL, &loc5);
	
	RTEAA(l_feature_name, 1218, Current, 5, 1, 16977);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16977);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7932, 0x10000000, 1); /* divisiondecimalprecision_ */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7933, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(7932, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 7931, 0xF80000E8, 0); /* s_ */
		tr1 = RTLNSMART(RTWCT(7931, dtype, Dftype(Current)).id);
		tr2 = RTMS_EX_H("0",1,48);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4738, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(4,1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(7931, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		RTDBGAL(5, 0x04000000, 1, 0); /* loc5 */
		loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc2 < ((EIF_INTEGER_32) 0L));
		RTHOOK(6);
		if (loc5) {
			RTHOOK(7);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 *= ((EIF_INTEGER_32) -1L);
		}
		RTHOOK(8);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) loc2;
		RTHOOK(9);
		RTDBGAA(Current, dtype, 7931, 0xF80000E8, 0); /* s_ */
		tr1 = RTLNSMART(RTWCT(7931, dtype, Dftype(Current)).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
		RTNHOOK(9,1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(7931, dtype)) = (EIF_REFERENCE) tr1;
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(11);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 10L));
			RTHOOK(12);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3 /= ((EIF_INTEGER_32) 10L);
			RTHOOK(13);
			RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
			ui4_1 = loc4;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7964, dtype))(Current, ui4_1x)).it_c1);
			loc1 = (EIF_CHARACTER_8) tc1;
			RTHOOK(14);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(14,1);
			uc1 = loc1;
			ui4_1 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", tr1))(tr1, uc1x, ui4_1x);
		}
		RTHOOK(15);
		if (loc5) {
			RTHOOK(16);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7951, dtype))(Current);
		}
		RTHOOK(17);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7962, dtype))(Current);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {VALUE}.is_equal */
EIF_TYPED_VALUE F1219_10440 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_equal";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	struct eif_ex_1218 sloc5;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) sloc5.data;
	struct eif_ex_1218 sloc6;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) sloc6.data;
#define arg1 arg1x.it_r
	struct eif_ex_1218 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 16 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	memset (&sloc5.overhead, 0, OVERHEAD + 16);
	sloc5.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc5.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc6.overhead, 0, OVERHEAD + 16);
	sloc6.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc6.overhead, eif_new_type(1218, 0x00).id);
	RTLI(6);
	RTLR(0,earg1);
	RTLR(1,loc5);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc6);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 1218, Current, 6, 1, 16978);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16978);
	RTCC(earg1, 1218, l_feature_name, 1, eif_new_type(1218, 0x00), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE(EIF_TRUE, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	wstdinit(loc5,loc5);
	RTLXI(loc5);
	wstdinit(loc6,loc6);
	RTLXI(loc6);
	RTHOOK(2);
	RTDBGAL(5, 0x800004C2, 1, 0); /* loc5 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc5);
	RTHOOK(3);
	RTDBGAL(6, 0x800004C2, 1, 0); /* loc6 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", earg1))(earg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc6);
	RTHOOK(4);
	ur1 = RTRCL(loc6);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7965, "aligndecimal", loc5))(loc5, ur1x);
	RTHOOK(5);
	ur1 = RTRCL(loc6);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7966, "alignwhole", loc5))(loc5, ur1x);
	RTHOOK(6);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(7);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(8);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(9);
		tb1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,2);
			ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
			tb1 = (EIF_BOOLEAN) (loc2 > ti4_1);
		}
		if (tb1) break;
		RTHOOK(10);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,1);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
		uc1 = tc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7963, dtype))(Current, uc1x)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(11);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		ui4_1 = loc2;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
		uc1 = tc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7963, dtype))(Current, uc1x)).it_i4);
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(12);
		if ((EIF_BOOLEAN)(loc3 != loc4)) {
			RTHOOK(13);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(14);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(14,1);
			ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		}
		RTHOOK(15);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
		RTHOOK(16);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(earg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("consistent", EX_POST);
		tb2 = '\01';
		ur1 = RTRCL(earg1);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12, dtype))(Current, ur1x)).it_b);
		if (tb3) {
			tb2 = Result;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("trichotomy", EX_POST);
		tb2 = '\0';
		ur1 = RTRCL(earg1);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1384, "is_less", Current))(Current, ur1x)).it_b);
		if ((EIF_BOOLEAN) !tb3) {
			ur1 = RTRCL(Current);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1384, "is_less", earg1))(earg1, ur1x)).it_b);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if ((EIF_BOOLEAN)(Result == tb2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {VALUE}.is_less */
EIF_TYPED_VALUE F1219_10441 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_less";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	struct eif_ex_1218 sloc5;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) sloc5.data;
	struct eif_ex_1218 sloc6;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) sloc6.data;
#define arg1 arg1x.it_r
	struct eif_ex_1218 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 16 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	memset (&sloc5.overhead, 0, OVERHEAD + 16);
	sloc5.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc5.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc6.overhead, 0, OVERHEAD + 16);
	sloc6.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc6.overhead, eif_new_type(1218, 0x00).id);
	RTLI(6);
	RTLR(0,earg1);
	RTLR(1,loc5);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc6);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 1218, Current, 6, 1, 16979);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16979);
	RTCC(earg1, 1218, l_feature_name, 1, eif_new_type(1218, 0x00), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE(EIF_TRUE, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	wstdinit(loc5,loc5);
	RTLXI(loc5);
	wstdinit(loc6,loc6);
	RTLXI(loc6);
	RTHOOK(2);
	RTDBGAL(5, 0x800004C2, 1, 0); /* loc5 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc5);
	RTHOOK(3);
	RTDBGAL(6, 0x800004C2, 1, 0); /* loc6 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", earg1))(earg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc6);
	RTHOOK(4);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,2);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
		tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-');
	}
	if (tb1) {
		RTHOOK(5);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(6);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-')) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,2);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
			tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
		}
		if (tb1) {
			RTHOOK(7);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(8);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(8,2);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
			}
			if (tb1) {
				RTHOOK(9);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc5))(loc5);
				RTHOOK(10);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc6))(loc6);
				RTHOOK(11);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				ur1 = RTRCL(loc5);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1384, "is_less", loc6))(loc6, ur1x)).it_b);
				Result = (EIF_BOOLEAN) tb1;
			} else {
				RTHOOK(12);
				ur1 = RTRCL(loc6);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7965, "aligndecimal", loc5))(loc5, ur1x);
				RTHOOK(13);
				ur1 = RTRCL(loc6);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7966, "alignwhole", loc5))(loc5, ur1x);
				RTHOOK(14);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(15);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(16);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					RTHOOK(17);
					tb1 = '\01';
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(17,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(17,2);
						ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
						tb1 = (EIF_BOOLEAN) (loc2 > ti4_1);
					}
					if (tb1) break;
					RTHOOK(18);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(18,1);
					ui4_1 = loc1;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
					uc1 = tc1;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7963, dtype))(Current, uc1x)).it_i4);
					loc3 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(19);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(19,1);
					ui4_1 = loc2;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
					uc1 = tc1;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7963, dtype))(Current, uc1x)).it_i4);
					loc4 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(20);
					if ((EIF_BOOLEAN) (loc3 < loc4)) {
						RTHOOK(21);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(22);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(22,1);
						ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(23);
						if ((EIF_BOOLEAN) (loc3 > loc4)) {
							RTHOOK(24);
							RTDBGAL(0, 0x04000000, 1,0); /* Result */
							Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							RTHOOK(25);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(25,1);
							ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
						}
					}
					RTHOOK(26);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1++;
					RTHOOK(27);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2++;
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("asymmetric", EX_POST);
		tb2 = '\01';
		if (Result) {
			ur1 = RTRCL(Current);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1384, "is_less", earg1))(earg1, ur1x)).it_b);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {VALUE}.plus */
EIF_TYPED_VALUE F1219_10442 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "plus";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc9 = (EIF_CHARACTER_8) 0;
	struct eif_ex_1218 sloc10;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) sloc10.data;
	struct eif_ex_1218 sloc11;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) sloc11.data;
#define arg1 arg1x.it_r
	struct eif_ex_1218 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 16 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	memset (&sloc10.overhead, 0, OVERHEAD + 16);
	sloc10.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc10.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc11.overhead, 0, OVERHEAD + 16);
	sloc11.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc11.overhead, eif_new_type(1218, 0x00).id);
	RTLI(10);
	RTLR(0,earg1);
	RTLR(1,Result);
	RTLR(2,loc10);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc11);
	RTLR(6,ur1);
	RTLR(7,tr2);
	RTLR(8,loc2);
	RTLR(9,loc1);
	RTLIU(10);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_CHAR8, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	
	RTEAA(l_feature_name, 1218, Current, 11, 1, 16980);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16980);
	RTCC(earg1, 1218, l_feature_name, 1, eif_new_type(1218, 0x00), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE(EIF_TRUE, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	wstdinit(loc10,loc10);
	RTLXI(loc10);
	wstdinit(loc11,loc11);
	RTLXI(loc11);
	Result= RTLN(eif_new_type(1218, 0x00).id);
	wstdinit(Result,Result);
	RTLXI(Result);
	RTHOOK(2);
	RTDBGAL(10, 0x800004C2, 1, 0); /* loc10 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc10);
	RTHOOK(3);
	RTDBGAL(11, 0x800004C2, 1, 0); /* loc11 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", earg1))(earg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc11);
	RTHOOK(4);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,2);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
		tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-');
	}
	if (tb1) {
		RTHOOK(5);
		RTDBGAL(0, 0x800004C2, 1,0); /* Result */
		tr1 = RTLN(eif_new_type(1218, 0x00).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(5,1);
		tr1 = (tr1);
		RTXA(tr1, Result);
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc10))(loc10);
		RTHOOK(7);
		RTDBGAL(0, 0x800004C2, 1,0); /* Result */
		ur1 = RTRCL(loc10);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2124, "minus", loc11))(loc11, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTRCL(tr2);
		RTXA(tr1, Result);
	} else {
		RTHOOK(8);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-')) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,2);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
			tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
		}
		if (tb1) {
			RTHOOK(9);
			RTDBGAL(0, 0x800004C2, 1,0); /* Result */
			tr1 = RTLN(eif_new_type(1218, 0x00).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(9,1);
			tr1 = (tr1);
			RTXA(tr1, Result);
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc11))(loc11);
			RTHOOK(11);
			RTDBGAL(0, 0x800004C2, 1,0); /* Result */
			ur1 = RTRCL(loc11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2124, "minus", loc10))(loc10, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTRCL(tr2);
			RTXA(tr1, Result);
		} else {
			RTHOOK(12);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(12,2);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
			}
			if (tb1) {
				RTHOOK(13);
				RTDBGAL(0, 0x800004C2, 1,0); /* Result */
				tr1 = RTLN(eif_new_type(1218, 0x00).id);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
				RTNHOOK(13,1);
				tr1 = (tr1);
				RTXA(tr1, Result);
				RTHOOK(14);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc10))(loc10);
				RTHOOK(15);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc11))(loc11);
				RTHOOK(16);
				RTDBGAL(0, 0x800004C2, 1,0); /* Result */
				ur1 = RTRCL(loc11);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2123, "plus", loc10))(loc10, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr1 = RTRCL(tr2);
				RTXA(tr1, Result);
				RTHOOK(17);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", Result))(Result);
			} else {
				RTHOOK(18);
				ur1 = RTRCL(loc11);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7965, "aligndecimal", loc10))(loc10, ur1x);
				RTHOOK(19);
				ur1 = RTRCL(loc11);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7966, "alignwhole", loc10))(loc10, ur1x);
				RTHOOK(20);
				RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
				tr1 = RTMS_EX_H("",0,0);
				loc2 = (EIF_REFERENCE) tr1;
				RTHOOK(21);
				RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc1 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(22);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(22,1);
				ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(23);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(23,1);
				ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
				loc5 = (EIF_INTEGER_32) ti4_1;
				for (;;) {
					RTHOOK(24);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc4 < ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 1L)))) break;
					RTHOOK(25);
					RTDBGAL(9, 0x08000000, 1, 0); /* loc9 */
					loc9 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '0';
					RTHOOK(26);
					tb1 = '\0';
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(26,1);
					ui4_1 = loc4;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
					if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '.')) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(26,2);
						ui4_1 = loc5;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
						tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '.');
					}
					if (tb1) {
						RTHOOK(27);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(27,1);
						ui4_1 = loc4;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
						uc1 = tc1;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7963, dtype))(Current, uc1x)).it_i4);
						loc6 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(28);
						RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(28,1);
						ui4_1 = loc5;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
						uc1 = tc1;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7963, dtype))(Current, uc1x)).it_i4);
						loc7 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(29);
						RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
						loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc6) + loc7);
						RTHOOK(30);
						if ((EIF_BOOLEAN) (loc8 >= ((EIF_INTEGER_32) 10L))) {
							RTHOOK(31);
							RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
							loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 / ((EIF_INTEGER_32) 10L));
							RTHOOK(32);
							RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
							loc8 -= ((EIF_INTEGER_32) 10L);
						} else {
							RTHOOK(33);
							RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
						RTHOOK(34);
						RTDBGAL(9, 0x08000000, 1, 0); /* loc9 */
						ui4_1 = loc8;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7964, dtype))(Current, ui4_1x)).it_c1);
						loc9 = (EIF_CHARACTER_8) tc1;
					} else {
						RTHOOK(35);
						tb1 = '\0';
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(35,1);
						ui4_1 = loc4;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
						if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '.')) {
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(35,2);
							ui4_1 = loc5;
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
							tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '.');
						}
						if (tb1) {
							RTHOOK(36);
							RTDBGAL(9, 0x08000000, 1, 0); /* loc9 */
							loc9 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
						}
					}
					RTHOOK(37);
					uc1 = loc9;
					ui4_1 = ((EIF_INTEGER_32) 1L);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", loc1))(loc1, uc1x, ui4_1x);
					RTHOOK(38);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					loc4--;
					RTHOOK(39);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					loc5--;
				}
				RTHOOK(40);
				if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
					RTHOOK(41);
					ui4_1 = loc3;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7964, dtype))(Current, ui4_1x)).it_c1);
					uc1 = tc1;
					ui4_1 = ((EIF_INTEGER_32) 1L);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", loc1))(loc1, uc1x, ui4_1x);
				}
				RTHOOK(42);
				RTDBGAL(0, 0x800004C2, 1,0); /* Result */
				tr1 = RTLN(eif_new_type(1218, 0x00).id);
				ur1 = RTCCL(loc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(42,1);
				tr1 = (tr1);
				RTXA(tr1, Result);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(43);
		RTCT("result_exists", EX_POST);
		if (EIF_TRUE) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(44);
		RTCT("commutative", EX_POST);
		ur1 = RTRCL(Current);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2123, "plus", earg1))(earg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(Result, tr1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(45);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {VALUE}.add */
EIF_TYPED_VALUE F1219_10443 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "add";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc9 = (EIF_CHARACTER_8) 0;
	struct eif_ex_1218 sloc10;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) sloc10.data;
	struct eif_ex_1218 sloc11;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) sloc11.data;
#define arg1 arg1x.it_r
	struct eif_ex_1218 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 16 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	memset (&sloc10.overhead, 0, OVERHEAD + 16);
	sloc10.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc10.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc11.overhead, 0, OVERHEAD + 16);
	sloc11.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc11.overhead, eif_new_type(1218, 0x00).id);
	RTLI(10);
	RTLR(0,earg1);
	RTLR(1,Result);
	RTLR(2,loc10);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc11);
	RTLR(6,ur1);
	RTLR(7,tr2);
	RTLR(8,loc2);
	RTLR(9,loc1);
	RTLIU(10);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_CHAR8, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	
	RTEAA(l_feature_name, 1218, Current, 11, 1, 16981);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16981);
	RTCC(earg1, 1218, l_feature_name, 1, eif_new_type(1218, 0x00), 0x00);
	RTIV(Current, RTAL);
	wstdinit(loc10,loc10);
	RTLXI(loc10);
	wstdinit(loc11,loc11);
	RTLXI(loc11);
	Result= RTLN(eif_new_type(1218, 0x00).id);
	wstdinit(Result,Result);
	RTLXI(Result);
	RTHOOK(1);
	RTDBGAL(10, 0x800004C2, 1, 0); /* loc10 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc10);
	RTHOOK(2);
	RTDBGAL(11, 0x800004C2, 1, 0); /* loc11 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", earg1))(earg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc11);
	RTHOOK(3);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,2);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
		tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-');
	}
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(0, 0x800004C2, 1,0); /* Result */
		tr1 = RTLN(eif_new_type(1218, 0x00).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(4,1);
		tr1 = (tr1);
		RTXA(tr1, Result);
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc10))(loc10);
		RTHOOK(6);
		RTDBGAL(0, 0x800004C2, 1,0); /* Result */
		ur1 = RTRCL(loc10);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2124, "minus", loc11))(loc11, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTRCL(tr2);
		RTXA(tr1, Result);
	} else {
		RTHOOK(7);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-')) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,2);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
			tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
		}
		if (tb1) {
			RTHOOK(8);
			RTDBGAL(0, 0x800004C2, 1,0); /* Result */
			tr1 = RTLN(eif_new_type(1218, 0x00).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(8,1);
			tr1 = (tr1);
			RTXA(tr1, Result);
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc11))(loc11);
			RTHOOK(10);
			RTDBGAL(0, 0x800004C2, 1,0); /* Result */
			ur1 = RTRCL(loc11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2124, "minus", loc10))(loc10, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTRCL(tr2);
			RTXA(tr1, Result);
		} else {
			RTHOOK(11);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(11,2);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
			}
			if (tb1) {
				RTHOOK(12);
				RTDBGAL(0, 0x800004C2, 1,0); /* Result */
				tr1 = RTLN(eif_new_type(1218, 0x00).id);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
				RTNHOOK(12,1);
				tr1 = (tr1);
				RTXA(tr1, Result);
				RTHOOK(13);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc10))(loc10);
				RTHOOK(14);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc11))(loc11);
				RTHOOK(15);
				RTDBGAL(0, 0x800004C2, 1,0); /* Result */
				ur1 = RTRCL(loc11);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2123, "plus", loc10))(loc10, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr1 = RTRCL(tr2);
				RTXA(tr1, Result);
				RTHOOK(16);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", Result))(Result);
			} else {
				RTHOOK(17);
				ur1 = RTRCL(loc11);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7965, "aligndecimal", loc10))(loc10, ur1x);
				RTHOOK(18);
				ur1 = RTRCL(loc11);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7966, "alignwhole", loc10))(loc10, ur1x);
				RTHOOK(19);
				RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
				tr1 = RTMS_EX_H("",0,0);
				loc2 = (EIF_REFERENCE) tr1;
				RTHOOK(20);
				RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc1 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(21);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(21,1);
				ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(22);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(22,1);
				ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
				loc5 = (EIF_INTEGER_32) ti4_1;
				for (;;) {
					RTHOOK(23);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc4 < ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 1L)))) break;
					RTHOOK(24);
					RTDBGAL(9, 0x08000000, 1, 0); /* loc9 */
					loc9 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '0';
					RTHOOK(25);
					tb1 = '\0';
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(25,1);
					ui4_1 = loc4;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
					if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '.')) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(25,2);
						ui4_1 = loc5;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
						tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '.');
					}
					if (tb1) {
						RTHOOK(26);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(26,1);
						ui4_1 = loc4;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
						uc1 = tc1;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7963, dtype))(Current, uc1x)).it_i4);
						loc6 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(27);
						RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(27,1);
						ui4_1 = loc5;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
						uc1 = tc1;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7963, dtype))(Current, uc1x)).it_i4);
						loc7 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(28);
						RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
						loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + loc6) + loc7);
						RTHOOK(29);
						if ((EIF_BOOLEAN) (loc8 >= ((EIF_INTEGER_32) 10L))) {
							RTHOOK(30);
							RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
							loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 / ((EIF_INTEGER_32) 10L));
							RTHOOK(31);
							RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
							loc8 -= ((EIF_INTEGER_32) 10L);
						} else {
							RTHOOK(32);
							RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
						RTHOOK(33);
						RTDBGAL(9, 0x08000000, 1, 0); /* loc9 */
						ui4_1 = loc8;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7964, dtype))(Current, ui4_1x)).it_c1);
						loc9 = (EIF_CHARACTER_8) tc1;
					} else {
						RTHOOK(34);
						tb1 = '\0';
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(34,1);
						ui4_1 = loc4;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
						if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '.')) {
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(34,2);
							ui4_1 = loc5;
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
							tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '.');
						}
						if (tb1) {
							RTHOOK(35);
							RTDBGAL(9, 0x08000000, 1, 0); /* loc9 */
							loc9 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
						}
					}
					RTHOOK(36);
					uc1 = loc9;
					ui4_1 = ((EIF_INTEGER_32) 1L);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", loc1))(loc1, uc1x, ui4_1x);
					RTHOOK(37);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					loc4--;
					RTHOOK(38);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					loc5--;
				}
				RTHOOK(39);
				if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
					RTHOOK(40);
					ui4_1 = loc3;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7964, dtype))(Current, ui4_1x)).it_c1);
					uc1 = tc1;
					ui4_1 = ((EIF_INTEGER_32) 1L);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", loc1))(loc1, uc1x, ui4_1x);
				}
				RTHOOK(41);
				RTDBGAL(0, 0x800004C2, 1,0); /* Result */
				tr1 = RTLN(eif_new_type(1218, 0x00).id);
				ur1 = RTCCL(loc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(41,1);
				tr1 = (tr1);
				RTXA(tr1, Result);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(42);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {VALUE}.minus */
EIF_TYPED_VALUE F1219_10444 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "minus";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	struct eif_ex_1218 sloc3;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) sloc3.data;
	struct eif_ex_1218 sloc4;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) sloc4.data;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc12 = (EIF_CHARACTER_8) 0;
#define arg1 arg1x.it_r
	struct eif_ex_1218 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 16 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	memset (&sloc3.overhead, 0, OVERHEAD + 16);
	sloc3.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc3.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc4.overhead, 0, OVERHEAD + 16);
	sloc4.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc4.overhead, eif_new_type(1218, 0x00).id);
	RTLI(10);
	RTLR(0,earg1);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc4);
	RTLR(6,ur1);
	RTLR(7,tr2);
	RTLR(8,loc2);
	RTLR(9,loc1);
	RTLIU(10);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_CHAR8, &loc12);
	
	RTEAA(l_feature_name, 1218, Current, 12, 1, 16982);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16982);
	RTCC(earg1, 1218, l_feature_name, 1, eif_new_type(1218, 0x00), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE(EIF_TRUE, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	wstdinit(loc3,loc3);
	RTLXI(loc3);
	wstdinit(loc4,loc4);
	RTLXI(loc4);
	Result= RTLN(eif_new_type(1218, 0x00).id);
	wstdinit(Result,Result);
	RTLXI(Result);
	RTHOOK(2);
	RTDBGAL(3, 0x800004C2, 1, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc3);
	RTHOOK(3);
	RTDBGAL(4, 0x800004C2, 1, 0); /* loc4 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", earg1))(earg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc4);
	RTHOOK(4);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,2);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
		tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-');
	}
	if (tb1) {
		RTHOOK(5);
		RTDBGAL(0, 0x800004C2, 1,0); /* Result */
		tr1 = RTLN(eif_new_type(1218, 0x00).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(5,1);
		tr1 = (tr1);
		RTXA(tr1, Result);
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc3))(loc3);
		RTHOOK(7);
		RTDBGAL(0, 0x800004C2, 1,0); /* Result */
		ur1 = RTRCL(loc4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2123, "plus", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTRCL(tr2);
		RTXA(tr1, Result);
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", Result))(Result);
	} else {
		RTHOOK(9);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-')) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,2);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
			tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
		}
		if (tb1) {
			RTHOOK(10);
			RTDBGAL(0, 0x800004C2, 1,0); /* Result */
			tr1 = RTLN(eif_new_type(1218, 0x00).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(10,1);
			tr1 = (tr1);
			RTXA(tr1, Result);
			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc4))(loc4);
			RTHOOK(12);
			RTDBGAL(0, 0x800004C2, 1,0); /* Result */
			ur1 = RTRCL(loc4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2123, "plus", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTRCL(tr2);
			RTXA(tr1, Result);
		} else {
			RTHOOK(13);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(13,1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(13,2);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
			}
			if (tb1) {
				RTHOOK(14);
				RTDBGAL(0, 0x800004C2, 1,0); /* Result */
				tr1 = RTLN(eif_new_type(1218, 0x00).id);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
				RTNHOOK(14,1);
				tr1 = (tr1);
				RTXA(tr1, Result);
				RTHOOK(15);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc4))(loc4);
				RTHOOK(16);
				RTDBGAL(0, 0x800004C2, 1,0); /* Result */
				ur1 = RTRCL(loc4);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2123, "plus", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr1 = RTRCL(tr2);
				RTXA(tr1, Result);
			} else {
				RTHOOK(17);
				ur1 = RTRCL(loc4);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1384, "is_less", loc3))(loc3, ur1x)).it_b);
				if (tb1) {
					RTHOOK(18);
					RTDBGAL(0, 0x800004C2, 1,0); /* Result */
					ur1 = RTRCL(loc3);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2124, "minus", loc4))(loc4, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr1 = RTRCL(tr2);
					RTXA(tr1, Result);
					RTHOOK(19);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", Result))(Result);
				} else {
					RTHOOK(20);
					ur1 = RTRCL(loc4);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7965, "aligndecimal", loc3))(loc3, ur1x);
					RTHOOK(21);
					ur1 = RTRCL(loc4);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7966, "alignwhole", loc3))(loc3, ur1x);
					RTHOOK(22);
					RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
					tr1 = RTMS_EX_H("",0,0);
					loc2 = (EIF_REFERENCE) tr1;
					RTHOOK(23);
					RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc1 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(24);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(24,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					loc5 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(25);
					RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(25,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					loc6 = (EIF_INTEGER_32) ti4_1;
					for (;;) {
						RTHOOK(26);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN) (loc6 < ((EIF_INTEGER_32) 1L)))) break;
						RTHOOK(27);
						RTDBGAL(12, 0x08000000, 1, 0); /* loc12 */
						loc12 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '0';
						RTHOOK(28);
						tb1 = '\0';
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(28,1);
						ui4_1 = loc5;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
						if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '.')) {
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(28,2);
							ui4_1 = loc6;
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
							tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '.');
						}
						if (tb1) {
							RTHOOK(29);
							RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(29,1);
							ui4_1 = loc5;
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
							uc1 = tc1;
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7963, dtype))(Current, uc1x)).it_i4);
							loc7 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(30);
							RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(30,1);
							ui4_1 = loc6;
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
							uc1 = tc1;
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7963, dtype))(Current, uc1x)).it_i4);
							loc8 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(31);
							if ((EIF_BOOLEAN) (loc7 < loc8)) {
								RTHOOK(32);
								RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
								loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
								for (;;) {
									RTHOOK(33);
									if ((EIF_BOOLEAN) (loc10 < ((EIF_INTEGER_32) 1L))) break;
									RTHOOK(34);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									RTNHOOK(34,1);
									ui4_1 = loc10;
									tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
									if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '.')) {
										RTHOOK(35);
										RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										RTNHOOK(35,1);
										ui4_1 = loc10;
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
										uc1 = tc1;
										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7963, dtype))(Current, uc1x)).it_i4);
										loc9 = (EIF_INTEGER_32) ti4_1;
										RTHOOK(36);
										if ((EIF_BOOLEAN) (loc9 > ((EIF_INTEGER_32) 0L))) {
											RTHOOK(37);
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											RTNHOOK(37,1);
											ui4_1 = (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L));
											tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7964, dtype))(Current, ui4_1x)).it_c1);
											uc1 = tc1;
											ui4_1 = loc10;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", tr1))(tr1, uc1x, ui4_1x);
											RTHOOK(38);
											RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
											loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) 1L));
											for (;;) {
												RTHOOK(39);
												if ((EIF_BOOLEAN) (loc11 > (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L)))) break;
												RTHOOK(40);
												tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												RTNHOOK(40,1);
												ui4_1 = loc11;
												tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
												if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '.')) {
													RTHOOK(41);
													tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													RTNHOOK(41,1);
													tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													RTNHOOK(41,2);
													ui4_1 = loc11;
													tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr2))(tr2, ui4_1x)).it_c1);
													uc1 = tc1;
													ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7963, dtype))(Current, uc1x)).it_i4);
													ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 9L));
													tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7964, dtype))(Current, ui4_1x)).it_c1);
													uc1 = tc1;
													ui4_1 = loc11;
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", tr1))(tr1, uc1x, ui4_1x);
												}
												RTHOOK(42);
												RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
												loc11++;
											}
											RTHOOK(43);
											RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
											loc7 += ((EIF_INTEGER_32) 10L);
											RTHOOK(44);
											RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
											loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
										}
									}
									RTHOOK(45);
									RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
									loc10--;
								}
							}
							RTHOOK(46);
							RTDBGAL(12, 0x08000000, 1, 0); /* loc12 */
							ui4_1 = (EIF_INTEGER_32) (loc7 - loc8);
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7964, dtype))(Current, ui4_1x)).it_c1);
							loc12 = (EIF_CHARACTER_8) tc1;
						} else {
							RTHOOK(47);
							tb1 = '\0';
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(47,1);
							ui4_1 = loc5;
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
							if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '.')) {
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(47,2);
								ui4_1 = loc6;
								tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
								tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '.');
							}
							if (tb1) {
								RTHOOK(48);
								RTDBGAL(12, 0x08000000, 1, 0); /* loc12 */
								loc12 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
							}
						}
						RTHOOK(49);
						uc1 = loc12;
						ui4_1 = ((EIF_INTEGER_32) 1L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", loc1))(loc1, uc1x, ui4_1x);
						RTHOOK(50);
						RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
						loc5--;
						RTHOOK(51);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						loc6--;
					}
					RTHOOK(52);
					RTDBGAL(0, 0x800004C2, 1,0); /* Result */
					tr1 = RTLN(eif_new_type(1218, 0x00).id);
					ur1 = RTCCL(loc1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
					RTNHOOK(52,1);
					tr1 = (tr1);
					RTXA(tr1, Result);
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(53);
		RTCT("result_exists", EX_POST);
		if (EIF_TRUE) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(54);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {VALUE}.subtract */
EIF_TYPED_VALUE F1219_10445 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "subtract";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	struct eif_ex_1218 sloc3;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) sloc3.data;
	struct eif_ex_1218 sloc4;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) sloc4.data;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc12 = (EIF_CHARACTER_8) 0;
#define arg1 arg1x.it_r
	struct eif_ex_1218 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 16 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	memset (&sloc3.overhead, 0, OVERHEAD + 16);
	sloc3.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc3.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc4.overhead, 0, OVERHEAD + 16);
	sloc4.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc4.overhead, eif_new_type(1218, 0x00).id);
	RTLI(10);
	RTLR(0,earg1);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc4);
	RTLR(6,ur1);
	RTLR(7,tr2);
	RTLR(8,loc2);
	RTLR(9,loc1);
	RTLIU(10);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_CHAR8, &loc12);
	
	RTEAA(l_feature_name, 1218, Current, 12, 1, 16983);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16983);
	RTCC(earg1, 1218, l_feature_name, 1, eif_new_type(1218, 0x00), 0x00);
	RTIV(Current, RTAL);
	wstdinit(loc3,loc3);
	RTLXI(loc3);
	wstdinit(loc4,loc4);
	RTLXI(loc4);
	Result= RTLN(eif_new_type(1218, 0x00).id);
	wstdinit(Result,Result);
	RTLXI(Result);
	RTHOOK(1);
	RTDBGAL(3, 0x800004C2, 1, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc3);
	RTHOOK(2);
	RTDBGAL(4, 0x800004C2, 1, 0); /* loc4 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", earg1))(earg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc4);
	RTHOOK(3);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,2);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
		tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-');
	}
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(0, 0x800004C2, 1,0); /* Result */
		tr1 = RTLN(eif_new_type(1218, 0x00).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(4,1);
		tr1 = (tr1);
		RTXA(tr1, Result);
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc3))(loc3);
		RTHOOK(6);
		RTDBGAL(0, 0x800004C2, 1,0); /* Result */
		ur1 = RTRCL(loc4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2123, "plus", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTRCL(tr2);
		RTXA(tr1, Result);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", Result))(Result);
	} else {
		RTHOOK(8);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-')) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,2);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
			tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
		}
		if (tb1) {
			RTHOOK(9);
			RTDBGAL(0, 0x800004C2, 1,0); /* Result */
			tr1 = RTLN(eif_new_type(1218, 0x00).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(9,1);
			tr1 = (tr1);
			RTXA(tr1, Result);
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc4))(loc4);
			RTHOOK(11);
			RTDBGAL(0, 0x800004C2, 1,0); /* Result */
			ur1 = RTRCL(loc4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2123, "plus", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTRCL(tr2);
			RTXA(tr1, Result);
		} else {
			RTHOOK(12);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(12,2);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
			}
			if (tb1) {
				RTHOOK(13);
				RTDBGAL(0, 0x800004C2, 1,0); /* Result */
				tr1 = RTLN(eif_new_type(1218, 0x00).id);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
				RTNHOOK(13,1);
				tr1 = (tr1);
				RTXA(tr1, Result);
				RTHOOK(14);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc4))(loc4);
				RTHOOK(15);
				RTDBGAL(0, 0x800004C2, 1,0); /* Result */
				ur1 = RTRCL(loc4);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2123, "plus", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr1 = RTRCL(tr2);
				RTXA(tr1, Result);
			} else {
				RTHOOK(16);
				ur1 = RTRCL(loc4);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1384, "is_less", loc3))(loc3, ur1x)).it_b);
				if (tb1) {
					RTHOOK(17);
					RTDBGAL(0, 0x800004C2, 1,0); /* Result */
					ur1 = RTRCL(loc3);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2124, "minus", loc4))(loc4, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr1 = RTRCL(tr2);
					RTXA(tr1, Result);
					RTHOOK(18);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", Result))(Result);
				} else {
					RTHOOK(19);
					ur1 = RTRCL(loc4);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7965, "aligndecimal", loc3))(loc3, ur1x);
					RTHOOK(20);
					ur1 = RTRCL(loc4);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7966, "alignwhole", loc3))(loc3, ur1x);
					RTHOOK(21);
					RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
					tr1 = RTMS_EX_H("",0,0);
					loc2 = (EIF_REFERENCE) tr1;
					RTHOOK(22);
					RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc1 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(23);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(23,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					loc5 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(24);
					RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(24,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					loc6 = (EIF_INTEGER_32) ti4_1;
					for (;;) {
						RTHOOK(25);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN) (loc6 < ((EIF_INTEGER_32) 1L)))) break;
						RTHOOK(26);
						RTDBGAL(12, 0x08000000, 1, 0); /* loc12 */
						loc12 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '0';
						RTHOOK(27);
						tb1 = '\0';
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(27,1);
						ui4_1 = loc5;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
						if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '.')) {
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(27,2);
							ui4_1 = loc6;
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
							tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '.');
						}
						if (tb1) {
							RTHOOK(28);
							RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(28,1);
							ui4_1 = loc5;
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
							uc1 = tc1;
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7963, dtype))(Current, uc1x)).it_i4);
							loc7 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(29);
							RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(29,1);
							ui4_1 = loc6;
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
							uc1 = tc1;
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7963, dtype))(Current, uc1x)).it_i4);
							loc8 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(30);
							if ((EIF_BOOLEAN) (loc7 < loc8)) {
								RTHOOK(31);
								RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
								loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
								for (;;) {
									RTHOOK(32);
									if ((EIF_BOOLEAN) (loc10 < ((EIF_INTEGER_32) 1L))) break;
									RTHOOK(33);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									RTNHOOK(33,1);
									ui4_1 = loc10;
									tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
									if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '.')) {
										RTHOOK(34);
										RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										RTNHOOK(34,1);
										ui4_1 = loc10;
										tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
										uc1 = tc1;
										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7963, dtype))(Current, uc1x)).it_i4);
										loc9 = (EIF_INTEGER_32) ti4_1;
										RTHOOK(35);
										if ((EIF_BOOLEAN) (loc9 > ((EIF_INTEGER_32) 0L))) {
											RTHOOK(36);
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											RTNHOOK(36,1);
											ui4_1 = (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L));
											tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7964, dtype))(Current, ui4_1x)).it_c1);
											uc1 = tc1;
											ui4_1 = loc10;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", tr1))(tr1, uc1x, ui4_1x);
											RTHOOK(37);
											RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
											loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) 1L));
											for (;;) {
												RTHOOK(38);
												if ((EIF_BOOLEAN) (loc11 > (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L)))) break;
												RTHOOK(39);
												tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
												RTNHOOK(39,1);
												ui4_1 = loc11;
												tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
												if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '.')) {
													RTHOOK(40);
													tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													RTNHOOK(40,1);
													tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													RTNHOOK(40,2);
													ui4_1 = loc11;
													tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr2))(tr2, ui4_1x)).it_c1);
													uc1 = tc1;
													ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7963, dtype))(Current, uc1x)).it_i4);
													ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 9L));
													tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7964, dtype))(Current, ui4_1x)).it_c1);
													uc1 = tc1;
													ui4_1 = loc11;
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", tr1))(tr1, uc1x, ui4_1x);
												}
												RTHOOK(41);
												RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
												loc11++;
											}
											RTHOOK(42);
											RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
											loc7 += ((EIF_INTEGER_32) 10L);
											RTHOOK(43);
											RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
											loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
										}
									}
									RTHOOK(44);
									RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
									loc10--;
								}
							}
							RTHOOK(45);
							RTDBGAL(12, 0x08000000, 1, 0); /* loc12 */
							ui4_1 = (EIF_INTEGER_32) (loc7 - loc8);
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7964, dtype))(Current, ui4_1x)).it_c1);
							loc12 = (EIF_CHARACTER_8) tc1;
						} else {
							RTHOOK(46);
							tb1 = '\0';
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(46,1);
							ui4_1 = loc5;
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
							if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '.')) {
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(46,2);
								ui4_1 = loc6;
								tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
								tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '.');
							}
							if (tb1) {
								RTHOOK(47);
								RTDBGAL(12, 0x08000000, 1, 0); /* loc12 */
								loc12 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
							}
						}
						RTHOOK(48);
						uc1 = loc12;
						ui4_1 = ((EIF_INTEGER_32) 1L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", loc1))(loc1, uc1x, ui4_1x);
						RTHOOK(49);
						RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
						loc5--;
						RTHOOK(50);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						loc6--;
					}
					RTHOOK(51);
					RTDBGAL(0, 0x800004C2, 1,0); /* Result */
					tr1 = RTLN(eif_new_type(1218, 0x00).id);
					ur1 = RTCCL(loc1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
					RTNHOOK(51,1);
					tr1 = (tr1);
					RTXA(tr1, Result);
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(52);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {VALUE}.product */
EIF_TYPED_VALUE F1219_10446 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "product";
	RTEX;
	struct eif_ex_1218 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	struct eif_ex_1218 sloc2;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) sloc2.data;
	struct eif_ex_1218 sloc3;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) sloc3.data;
	struct eif_ex_1218 sloc4;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) sloc4.data;
	struct eif_ex_1218 sloc5;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) sloc5.data;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	struct eif_ex_1218 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 16 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	memset (&sloc1.overhead, 0, OVERHEAD + 16);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc2.overhead, 0, OVERHEAD + 16);
	sloc2.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc2.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc3.overhead, 0, OVERHEAD + 16);
	sloc3.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc3.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc4.overhead, 0, OVERHEAD + 16);
	sloc4.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc4.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc5.overhead, 0, OVERHEAD + 16);
	sloc5.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc5.overhead, eif_new_type(1218, 0x00).id);
	RTLI(15);
	RTLR(0,earg1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLR(6,ur1);
	RTLR(7,tr2);
	RTLR(8,loc20);
	RTLR(9,loc17);
	RTLR(10,loc18);
	RTLR(11,loc19);
	RTLR(12,loc3);
	RTLR(13,loc4);
	RTLR(14,loc5);
	RTLIU(15);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_INT32, &loc15);
	RTLU(SK_INT32, &loc16);
	RTLU(SK_REF, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_REF, &loc20);
	
	RTEAA(l_feature_name, 1218, Current, 20, 1, 16984);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16984);
	RTCC(earg1, 1218, l_feature_name, 1, eif_new_type(1218, 0x00), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE(EIF_TRUE, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	wstdinit(loc1,loc1);
	RTLXI(loc1);
	wstdinit(loc2,loc2);
	RTLXI(loc2);
	wstdinit(loc3,loc3);
	RTLXI(loc3);
	wstdinit(loc4,loc4);
	RTLXI(loc4);
	wstdinit(loc5,loc5);
	RTLXI(loc5);
	Result= RTLN(eif_new_type(1218, 0x00).id);
	wstdinit(Result,Result);
	RTLXI(Result);
	RTHOOK(2);
	RTDBGAL(1, 0x800004C2, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc1);
	RTHOOK(3);
	RTDBGAL(2, 0x800004C2, 1, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", earg1))(earg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc2);
	RTHOOK(4);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,2);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
		tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-');
	}
	if (tb1) {
		RTHOOK(5);
		RTDBGAL(0, 0x800004C2, 1,0); /* Result */
		tr1 = RTLN(eif_new_type(1218, 0x00).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(5,1);
		tr1 = (tr1);
		RTXA(tr1, Result);
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc1))(loc1);
		RTHOOK(7);
		RTDBGAL(0, 0x800004C2, 1,0); /* Result */
		ur1 = RTRCL(loc2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2125, "product", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTRCL(tr2);
		RTXA(tr1, Result);
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", Result))(Result);
	} else {
		RTHOOK(9);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-')) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,2);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
			tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
		}
		if (tb1) {
			RTHOOK(10);
			RTDBGAL(0, 0x800004C2, 1,0); /* Result */
			tr1 = RTLN(eif_new_type(1218, 0x00).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(10,1);
			tr1 = (tr1);
			RTXA(tr1, Result);
			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc2))(loc2);
			RTHOOK(12);
			RTDBGAL(0, 0x800004C2, 1,0); /* Result */
			ur1 = RTRCL(loc2);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2125, "product", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTRCL(tr2);
			RTXA(tr1, Result);
			RTHOOK(13);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", Result))(Result);
		} else {
			RTHOOK(14);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(14,1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(14,2);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
			}
			if (tb1) {
				RTHOOK(15);
				RTDBGAL(0, 0x800004C2, 1,0); /* Result */
				tr1 = RTLN(eif_new_type(1218, 0x00).id);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
				RTNHOOK(15,1);
				tr1 = (tr1);
				RTXA(tr1, Result);
				RTHOOK(16);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc1))(loc1);
				RTHOOK(17);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc2))(loc2);
				RTHOOK(18);
				RTDBGAL(0, 0x800004C2, 1,0); /* Result */
				ur1 = RTRCL(loc2);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2125, "product", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr1 = RTRCL(tr2);
				RTXA(tr1, Result);
			} else {
				RTHOOK(19);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(19,1);
				uc1 = (EIF_CHARACTER_8) '.';
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4747, "index_of", tr1))(tr1, uc1x, ui4_1x)).it_i4);
				loc6 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(20);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(20,1);
				uc1 = (EIF_CHARACTER_8) '.';
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4747, "index_of", tr1))(tr1, uc1x, ui4_1x)).it_i4);
				loc7 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(21);
				RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
				loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				RTHOOK(22);
				if ((EIF_BOOLEAN) (loc6 > ((EIF_INTEGER_32) 0L))) {
					RTHOOK(23);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(23,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + ti4_1) - loc6);
					RTHOOK(24);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(24,1);
					ui4_1 = loc6;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4797, "remove", tr1))(tr1, ui4_1x);
				}
				RTHOOK(25);
				if ((EIF_BOOLEAN) (loc7 > ((EIF_INTEGER_32) 0L))) {
					RTHOOK(26);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(26,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + ti4_1) - loc7);
					RTHOOK(27);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(27,1);
					ui4_1 = loc7;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4797, "remove", tr1))(tr1, ui4_1x);
				}
				RTHOOK(28);
				RTDBGAL(20, 0xF80000E8, 0, 0); /* loc20 */
				tr1 = RTMS_EX_H("",0,0);
				loc20 = (EIF_REFERENCE) tr1;
				RTHOOK(29);
				RTDBGAL(17, 0xF80000E8, 0, 0); /* loc17 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc20))(loc20)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc17 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(30);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(30,1);
				ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
				loc10 = (EIF_INTEGER_32) ti4_1;
				for (;;) {
					RTHOOK(31);
					if ((EIF_BOOLEAN) (loc10 < ((EIF_INTEGER_32) 1L))) break;
					RTHOOK(32);
					RTDBGAL(18, 0xF80000E8, 0, 0); /* loc18 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc20))(loc20)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc18 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(33);
					RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
					loc11 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(34);
					RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(34,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					loc9 = (EIF_INTEGER_32) ti4_1;
					for (;;) {
						RTHOOK(35);
						if ((EIF_BOOLEAN) (loc9 < ((EIF_INTEGER_32) 1L))) break;
						RTHOOK(36);
						RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(36,1);
						ui4_1 = loc9;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
						uc1 = tc1;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7963, dtype))(Current, uc1x)).it_i4);
						loc12 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(37);
						RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(37,1);
						ui4_1 = loc10;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
						uc1 = tc1;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7963, dtype))(Current, uc1x)).it_i4);
						loc13 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(38);
						RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
						loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc11 + (EIF_INTEGER_32) (loc12 * loc13));
						RTHOOK(39);
						if ((EIF_BOOLEAN) (loc14 >= ((EIF_INTEGER_32) 10L))) {
							RTHOOK(40);
							RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
							loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc14 / ((EIF_INTEGER_32) 10L));
							RTHOOK(41);
							RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
							loc14 %= ((EIF_INTEGER_32) 10L);
						} else {
							RTHOOK(42);
							RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
							loc11 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
						RTHOOK(43);
						ui4_1 = loc14;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7964, dtype))(Current, ui4_1x)).it_c1);
						uc1 = tc1;
						ui4_1 = ((EIF_INTEGER_32) 1L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", loc18))(loc18, uc1x, ui4_1x);
						RTHOOK(44);
						RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
						loc9--;
					}
					RTHOOK(45);
					if ((EIF_BOOLEAN) (loc11 > ((EIF_INTEGER_32) 0L))) {
						RTHOOK(46);
						ui4_1 = loc11;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7964, dtype))(Current, ui4_1x)).it_c1);
						uc1 = tc1;
						ui4_1 = ((EIF_INTEGER_32) 1L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", loc18))(loc18, uc1x, ui4_1x);
					}
					RTHOOK(47);
					ti4_1 = *(EIF_INTEGER_32 *)(loc17 + RTVA(4768, "count", loc17));
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
						RTHOOK(48);
						RTDBGAL(17, 0xF80000E8, 0, 0); /* loc17 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc18))(loc18)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc17 = (EIF_REFERENCE) RTCCL(tr1);
					} else {
						RTHOOK(49);
						RTDBGAL(19, 0xF80000E8, 0, 0); /* loc19 */
						tr1 = RTLN(eif_new_type(232, 0x01).id);
						uc1 = (EIF_CHARACTER_8) '0';
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(49,1);
						ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(4768, "count", tr2));
						ui4_1 = (EIF_INTEGER_32) (ti4_1 - loc10);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4737, Dtype(tr1)))(tr1, uc1x, ui4_1x);
						RTNHOOK(49,2);
						loc19 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(50);
						ur1 = RTCCL(loc19);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", loc18))(loc18, ur1x);
						RTHOOK(51);
						RTDBGAL(3, 0x800004C2, 1, 0); /* loc3 */
						tr1 = RTLN(eif_new_type(1218, 0x00).id);
						ur1 = RTCCL(loc18);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
						RTNHOOK(51,1);
						tr1 = (tr1);
						RTXA(tr1, loc3);
						RTHOOK(52);
						RTDBGAL(4, 0x800004C2, 1, 0); /* loc4 */
						tr1 = RTLN(eif_new_type(1218, 0x00).id);
						ur1 = RTCCL(loc17);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
						RTNHOOK(52,1);
						tr1 = (tr1);
						RTXA(tr1, loc4);
						RTHOOK(53);
						RTDBGAL(5, 0x800004C2, 1, 0); /* loc5 */
						ur1 = RTRCL(loc4);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2123, "plus", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTRCL(tr1);
						RTXA(tr1, loc5);
						RTHOOK(54);
						RTDBGAL(17, 0xF80000E8, 0, 0); /* loc17 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(54,1);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc17 = (EIF_REFERENCE) RTCCL(tr2);
					}
					RTHOOK(55);
					RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
					loc10--;
				}
				RTHOOK(56);
				if ((EIF_BOOLEAN) (loc8 > ((EIF_INTEGER_32) 0L))) {
					RTHOOK(57);
					ti4_1 = *(EIF_INTEGER_32 *)(loc17 + RTVA(4768, "count", loc17));
					if ((EIF_BOOLEAN) (loc8 > ti4_1)) {
						RTHOOK(58);
						RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
						ti4_1 = *(EIF_INTEGER_32 *)(loc17 + RTVA(4768, "count", loc17));
						loc15 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 - ti4_1);
						RTHOOK(59);
						RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
						loc16 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						for (;;) {
							RTHOOK(60);
							if ((EIF_BOOLEAN) (loc16 > loc15)) break;
							RTHOOK(61);
							uc1 = (EIF_CHARACTER_8) '0';
							ui4_1 = ((EIF_INTEGER_32) 1L);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", loc17))(loc17, uc1x, ui4_1x);
							RTHOOK(62);
							RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
							loc16++;
						}
					}
					RTHOOK(63);
					uc1 = (EIF_CHARACTER_8) '.';
					ti4_1 = *(EIF_INTEGER_32 *)(loc17 + RTVA(4768, "count", loc17));
					ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc8) + ((EIF_INTEGER_32) 1L));
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", loc17))(loc17, uc1x, ui4_1x);
				}
				RTHOOK(64);
				RTDBGAL(0, 0x800004C2, 1,0); /* Result */
				tr1 = RTLN(eif_new_type(1218, 0x00).id);
				ur1 = RTCCL(loc17);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(64,1);
				tr1 = (tr1);
				RTXA(tr1, Result);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(65);
		RTCT("result_exists", EX_POST);
		if (EIF_TRUE) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(66);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(23);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {VALUE}.multiply */
EIF_TYPED_VALUE F1219_10447 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "multiply";
	RTEX;
	struct eif_ex_1218 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	struct eif_ex_1218 sloc2;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) sloc2.data;
	struct eif_ex_1218 sloc3;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) sloc3.data;
	struct eif_ex_1218 sloc4;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) sloc4.data;
	struct eif_ex_1218 sloc5;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) sloc5.data;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	struct eif_ex_1218 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 16 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	memset (&sloc1.overhead, 0, OVERHEAD + 16);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc2.overhead, 0, OVERHEAD + 16);
	sloc2.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc2.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc3.overhead, 0, OVERHEAD + 16);
	sloc3.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc3.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc4.overhead, 0, OVERHEAD + 16);
	sloc4.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc4.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc5.overhead, 0, OVERHEAD + 16);
	sloc5.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc5.overhead, eif_new_type(1218, 0x00).id);
	RTLI(15);
	RTLR(0,earg1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLR(6,ur1);
	RTLR(7,tr2);
	RTLR(8,loc20);
	RTLR(9,loc17);
	RTLR(10,loc18);
	RTLR(11,loc19);
	RTLR(12,loc3);
	RTLR(13,loc4);
	RTLR(14,loc5);
	RTLIU(15);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_INT32, &loc15);
	RTLU(SK_INT32, &loc16);
	RTLU(SK_REF, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_REF, &loc20);
	
	RTEAA(l_feature_name, 1218, Current, 20, 1, 16985);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16985);
	RTCC(earg1, 1218, l_feature_name, 1, eif_new_type(1218, 0x00), 0x00);
	RTIV(Current, RTAL);
	wstdinit(loc1,loc1);
	RTLXI(loc1);
	wstdinit(loc2,loc2);
	RTLXI(loc2);
	wstdinit(loc3,loc3);
	RTLXI(loc3);
	wstdinit(loc4,loc4);
	RTLXI(loc4);
	wstdinit(loc5,loc5);
	RTLXI(loc5);
	Result= RTLN(eif_new_type(1218, 0x00).id);
	wstdinit(Result,Result);
	RTLXI(Result);
	RTHOOK(1);
	RTDBGAL(1, 0x800004C2, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc1);
	RTHOOK(2);
	RTDBGAL(2, 0x800004C2, 1, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", earg1))(earg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc2);
	RTHOOK(3);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,2);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
		tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-');
	}
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(0, 0x800004C2, 1,0); /* Result */
		tr1 = RTLN(eif_new_type(1218, 0x00).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(4,1);
		tr1 = (tr1);
		RTXA(tr1, Result);
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc1))(loc1);
		RTHOOK(6);
		RTDBGAL(0, 0x800004C2, 1,0); /* Result */
		ur1 = RTRCL(loc2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2125, "product", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTRCL(tr2);
		RTXA(tr1, Result);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", Result))(Result);
	} else {
		RTHOOK(8);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-')) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,2);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
			tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
		}
		if (tb1) {
			RTHOOK(9);
			RTDBGAL(0, 0x800004C2, 1,0); /* Result */
			tr1 = RTLN(eif_new_type(1218, 0x00).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(9,1);
			tr1 = (tr1);
			RTXA(tr1, Result);
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc2))(loc2);
			RTHOOK(11);
			RTDBGAL(0, 0x800004C2, 1,0); /* Result */
			ur1 = RTRCL(loc2);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2125, "product", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTRCL(tr2);
			RTXA(tr1, Result);
			RTHOOK(12);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", Result))(Result);
		} else {
			RTHOOK(13);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(13,1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(13,2);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
			}
			if (tb1) {
				RTHOOK(14);
				RTDBGAL(0, 0x800004C2, 1,0); /* Result */
				tr1 = RTLN(eif_new_type(1218, 0x00).id);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
				RTNHOOK(14,1);
				tr1 = (tr1);
				RTXA(tr1, Result);
				RTHOOK(15);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc1))(loc1);
				RTHOOK(16);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc2))(loc2);
				RTHOOK(17);
				RTDBGAL(0, 0x800004C2, 1,0); /* Result */
				ur1 = RTRCL(loc2);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2125, "product", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr1 = RTRCL(tr2);
				RTXA(tr1, Result);
			} else {
				RTHOOK(18);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(18,1);
				uc1 = (EIF_CHARACTER_8) '.';
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4747, "index_of", tr1))(tr1, uc1x, ui4_1x)).it_i4);
				loc6 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(19);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(19,1);
				uc1 = (EIF_CHARACTER_8) '.';
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4747, "index_of", tr1))(tr1, uc1x, ui4_1x)).it_i4);
				loc7 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(20);
				RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
				loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				RTHOOK(21);
				if ((EIF_BOOLEAN) (loc6 > ((EIF_INTEGER_32) 0L))) {
					RTHOOK(22);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(22,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + ti4_1) - loc6);
					RTHOOK(23);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(23,1);
					ui4_1 = loc6;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4797, "remove", tr1))(tr1, ui4_1x);
				}
				RTHOOK(24);
				if ((EIF_BOOLEAN) (loc7 > ((EIF_INTEGER_32) 0L))) {
					RTHOOK(25);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(25,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 + ti4_1) - loc7);
					RTHOOK(26);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(26,1);
					ui4_1 = loc7;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4797, "remove", tr1))(tr1, ui4_1x);
				}
				RTHOOK(27);
				RTDBGAL(20, 0xF80000E8, 0, 0); /* loc20 */
				tr1 = RTMS_EX_H("",0,0);
				loc20 = (EIF_REFERENCE) tr1;
				RTHOOK(28);
				RTDBGAL(17, 0xF80000E8, 0, 0); /* loc17 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc20))(loc20)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc17 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(29);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(29,1);
				ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
				loc10 = (EIF_INTEGER_32) ti4_1;
				for (;;) {
					RTHOOK(30);
					if ((EIF_BOOLEAN) (loc10 < ((EIF_INTEGER_32) 1L))) break;
					RTHOOK(31);
					RTDBGAL(18, 0xF80000E8, 0, 0); /* loc18 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc20))(loc20)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc18 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(32);
					RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
					loc11 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(33);
					RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(33,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					loc9 = (EIF_INTEGER_32) ti4_1;
					for (;;) {
						RTHOOK(34);
						if ((EIF_BOOLEAN) (loc9 < ((EIF_INTEGER_32) 1L))) break;
						RTHOOK(35);
						RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(35,1);
						ui4_1 = loc9;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
						uc1 = tc1;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7963, dtype))(Current, uc1x)).it_i4);
						loc12 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(36);
						RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(36,1);
						ui4_1 = loc10;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
						uc1 = tc1;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7963, dtype))(Current, uc1x)).it_i4);
						loc13 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(37);
						RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
						loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc11 + (EIF_INTEGER_32) (loc12 * loc13));
						RTHOOK(38);
						if ((EIF_BOOLEAN) (loc14 >= ((EIF_INTEGER_32) 10L))) {
							RTHOOK(39);
							RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
							loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc14 / ((EIF_INTEGER_32) 10L));
							RTHOOK(40);
							RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
							loc14 %= ((EIF_INTEGER_32) 10L);
						} else {
							RTHOOK(41);
							RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
							loc11 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
						RTHOOK(42);
						ui4_1 = loc14;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7964, dtype))(Current, ui4_1x)).it_c1);
						uc1 = tc1;
						ui4_1 = ((EIF_INTEGER_32) 1L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", loc18))(loc18, uc1x, ui4_1x);
						RTHOOK(43);
						RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
						loc9--;
					}
					RTHOOK(44);
					if ((EIF_BOOLEAN) (loc11 > ((EIF_INTEGER_32) 0L))) {
						RTHOOK(45);
						ui4_1 = loc11;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7964, dtype))(Current, ui4_1x)).it_c1);
						uc1 = tc1;
						ui4_1 = ((EIF_INTEGER_32) 1L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", loc18))(loc18, uc1x, ui4_1x);
					}
					RTHOOK(46);
					ti4_1 = *(EIF_INTEGER_32 *)(loc17 + RTVA(4768, "count", loc17));
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
						RTHOOK(47);
						RTDBGAL(17, 0xF80000E8, 0, 0); /* loc17 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc18))(loc18)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc17 = (EIF_REFERENCE) RTCCL(tr1);
					} else {
						RTHOOK(48);
						RTDBGAL(19, 0xF80000E8, 0, 0); /* loc19 */
						tr1 = RTLN(eif_new_type(232, 0x01).id);
						uc1 = (EIF_CHARACTER_8) '0';
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(48,1);
						ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(4768, "count", tr2));
						ui4_1 = (EIF_INTEGER_32) (ti4_1 - loc10);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4737, Dtype(tr1)))(tr1, uc1x, ui4_1x);
						RTNHOOK(48,2);
						loc19 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(49);
						ur1 = RTCCL(loc19);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", loc18))(loc18, ur1x);
						RTHOOK(50);
						RTDBGAL(3, 0x800004C2, 1, 0); /* loc3 */
						tr1 = RTLN(eif_new_type(1218, 0x00).id);
						ur1 = RTCCL(loc18);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
						RTNHOOK(50,1);
						tr1 = (tr1);
						RTXA(tr1, loc3);
						RTHOOK(51);
						RTDBGAL(4, 0x800004C2, 1, 0); /* loc4 */
						tr1 = RTLN(eif_new_type(1218, 0x00).id);
						ur1 = RTCCL(loc17);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
						RTNHOOK(51,1);
						tr1 = (tr1);
						RTXA(tr1, loc4);
						RTHOOK(52);
						RTDBGAL(5, 0x800004C2, 1, 0); /* loc5 */
						ur1 = RTRCL(loc4);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2123, "plus", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTRCL(tr1);
						RTXA(tr1, loc5);
						RTHOOK(53);
						RTDBGAL(17, 0xF80000E8, 0, 0); /* loc17 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(53,1);
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc17 = (EIF_REFERENCE) RTCCL(tr2);
					}
					RTHOOK(54);
					RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
					loc10--;
				}
				RTHOOK(55);
				if ((EIF_BOOLEAN) (loc8 > ((EIF_INTEGER_32) 0L))) {
					RTHOOK(56);
					ti4_1 = *(EIF_INTEGER_32 *)(loc17 + RTVA(4768, "count", loc17));
					if ((EIF_BOOLEAN) (loc8 > ti4_1)) {
						RTHOOK(57);
						RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
						ti4_1 = *(EIF_INTEGER_32 *)(loc17 + RTVA(4768, "count", loc17));
						loc15 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 - ti4_1);
						RTHOOK(58);
						RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
						loc16 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						for (;;) {
							RTHOOK(59);
							if ((EIF_BOOLEAN) (loc16 > loc15)) break;
							RTHOOK(60);
							uc1 = (EIF_CHARACTER_8) '0';
							ui4_1 = ((EIF_INTEGER_32) 1L);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", loc17))(loc17, uc1x, ui4_1x);
							RTHOOK(61);
							RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
							loc16++;
						}
					}
					RTHOOK(62);
					uc1 = (EIF_CHARACTER_8) '.';
					ti4_1 = *(EIF_INTEGER_32 *)(loc17 + RTVA(4768, "count", loc17));
					ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc8) + ((EIF_INTEGER_32) 1L));
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", loc17))(loc17, uc1x, ui4_1x);
				}
				RTHOOK(63);
				RTDBGAL(0, 0x800004C2, 1,0); /* Result */
				tr1 = RTLN(eif_new_type(1218, 0x00).id);
				ur1 = RTCCL(loc17);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(63,1);
				tr1 = (tr1);
				RTXA(tr1, Result);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(64);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(23);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {VALUE}.quotient */
EIF_TYPED_VALUE F1219_10448 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "quotient";
	RTEX;
	struct eif_ex_1218 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	struct eif_ex_1218 sloc2;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) sloc2.data;
	struct eif_ex_1218 sloc3;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) sloc3.data;
	struct eif_ex_1218 sloc4;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) sloc4.data;
	struct eif_ex_1218 sloc5;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) sloc5.data;
	struct eif_ex_1218 sloc6;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) sloc6.data;
	struct eif_ex_1218 sloc7;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) sloc7.data;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc23 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc24 = (EIF_CHARACTER_8) 0;
#define arg1 arg1x.it_r
	struct eif_ex_1218 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 16 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	memset (&sloc1.overhead, 0, OVERHEAD + 16);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc2.overhead, 0, OVERHEAD + 16);
	sloc2.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc2.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc3.overhead, 0, OVERHEAD + 16);
	sloc3.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc3.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc4.overhead, 0, OVERHEAD + 16);
	sloc4.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc4.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc5.overhead, 0, OVERHEAD + 16);
	sloc5.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc5.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc6.overhead, 0, OVERHEAD + 16);
	sloc6.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc6.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc7.overhead, 0, OVERHEAD + 16);
	sloc7.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc7.overhead, eif_new_type(1218, 0x00).id);
	RTLI(18);
	RTLR(0,earg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLR(5,tr1);
	RTLR(6,loc2);
	RTLR(7,tr2);
	RTLR(8,loc22);
	RTLR(9,loc19);
	RTLR(10,loc3);
	RTLR(11,loc21);
	RTLR(12,loc20);
	RTLR(13,loc4);
	RTLR(14,loc5);
	RTLR(15,tr3);
	RTLR(16,loc6);
	RTLR(17,loc7);
	RTLIU(18);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_INT32, &loc15);
	RTLU(SK_INT32, &loc16);
	RTLU(SK_INT32, &loc17);
	RTLU(SK_INT32, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_REF, &loc20);
	RTLU(SK_REF, &loc21);
	RTLU(SK_REF, &loc22);
	RTLU(SK_BOOL, &loc23);
	RTLU(SK_CHAR8, &loc24);
	
	RTEAA(l_feature_name, 1218, Current, 24, 1, 16986);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16986);
	RTCC(earg1, 1218, l_feature_name, 1, eif_new_type(1218, 0x00), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE(EIF_TRUE, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("good_divisor", EX_PRE);
		ur1 = RTRCL(earg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2121, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	wstdinit(loc1,loc1);
	RTLXI(loc1);
	wstdinit(loc2,loc2);
	RTLXI(loc2);
	wstdinit(loc3,loc3);
	RTLXI(loc3);
	wstdinit(loc4,loc4);
	RTLXI(loc4);
	wstdinit(loc5,loc5);
	RTLXI(loc5);
	wstdinit(loc6,loc6);
	RTLXI(loc6);
	wstdinit(loc7,loc7);
	RTLXI(loc7);
	Result= RTLN(eif_new_type(1218, 0x00).id);
	wstdinit(Result,Result);
	RTLXI(Result);
	RTHOOK(3);
	RTDBGAL(1, 0x800004C2, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc1);
	RTHOOK(4);
	RTDBGAL(2, 0x800004C2, 1, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", earg1))(earg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc2);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2120, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTRCL(tr1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc1))(loc1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(6);
		RTDBGAL(0, 0x800004C2, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2120, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTRCL(tr1);
		RTXA(tr1, Result);
	} else {
		RTHOOK(7);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,2);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
			tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-');
		}
		if (tb1) {
			RTHOOK(8);
			RTDBGAL(0, 0x800004C2, 1,0); /* Result */
			tr1 = RTLN(eif_new_type(1218, 0x00).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(8,1);
			tr1 = (tr1);
			RTXA(tr1, Result);
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc1))(loc1);
			RTHOOK(10);
			RTDBGAL(0, 0x800004C2, 1,0); /* Result */
			ur1 = RTRCL(loc2);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2126, "quotient", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTRCL(tr2);
			RTXA(tr1, Result);
			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", Result))(Result);
		} else {
			RTHOOK(12);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
			if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-')) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(12,2);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
			}
			if (tb1) {
				RTHOOK(13);
				RTDBGAL(0, 0x800004C2, 1,0); /* Result */
				tr1 = RTLN(eif_new_type(1218, 0x00).id);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
				RTNHOOK(13,1);
				tr1 = (tr1);
				RTXA(tr1, Result);
				RTHOOK(14);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc2))(loc2);
				RTHOOK(15);
				RTDBGAL(0, 0x800004C2, 1,0); /* Result */
				ur1 = RTRCL(loc2);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2126, "quotient", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr1 = RTRCL(tr2);
				RTXA(tr1, Result);
				RTHOOK(16);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", Result))(Result);
			} else {
				RTHOOK(17);
				tb1 = '\0';
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(17,1);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(17,2);
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
					tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
				}
				if (tb1) {
					RTHOOK(18);
					RTDBGAL(0, 0x800004C2, 1,0); /* Result */
					tr1 = RTLN(eif_new_type(1218, 0x00).id);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
					RTNHOOK(18,1);
					tr1 = (tr1);
					RTXA(tr1, Result);
					RTHOOK(19);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc1))(loc1);
					RTHOOK(20);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc2))(loc2);
					RTHOOK(21);
					RTDBGAL(0, 0x800004C2, 1,0); /* Result */
					ur1 = RTRCL(loc2);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2126, "quotient", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr1 = RTRCL(tr2);
					RTXA(tr1, Result);
				} else {
					RTHOOK(22);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(22,1);
					uc1 = (EIF_CHARACTER_8) '.';
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4747, "index_of", tr1))(tr1, uc1x, ui4_1x)).it_i4);
					loc8 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(23);
					RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(23,1);
					uc1 = (EIF_CHARACTER_8) '.';
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4747, "index_of", tr1))(tr1, uc1x, ui4_1x)).it_i4);
					loc9 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(24);
					RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
					loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(25);
					RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
					loc11 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(26);
					if ((EIF_BOOLEAN) (loc8 > ((EIF_INTEGER_32) 0L))) {
						RTHOOK(27);
						RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(27,1);
						ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
						loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - loc8);
						RTHOOK(28);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(28,1);
						ui4_1 = loc8;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4797, "remove", tr1))(tr1, ui4_1x);
						RTHOOK(29);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7962, "normalize", loc1))(loc1);
					}
					RTHOOK(30);
					if ((EIF_BOOLEAN) (loc9 > ((EIF_INTEGER_32) 0L))) {
						RTHOOK(31);
						RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(31,1);
						ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
						loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - loc9);
						RTHOOK(32);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(32,1);
						ui4_1 = loc9;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4797, "remove", tr1))(tr1, ui4_1x);
						RTHOOK(33);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7962, "normalize", loc2))(loc2);
					}
					RTHOOK(34);
					RTDBGAL(22, 0xF80000E8, 0, 0); /* loc22 */
					loc22 = (EIF_REFERENCE) NULL;
					RTHOOK(35);
					if ((EIF_BOOLEAN) (loc10 > loc11)) {
						RTHOOK(36);
						RTDBGAL(22, 0xF80000E8, 0, 0); /* loc22 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc22 = (EIF_REFERENCE) RTCCL(tr1);
					} else {
						RTHOOK(37);
						if ((EIF_BOOLEAN) (loc11 > loc10)) {
							RTHOOK(38);
							RTDBGAL(22, 0xF80000E8, 0, 0); /* loc22 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc22 = (EIF_REFERENCE) RTCCL(tr1);
						}
					}
					RTHOOK(39);
					if ((EIF_BOOLEAN)(loc22 != NULL)) {
						RTHOOK(40);
						RTDBGAL(19, 0xF80000E8, 0, 0); /* loc19 */
						tr1 = RTLN(eif_new_type(232, 0x01).id);
						uc1 = (EIF_CHARACTER_8) '0';
						ti4_1 = eif_abs_int32 ((EIF_INTEGER_32) (loc10 - loc11));
						ui4_1 = ti4_1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4737, Dtype(tr1)))(tr1, uc1x, ui4_1x);
						RTNHOOK(40,1);
						loc19 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(41);
						ur1 = RTCCL(loc19);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", loc22))(loc22, ur1x);
					}
					RTHOOK(42);
					RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
					loc12 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(43);
					RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
					loc13 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(44);
					RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
					loc14 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(45);
					RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(45,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					loc15 = (EIF_INTEGER_32) ti4_1;
					for (;;) {
						RTHOOK(46);
						if ((EIF_BOOLEAN) (loc15 < ((EIF_INTEGER_32) 1L))) break;
						RTHOOK(47);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(47,1);
						ui4_1 = loc15;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
						if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '0')) {
							RTHOOK(48);
							RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
							loc12++;
						} else {
							RTHOOK(49);
							RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
							loc15 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
						RTHOOK(50);
						RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
						loc15--;
					}
					RTHOOK(51);
					RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(51,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					loc15 = (EIF_INTEGER_32) ti4_1;
					for (;;) {
						RTHOOK(52);
						if ((EIF_BOOLEAN) (loc15 < ((EIF_INTEGER_32) 1L))) break;
						RTHOOK(53);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(53,1);
						ui4_1 = loc15;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
						if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '0')) {
							RTHOOK(54);
							RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
							loc13++;
						} else {
							RTHOOK(55);
							RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
							loc15 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
						RTHOOK(56);
						RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
						loc15--;
					}
					RTHOOK(57);
					if ((EIF_BOOLEAN) (loc12 < loc13)) {
						RTHOOK(58);
						RTDBGAL(19, 0xF80000E8, 0, 0); /* loc19 */
						tr1 = RTLN(eif_new_type(232, 0x01).id);
						uc1 = (EIF_CHARACTER_8) '0';
						ui4_1 = (EIF_INTEGER_32) (loc13 - loc12);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4737, Dtype(tr1)))(tr1, uc1x, ui4_1x);
						RTNHOOK(58,1);
						loc19 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(59);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(59,1);
						ur1 = RTCCL(loc19);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", tr1))(tr1, ur1x);
						RTHOOK(60);
						RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
						loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc14 + loc13) - loc12);
						RTHOOK(61);
						RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
						loc12 = (EIF_INTEGER_32) loc13;
					}
					RTHOOK(62);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7932, dtype));
					if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc12 - loc13) < (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
						RTHOOK(63);
						RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7932, dtype));
						loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc14 + ti4_1) + ((EIF_INTEGER_32) 1L)) - (EIF_INTEGER_32) (loc12 - loc13));
						RTHOOK(64);
						RTDBGAL(19, 0xF80000E8, 0, 0); /* loc19 */
						tr1 = RTLN(eif_new_type(232, 0x01).id);
						uc1 = (EIF_CHARACTER_8) '0';
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7932, dtype));
						ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) - (EIF_INTEGER_32) (loc12 - loc13));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4737, Dtype(tr1)))(tr1, uc1x, ui4_1x);
						RTNHOOK(64,1);
						loc19 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(65);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(65,1);
						ur1 = RTCCL(loc19);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", tr1))(tr1, ur1x);
					}
					RTHOOK(66);
					ur1 = RTRCL(loc2);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1384, "is_less", loc1))(loc1, ur1x)).it_b);
					if (tb1) {
						RTHOOK(67);
						RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(67,1);
						ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(67,2);
						ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
						loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc14 + ti4_1) - ti4_2) + ((EIF_INTEGER_32) 1L));
						RTHOOK(68);
						RTDBGAL(19, 0xF80000E8, 0, 0); /* loc19 */
						tr1 = RTLN(eif_new_type(232, 0x01).id);
						uc1 = (EIF_CHARACTER_8) '0';
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(68,1);
						ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(4768, "count", tr2));
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(68,2);
						ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(4768, "count", tr2));
						ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4737, Dtype(tr1)))(tr1, uc1x, ui4_1x);
						RTNHOOK(68,3);
						loc19 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(69);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(69,1);
						ur1 = RTCCL(loc19);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", tr1))(tr1, ur1x);
					}
					RTHOOK(70);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(70,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(70,2);
					ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7932, dtype));
					if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 - ti4_2) < ti4_3)) {
						RTHOOK(71);
						RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7932, dtype));
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(71,1);
						ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(71,2);
						ti4_3 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
						loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc14 + ti4_1) - (EIF_INTEGER_32) (ti4_2 - ti4_3));
						RTHOOK(72);
						RTDBGAL(19, 0xF80000E8, 0, 0); /* loc19 */
						tr1 = RTLN(eif_new_type(232, 0x01).id);
						uc1 = (EIF_CHARACTER_8) '0';
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7932, dtype));
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(72,1);
						ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(4768, "count", tr2));
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(72,2);
						ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVA(4768, "count", tr2));
						ui4_1 = (EIF_INTEGER_32) (ti4_1 - (EIF_INTEGER_32) (ti4_2 - ti4_3));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4737, Dtype(tr1)))(tr1, uc1x, ui4_1x);
						RTNHOOK(72,3);
						loc19 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(73);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(73,1);
						ur1 = RTCCL(loc19);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", tr1))(tr1, ur1x);
					}
					RTHOOK(74);
					RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(74,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					loc16 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
					RTHOOK(75);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(75,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(75,2);
					ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
						RTHOOK(76);
						RTDBGAL(23, 0x04000000, 1, 0); /* loc23 */
						loc23 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						for (;;) {
							RTHOOK(77);
							tb1 = '\01';
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(77,1);
							ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
							if (!(EIF_BOOLEAN) (loc16 > ti4_1)) {
								tb1 = loc23;
							}
							if (tb1) break;
							RTHOOK(78);
							RTDBGAL(19, 0xF80000E8, 0, 0); /* loc19 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(78,1);
							ui4_1 = ((EIF_INTEGER_32) 1L);
							ui4_2 = (EIF_INTEGER_32) (loc16 - ((EIF_INTEGER_32) 1L));
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4722, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc19 = (EIF_REFERENCE) RTCCL(tr2);
							RTHOOK(79);
							RTDBGAL(3, 0x800004C2, 1, 0); /* loc3 */
							tr1 = RTLN(eif_new_type(1218, 0x00).id);
							ur1 = RTCCL(loc19);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
							RTNHOOK(79,1);
							tr1 = (tr1);
							RTXA(tr1, loc3);
							RTHOOK(80);
							ur1 = RTRCL(loc2);
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1387, "is_greater_equal", loc3))(loc3, ur1x)).it_b);
							if (tb2) {
								RTHOOK(81);
								RTDBGAL(23, 0x04000000, 1, 0); /* loc23 */
								loc23 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							} else {
								RTHOOK(82);
								RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
								loc16++;
							}
						}
					}
					RTHOOK(83);
					RTDBGAL(21, 0xF80000E8, 0, 0); /* loc21 */
					tr1 = RTMS_EX_H("",0,0);
					loc21 = (EIF_REFERENCE) tr1;
					RTHOOK(84);
					RTDBGAL(20, 0xF80000E8, 0, 0); /* loc20 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc21))(loc21)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc20 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(85);
					RTDBGAL(4, 0x800004C2, 1, 0); /* loc4 */
					tr1 = RTLN(eif_new_type(1218, 0x00).id);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
					RTNHOOK(85,1);
					tr1 = (tr1);
					RTXA(tr1, loc4);
					RTHOOK(86);
					RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
					loc17 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc16 - ((EIF_INTEGER_32) 1L));
					for (;;) {
						RTHOOK(87);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(87,1);
						ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
						if ((EIF_BOOLEAN) (loc17 > ti4_1)) break;
						RTHOOK(88);
						if ((EIF_BOOLEAN)(loc17 == (EIF_INTEGER_32) (loc16 - ((EIF_INTEGER_32) 1L)))) {
							RTHOOK(89);
							RTDBGAL(5, 0x800004C2, 1, 0); /* loc5 */
							tr1 = RTLN(eif_new_type(1218, 0x00).id);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(89,1);
							ui4_1 = ((EIF_INTEGER_32) 1L);
							ui4_2 = loc17;
							tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4722, "substring", tr2))(tr2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr3);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
							RTNHOOK(89,2);
							tr1 = (tr1);
							RTXA(tr1, loc5);
						} else {
							RTHOOK(90);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(90,1);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(90,2);
							ui4_1 = loc17;
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr2))(tr2, ui4_1x)).it_c1);
							uc1 = tc1;
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(90,3);
							ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(4768, "count", tr2));
							ui4_1 = (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", tr1))(tr1, uc1x, ui4_1x);
							RTHOOK(91);
							RTDBGAL(5, 0x800004C2, 1, 0); /* loc5 */
							tr1 = RTLN(eif_new_type(1218, 0x00).id);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
							RTNHOOK(91,1);
							tr1 = (tr1);
							RTXA(tr1, loc5);
							RTHOOK(92);
							RTDBGAL(5, 0x800004C2, 1, 0); /* loc5 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							tr1 = RTRCL(tr1);
							RTXA(tr1, loc5);
						}
						RTHOOK(93);
						RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
						loc18 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						RTHOOK(94);
						RTDBGAL(6, 0x800004C2, 1, 0); /* loc6 */
						tr1 = RTLN(eif_new_type(1218, 0x00).id);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
						RTNHOOK(94,1);
						tr1 = (tr1);
						RTXA(tr1, loc6);
						RTHOOK(95);
						RTDBGAL(23, 0x04000000, 1, 0); /* loc23 */
						loc23 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						for (;;) {
							RTHOOK(96);
							if (loc23) break;
							RTHOOK(97);
							RTDBGAL(6, 0x800004C2, 1, 0); /* loc6 */
							ur1 = RTRCL(loc2);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2123, "plus", loc6))(loc6, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							tr1 = RTRCL(tr1);
							RTXA(tr1, loc6);
							RTHOOK(98);
							ur1 = RTRCL(loc5);
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1386, "is_greater", loc6))(loc6, ur1x)).it_b);
							if (tb2) {
								RTHOOK(99);
								RTDBGAL(23, 0x04000000, 1, 0); /* loc23 */
								loc23 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							} else {
								RTHOOK(100);
								RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
								loc18++;
							}
						}
						RTHOOK(101);
						RTDBGAL(24, 0x08000000, 1, 0); /* loc24 */
						ui4_1 = loc18;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7964, dtype))(Current, ui4_1x)).it_c1);
						loc24 = (EIF_CHARACTER_8) tc1;
						RTHOOK(102);
						uc1 = loc24;
						ti4_2 = *(EIF_INTEGER_32 *)(loc20 + RTVA(4768, "count", loc20));
						ui4_1 = (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", loc20))(loc20, uc1x, ui4_1x);
						RTHOOK(103);
						RTDBGAL(7, 0x800004C2, 1, 0); /* loc7 */
						tr1 = RTLN(eif_new_type(1218, 0x00).id);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
						RTNHOOK(103,1);
						tr1 = (tr1);
						RTXA(tr1, loc7);
						RTHOOK(104);
						RTDBGAL(19, 0xF80000E8, 0, 0); /* loc19 */
						tr1 = RTLN(eif_new_type(232, 0x01).id);
						uc1 = loc24;
						ui4_1 = ((EIF_INTEGER_32) 1L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4737, Dtype(tr1)))(tr1, uc1x, ui4_1x);
						RTNHOOK(104,1);
						loc19 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(105);
						RTDBGAL(3, 0x800004C2, 1, 0); /* loc3 */
						tr1 = RTLN(eif_new_type(1218, 0x00).id);
						ur1 = RTCCL(loc19);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
						RTNHOOK(105,1);
						tr1 = (tr1);
						RTXA(tr1, loc3);
						RTHOOK(106);
						RTDBGAL(7, 0x800004C2, 1, 0); /* loc7 */
						ur1 = RTRCL(loc2);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2125, "product", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTRCL(tr1);
						RTXA(tr1, loc7);
						RTHOOK(107);
						RTDBGAL(4, 0x800004C2, 1, 0); /* loc4 */
						ur1 = RTRCL(loc7);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2124, "minus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTRCL(tr1);
						RTXA(tr1, loc4);
						RTHOOK(108);
						RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
						loc17++;
					}
					RTHOOK(109);
					if ((EIF_BOOLEAN) (loc14 > ((EIF_INTEGER_32) 0L))) {
						RTHOOK(110);
						ti4_2 = *(EIF_INTEGER_32 *)(loc20 + RTVA(4768, "count", loc20));
						if ((EIF_BOOLEAN) (loc14 > ti4_2)) {
							RTHOOK(111);
							RTDBGAL(19, 0xF80000E8, 0, 0); /* loc19 */
							tr1 = RTLN(eif_new_type(232, 0x01).id);
							uc1 = (EIF_CHARACTER_8) '0';
							ti4_2 = *(EIF_INTEGER_32 *)(loc20 + RTVA(4768, "count", loc20));
							ui4_1 = (EIF_INTEGER_32) (loc14 - ti4_2);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4737, Dtype(tr1)))(tr1, uc1x, ui4_1x);
							RTNHOOK(111,1);
							loc19 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(112);
							ur1 = RTCCL(loc19);
							ui4_1 = ((EIF_INTEGER_32) 1L);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4827, "insert_string", loc20))(loc20, ur1x, ui4_1x);
						}
						RTHOOK(113);
						uc1 = (EIF_CHARACTER_8) '.';
						ti4_2 = *(EIF_INTEGER_32 *)(loc20 + RTVA(4768, "count", loc20));
						ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 - loc14) + ((EIF_INTEGER_32) 1L));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", loc20))(loc20, uc1x, ui4_1x);
					}
					RTHOOK(114);
					RTDBGAL(0, 0x800004C2, 1,0); /* Result */
					tr1 = RTLN(eif_new_type(1218, 0x00).id);
					ur1 = RTCCL(loc20);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
					RTNHOOK(114,1);
					tr1 = (tr1);
					RTXA(tr1, Result);
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(115);
		RTCT("result_exists", EX_POST);
		if (EIF_TRUE) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(116);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(27);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

/* {VALUE}.divide */
EIF_TYPED_VALUE F1219_10449 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "divide";
	RTEX;
	struct eif_ex_1218 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	struct eif_ex_1218 sloc2;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) sloc2.data;
	struct eif_ex_1218 sloc3;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) sloc3.data;
	struct eif_ex_1218 sloc4;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) sloc4.data;
	struct eif_ex_1218 sloc5;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) sloc5.data;
	struct eif_ex_1218 sloc6;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) sloc6.data;
	struct eif_ex_1218 sloc7;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) sloc7.data;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc23 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc24 = (EIF_CHARACTER_8) 0;
#define arg1 arg1x.it_r
	struct eif_ex_1218 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 16 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	memset (&sloc1.overhead, 0, OVERHEAD + 16);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc2.overhead, 0, OVERHEAD + 16);
	sloc2.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc2.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc3.overhead, 0, OVERHEAD + 16);
	sloc3.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc3.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc4.overhead, 0, OVERHEAD + 16);
	sloc4.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc4.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc5.overhead, 0, OVERHEAD + 16);
	sloc5.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc5.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc6.overhead, 0, OVERHEAD + 16);
	sloc6.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc6.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc7.overhead, 0, OVERHEAD + 16);
	sloc7.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc7.overhead, eif_new_type(1218, 0x00).id);
	RTLI(18);
	RTLR(0,earg1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLR(6,ur1);
	RTLR(7,tr2);
	RTLR(8,loc22);
	RTLR(9,loc19);
	RTLR(10,loc3);
	RTLR(11,loc21);
	RTLR(12,loc20);
	RTLR(13,loc4);
	RTLR(14,loc5);
	RTLR(15,tr3);
	RTLR(16,loc6);
	RTLR(17,loc7);
	RTLIU(18);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_INT32, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_INT32, &loc15);
	RTLU(SK_INT32, &loc16);
	RTLU(SK_INT32, &loc17);
	RTLU(SK_INT32, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_REF, &loc20);
	RTLU(SK_REF, &loc21);
	RTLU(SK_REF, &loc22);
	RTLU(SK_BOOL, &loc23);
	RTLU(SK_CHAR8, &loc24);
	
	RTEAA(l_feature_name, 1218, Current, 24, 1, 16987);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16987);
	RTCC(earg1, 1218, l_feature_name, 1, eif_new_type(1218, 0x00), 0x00);
	RTIV(Current, RTAL);
	wstdinit(loc1,loc1);
	RTLXI(loc1);
	wstdinit(loc2,loc2);
	RTLXI(loc2);
	wstdinit(loc3,loc3);
	RTLXI(loc3);
	wstdinit(loc4,loc4);
	RTLXI(loc4);
	wstdinit(loc5,loc5);
	RTLXI(loc5);
	wstdinit(loc6,loc6);
	RTLXI(loc6);
	wstdinit(loc7,loc7);
	RTLXI(loc7);
	Result= RTLN(eif_new_type(1218, 0x00).id);
	wstdinit(Result,Result);
	RTLXI(Result);
	RTHOOK(1);
	RTDBGAL(1, 0x800004C2, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc1);
	RTHOOK(2);
	RTDBGAL(2, 0x800004C2, 1, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", earg1))(earg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc2);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2120, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTRCL(tr1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", loc1))(loc1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(0, 0x800004C2, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2120, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTRCL(tr1);
		RTXA(tr1, Result);
	} else {
		RTHOOK(5);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,2);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
			tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-');
		}
		if (tb1) {
			RTHOOK(6);
			RTDBGAL(0, 0x800004C2, 1,0); /* Result */
			tr1 = RTLN(eif_new_type(1218, 0x00).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(6,1);
			tr1 = (tr1);
			RTXA(tr1, Result);
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc1))(loc1);
			RTHOOK(8);
			RTDBGAL(0, 0x800004C2, 1,0); /* Result */
			ur1 = RTRCL(loc2);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2126, "quotient", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTRCL(tr2);
			RTXA(tr1, Result);
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", Result))(Result);
		} else {
			RTHOOK(10);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
			if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '-')) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(10,2);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
				tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
			}
			if (tb1) {
				RTHOOK(11);
				RTDBGAL(0, 0x800004C2, 1,0); /* Result */
				tr1 = RTLN(eif_new_type(1218, 0x00).id);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
				RTNHOOK(11,1);
				tr1 = (tr1);
				RTXA(tr1, Result);
				RTHOOK(12);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc2))(loc2);
				RTHOOK(13);
				RTDBGAL(0, 0x800004C2, 1,0); /* Result */
				ur1 = RTRCL(loc2);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2126, "quotient", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr1 = RTRCL(tr2);
				RTXA(tr1, Result);
				RTHOOK(14);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", Result))(Result);
			} else {
				RTHOOK(15);
				tb1 = '\0';
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(15,1);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(15,2);
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
					tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
				}
				if (tb1) {
					RTHOOK(16);
					RTDBGAL(0, 0x800004C2, 1,0); /* Result */
					tr1 = RTLN(eif_new_type(1218, 0x00).id);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
					RTNHOOK(16,1);
					tr1 = (tr1);
					RTXA(tr1, Result);
					RTHOOK(17);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc1))(loc1);
					RTHOOK(18);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", loc2))(loc2);
					RTHOOK(19);
					RTDBGAL(0, 0x800004C2, 1,0); /* Result */
					ur1 = RTRCL(loc2);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2126, "quotient", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr1 = RTRCL(tr2);
					RTXA(tr1, Result);
				} else {
					RTHOOK(20);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(20,1);
					uc1 = (EIF_CHARACTER_8) '.';
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4747, "index_of", tr1))(tr1, uc1x, ui4_1x)).it_i4);
					loc8 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(21);
					RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(21,1);
					uc1 = (EIF_CHARACTER_8) '.';
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4747, "index_of", tr1))(tr1, uc1x, ui4_1x)).it_i4);
					loc9 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(22);
					RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
					loc10 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(23);
					RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
					loc11 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(24);
					if ((EIF_BOOLEAN) (loc8 > ((EIF_INTEGER_32) 0L))) {
						RTHOOK(25);
						RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(25,1);
						ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
						loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - loc8);
						RTHOOK(26);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(26,1);
						ui4_1 = loc8;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4797, "remove", tr1))(tr1, ui4_1x);
						RTHOOK(27);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7962, "normalize", loc1))(loc1);
					}
					RTHOOK(28);
					if ((EIF_BOOLEAN) (loc9 > ((EIF_INTEGER_32) 0L))) {
						RTHOOK(29);
						RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(29,1);
						ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
						loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - loc9);
						RTHOOK(30);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(30,1);
						ui4_1 = loc9;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4797, "remove", tr1))(tr1, ui4_1x);
						RTHOOK(31);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7962, "normalize", loc2))(loc2);
					}
					RTHOOK(32);
					RTDBGAL(22, 0xF80000E8, 0, 0); /* loc22 */
					loc22 = (EIF_REFERENCE) NULL;
					RTHOOK(33);
					if ((EIF_BOOLEAN) (loc10 > loc11)) {
						RTHOOK(34);
						RTDBGAL(22, 0xF80000E8, 0, 0); /* loc22 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc22 = (EIF_REFERENCE) RTCCL(tr1);
					} else {
						RTHOOK(35);
						if ((EIF_BOOLEAN) (loc11 > loc10)) {
							RTHOOK(36);
							RTDBGAL(22, 0xF80000E8, 0, 0); /* loc22 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc22 = (EIF_REFERENCE) RTCCL(tr1);
						}
					}
					RTHOOK(37);
					if ((EIF_BOOLEAN)(loc22 != NULL)) {
						RTHOOK(38);
						RTDBGAL(19, 0xF80000E8, 0, 0); /* loc19 */
						tr1 = RTLN(eif_new_type(232, 0x01).id);
						uc1 = (EIF_CHARACTER_8) '0';
						ti4_1 = eif_abs_int32 ((EIF_INTEGER_32) (loc10 - loc11));
						ui4_1 = ti4_1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4737, Dtype(tr1)))(tr1, uc1x, ui4_1x);
						RTNHOOK(38,1);
						loc19 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(39);
						ur1 = RTCCL(loc19);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", loc22))(loc22, ur1x);
					}
					RTHOOK(40);
					RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
					loc12 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(41);
					RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
					loc13 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(42);
					RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
					loc14 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(43);
					RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(43,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					loc15 = (EIF_INTEGER_32) ti4_1;
					for (;;) {
						RTHOOK(44);
						if ((EIF_BOOLEAN) (loc15 < ((EIF_INTEGER_32) 1L))) break;
						RTHOOK(45);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(45,1);
						ui4_1 = loc15;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
						if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '0')) {
							RTHOOK(46);
							RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
							loc12++;
						} else {
							RTHOOK(47);
							RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
							loc15 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
						RTHOOK(48);
						RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
						loc15--;
					}
					RTHOOK(49);
					RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(49,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					loc15 = (EIF_INTEGER_32) ti4_1;
					for (;;) {
						RTHOOK(50);
						if ((EIF_BOOLEAN) (loc15 < ((EIF_INTEGER_32) 1L))) break;
						RTHOOK(51);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(51,1);
						ui4_1 = loc15;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
						if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '0')) {
							RTHOOK(52);
							RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
							loc13++;
						} else {
							RTHOOK(53);
							RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
							loc15 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
						RTHOOK(54);
						RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
						loc15--;
					}
					RTHOOK(55);
					if ((EIF_BOOLEAN) (loc12 < loc13)) {
						RTHOOK(56);
						RTDBGAL(19, 0xF80000E8, 0, 0); /* loc19 */
						tr1 = RTLN(eif_new_type(232, 0x01).id);
						uc1 = (EIF_CHARACTER_8) '0';
						ui4_1 = (EIF_INTEGER_32) (loc13 - loc12);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4737, Dtype(tr1)))(tr1, uc1x, ui4_1x);
						RTNHOOK(56,1);
						loc19 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(57);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(57,1);
						ur1 = RTCCL(loc19);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", tr1))(tr1, ur1x);
						RTHOOK(58);
						RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
						loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc14 + loc13) - loc12);
						RTHOOK(59);
						RTDBGAL(12, 0x10000000, 1, 0); /* loc12 */
						loc12 = (EIF_INTEGER_32) loc13;
					}
					RTHOOK(60);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7932, dtype));
					if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc12 - loc13) < (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
						RTHOOK(61);
						RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7932, dtype));
						loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc14 + ti4_1) + ((EIF_INTEGER_32) 1L)) - (EIF_INTEGER_32) (loc12 - loc13));
						RTHOOK(62);
						RTDBGAL(19, 0xF80000E8, 0, 0); /* loc19 */
						tr1 = RTLN(eif_new_type(232, 0x01).id);
						uc1 = (EIF_CHARACTER_8) '0';
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7932, dtype));
						ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) - (EIF_INTEGER_32) (loc12 - loc13));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4737, Dtype(tr1)))(tr1, uc1x, ui4_1x);
						RTNHOOK(62,1);
						loc19 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(63);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(63,1);
						ur1 = RTCCL(loc19);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", tr1))(tr1, ur1x);
					}
					RTHOOK(64);
					ur1 = RTRCL(loc2);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1384, "is_less", loc1))(loc1, ur1x)).it_b);
					if (tb1) {
						RTHOOK(65);
						RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(65,1);
						ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(65,2);
						ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
						loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc14 + ti4_1) - ti4_2) + ((EIF_INTEGER_32) 1L));
						RTHOOK(66);
						RTDBGAL(19, 0xF80000E8, 0, 0); /* loc19 */
						tr1 = RTLN(eif_new_type(232, 0x01).id);
						uc1 = (EIF_CHARACTER_8) '0';
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(66,1);
						ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(4768, "count", tr2));
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(66,2);
						ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(4768, "count", tr2));
						ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4737, Dtype(tr1)))(tr1, uc1x, ui4_1x);
						RTNHOOK(66,3);
						loc19 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(67);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(67,1);
						ur1 = RTCCL(loc19);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", tr1))(tr1, ur1x);
					}
					RTHOOK(68);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(68,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(68,2);
					ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7932, dtype));
					if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 - ti4_2) < ti4_3)) {
						RTHOOK(69);
						RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7932, dtype));
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(69,1);
						ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(69,2);
						ti4_3 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
						loc14 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc14 + ti4_1) - (EIF_INTEGER_32) (ti4_2 - ti4_3));
						RTHOOK(70);
						RTDBGAL(19, 0xF80000E8, 0, 0); /* loc19 */
						tr1 = RTLN(eif_new_type(232, 0x01).id);
						uc1 = (EIF_CHARACTER_8) '0';
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7932, dtype));
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(70,1);
						ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(4768, "count", tr2));
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(70,2);
						ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVA(4768, "count", tr2));
						ui4_1 = (EIF_INTEGER_32) (ti4_1 - (EIF_INTEGER_32) (ti4_2 - ti4_3));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4737, Dtype(tr1)))(tr1, uc1x, ui4_1x);
						RTNHOOK(70,3);
						loc19 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(71);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(71,1);
						ur1 = RTCCL(loc19);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", tr1))(tr1, ur1x);
					}
					RTHOOK(72);
					RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(72,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					loc16 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
					RTHOOK(73);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(73,1);
					ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(73,2);
					ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
					if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
						RTHOOK(74);
						RTDBGAL(23, 0x04000000, 1, 0); /* loc23 */
						loc23 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						for (;;) {
							RTHOOK(75);
							tb1 = '\01';
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(75,1);
							ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
							if (!(EIF_BOOLEAN) (loc16 > ti4_1)) {
								tb1 = loc23;
							}
							if (tb1) break;
							RTHOOK(76);
							RTDBGAL(19, 0xF80000E8, 0, 0); /* loc19 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(76,1);
							ui4_1 = ((EIF_INTEGER_32) 1L);
							ui4_2 = (EIF_INTEGER_32) (loc16 - ((EIF_INTEGER_32) 1L));
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4722, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc19 = (EIF_REFERENCE) RTCCL(tr2);
							RTHOOK(77);
							RTDBGAL(3, 0x800004C2, 1, 0); /* loc3 */
							tr1 = RTLN(eif_new_type(1218, 0x00).id);
							ur1 = RTCCL(loc19);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
							RTNHOOK(77,1);
							tr1 = (tr1);
							RTXA(tr1, loc3);
							RTHOOK(78);
							ur1 = RTRCL(loc2);
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1387, "is_greater_equal", loc3))(loc3, ur1x)).it_b);
							if (tb2) {
								RTHOOK(79);
								RTDBGAL(23, 0x04000000, 1, 0); /* loc23 */
								loc23 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							} else {
								RTHOOK(80);
								RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
								loc16++;
							}
						}
					}
					RTHOOK(81);
					RTDBGAL(21, 0xF80000E8, 0, 0); /* loc21 */
					tr1 = RTMS_EX_H("",0,0);
					loc21 = (EIF_REFERENCE) tr1;
					RTHOOK(82);
					RTDBGAL(20, 0xF80000E8, 0, 0); /* loc20 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc21))(loc21)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc20 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(83);
					RTDBGAL(4, 0x800004C2, 1, 0); /* loc4 */
					tr1 = RTLN(eif_new_type(1218, 0x00).id);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
					RTNHOOK(83,1);
					tr1 = (tr1);
					RTXA(tr1, loc4);
					RTHOOK(84);
					RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
					loc17 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc16 - ((EIF_INTEGER_32) 1L));
					for (;;) {
						RTHOOK(85);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(85,1);
						ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
						if ((EIF_BOOLEAN) (loc17 > ti4_1)) break;
						RTHOOK(86);
						if ((EIF_BOOLEAN)(loc17 == (EIF_INTEGER_32) (loc16 - ((EIF_INTEGER_32) 1L)))) {
							RTHOOK(87);
							RTDBGAL(5, 0x800004C2, 1, 0); /* loc5 */
							tr1 = RTLN(eif_new_type(1218, 0x00).id);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(87,1);
							ui4_1 = ((EIF_INTEGER_32) 1L);
							ui4_2 = loc17;
							tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4722, "substring", tr2))(tr2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr3);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
							RTNHOOK(87,2);
							tr1 = (tr1);
							RTXA(tr1, loc5);
						} else {
							RTHOOK(88);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(88,1);
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(88,2);
							ui4_1 = loc17;
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr2))(tr2, ui4_1x)).it_c1);
							uc1 = tc1;
							tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(88,3);
							ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(4768, "count", tr2));
							ui4_1 = (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", tr1))(tr1, uc1x, ui4_1x);
							RTHOOK(89);
							RTDBGAL(5, 0x800004C2, 1, 0); /* loc5 */
							tr1 = RTLN(eif_new_type(1218, 0x00).id);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
							RTNHOOK(89,1);
							tr1 = (tr1);
							RTXA(tr1, loc5);
							RTHOOK(90);
							RTDBGAL(5, 0x800004C2, 1, 0); /* loc5 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							tr1 = RTRCL(tr1);
							RTXA(tr1, loc5);
						}
						RTHOOK(91);
						RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
						loc18 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						RTHOOK(92);
						RTDBGAL(6, 0x800004C2, 1, 0); /* loc6 */
						tr1 = RTLN(eif_new_type(1218, 0x00).id);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
						RTNHOOK(92,1);
						tr1 = (tr1);
						RTXA(tr1, loc6);
						RTHOOK(93);
						RTDBGAL(23, 0x04000000, 1, 0); /* loc23 */
						loc23 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						for (;;) {
							RTHOOK(94);
							if (loc23) break;
							RTHOOK(95);
							RTDBGAL(6, 0x800004C2, 1, 0); /* loc6 */
							ur1 = RTRCL(loc2);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2123, "plus", loc6))(loc6, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							tr1 = RTRCL(tr1);
							RTXA(tr1, loc6);
							RTHOOK(96);
							ur1 = RTRCL(loc5);
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1386, "is_greater", loc6))(loc6, ur1x)).it_b);
							if (tb2) {
								RTHOOK(97);
								RTDBGAL(23, 0x04000000, 1, 0); /* loc23 */
								loc23 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							} else {
								RTHOOK(98);
								RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
								loc18++;
							}
						}
						RTHOOK(99);
						RTDBGAL(24, 0x08000000, 1, 0); /* loc24 */
						ui4_1 = loc18;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7964, dtype))(Current, ui4_1x)).it_c1);
						loc24 = (EIF_CHARACTER_8) tc1;
						RTHOOK(100);
						uc1 = loc24;
						ti4_2 = *(EIF_INTEGER_32 *)(loc20 + RTVA(4768, "count", loc20));
						ui4_1 = (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", loc20))(loc20, uc1x, ui4_1x);
						RTHOOK(101);
						RTDBGAL(7, 0x800004C2, 1, 0); /* loc7 */
						tr1 = RTLN(eif_new_type(1218, 0x00).id);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
						RTNHOOK(101,1);
						tr1 = (tr1);
						RTXA(tr1, loc7);
						RTHOOK(102);
						RTDBGAL(19, 0xF80000E8, 0, 0); /* loc19 */
						tr1 = RTLN(eif_new_type(232, 0x01).id);
						uc1 = loc24;
						ui4_1 = ((EIF_INTEGER_32) 1L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4737, Dtype(tr1)))(tr1, uc1x, ui4_1x);
						RTNHOOK(102,1);
						loc19 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(103);
						RTDBGAL(3, 0x800004C2, 1, 0); /* loc3 */
						tr1 = RTLN(eif_new_type(1218, 0x00).id);
						ur1 = RTCCL(loc19);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
						RTNHOOK(103,1);
						tr1 = (tr1);
						RTXA(tr1, loc3);
						RTHOOK(104);
						RTDBGAL(7, 0x800004C2, 1, 0); /* loc7 */
						ur1 = RTRCL(loc2);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2125, "product", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTRCL(tr1);
						RTXA(tr1, loc7);
						RTHOOK(105);
						RTDBGAL(4, 0x800004C2, 1, 0); /* loc4 */
						ur1 = RTRCL(loc7);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2124, "minus", loc5))(loc5, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr1 = RTRCL(tr1);
						RTXA(tr1, loc4);
						RTHOOK(106);
						RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
						loc17++;
					}
					RTHOOK(107);
					if ((EIF_BOOLEAN) (loc14 > ((EIF_INTEGER_32) 0L))) {
						RTHOOK(108);
						ti4_2 = *(EIF_INTEGER_32 *)(loc20 + RTVA(4768, "count", loc20));
						if ((EIF_BOOLEAN) (loc14 > ti4_2)) {
							RTHOOK(109);
							RTDBGAL(19, 0xF80000E8, 0, 0); /* loc19 */
							tr1 = RTLN(eif_new_type(232, 0x01).id);
							uc1 = (EIF_CHARACTER_8) '0';
							ti4_2 = *(EIF_INTEGER_32 *)(loc20 + RTVA(4768, "count", loc20));
							ui4_1 = (EIF_INTEGER_32) (loc14 - ti4_2);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4737, Dtype(tr1)))(tr1, uc1x, ui4_1x);
							RTNHOOK(109,1);
							loc19 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(110);
							ur1 = RTCCL(loc19);
							ui4_1 = ((EIF_INTEGER_32) 1L);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4827, "insert_string", loc20))(loc20, ur1x, ui4_1x);
						}
						RTHOOK(111);
						uc1 = (EIF_CHARACTER_8) '.';
						ti4_2 = *(EIF_INTEGER_32 *)(loc20 + RTVA(4768, "count", loc20));
						ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 - loc14) + ((EIF_INTEGER_32) 1L));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", loc20))(loc20, uc1x, ui4_1x);
					}
					RTHOOK(112);
					RTDBGAL(0, 0x800004C2, 1,0); /* Result */
					tr1 = RTLN(eif_new_type(1218, 0x00).id);
					ur1 = RTCCL(loc20);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
					RTNHOOK(112,1);
					tr1 = (tr1);
					RTXA(tr1, Result);
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(113);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(27);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

/* {VALUE}.opposite */
EIF_TYPED_VALUE F1219_10450 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "opposite";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Result);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 0, 16988);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16988);
	RTIV(Current, RTAL);
	Result= RTLN(eif_new_type(1218, 0x00).id);
	wstdinit(Result,Result);
	RTLXI(Result);
	RTHOOK(1);
	RTDBGAL(0, 0x800004C2, 1,0); /* Result */
	tr1 = RTLN(eif_new_type(1218, 0x00).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	tr1 = (tr1);
	RTXA(tr1, Result);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7951, "negate", Result))(Result);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if (EIF_TRUE) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
}

/* {VALUE}.identity */
EIF_TYPED_VALUE F1219_10451 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "identity";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Result);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 0, 16989);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16989);
	RTIV(Current, RTAL);
	Result= RTLN(eif_new_type(1218, 0x00).id);
	wstdinit(Result,Result);
	RTLXI(Result);
	RTHOOK(1);
	RTDBGAL(0, 0x800004C2, 1,0); /* Result */
	tr1 = RTLN(eif_new_type(1218, 0x00).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	tr1 = (tr1);
	RTXA(tr1, Result);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
		if (EIF_TRUE) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
}

/* {VALUE}.zero */
EIF_TYPED_VALUE F1219_10452 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "zero";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Result);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 0, 16990);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16990);
	RTIV(Current, RTAL);
	Result= RTLN(eif_new_type(1218, 0x00).id);
	wstdinit(Result,Result);
	RTLXI(Result);
	RTHOOK(1);
	RTDBGAL(0, 0x800004C2, 1,0); /* Result */
	tr1 = RTLN(eif_new_type(1218, 0x00).id);
	tr2 = RTMS_EX_H("0",1,48);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	tr1 = (tr1);
	RTXA(tr1, Result);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
		if (EIF_TRUE) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
}

/* {VALUE}.one */
EIF_TYPED_VALUE F1219_10453 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "one";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Result);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 0, 16991);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16991);
	RTIV(Current, RTAL);
	Result= RTLN(eif_new_type(1218, 0x00).id);
	wstdinit(Result,Result);
	RTLXI(Result);
	RTHOOK(1);
	RTDBGAL(0, 0x800004C2, 1,0); /* Result */
	tr1 = RTLN(eif_new_type(1218, 0x00).id);
	tr2 = RTMS_EX_H("1",1,49);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	tr1 = (tr1);
	RTXA(tr1, Result);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
		if (EIF_TRUE) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
}

/* {VALUE}.divisible */
EIF_TYPED_VALUE F1219_10454 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "divisible";
	RTEX;
#define arg1 arg1x.it_r
	struct eif_ex_1218 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 16 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	RTLI(4);
	RTLR(0,earg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 1, 16992);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16992);
	RTCC(earg1, 1218, l_feature_name, 1, eif_new_type(1218, 0x00), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE(EIF_TRUE, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2120, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTRCL(tr1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", earg1))(earg1, ur1x)).it_b);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {VALUE}.exponentiable */
EIF_TYPED_VALUE F1219_10455 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "exponentiable";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 1, 16993);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16993);
	RTCC(arg1, 1218, l_feature_name, 1, eif_new_type(141, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {VALUE}.is_natural */
EIF_TYPED_VALUE F1219_10456 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_natural";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 0, 16994);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16994);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7944, dtype))(Current)).it_b);
	if (tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2120, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTRCL(tr1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1387, "is_greater_equal", Current))(Current, ur1x)).it_b);
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
}

/* {VALUE}.is_natural1 */
EIF_TYPED_VALUE F1219_10457 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_natural1";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 0, 16995);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16995);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7944, dtype))(Current)).it_b);
	if (tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2119, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTRCL(tr1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1387, "is_greater_equal", Current))(Current, ur1x)).it_b);
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
}

/* {VALUE}.is_integer */
EIF_TYPED_VALUE F1219_10458 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_integer";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 0, 16996);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16996);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	uc1 = (EIF_CHARACTER_8) '.';
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4747, "index_of", tr1))(tr1, uc1x, ui4_1x)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef uc1
}

/* {VALUE}.set_division_precision */
void F1219_10459 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_division_precision";
	RTEX;
#define arg1 arg1x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 1, 16997);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16997);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("greater_than_zero", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7932, 0x10000000, 1); /* divisiondecimalprecision_ */
	*(EIF_INTEGER_32 *)(Current + RTWA(7932, dtype)) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {VALUE}.as_double */
EIF_TYPED_VALUE F1219_10460 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_double";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 0, 16998);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16998);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7947, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4717, "to_double", tr1))(tr1)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef up1
}

/* {VALUE}.precise_out */
EIF_TYPED_VALUE F1219_10461 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "precise_out";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 0, 16999);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 16999);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
}

/* {VALUE}.out */
EIF_TYPED_VALUE F1219_10462 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "out";
	RTEX;
	struct eif_ex_1218 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + 16);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(1218, 0x00).id);
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc6);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLR(6,Result);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 1218, Current, 6, 0, 17000);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17000);
	RTIV(Current, RTAL);
	wstdinit(loc1,loc1);
	RTLXI(loc1);
	RTHOOK(1);
	RTDBGAL(1, 0x800004C2, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, loc1);
	RTHOOK(2);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTHOOK(3);
	ui4_1 = loc5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7950, "round", loc1))(loc1, ui4_1x);
	RTHOOK(4);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	uc1 = (EIF_CHARACTER_8) '.';
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4747, "index_of", tr1))(tr1, uc1x, ui4_1x)).it_i4);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		uc1 = (EIF_CHARACTER_8) '.';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", tr1))(tr1, uc1x);
		RTHOOK(7);
		RTDBGAL(6, 0xF80000E8, 0, 0); /* loc6 */
		tr1 = RTLN(eif_new_type(232, 0x01).id);
		uc1 = (EIF_CHARACTER_8) '0';
		ui4_1 = loc5;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4737, Dtype(tr1)))(tr1, uc1x, ui4_1x);
		RTNHOOK(7,1);
		loc6 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ur1 = RTCCL(loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4823, "append_string", tr1))(tr1, ur1x);
	} else {
		RTHOOK(9);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - loc4);
		RTHOOK(10);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - loc2);
		RTHOOK(11);
		if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(12);
			RTDBGAL(6, 0xF80000E8, 0, 0); /* loc6 */
			tr1 = RTLN(eif_new_type(232, 0x01).id);
			uc1 = (EIF_CHARACTER_8) '0';
			ui4_1 = loc3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4737, Dtype(tr1)))(tr1, uc1x, ui4_1x);
			RTNHOOK(12,1);
			loc6 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(13);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(13,1);
			ur1 = RTCCL(loc6);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4823, "append_string", tr1))(tr1, ur1x);
		}
	}
	RTHOOK(14);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(14,1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
}

/* {VALUE}.round_to */
EIF_TYPED_VALUE F1219_10463 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "round_to";
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
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 1, 17001);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17001);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("digits >= 0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result= RTLN(eif_new_type(1218, 0x00).id);
	wstdinit(Result,Result);
	RTLXI(Result);
	RTHOOK(2);
	RTDBGAL(0, 0x800004C2, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTRCL(tr1);
	RTXA(tr1, Result);
	RTHOOK(3);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7950, "round", Result))(Result, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
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

/* {VALUE}.precise_out_to */
EIF_TYPED_VALUE F1219_10464 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "precise_out_to";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1218, Current, 1, 1, 17002);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17002);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("digits >= 0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7947, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	uc1 = (EIF_CHARACTER_8) '.';
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4747, "index_of", Result))(Result, uc1x, ui4_1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32) (loc1 + arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4722, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

/* {VALUE}.round */
void F1219_10465 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "round";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	struct eif_ex_1218 sloc5;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) sloc5.data;
	struct eif_ex_1218 sloc6;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) sloc6.data;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	memset (&sloc5.overhead, 0, OVERHEAD + 16);
	sloc5.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc5.overhead, eif_new_type(1218, 0x00).id);
	memset (&sloc6.overhead, 0, OVERHEAD + 16);
	sloc6.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc6.overhead, eif_new_type(1218, 0x00).id);
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,ur1);
	RTLR(4,loc5);
	RTLR(5,loc6);
	RTLR(6,loc4);
	RTLR(7,tr2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 1218, Current, 6, 1, 17003);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17003);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("digits >= 0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	wstdinit(loc5,loc5);
	RTLXI(loc5);
	wstdinit(loc6,loc6);
	RTLXI(loc6);
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	uc1 = (EIF_CHARACTER_8) '.';
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4747, "index_of", tr1))(tr1, uc1x, ui4_1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAL(2, 0x04000000, 1, 0); /* loc2 */
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7951, dtype))(Current);
			RTHOOK(7);
			RTDBGAL(2, 0x04000000, 1, 0); /* loc2 */
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTHOOK(8);
		RTDBGAL(3, 0xF80000E8, 0, 0); /* loc3 */
		tr1 = RTLN(eif_new_type(232, 0x01).id);
		uc1 = (EIF_CHARACTER_8) '0';
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4737, Dtype(tr1)))(tr1, uc1x, ui4_1x);
		RTNHOOK(8,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(9);
		tr1 = RTMS_EX_H("5",1,53);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", loc3))(loc3, ur1x);
		RTHOOK(10);
		tr1 = RTMS_EX_H("0.",2,12334);
		ur1 = tr1;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4827, "insert_string", loc3))(loc3, ur1x, ui4_1x);
		RTHOOK(11);
		RTDBGAL(5, 0x800004C2, 1, 0); /* loc5 */
		tr1 = RTLN(eif_new_type(1218, 0x00).id);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(11,1);
		tr1 = (tr1);
		RTXA(tr1, loc5);
		RTHOOK(12);
		RTDBGAL(6, 0x800004C2, 1, 0); /* loc6 */
		ur1 = RTRCL(loc5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2123, "plus", Current))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTRCL(tr1);
		RTXA(tr1, loc6);
		RTHOOK(13);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		uc1 = (EIF_CHARACTER_8) '.';
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4747, "index_of", tr1))(tr1, uc1x, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(14);
		if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(15);
			RTDBGAL(4, 0xF80000E8, 0, 0); /* loc4 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(15,1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = (EIF_INTEGER_32) (loc1 + arg1);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4722, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) RTCCL(tr2);
		} else {
			RTHOOK(16);
			RTDBGAL(4, 0xF80000E8, 0, 0); /* loc4 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7947, "precise_out", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
		}
		RTHOOK(17);
		RTDBGAA(Current, dtype, 7931, 0xF80000E8, 0); /* s_ */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(7931, dtype)) = (EIF_REFERENCE) tr1;
		RTHOOK(18);
		if (loc2) {
			RTHOOK(19);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7951, dtype))(Current);
		}
	}
	RTHOOK(20);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7962, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

/* {VALUE}.negate */
void F1219_10466 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "negate";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1218, Current, 1, 0, 17004);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17004);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
	if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
		RTHOOK(2);
		RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(2,2);
		ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(4768, "count", tr2));
		ui4_2 = ti4_1;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4722, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(3);
		RTDBGAA(Current, dtype, 7931, 0xF80000E8, 0); /* s_ */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(7931, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		uc1 = (EIF_CHARACTER_8) '-';
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", tr1))(tr1, uc1x, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
#undef uc1
}

/* {VALUE}.epsilon_singleton */
RTOID (F1219_10467)
EIF_TYPED_VALUE F1219_10467 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "epsilon_singleton";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1219_10467);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 0, 17005);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17005);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80003CF, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(975, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

/* {VALUE}.set_epsilon */
void F1219_10468 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_epsilon";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 1, 17006);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17006);
	RTCC(arg1, 1218, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6240, "set_epsilon", tr1))(tr1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {VALUE}.is_imprecise_equal */
EIF_TYPED_VALUE F1219_10469 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_imprecise_equal";
	RTEX;
#define arg1 arg1x.it_r
	struct eif_ex_1218 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 16 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	RTLI(6);
	RTLR(0,earg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 1, 17007);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17007);
	RTCC(earg1, 1218, l_feature_name, 1, eif_new_type(1218, 0x00), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6239, "epsilon", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = RTLN(eif_new_type(1218, 0x00).id);
	tr3 = RTMS_EX_H("0.0",3,3157552);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,2);
	if (RTEQ(tr2, tr1)) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) RTEQ(Current, earg1);
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		ur1 = RTRCL(earg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2124, "minus", Current))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7960, "absolute", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6239, "epsilon", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTRCL(tr3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1385, "is_less_equal", tr2))(tr2, ur1x)).it_b);
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {VALUE}.is_imprecise_equal_negation */
EIF_TYPED_VALUE F1219_10470 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_imprecise_equal_negation";
	RTEX;
#define arg1 arg1x.it_r
	struct eif_ex_1218 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 16 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	RTLI(6);
	RTLR(0,earg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 1, 17008);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17008);
	RTCC(earg1, 1218, l_feature_name, 1, eif_new_type(1218, 0x00), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6239, "epsilon", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = RTLN(eif_new_type(1218, 0x00).id);
	tr3 = RTMS_EX_H("0.0",3,3157552);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,2);
	if (RTEQ(tr2, tr1)) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) !RTEQ(Current, earg1);
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		ur1 = RTRCL(earg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7954, "is_imprecise_equal", Current))(Current, ur1x)).it_b);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {VALUE}.is_imprecise_less */
EIF_TYPED_VALUE F1219_10471 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_imprecise_less";
	RTEX;
#define arg1 arg1x.it_r
	struct eif_ex_1218 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 16 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	RTLI(6);
	RTLR(0,earg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 1, 17009);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17009);
	RTCC(earg1, 1218, l_feature_name, 1, eif_new_type(1218, 0x00), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6239, "epsilon", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = RTLN(eif_new_type(1218, 0x00).id);
	tr3 = RTMS_EX_H("0.0",3,3157552);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,2);
	if (RTEQ(tr2, tr1)) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		ur1 = RTRCL(earg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1384, "is_less", Current))(Current, ur1x)).it_b);
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6239, "epsilon", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTRCL(tr2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2124, "minus", earg1))(earg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTRCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1384, "is_less", Current))(Current, ur1x)).it_b);
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {VALUE}.is_imprecise_less_equal */
EIF_TYPED_VALUE F1219_10472 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_imprecise_less_equal";
	RTEX;
#define arg1 arg1x.it_r
	struct eif_ex_1218 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 16 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	RTLI(6);
	RTLR(0,earg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 1, 17010);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17010);
	RTCC(earg1, 1218, l_feature_name, 1, eif_new_type(1218, 0x00), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6239, "epsilon", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = RTLN(eif_new_type(1218, 0x00).id);
	tr3 = RTMS_EX_H("0.0",3,3157552);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,2);
	if (RTEQ(tr2, tr1)) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		ur1 = RTRCL(earg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1385, "is_less_equal", Current))(Current, ur1x)).it_b);
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tb1 = '\01';
		ur1 = RTRCL(earg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7954, "is_imprecise_equal", Current))(Current, ur1x)).it_b);
		if (!(tb2)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(3,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6239, "epsilon", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTRCL(tr2);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2124, "minus", earg1))(earg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTRCL(tr1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1384, "is_less", Current))(Current, ur1x)).it_b);
			tb1 = tb2;
		}
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {VALUE}.is_imprecise_greater */
EIF_TYPED_VALUE F1219_10473 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_imprecise_greater";
	RTEX;
#define arg1 arg1x.it_r
	struct eif_ex_1218 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 16 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	RTLI(6);
	RTLR(0,earg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 1, 17011);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17011);
	RTCC(earg1, 1218, l_feature_name, 1, eif_new_type(1218, 0x00), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6239, "epsilon", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = RTLN(eif_new_type(1218, 0x00).id);
	tr3 = RTMS_EX_H("0.0",3,3157552);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,2);
	if (RTEQ(tr2, tr1)) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		ur1 = RTRCL(earg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1386, "is_greater", Current))(Current, ur1x)).it_b);
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6239, "epsilon", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTRCL(tr2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2123, "plus", earg1))(earg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTRCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1386, "is_greater", Current))(Current, ur1x)).it_b);
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {VALUE}.is_imprecise_greater_equal */
EIF_TYPED_VALUE F1219_10474 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_imprecise_greater_equal";
	RTEX;
#define arg1 arg1x.it_r
	struct eif_ex_1218 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 16 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	RTLI(6);
	RTLR(0,earg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 1, 17012);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17012);
	RTCC(earg1, 1218, l_feature_name, 1, eif_new_type(1218, 0x00), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6239, "epsilon", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = RTLN(eif_new_type(1218, 0x00).id);
	tr3 = RTMS_EX_H("0.0",3,3157552);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7936, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,2);
	if (RTEQ(tr2, tr1)) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		ur1 = RTRCL(earg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1387, "is_greater_equal", Current))(Current, ur1x)).it_b);
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tb1 = '\01';
		ur1 = RTRCL(earg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7954, "is_imprecise_equal", Current))(Current, ur1x)).it_b);
		if (!(tb2)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7952, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(3,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6239, "epsilon", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTRCL(tr2);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2123, "plus", earg1))(earg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTRCL(tr1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1386, "is_greater", Current))(Current, ur1x)).it_b);
			tb1 = tb2;
		}
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {VALUE}.absolute */
EIF_TYPED_VALUE F1219_10475 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "absolute";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1218, Current, 0, 0, 17013);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17013);
	RTIV(Current, RTAL);
	Result= RTLN(eif_new_type(1218, 0x00).id);
	wstdinit(Result,Result);
	RTLXI(Result);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2120, "zero", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTRCL(tr1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1387, "is_greater_equal", Current))(Current, ur1x)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0x800004C2, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTRCL(tr1);
		RTXA(tr1, Result);
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x800004C2, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2128, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7935, "clone_me", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr1 = RTRCL(tr2);
		RTXA(tr1, Result);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("Result >= Result.zero", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2120, "zero", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTRCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1387, "is_greater_equal", Result))(Result, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
}

/* {VALUE}.ensurevalid */
EIF_TYPED_VALUE F1219_10476 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "ensurevalid";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 1218, Current, 2, 1, 17014);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17014);
	RTCC(arg1, 1218, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(4);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(5);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
		if ((EIF_BOOLEAN) (loc2 > ti4_1)) break;
		RTHOOK(7);
		ui4_1 = loc2;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", arg1))(arg1, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 1L))) {
				RTHOOK(9);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(10);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
			}
		} else {
			RTHOOK(11);
			ui4_1 = loc2;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", arg1))(arg1, ui4_1x)).it_c1);
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '.')) {
				RTHOOK(12);
				tb1 = '\01';
				ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
				if (!(EIF_BOOLEAN)(loc2 == ti4_2)) {
					tb1 = loc1;
				}
				if (tb1) {
					RTHOOK(13);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(14);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
				}
				RTHOOK(15);
				RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(16);
				ui4_1 = loc2;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", arg1))(arg1, ui4_1x)).it_c1);
				RTNHOOK(16,1);
				tb1 = EIF_TEST(isdigit(tc1));
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(17);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(18);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
				}
			}
		}
		RTHOOK(19);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {VALUE}.normalize */
void F1219_10477 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "normalize";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc11);
	RTLR(3,loc13);
	RTLR(4,loc9);
	RTLR(5,tr2);
	RTLR(6,loc10);
	RTLR(7,loc12);
	RTLR(8,ur1);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_BOOL, &loc6);
	RTLU(SK_BOOL, &loc7);
	RTLU(SK_BOOL, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	
	RTEAA(l_feature_name, 1218, Current, 13, 0, 17015);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17015);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_empty", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", tr1))(tr1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(11, 0xF80000E8, 0, 0); /* loc11 */
	tr1 = RTMS_EX_H("",0,0);
	loc11 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAL(13, 0xF80000E8, 0, 0); /* loc13 */
	tr1 = RTMS_EX_H("0",1,48);
	loc13 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAL(6, 0x04000000, 1, 0); /* loc6 */
	loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(5);
	RTDBGAL(7, 0x04000000, 1, 0); /* loc7 */
	loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(6);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
			RTHOOK(9);
			RTDBGAL(6, 0x04000000, 1, 0); /* loc6 */
			loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '.')) {
				RTHOOK(11);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 1L)) || loc6)) {
					RTHOOK(12);
					RTDBGAL(7, 0x04000000, 1, 0); /* loc7 */
					loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			}
		}
		RTHOOK(13);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTHOOK(14);
	if (loc7) {
		RTHOOK(15);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(16);
		if (loc6) {
			RTHOOK(17);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		}
		RTHOOK(18);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(18,1);
		uc1 = (EIF_CHARACTER_8) '0';
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", tr1))(tr1, uc1x, ui4_1x);
	}
	RTHOOK(19);
	if (loc6) {
		RTHOOK(20);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7951, dtype))(Current);
	}
	RTHOOK(21);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(21,1);
	uc1 = (EIF_CHARACTER_8) '.';
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4747, "index_of", tr1))(tr1, uc1x, ui4_1x)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(22);
	if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(23);
		RTDBGAL(8, 0x04000000, 1, 0); /* loc8 */
		loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(24);
		RTDBGAL(9, 0xF80000E8, 0, 0); /* loc9 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(24,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc9 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(25);
		RTDBGAL(10, 0xF80000E8, 0, 0); /* loc10 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc10 = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(26);
		RTDBGAL(8, 0x04000000, 1, 0); /* loc8 */
		loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(27);
		RTDBGAL(12, 0xF80000E8, 0, 0); /* loc12 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(27,1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4722, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc12 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(28);
		RTDBGAL(9, 0xF80000E8, 0, 0); /* loc9 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc12))(loc12)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc9 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(29);
		RTDBGAL(12, 0xF80000E8, 0, 0); /* loc12 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(29,1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(29,2);
		ti4_2 = *(EIF_INTEGER_32 *)(tr2 + RTVA(4768, "count", tr2));
		ui4_2 = ti4_2;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4722, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc12 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(30);
		RTDBGAL(10, 0xF80000E8, 0, 0); /* loc10 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc12))(loc12)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc10 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(31);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", loc9))(loc9)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(32);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		ti4_2 = *(EIF_INTEGER_32 *)(loc9 + RTVA(4768, "count", loc9));
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
		RTHOOK(33);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(34);
			ti4_2 = *(EIF_INTEGER_32 *)(loc9 + RTVA(4768, "count", loc9));
			if ((EIF_BOOLEAN) (loc1 > ti4_2)) break;
			RTHOOK(35);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc9))(loc9, ui4_1x)).it_c1);
			if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '0')) {
				RTHOOK(36);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4 = (EIF_INTEGER_32) loc1;
				RTHOOK(37);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				ti4_3 = *(EIF_INTEGER_32 *)(loc9 + RTVA(4768, "count", loc9));
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L));
			}
			RTHOOK(38);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
		RTHOOK(39);
		ti4_3 = *(EIF_INTEGER_32 *)(loc9 + RTVA(4768, "count", loc9));
		if ((EIF_BOOLEAN)(loc4 == (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(40);
			RTDBGAL(9, 0xF80000E8, 0, 0); /* loc9 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc13))(loc13)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc9 = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(41);
			RTDBGAL(12, 0xF80000E8, 0, 0); /* loc12 */
			ui4_1 = loc4;
			ti4_3 = *(EIF_INTEGER_32 *)(loc9 + RTVA(4768, "count", loc9));
			ui4_2 = ti4_3;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4722, "substring", loc9))(loc9, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc12 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(42);
			RTDBGAL(9, 0xF80000E8, 0, 0); /* loc9 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc12))(loc12)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc9 = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	RTHOOK(43);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", loc10))(loc10)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(44);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		RTHOOK(45);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ti4_3 = *(EIF_INTEGER_32 *)(loc10 + RTVA(4768, "count", loc10));
		loc1 = (EIF_INTEGER_32) ti4_3;
		for (;;) {
			RTHOOK(46);
			if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 1L))) break;
			RTHOOK(47);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc10))(loc10, ui4_1x)).it_c1);
			if ((EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '0')) {
				RTHOOK(48);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5 = (EIF_INTEGER_32) loc1;
				RTHOOK(49);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(50);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1--;
		}
		RTHOOK(51);
		if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) -1L))) {
			RTHOOK(52);
			RTDBGAL(10, 0xF80000E8, 0, 0); /* loc10 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc10 = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(53);
			RTDBGAL(12, 0xF80000E8, 0, 0); /* loc12 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = loc5;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4722, "substring", loc10))(loc10, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc12 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(54);
			RTDBGAL(10, 0xF80000E8, 0, 0); /* loc10 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc12))(loc12)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc10 = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	RTHOOK(55);
	RTDBGAA(Current, dtype, 7931, 0xF80000E8, 0); /* s_ */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7931, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(56);
	tb1 = '\0';
	if (loc8) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", loc10))(loc10)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(57);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(57,1);
		tr2 = RTMS_EX_H(".",1,46);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", tr1))(tr1, ur1x);
		RTHOOK(58);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(58,1);
		ur1 = RTCCL(loc10);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", tr1))(tr1, ur1x);
	}
	RTHOOK(59);
	tb1 = '\0';
	if (loc6) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(59,1);
		tr2 = RTMS_EX_H("0",1,48);
		ur1 = tr2;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(60);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(60,1);
		uc1 = (EIF_CHARACTER_8) '-';
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", tr1))(tr1, uc1x, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(61);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uc1
}

/* {VALUE}.todigit */
EIF_TYPED_VALUE F1219_10478 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "todigit";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
#define arg1 arg1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	
	RTEAA(l_feature_name, 1218, Current, 1, 1, 17016);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17016);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
	loc1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '0';
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (EIF_INTEGER_32) (arg1);
	ti4_2 = (EIF_INTEGER_32) (loc1);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {VALUE}.tochar */
EIF_TYPED_VALUE F1219_10479 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "tochar";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR8, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	
	RTEAA(l_feature_name, 1218, Current, 1, 1, 17017);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17017);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
	loc1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '0';
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	ti4_1 = (EIF_INTEGER_32) (loc1);
	tc1 = (EIF_CHARACTER_8) (EIF_INTEGER_32) (ti4_1 + arg1);
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef arg1
}

/* {VALUE}.aligndecimal */
void F1219_10480 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "aligndecimal";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	struct eif_ex_1218 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 16 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	RTLI(4);
	RTLR(0,earg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc7);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 1218, Current, 7, 1, 17018);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17018);
	RTCC(earg1, 1218, l_feature_name, 1, eif_new_type(1218, 0x00), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	uc1 = (EIF_CHARACTER_8) '.';
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4747, "index_of", tr1))(tr1, uc1x, ui4_1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", earg1))(earg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	uc1 = (EIF_CHARACTER_8) '.';
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4747, "index_of", tr1))(tr1, uc1x, ui4_1x)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L)))) {
		RTHOOK(4);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - loc1);
		RTHOOK(5);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", earg1))(earg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - loc2);
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc3 != loc4)) {
			RTHOOK(7);
			RTDBGAL(7, 0xF80000E8, 0, 0); /* loc7 */
			loc7 = (EIF_REFERENCE) NULL;
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc3 < loc4)) {
				RTHOOK(9);
				RTDBGAL(7, 0xF80000E8, 0, 0); /* loc7 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc7 = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(10);
				RTDBGAL(7, 0xF80000E8, 0, 0); /* loc7 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", earg1))(earg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc7 = (EIF_REFERENCE) RTCCL(tr1);
			}
			RTHOOK(11);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			ti4_1 = eif_abs_int32 ((EIF_INTEGER_32) (loc3 - loc4));
			loc5 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(12);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(13);
				if ((EIF_BOOLEAN) (loc6 > loc5)) break;
				RTHOOK(14);
				uc1 = (EIF_CHARACTER_8) '0';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", loc7))(loc7, uc1x);
				RTHOOK(15);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				loc6++;
			}
		}
	} else {
		RTHOOK(16);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L)))) {
			RTHOOK(17);
			if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(18);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(18,1);
				ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
				loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - loc1);
			} else {
				RTHOOK(19);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(20);
			if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(21);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", earg1))(earg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(21,1);
				ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - loc2);
			} else {
				RTHOOK(22);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(23);
			RTDBGAL(7, 0xF80000E8, 0, 0); /* loc7 */
			loc7 = (EIF_REFERENCE) NULL;
			RTHOOK(24);
			if ((EIF_BOOLEAN) (loc3 < loc4)) {
				RTHOOK(25);
				RTDBGAL(7, 0xF80000E8, 0, 0); /* loc7 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc7 = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(26);
				RTDBGAL(7, 0xF80000E8, 0, 0); /* loc7 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", earg1))(earg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc7 = (EIF_REFERENCE) RTCCL(tr1);
			}
			RTHOOK(27);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			ti4_1 = eif_abs_int32 ((EIF_INTEGER_32) (loc3 - loc4));
			loc5 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(28);
			uc1 = (EIF_CHARACTER_8) '.';
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", loc7))(loc7, uc1x);
			RTHOOK(29);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(30);
				if ((EIF_BOOLEAN) (loc6 > loc5)) break;
				RTHOOK(31);
				uc1 = (EIF_CHARACTER_8) '0';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", loc7))(loc7, uc1x);
				RTHOOK(32);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				loc6++;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef up1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {VALUE}.alignwhole */
void F1219_10481 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "alignwhole";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc10 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc11 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	struct eif_ex_1218 sarg1;
	EIF_REFERENCE earg1 = (EIF_REFERENCE) sarg1.data;
	
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	memcpy (&sarg1.overhead, HEADER(arg1), 16 + OVERHEAD);
	sarg1.overhead.ov_flags = EO_EXP | EO_STACK;
	sarg1.overhead.ov_size = 0;
	
	RTLI(4);
	RTLR(0,earg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc12);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&earg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_BOOL, &loc10);
	RTLU(SK_BOOL, &loc11);
	RTLU(SK_REF, &loc12);
	
	RTEAA(l_feature_name, 1218, Current, 12, 1, 17019);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1218, Current, 17019);
	RTCC(earg1, 1218, l_feature_name, 1, eif_new_type(1218, 0x00), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	uc1 = (EIF_CHARACTER_8) '.';
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4747, "index_of", tr1))(tr1, uc1x, ui4_1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", earg1))(earg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	uc1 = (EIF_CHARACTER_8) '.';
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4747, "index_of", tr1))(tr1, uc1x, ui4_1x)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(10, 0x04000000, 1, 0); /* loc10 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
	loc10 = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
	RTHOOK(4);
	RTDBGAL(11, 0x04000000, 1, 0); /* loc11 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", earg1))(earg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
	loc11 = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		if (loc10) {
			RTHOOK(7);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			RTHOOK(8);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
		RTHOOK(9);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - loc5) - ((EIF_INTEGER_32) 1L));
	} else {
		RTHOOK(10);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
		loc3 = (EIF_INTEGER_32) ti4_1;
	}
	RTHOOK(11);
	if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(12);
		if (loc11) {
			RTHOOK(13);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			RTHOOK(14);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
		RTHOOK(15);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - loc6) - ((EIF_INTEGER_32) 1L));
	} else {
		RTHOOK(16);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", earg1))(earg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(16,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
		loc4 = (EIF_INTEGER_32) ti4_1;
	}
	RTHOOK(17);
	if ((EIF_BOOLEAN)(loc3 != loc4)) {
		RTHOOK(18);
		RTDBGAL(12, 0xF80000E8, 0, 0); /* loc12 */
		loc12 = (EIF_REFERENCE) NULL;
		RTHOOK(19);
		if ((EIF_BOOLEAN) (loc3 < loc4)) {
			RTHOOK(20);
			RTDBGAL(12, 0xF80000E8, 0, 0); /* loc12 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7931, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc12 = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(21);
			RTDBGAL(12, 0xF80000E8, 0, 0); /* loc12 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7931, "s_", earg1))(earg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc12 = (EIF_REFERENCE) RTCCL(tr1);
		}
		RTHOOK(22);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(23);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc12))(loc12, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-')) {
			RTHOOK(24);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			loc7++;
		}
		RTHOOK(25);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		ti4_1 = eif_abs_int32 ((EIF_INTEGER_32) (loc3 - loc4));
		loc8 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(26);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(27);
			if ((EIF_BOOLEAN) (loc9 > loc8)) break;
			RTHOOK(28);
			uc1 = (EIF_CHARACTER_8) '0';
			ui4_1 = loc7;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4828, "insert_character", loc12))(loc12, uc1x, ui4_1x);
			RTHOOK(29);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			loc9++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
#undef up1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {VALUE}._invariant */
void F1219_16487 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 1218, Current, 0, 16486);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("divisionDecimalPrecision_ > 0", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7932, dtype));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit1219 (void)
{
	GTCX
	RTOTS (10467,F1219_10467)
}


#ifdef __cplusplus
}
#endif
