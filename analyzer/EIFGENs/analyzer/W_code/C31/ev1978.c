/*
 * Code for class EV_HORIZONTAL_BOX_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1978_24197(EIF_REFERENCE);
extern void F1978_24198(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1978_24199(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1978_24200(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1978_24201(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1978_24202(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1978_24203(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1978_24204(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1978_24205(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1978_24206(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE F1978_24207_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1978_24207(EIF_REFERENCE);
extern void EIF_Minit1978(void);
extern EIF_REFERENCE _A1978_1824();

#ifdef __cplusplus
}
#endif

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

/* {EV_HORIZONTAL_BOX_IMP}.children_width */
EIF_TYPED_VALUE F1978_24197 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(19685,Dtype(Current)));
	return r;
}


/* {EV_HORIZONTAL_BOX_IMP}.set_homogeneous */
void F1978_24198 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_homogeneous";
	RTEX;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,ur1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1977, Current, 0, 1, 30060);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1977, Current, 30060);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 19684, 0x04000000, 1); /* is_homogeneous */
	*(EIF_BOOLEAN *)(Current + RTWA(19684, dtype)) = (EIF_BOOLEAN) arg1;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16179, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(Current);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16190, dtype))(Current, ui4_1x, ur1x, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("homogeneous_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(19684, dtype));
		if ((EIF_BOOLEAN)(tb1 == arg1)) {
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
#undef ur1
#undef ui4_1
#undef ub1
#undef arg1
}

/* {EV_HORIZONTAL_BOX_IMP}.set_padding */
void F1978_24199 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_padding";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,ur1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1977, Current, 0, 1, 30061);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1977, Current, 30061);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_value", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 19683, 0x10000000, 1); /* padding */
	*(EIF_INTEGER_32 *)(Current + RTWA(19683, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16179, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(Current);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16190, dtype))(Current, ui4_1x, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ui4_1
#undef ub1
#undef arg1
}

/* {EV_HORIZONTAL_BOX_IMP}.set_border_width */
void F1978_24200 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_border_width";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,ur1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1977, Current, 0, 1, 30062);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1977, Current, 30062);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_value", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 19682, 0x10000000, 1); /* border_width */
	*(EIF_INTEGER_32 *)(Current + RTWA(19682, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16181, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(Current);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16190, dtype))(Current, ui4_1x, ur1x, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("border_assigned", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19682, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
#undef ur1
#undef ui4_1
#undef ub1
#undef arg1
}

/* {EV_HORIZONTAL_BOX_IMP}.on_size */
void F1978_24201 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "on_size";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1977, Current, 0, 3, 30063);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1977, Current, 30063);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12378, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19585, dtype))(Current)).it_b);
		RTTE(tb1, label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16434, dtype))(Current)).it_i4);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(19682, dtype));
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_2));
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(19686, dtype))(Current, ui4_1x, ub1x);
	RTHOOK(4);
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18598, 1976))(Current, ui4_1x, ui4_2x, ui4_3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ub1
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_HORIZONTAL_BOX_IMP}.ev_apply_new_size */
void F1978_24202 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "ev_apply_new_size";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_b
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_b = * (EIF_BOOLEAN *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_BOOL,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1977, Current, 0, 5, 30064);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1977, Current, 30064);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_is_destroyed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15739, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	ui4_4 = arg4;
	ub1 = arg5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16168, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ub1x);
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16434, dtype))(Current)).it_i4);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(19682, dtype));
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_2));
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(19686, dtype))(Current, ui4_1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ub1
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_HORIZONTAL_BOX_IMP}.set_children_width */
void F1978_24203 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_children_width";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc12);
	RTLR(5,loc16);
	RTLR(6,loc3);
	RTLR(7,tr2);
	RTLR(8,ur1);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_INT32, &loc15);
	RTLU(SK_REF, &loc16);
	
	RTEAA(l_feature_name, 1977, Current, 16, 2, 30065);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1977, Current, 30065);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19670, dtype));
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		RTDBGAL(1, 0xF800010E, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19681, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(3);
		RTDBGAL(2, 0xF800022C, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19673, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAL(12, 0xF800008E, 0, 0); /* loc12 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2264, "cursor", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc12 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16435, dtype))(Current)).it_i4);
		loc9 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19682, dtype));
		loc10 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19683, dtype));
		loc11 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19669, dtype))(Current)).it_i4);
		loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 - (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * loc10)) - ti4_1);
		RTHOOK(9);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18860, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(10);
			RTDBGAL(16, 0xF800010E, 0, 0); /* loc16 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19679, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc16 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(11);
			if ((EIF_BOOLEAN)(loc16 == NULL)) {
				RTHOOK(12);
				RTDBGAL(16, 0xF800010E, 0, 0); /* loc16 */
				tr1 = RTLNSMART(RTWCT(19679, dtype, dftype).id);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", loc1))(loc1)).it_i4);
				ui4_1 = ti4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3081, Dtype(tr1)))(tr1, ui4_1x);
				RTNHOOK(12,1);
				loc16 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(13);
				RTDBGAA(Current, dtype, 19679, 0xF800010E, 0); /* reversed_sizing_agents */
				tr1 = RTCCL(loc16);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(19679, dtype)) = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(14);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2210, "is_empty", loc16))(loc16)).it_b);
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(15);
					RTDBGAL(16, 0xF800010E, 0, 0); /* loc16 */
					tr1 = RTLNSMART(RTWCT(19679, dtype, dftype).id);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", loc1))(loc1)).it_i4);
					ui4_1 = ti4_1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3081, Dtype(tr1)))(tr1, ui4_1x);
					RTNHOOK(15,1);
					loc16 = (EIF_REFERENCE) RTCCL(tr1);
				}
			}
		}
		RTHOOK(16);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(19684, dtype));
		if (tb1) {
			RTHOOK(17);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19670, dtype));
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 / ti4_1);
			RTHOOK(18);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19670, dtype));
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ti4_1);
			RTHOOK(19);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 = (EIF_INTEGER_32) loc10;
			RTHOOK(20);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2292, "start", loc1))(loc1);
			for (;;) {
				RTHOOK(21);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2306, "after", loc1))(loc1)).it_b);
				if (tb1) break;
				RTHOOK(22);
				RTDBGAL(3, 0xF80007B4, 0, 0); /* loc3 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc3 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(23);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16411, "is_show_requested", loc3))(loc3)).it_b);
				if (tb2) {
					RTHOOK(24);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					ui4_1 = loc5;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(19677, dtype))(Current, ui4_1x)).it_i4);
					loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ti4_1);
					RTHOOK(25);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					ui4_1 = ((EIF_INTEGER_32) 0L);
					ti4_1 = eif_max_int32 ((EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L)),ui4_1);
					loc5 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(26);
					if ((EIF_BOOLEAN)(loc16 != NULL)) {
						RTHOOK(27);
						{
							EIF_TYPE_INDEX typarr0[] = {0xFFF9,7,186,0xFF01,0,0xFF01,1972,218,218,218,218,203,0xFFFF};
							EIF_TYPE typres0;
							typarr0[4] = dftype;
							
							typres0 = eif_compound_id(dftype, typarr0);
							tr1 = RTLNTS(typres0.id, 8, 0);
						}
						((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
						RTAR(tr1,Current);
						((EIF_TYPED_VALUE *)tr1+2)->it_r = loc3;
						RTAR(tr1,loc3);
						((EIF_TYPED_VALUE *)tr1+3)->it_i4 = loc6;
						((EIF_TYPED_VALUE *)tr1+4)->it_i4 = loc10;
						((EIF_TYPED_VALUE *)tr1+5)->it_i4 = loc8;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16252, "minimum_height", loc3))(loc3)).it_i4);
						RTNHOOK(27,1);
						ui4_1 = loc9;
						ti4_2 = eif_max_int32 (ti4_1,ui4_1);
						((EIF_TYPED_VALUE *)tr1+6)->it_i4 = ti4_2;
						((EIF_TYPED_VALUE *)tr1+7)->it_b = arg2;
						
						{
							static EIF_TYPE_INDEX typarr0[] = {0xFF01,250,0xFF01,0xFFF9,0,186,0xFFFF};
							EIF_TYPE typres0;
							static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
							
							typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1978_1824, (EIF_POINTER)(0),19680, 0, 0, 1, -1, tr1, 0);
						}
						ur1 = RTCCL(tr2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", loc16))(loc16, ur1x);
					} else {
						RTHOOK(28);
						ur1 = RTCCL(loc3);
						ui4_1 = loc6;
						ui4_2 = loc10;
						ui4_3 = loc8;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16252, "minimum_height", loc3))(loc3)).it_i4);
						RTNHOOK(28,1);
						ui4_4 = loc9;
						ti4_2 = eif_max_int32 (ti4_1,ui4_4);
						ui4_4 = ti4_2;
						ub1 = arg2;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(19680, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ub1x);
					}
					RTHOOK(29);
					RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
					loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 + loc11) + loc8);
				}
				RTHOOK(30);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2308, "forth", loc1))(loc1);
			}
			RTHOOK(31);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 -= loc11;
		} else {
			RTHOOK(32);
			RTDBGAL(13, 0x10000000, 1, 0); /* loc13 */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19685, dtype));
			loc13 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 - ti4_1);
			RTHOOK(33);
			RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19672, dtype));
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_2 = eif_max_int32 (ti4_1,ui4_1);
			loc14 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(34);
			if ((EIF_BOOLEAN) (loc13 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(35);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc13 / loc14);
				RTHOOK(36);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc13 % loc14);
			} else {
				RTHOOK(37);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				RTHOOK(38);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(39);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 = (EIF_INTEGER_32) loc10;
			RTHOOK(40);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2292, "start", loc1))(loc1);
			RTHOOK(41);
			if ((EIF_BOOLEAN)(loc2 == NULL)) {
				RTHOOK(42);
				RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
				loc15 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				RTHOOK(43);
				RTDBGAL(2, 0xF800022C, 0, 0); /* loc2 */
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,556,218,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr1 = RTLN(typres0.id);
				}
				ui4_1 = ((EIF_INTEGER_32) 0L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3081, Dtype(tr1)))(tr1, ui4_1x);
				RTNHOOK(43,1);
				loc2 = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(44);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2292, "start", loc2))(loc2);
				RTHOOK(45);
				RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", loc2))(loc2)).it_i4);
				loc15 = (EIF_INTEGER_32) ti4_1;
			}
			if (RTAL & CK_CHECK) {
				RTHOOK(46);
				RTCT("expandable /= Void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					RTCK;
				} else {
					RTCF;
				}
			}
			for (;;) {
				RTHOOK(47);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2306, "after", loc1))(loc1)).it_b);
				if (tb2) break;
				RTHOOK(48);
				RTDBGAL(3, 0xF80007B4, 0, 0); /* loc3 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc3 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(49);
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16411, "is_show_requested", loc3))(loc3)).it_b);
				if (tb3) {
					RTHOOK(50);
					ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(3095, "index", loc1));
					if ((EIF_BOOLEAN)(ti4_1 != loc15)) {
						RTHOOK(51);
						RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16251, "minimum_width", loc3))(loc3)).it_i4);
						ui4_1 = loc5;
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(19677, dtype))(Current, ui4_1x)).it_i4);
						loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + loc4) + ti4_2);
						RTHOOK(52);
						if ((EIF_BOOLEAN) (loc5 > ((EIF_INTEGER_32) 0L))) {
							RTHOOK(53);
							RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
							loc5--;
						} else {
							RTHOOK(54);
							if ((EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 0L))) {
								RTHOOK(55);
								RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
								loc5++;
							}
						}
					} else {
						RTHOOK(56);
						RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16251, "minimum_width", loc3))(loc3)).it_i4);
						loc8 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(57);
						tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2681, "islast", loc2))(loc2)).it_b);
						if (tb3) {
							RTHOOK(58);
							RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
							loc15 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
						} else {
							RTHOOK(59);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2308, "forth", loc2))(loc2);
							RTHOOK(60);
							RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", loc2))(loc2)).it_i4);
							loc15 = (EIF_INTEGER_32) ti4_1;
						}
					}
					RTHOOK(61);
					if ((EIF_BOOLEAN)(loc16 != NULL)) {
						RTHOOK(62);
						{
							EIF_TYPE_INDEX typarr0[] = {0xFFF9,7,186,0xFF01,0,0xFF01,1972,218,218,218,218,203,0xFFFF};
							EIF_TYPE typres0;
							typarr0[4] = dftype;
							
							typres0 = eif_compound_id(dftype, typarr0);
							tr1 = RTLNTS(typres0.id, 8, 0);
						}
						((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
						RTAR(tr1,Current);
						((EIF_TYPED_VALUE *)tr1+2)->it_r = loc3;
						RTAR(tr1,loc3);
						((EIF_TYPED_VALUE *)tr1+3)->it_i4 = loc6;
						((EIF_TYPED_VALUE *)tr1+4)->it_i4 = loc10;
						((EIF_TYPED_VALUE *)tr1+5)->it_i4 = loc8;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16252, "minimum_height", loc3))(loc3)).it_i4);
						RTNHOOK(62,1);
						ui4_1 = loc9;
						ti4_2 = eif_max_int32 (ti4_1,ui4_1);
						((EIF_TYPED_VALUE *)tr1+6)->it_i4 = ti4_2;
						((EIF_TYPED_VALUE *)tr1+7)->it_b = arg2;
						
						{
							static EIF_TYPE_INDEX typarr0[] = {0xFF01,250,0xFF01,0xFFF9,0,186,0xFFFF};
							EIF_TYPE typres0;
							static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
							
							typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1978_1824, (EIF_POINTER)(0),19680, 0, 0, 1, -1, tr1, 0);
						}
						ur1 = RTCCL(tr2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", loc16))(loc16, ur1x);
					} else {
						RTHOOK(63);
						ur1 = RTCCL(loc3);
						ui4_1 = loc6;
						ui4_2 = loc10;
						ui4_3 = loc8;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16252, "minimum_height", loc3))(loc3)).it_i4);
						RTNHOOK(63,1);
						ui4_4 = loc9;
						ti4_2 = eif_max_int32 (ti4_1,ui4_4);
						ui4_4 = ti4_2;
						ub1 = arg2;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(19680, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ub1x);
					}
					RTHOOK(64);
					RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
					loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 + loc11) + loc8);
				} else {
					RTHOOK(65);
					ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(3095, "index", loc1));
					if ((EIF_BOOLEAN)(ti4_1 == loc15)) {
						RTHOOK(66);
						tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2681, "islast", loc2))(loc2)).it_b);
						if (tb3) {
							RTHOOK(67);
							RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
							loc15 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
						} else {
							RTHOOK(68);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2308, "forth", loc2))(loc2);
							RTHOOK(69);
							RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", loc2))(loc2)).it_i4);
							loc15 = (EIF_INTEGER_32) ti4_1;
						}
					}
				}
				RTHOOK(70);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2308, "forth", loc1))(loc1);
			}
		}
		RTHOOK(71);
		ur1 = RTCCL(loc12);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2265, "valid_cursor", loc1))(loc1, ur1x)).it_b);
		if (tb3) {
			RTHOOK(72);
			ur1 = RTCCL(loc12);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2266, "go_to", loc1))(loc1, ur1x);
		}
		RTHOOK(73);
		if ((EIF_BOOLEAN)(loc16 != NULL)) {
			RTHOOK(74);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2307, "finish", loc16))(loc16);
			for (;;) {
				RTHOOK(75);
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2359, "before", loc16))(loc16)).it_b);
				if (tb3) break;
				RTHOOK(76);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", loc16))(loc16)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(76,1);
				ur1 = NULL;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4611, "call", tr1))(tr1, ur1x);
				RTHOOK(77);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2360, "back", loc16))(loc16);
			}
			RTHOOK(78);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2226, "wipe_out", loc16))(loc16);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(79);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(20);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ub1
#undef arg2
#undef arg1
}

/* {EV_HORIZONTAL_BOX_IMP}.compute_minimum_height */
void F1978_24204 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "compute_minimum_height";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,loc2);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	
	RTEAA(l_feature_name, 1977, Current, 5, 1, 30066);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1977, Current, 30066);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_is_destroyed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15739, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 19670, 0x10000000, 1); /* childvisible_nb */
	*(EIF_INTEGER_32 *)(Current + RTWA(19670, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19681, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2210, "is_empty", tr1))(tr1)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(4);
		RTDBGAL(1, 0xF800010E, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19681, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(3, 0xF800008E, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2264, "cursor", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2292, "start", loc1))(loc1);
		for (;;) {
			RTHOOK(7);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2306, "after", loc1))(loc1)).it_b);
			if (tb1) break;
			RTHOOK(8);
			RTDBGAL(2, 0xF80007B4, 0, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(9);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16411, "is_show_requested", loc2))(loc2)).it_b);
			if (tb2) {
				RTHOOK(10);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5++;
				RTHOOK(11);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16252, "minimum_height", loc2))(loc2)).it_i4);
				ui4_1 = ti4_1;
				ti4_1 = eif_max_int32 (loc4,ui4_1);
				loc4 = (EIF_INTEGER_32) ti4_1;
			}
			RTHOOK(12);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2308, "forth", loc1))(loc1);
		}
		RTHOOK(13);
		ur1 = RTCCL(loc3);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2265, "valid_cursor", loc1))(loc1, ur1x)).it_b);
		if (tb2) {
			RTHOOK(14);
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2266, "go_to", loc1))(loc1, ur1x);
		}
		RTHOOK(15);
		RTDBGAA(Current, dtype, 19670, 0x10000000, 1); /* childvisible_nb */
		*(EIF_INTEGER_32 *)(Current + RTWA(19670, dtype)) = (EIF_INTEGER_32) loc5;
		RTHOOK(16);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19671, dtype))(Current);
	}
	RTHOOK(17);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19682, dtype));
	ui4_1 = (EIF_INTEGER_32) (loc4 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_1));
	ub1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16151, dtype))(Current, ui4_1x, ub1x);
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
#undef ub1
#undef arg1
}

