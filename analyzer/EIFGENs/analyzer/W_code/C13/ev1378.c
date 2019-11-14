/*
 * Code for class EV_PARAGRAPH_FORMAT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1378_12324(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1378_12325(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1378_12326(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1378_12327(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1378_12328(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1378_12329(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1378_12330(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1378_12331(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1378_12332(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1378_12333(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1378_12334(EIF_REFERENCE);
extern void F1378_12335(EIF_REFERENCE);
extern void F1378_12336(EIF_REFERENCE);
extern void F1378_12337(EIF_REFERENCE);
extern void F1378_12338(EIF_REFERENCE);
extern void F1378_12339(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1378_12340(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1378_12341(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1378_12342(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1378_12343(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1378_12344(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1378_12345(EIF_REFERENCE);
extern void F1378_12346(EIF_REFERENCE);
extern void EIF_Minit1378(void);

#ifdef __cplusplus
}
#endif

#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PARAGRAPH_FORMAT_IMP}.old_make */
void F1378_12324 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "old_make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 1377, Current, 0, 1, 18985);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1377, Current, 18985);
	RTCC(arg1, 1377, l_feature_name, 1, RTWCT(9342, dtype, Dftype(Current)), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_interface_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9335, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("interface_assigned", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9342, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("base_make_called", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9352, dtype))(Current)).it_b);
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
#undef arg1
}

/* {EV_PARAGRAPH_FORMAT_IMP}.make */
void F1378_12325 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1377, Current, 0, 0, 18986);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1377, Current, 18986);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9355, dtype))(Current, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_initialized", EX_POST);
		ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9345, dtype))(Current)).it_i1);
		ui1_1 = ti1_1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9351, dtype))(Current, ui1_1x)).it_b);
		if (tb1) {
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
#undef ui1_1
#undef ub1
}

/* {EV_PARAGRAPH_FORMAT_IMP}.alignment */
EIF_TYPED_VALUE F1378_12326 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9405,Dtype(Current)));
	return r;
}


/* {EV_PARAGRAPH_FORMAT_IMP}.is_left_aligned */
EIF_TYPED_VALUE F1378_12327 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_left_aligned";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1377, Current, 0, 0, 18988);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1377, Current, 18988);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9405, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6882, 1053))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {EV_PARAGRAPH_FORMAT_IMP}.is_center_aligned */
EIF_TYPED_VALUE F1378_12328 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_center_aligned";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1377, Current, 0, 0, 18989);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1377, Current, 18989);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9405, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6883, 1053))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {EV_PARAGRAPH_FORMAT_IMP}.is_right_aligned */
EIF_TYPED_VALUE F1378_12329 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_right_aligned";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1377, Current, 0, 0, 18990);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1377, Current, 18990);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9405, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6884, 1053))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {EV_PARAGRAPH_FORMAT_IMP}.is_justified */
EIF_TYPED_VALUE F1378_12330 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_justified";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1377, Current, 0, 0, 18991);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1377, Current, 18991);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9405, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6885, 1053))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {EV_PARAGRAPH_FORMAT_IMP}.left_margin */
EIF_TYPED_VALUE F1378_12331 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9404,Dtype(Current)));
	return r;
}


/* {EV_PARAGRAPH_FORMAT_IMP}.right_margin */
EIF_TYPED_VALUE F1378_12332 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9403,Dtype(Current)));
	return r;
}


/* {EV_PARAGRAPH_FORMAT_IMP}.top_spacing */
EIF_TYPED_VALUE F1378_12333 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9402,Dtype(Current)));
	return r;
}


/* {EV_PARAGRAPH_FORMAT_IMP}.bottom_spacing */
EIF_TYPED_VALUE F1378_12334 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9401,Dtype(Current)));
	return r;
}


/* {EV_PARAGRAPH_FORMAT_IMP}.enable_left_alignment */
void F1378_12335 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_left_alignment";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1377, Current, 0, 0, 18996);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1377, Current, 18996);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6882, 1053))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9386, dtype))(Current, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
}

/* {EV_PARAGRAPH_FORMAT_IMP}.enable_center_alignment */
void F1378_12336 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_center_alignment";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1377, Current, 0, 0, 18997);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1377, Current, 18997);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6883, 1053))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9386, dtype))(Current, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
}

