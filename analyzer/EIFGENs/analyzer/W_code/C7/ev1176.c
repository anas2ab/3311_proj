/*
 * Code for class EV_COORDINATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1176_10322(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1176_10323(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1176_10324(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1176_10325(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1176_10326(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1176_10327(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1176_10328(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1176_10329(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1176_10330(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1176_10331(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1176_10332(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1176_10333(EIF_REFERENCE);
extern void F1176_10334(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1176_10335(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1176_10336(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1176_10337(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1176_10338(EIF_REFERENCE);
extern void EIF_Minit1176(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_COORDINATE}.make */
void F1176_10322 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1175, Current, 0, 2, 16903);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1175, Current, 16903);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7880, 0x20000000, 1); /* x_precise */
	tr8_1 = (EIF_REAL_64) (arg1);
	*(EIF_REAL_64 *)(Current + RTWA(7880, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7881, 0x20000000, 1); /* y_precise */
	tr8_1 = (EIF_REAL_64) (arg2);
	*(EIF_REAL_64 *)(Current + RTWA(7881, dtype)) = (EIF_REAL_64) tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("x_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7876, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("y_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7878, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
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
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {EV_COORDINATE}.set */
void F1176_10323 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1175, Current, 0, 2, 16887);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1175, Current, 16887);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7880, 0x20000000, 1); /* x_precise */
	tr8_1 = (EIF_REAL_64) (arg1);
	*(EIF_REAL_64 *)(Current + RTWA(7880, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7881, 0x20000000, 1); /* y_precise */
	tr8_1 = (EIF_REAL_64) (arg2);
	*(EIF_REAL_64 *)(Current + RTWA(7881, dtype)) = (EIF_REAL_64) tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("x_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7876, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("y_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7878, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
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
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {EV_COORDINATE}.make_with_position */
void F1176_10324 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_with_position";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1175, Current, 0, 2, 16888);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1175, Current, 16888);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7880, 0x20000000, 1); /* x_precise */
	tr8_1 = (EIF_REAL_64) (arg1);
	*(EIF_REAL_64 *)(Current + RTWA(7880, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7881, 0x20000000, 1); /* y_precise */
	tr8_1 = (EIF_REAL_64) (arg2);
	*(EIF_REAL_64 *)(Current + RTWA(7881, dtype)) = (EIF_REAL_64) tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("x_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7876, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("y_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7878, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
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
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {EV_COORDINATE}.set_position */
void F1176_10325 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_position";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1175, Current, 0, 2, 16889);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1175, Current, 16889);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7880, 0x20000000, 1); /* x_precise */
	tr8_1 = (EIF_REAL_64) (arg1);
	*(EIF_REAL_64 *)(Current + RTWA(7880, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7881, 0x20000000, 1); /* y_precise */
	tr8_1 = (EIF_REAL_64) (arg2);
	*(EIF_REAL_64 *)(Current + RTWA(7881, dtype)) = (EIF_REAL_64) tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("x_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7876, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("y_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7878, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
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
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {EV_COORDINATE}.make_precise */
void F1176_10326 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_precise";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1175, Current, 0, 2, 16890);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1175, Current, 16890);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7880, 0x20000000, 1); /* x_precise */
	*(EIF_REAL_64 *)(Current + RTWA(7880, dtype)) = (EIF_REAL_64) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7881, 0x20000000, 1); /* y_precise */
	*(EIF_REAL_64 *)(Current + RTWA(7881, dtype)) = (EIF_REAL_64) arg2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("x_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(7880, dtype));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("y_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(7881, dtype));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, arg2)) {
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
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {EV_COORDINATE}.set_precise */
void F1176_10327 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_precise";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1175, Current, 0, 2, 16891);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1175, Current, 16891);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7880, 0x20000000, 1); /* x_precise */
	*(EIF_REAL_64 *)(Current + RTWA(7880, dtype)) = (EIF_REAL_64) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7881, 0x20000000, 1); /* y_precise */
	*(EIF_REAL_64 *)(Current + RTWA(7881, dtype)) = (EIF_REAL_64) arg2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("x_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(7880, dtype));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("y_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(7881, dtype));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, arg2)) {
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
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {EV_COORDINATE}.x */
EIF_TYPED_VALUE F1176_10328 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "x";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1175, Current, 0, 0, 16892);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1175, Current, 16892);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(7880, dtype));
	if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, (EIF_REAL_64) 0.0)) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(7880, dtype));
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 0.5);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(7880, dtype));
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) (tr8_1 - (EIF_REAL_64) 0.5);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {EV_COORDINATE}.x_abs */
EIF_TYPED_VALUE F1176_10329 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "x_abs";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1175, Current, 0, 0, 16893);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1175, Current, 16893);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(7880, dtype));
	if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, (EIF_REAL_64) 0.0)) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(7880, dtype));
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 0.5);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(7880, dtype));
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) (tr8_1 - (EIF_REAL_64) 0.5);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {EV_COORDINATE}.y */
EIF_TYPED_VALUE F1176_10330 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "y";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1175, Current, 0, 0, 16894);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1175, Current, 16894);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(7881, dtype));
	if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, (EIF_REAL_64) 0.0)) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(7881, dtype));
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 0.5);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(7881, dtype));
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) (tr8_1 - (EIF_REAL_64) 0.5);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {EV_COORDINATE}.y_abs */
EIF_TYPED_VALUE F1176_10331 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "y_abs";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1175, Current, 0, 0, 16895);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1175, Current, 16895);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(7881, dtype));
	if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, (EIF_REAL_64) 0.0)) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(7881, dtype));
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 0.5);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(7881, dtype));
		ti4_1 = (EIF_INTEGER_32) (EIF_REAL_64) (tr8_1 - (EIF_REAL_64) 0.5);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {EV_COORDINATE}.x_precise */