/* {EV_HORIZONTAL_BOX_IMP}.compute_minimum_width */
void F1978_24205 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "compute_minimum_width";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,loc2);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	
	RTEAA(l_feature_name, 1977, Current, 5, 1, 30067);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1977, Current, 30067);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_is_destroyed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15739, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 19670, 0x10000000, 1); /* childvisible_nb */
	*(EIF_INTEGER_32 *)(Current + RTWA(19670, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19681, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2210, "is_empty", tr1))(tr1)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(4);
		RTDBGAL(1, 0xF800010E, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19681, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(3, 0xF800008E, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2264, "cursor", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(19684, dtype));
		if (tb1) {
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2292, "start", loc1))(loc1);
			for (;;) {
				RTHOOK(8);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2306, "after", loc1))(loc1)).it_b);
				if (tb1) break;
				RTHOOK(9);
				RTDBGAL(2, 0xF80007B4, 0, 0); /* loc2 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc2 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(10);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16411, "is_show_requested", loc2))(loc2)).it_b);
				if (tb2) {
					RTHOOK(11);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					loc5++;
					RTHOOK(12);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16251, "minimum_width", loc2))(loc2)).it_i4);
					ui4_1 = ti4_1;
					ti4_1 = eif_max_int32 (loc4,ui4_1);
					loc4 = (EIF_INTEGER_32) ti4_1;
				}
				RTHOOK(13);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2308, "forth", loc1))(loc1);
			}
			RTHOOK(14);
			RTDBGAA(Current, dtype, 19670, 0x10000000, 1); /* childvisible_nb */
			*(EIF_INTEGER_32 *)(Current + RTWA(19670, dtype)) = (EIF_INTEGER_32) loc5;
			RTHOOK(15);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19671, dtype))(Current);
			RTHOOK(16);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19669, dtype))(Current)).it_i4);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(19682, dtype));
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 * loc5) + ti4_1) + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_2));
			ub1 = arg1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16150, dtype))(Current, ui4_1x, ub1x);
		} else {
			RTHOOK(17);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2292, "start", loc1))(loc1);
			for (;;) {
				RTHOOK(18);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2306, "after", loc1))(loc1)).it_b);
				if (tb2) break;
				RTHOOK(19);
				RTDBGAL(2, 0xF80007B4, 0, 0); /* loc2 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc2 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(20);
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16411, "is_show_requested", loc2))(loc2)).it_b);
				if (tb3) {
					RTHOOK(21);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					loc5++;
					RTHOOK(22);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16251, "minimum_width", loc2))(loc2)).it_i4);
					loc4 += ti4_1;
				}
				RTHOOK(23);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2308, "forth", loc1))(loc1);
			}
			RTHOOK(24);
			RTDBGAA(Current, dtype, 19685, 0x10000000, 1); /* children_width */
			*(EIF_INTEGER_32 *)(Current + RTWA(19685, dtype)) = (EIF_INTEGER_32) loc4;
			RTHOOK(25);
			RTDBGAA(Current, dtype, 19670, 0x10000000, 1); /* childvisible_nb */
			*(EIF_INTEGER_32 *)(Current + RTWA(19670, dtype)) = (EIF_INTEGER_32) loc5;
			RTHOOK(26);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19671, dtype))(Current);
			RTHOOK(27);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19669, dtype))(Current)).it_i4);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(19682, dtype));
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + ti4_1) + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_2));
			ub1 = arg1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16150, dtype))(Current, ui4_1x, ub1x);
		}
		RTHOOK(28);
		ur1 = RTCCL(loc3);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2265, "valid_cursor", loc1))(loc1, ur1x)).it_b);
		if (tb3) {
			RTHOOK(29);
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2266, "go_to", loc1))(loc1, ur1x);
		}
	} else {
		RTHOOK(30);
		RTDBGAA(Current, dtype, 19685, 0x10000000, 1); /* children_width */
		*(EIF_INTEGER_32 *)(Current + RTWA(19685, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(31);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19682, dtype));
		ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_1);
		ub1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16150, dtype))(Current, ui4_1x, ub1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ub1
#undef arg1
}