/* {EV_PARAGRAPH_FORMAT_IMP}.enable_right_alignment */
void F1378_12337 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_right_alignment";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1377, Current, 0, 0, 18998);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1377, Current, 18998);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6884, 1053))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9386, dtype))(Current, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
}

/* {EV_PARAGRAPH_FORMAT_IMP}.enable_justification */
void F1378_12338 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_justification";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1377, Current, 0, 0, 18976);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1377, Current, 18976);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6885, 1053))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9386, dtype))(Current, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
}

/* {EV_PARAGRAPH_FORMAT_IMP}.set_alignment */
void F1378_12339 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_alignment";
	RTEX;
#define arg1 arg1x.it_i4
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
	
	RTEAA(l_feature_name, 1377, Current, 0, 1, 18977);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1377, Current, 18977);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9405, 0x10000000, 1); /* alignment */
	*(EIF_INTEGER_32 *)(Current + RTWA(9405, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("alignment_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9405, dtype));
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

/* {EV_PARAGRAPH_FORMAT_IMP}.set_left_margin */
void F1378_12340 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_left_margin";
	RTEX;
#define arg1 arg1x.it_i4
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
	
	RTEAA(l_feature_name, 1377, Current, 0, 1, 18978);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1377, Current, 18978);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("margin_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 9404, 0x10000000, 1); /* left_margin */
	*(EIF_INTEGER_32 *)(Current + RTWA(9404, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("margin_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9404, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EV_PARAGRAPH_FORMAT_IMP}.set_right_margin */
void F1378_12341 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_right_margin";
	RTEX;
#define arg1 arg1x.it_i4
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
	
	RTEAA(l_feature_name, 1377, Current, 0, 1, 18979);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1377, Current, 18979);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("margin_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 9403, 0x10000000, 1); /* right_margin */
	*(EIF_INTEGER_32 *)(Current + RTWA(9403, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("margin_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9403, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EV_PARAGRAPH_FORMAT_IMP}.set_top_spacing */
void F1378_12342 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_top_spacing";
	RTEX;
#define arg1 arg1x.it_i4
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
	
	RTEAA(l_feature_name, 1377, Current, 0, 1, 18980);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1377, Current, 18980);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("spacing_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 9402, 0x10000000, 1); /* top_spacing */
	*(EIF_INTEGER_32 *)(Current + RTWA(9402, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("spacing_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9402, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EV_PARAGRAPH_FORMAT_IMP}.set_bottom_spacing */
void F1378_12343 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_bottom_spacing";
	RTEX;
#define arg1 arg1x.it_i4
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
	
	RTEAA(l_feature_name, 1377, Current, 0, 1, 18981);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1377, Current, 18981);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("spacing_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 9401, 0x10000000, 1); /* bottom_spacing */
	*(EIF_INTEGER_32 *)(Current + RTWA(9401, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("spacing_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9401, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EV_PARAGRAPH_FORMAT_IMP}.new_paragraph_tag_from_applicable_attributes */
EIF_TYPED_VALUE F1378_12344 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "new_paragraph_tag_from_applicable_attributes";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1377, Current, 1, 1, 18982);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1377, Current, 18982);
	RTCC(arg1, 1377, l_feature_name, 1, eif_new_type(1547, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x40000000, 1,0); /* Result */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5566, 969))(Current, up1x)).it_p);
	Result = (EIF_POINTER) tp1;
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11119, "alignment", arg1));
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(1, 0xF80004D4, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(1236, 0x00).id);
		tr2 = RTMS_EX_H("justification",13,690456942);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8168, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(3,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9405, dtype));
		switch (ti4_1) {
			case 1L:
				RTHOOK(5);
				up1 = Result;
				tp1 = *(EIF_POINTER *)(loc1 + RTVA(8165, "item", loc1));
				up2 = tp1;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5677, 970))(Current)).it_i4);
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5526, 969))(Current, up1x, up2x, ui4_1x);
				break;
			case 2L:
				RTHOOK(6);
				up1 = Result;
				tp1 = *(EIF_POINTER *)(loc1 + RTVA(8165, "item", loc1));
				up2 = tp1;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5676, 970))(Current)).it_i4);
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5526, 969))(Current, up1x, up2x, ui4_1x);
				break;
			case 3L:
				RTHOOK(7);
				up1 = Result;
				tp1 = *(EIF_POINTER *)(loc1 + RTVA(8165, "item", loc1));
				up2 = tp1;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5678, 970))(Current)).it_i4);
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5526, 969))(Current, up1x, up2x, ui4_1x);
				break;
			case 4L:
				RTHOOK(8);
				up1 = Result;
				tp1 = *(EIF_POINTER *)(loc1 + RTVA(8165, "item", loc1));
				up2 = tp1;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5679, 970))(Current)).it_i4);
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5526, 969))(Current, up1x, up2x, ui4_1x);
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTHOOK(9);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11120, "left_margin", arg1));
	if (tb1) {
		RTHOOK(10);
		RTDBGAL(1, 0xF80004D4, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(1236, 0x00).id);
		tr2 = RTMS_EX_H("left-margin",11,1846649710);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8168, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(10,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(11);
		up1 = Result;
		tp1 = *(EIF_POINTER *)(loc1 + RTVA(8165, "item", loc1));
		up2 = tp1;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9404, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5526, 969))(Current, up1x, up2x, ui4_1x);
	}
	RTHOOK(12);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11121, "right_margin", arg1));
	if (tb1) {
		RTHOOK(13);
		RTDBGAL(1, 0xF80004D4, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(1236, 0x00).id);
		tr2 = RTMS_EX_H("right-margin",12,1934856046);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8168, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(13,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(14);
		up1 = Result;
		tp1 = *(EIF_POINTER *)(loc1 + RTVA(8165, "item", loc1));
		up2 = tp1;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9403, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5526, 969))(Current, up1x, up2x, ui4_1x);
	}
	RTHOOK(15);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11122, "top_spacing", arg1));
	if (tb1) {
		RTHOOK(16);
		RTDBGAL(1, 0xF80004D4, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(1236, 0x00).id);
		tr2 = RTMS_EX_H("pixels-above-lines",18,634228083);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8168, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(16,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(17);
		up1 = Result;
		tp1 = *(EIF_POINTER *)(loc1 + RTVA(8165, "item", loc1));
		up2 = tp1;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9402, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5526, 969))(Current, up1x, up2x, ui4_1x);
	}
	RTHOOK(18);
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11123, "bottom_spacing", arg1));
	if (tb1) {
		RTHOOK(19);
		RTDBGAL(1, 0xF80004D4, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(1236, 0x00).id);
		tr2 = RTMS_EX_H("pixels-below-lines",18,1133764723);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8168, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(19,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(20);
		up1 = Result;
		tp1 = *(EIF_POINTER *)(loc1 + RTVA(8165, "item", loc1));
		up2 = tp1;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9401, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5526, 969))(Current, up1x, up2x, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_PARAGRAPH_FORMAT_IMP}.dummy_paragraph_format_range_information */
EIF_TYPED_VALUE F1378_12345 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dummy_paragraph_format_range_information";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1377, Current, 0, 0, 18983);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1377, Current, 18983);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800060B, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1547, 0x01).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6886, 1053))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6887, 1053))(Current)).it_i4);
	ui4_1 = ti4_2;
	ti4_2 = eif_bit_or(ti4_1,ui4_1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6888, 1053))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(ti4_2,ui4_1);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6889, 1053))(Current)).it_i4);
	ui4_1 = ti4_2;
	ti4_2 = eif_bit_or(ti4_1,ui4_1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6890, 1053))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(ti4_2,ui4_1);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(11118, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
}

/* {EV_PARAGRAPH_FORMAT_IMP}.destroy */
void F1378_12346 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "destroy";
	RTEX;
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1377, Current, 0, 0, 18984);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1377, Current, 18984);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9356, dtype))(Current, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_in_destroy_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9354, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("is_destroyed_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9340, dtype))(Current)).it_b);
		if (tb1) {
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
#undef ub1
}

void EIF_Minit1378 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