EIF_TYPED_VALUE F1176_10332 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(7880,Dtype(Current)));
	return r;
}


/* {EV_COORDINATE}.y_precise */
EIF_TYPED_VALUE F1176_10333 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(7881,Dtype(Current)));
	return r;
}


/* {EV_COORDINATE}.set_x */
void F1176_10334 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_x";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 1175, Current, 0, 1, 16898);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1175, Current, 16898);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7880, 0x20000000, 1); /* x_precise */
	tr8_1 = (EIF_REAL_64) (arg1);
	*(EIF_REAL_64 *)(Current + RTWA(7880, dtype)) = (EIF_REAL_64) tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("x_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7876, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EV_COORDINATE}.set_y */
void F1176_10335 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_y";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 1175, Current, 0, 1, 16899);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1175, Current, 16899);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7881, 0x20000000, 1); /* y_precise */
	tr8_1 = (EIF_REAL_64) (arg1);
	*(EIF_REAL_64 *)(Current + RTWA(7881, dtype)) = (EIF_REAL_64) tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("y_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7878, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EV_COORDINATE}.set_x_precise */
void F1176_10336 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_x_precise";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1175, Current, 0, 1, 16900);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1175, Current, 16900);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7880, 0x20000000, 1); /* x_precise */
	*(EIF_REAL_64 *)(Current + RTWA(7880, dtype)) = (EIF_REAL_64) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("x_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(7880, dtype));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, arg1)) {
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EV_COORDINATE}.set_y_precise */
void F1176_10337 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_y_precise";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1175, Current, 0, 1, 16901);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1175, Current, 16901);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7881, 0x20000000, 1); /* y_precise */
	*(EIF_REAL_64 *)(Current + RTWA(7881, dtype)) = (EIF_REAL_64) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("y_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(7881, dtype));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, arg1)) {
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EV_COORDINATE}.debug_output */
EIF_TYPED_VALUE F1176_10338 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "debug_output";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1175, Current, 0, 0, 16902);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1175, Current, 16902);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTMS_EX_H("(",1,40);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7876, dtype))(Current)).it_i4);
	RTNHOOK(1,1);
	tr2 = c_outi(ti4_1);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H(", ",2,11296);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7878, dtype))(Current)).it_i4);
	RTNHOOK(1,2);
	tr2 = c_outi(ti4_1);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H(")",1,41);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

void EIF_Minit1176 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