/* {EV_HORIZONTAL_BOX_IMP}.compute_minimum_size */
void F1978_24206 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "compute_minimum_size";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,loc2);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	
	RTEAA(l_feature_name, 1977, Current, 6, 1, 30068);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1977, Current, 30068);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_is_destroyed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15739, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 19670, 0x10000000, 1); /* childvisible_nb */
	*(EIF_INTEGER_32 *)(Current + RTWA(19670, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19681, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2210, "is_empty", tr1))(tr1)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(4);
		RTDBGAL(1, 0xF800010E, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19681, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(3, 0xF800008E, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2264, "cursor", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(19684, dtype));
		if (tb1) {
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2292, "start", loc1))(loc1);
			for (;;) {
				RTHOOK(8);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2306, "after", loc1))(loc1)).it_b);
				if (tb1) break;
				RTHOOK(9);
				RTDBGAL(2, 0xF80007B4, 0, 0); /* loc2 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc2 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(10);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16411, "is_show_requested", loc2))(loc2)).it_b);
				if (tb2) {
					RTHOOK(11);
					RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
					loc6++;
					RTHOOK(12);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16251, "minimum_width", loc2))(loc2)).it_i4);
					ui4_1 = ti4_1;
					ti4_1 = eif_max_int32 (loc5,ui4_1);
					loc5 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(13);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16252, "minimum_height", loc2))(loc2)).it_i4);
					ui4_1 = ti4_1;
					ti4_1 = eif_max_int32 (loc4,ui4_1);
					loc4 = (EIF_INTEGER_32) ti4_1;
				}
				RTHOOK(14);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2308, "forth", loc1))(loc1);
			}
			RTHOOK(15);
			RTDBGAA(Current, dtype, 19670, 0x10000000, 1); /* childvisible_nb */
			*(EIF_INTEGER_32 *)(Current + RTWA(19670, dtype)) = (EIF_INTEGER_32) loc6;
			RTHOOK(16);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19671, dtype))(Current);
			RTHOOK(17);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19669, dtype))(Current)).it_i4);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(19682, dtype));
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 * loc6) + ti4_1) + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_2));
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(19682, dtype));
			ui4_2 = (EIF_INTEGER_32) (loc4 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_3));
			ub1 = arg1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16152, dtype))(Current, ui4_1x, ui4_2x, ub1x);
		} else {
			RTHOOK(18);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2292, "start", loc1))(loc1);
			for (;;) {
				RTHOOK(19);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2306, "after", loc1))(loc1)).it_b);
				if (tb2) break;
				RTHOOK(20);
				RTDBGAL(2, 0xF80007B4, 0, 0); /* loc2 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc2 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(21);
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16411, "is_show_requested", loc2))(loc2)).it_b);
				if (tb3) {
					RTHOOK(22);
					RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
					loc6++;
					RTHOOK(23);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16251, "minimum_width", loc2))(loc2)).it_i4);
					loc5 += ti4_1;
					RTHOOK(24);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16252, "minimum_height", loc2))(loc2)).it_i4);
					ui4_1 = ti4_1;
					ti4_1 = eif_max_int32 (loc4,ui4_1);
					loc4 = (EIF_INTEGER_32) ti4_1;
				}
				RTHOOK(25);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2308, "forth", loc1))(loc1);
			}
			RTHOOK(26);
			RTDBGAA(Current, dtype, 19685, 0x10000000, 1); /* children_width */
			*(EIF_INTEGER_32 *)(Current + RTWA(19685, dtype)) = (EIF_INTEGER_32) loc5;
			RTHOOK(27);
			RTDBGAA(Current, dtype, 19670, 0x10000000, 1); /* childvisible_nb */
			*(EIF_INTEGER_32 *)(Current + RTWA(19670, dtype)) = (EIF_INTEGER_32) loc6;
			RTHOOK(28);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19671, dtype))(Current);
			RTHOOK(29);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19669, dtype))(Current)).it_i4);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(19682, dtype));
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + ti4_1) + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_2));
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(19682, dtype));
			ui4_2 = (EIF_INTEGER_32) (loc4 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_3));
			ub1 = arg1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16152, dtype))(Current, ui4_1x, ui4_2x, ub1x);
		}
		RTHOOK(30);
		ur1 = RTCCL(loc3);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2265, "valid_cursor", loc1))(loc1, ur1x)).it_b);
		if (tb3) {
			RTHOOK(31);
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2266, "go_to", loc1))(loc1, ur1x);
		}
	} else {
		RTHOOK(32);
		RTDBGAA(Current, dtype, 19685, 0x10000000, 1); /* children_width */
		*(EIF_INTEGER_32 *)(Current + RTWA(19685, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(33);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19682, dtype));
		ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_1);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(19682, dtype));
		ui4_2 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_2);
		ub1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16152, dtype))(Current, ui4_1x, ui4_2x, ub1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ub1
#undef arg1
}

/* {EV_HORIZONTAL_BOX_IMP}.interface */
static EIF_TYPED_VALUE F1978_24207_body (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1977, Current, 0, 0, 30069);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1977, Current, 30069);
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

EIF_TYPED_VALUE F1978_24207 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(15741,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(15741, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1978_24207_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(15741,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1978 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
