/*
 * Code for class EV_COLOR_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1388_12608(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1388_12609(EIF_REFERENCE);
static EIF_TYPED_VALUE F1388_12610_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1388_12610(EIF_REFERENCE);
extern void EIF_Minit1388(void);

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

/* {EV_COLOR_I}.set_with_other */
void F1388_12608 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_with_other";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1387, Current, 0, 1, 19167);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1387, Current, 19167);
	RTCC(arg1, 1387, l_feature_name, 1, eif_new_type(1280, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8531, "red", arg1))(arg1)).it_r4);
	ur4_1 = tr4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9576, dtype))(Current, ur4_1x);
	RTHOOK(2);
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8532, "green", arg1))(arg1)).it_r4);
	ur4_1 = tr4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9577, dtype))(Current, ur4_1x);
	RTHOOK(3);
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8533, "blue", arg1))(arg1)).it_r4);
	ur4_1 = tr4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9578, dtype))(Current, ur4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur4_1
#undef arg1
}

/* {EV_COLOR_I}.default_name */
RTOID (F1388_12609)


EIF_TYPED_VALUE F1388_12609 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1388_12609,19169,RTMS32_EX_H("n\000\000\000o\000\000\000n\000\000\000a\000\000\000m\000\000\000e\000\000\000",6,2069000037));
}

/* {EV_COLOR_I}.interface */
static EIF_TYPED_VALUE F1388_12610_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "interface";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1387, Current, 0, 0, 19169);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1387, Current, 19169);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

EIF_TYPED_VALUE F1388_12610 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9342,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(9342, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1388_12610_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(9342,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1388 (void)
{
	GTCX
	RTOTS (12609,F1388_12609)
}


#ifdef __cplusplus
}
#endif
