/*
 * Code for class EV_PIXEL_BUFFER_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1382_12438(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1382_12439(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1382_12440(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1382_12441(EIF_REFERENCE);
extern void F1382_12442(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1382_12443(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1382_12444(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1382_12445(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1382_12446(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1382_12447(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1382_12448(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1382_12449(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1382_12450(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1382_12451(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1382_12452(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1382_12453(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1382_12454(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1382_12455(EIF_REFERENCE);
extern void F1382_12456(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1382_12457(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1382_12458(EIF_REFERENCE);
extern void F1382_12459(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1382_12460(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1382_12461(EIF_REFERENCE);
extern void F1382_12462(EIF_REFERENCE);
extern void F1382_12463(EIF_REFERENCE);
extern void F1382_12464(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit1382(void);

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

/* {EV_PIXEL_BUFFER_IMP}.make_with_size */
void F1382_12438 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_with_size";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1381, Current, 0, 2, 19052);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19052);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("width_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("height_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5639, 970))(Current)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5618, 970))(Current)).it_i4);
		ui4_1 = ti4_1;
		ub1 = (EIF_BOOLEAN) 1;
		ui4_2 = ((EIF_INTEGER_32) 8L);
		ui4_3 = arg1;
		ui4_4 = arg2;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5631, 970))(Current, ui4_1x, ub1x, ui4_2x, ui4_3x, ui4_4x)).it_p);
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9485, dtype))(Current, up1x);
		RTHOOK(5);
		tp1 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
		up1 = tp1;
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5633, 970))(Current, up1x, ui4_1x);
	} else {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 9484, 0xF8000535, 0); /* internal_pixmap */
		tr1 = RTLNSMART(RTWCT(9484, dtype, Dftype(Current)).id);
		ui4_1 = arg1;
		ui4_2 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(9111, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
		RTNHOOK(6,1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(9484, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ub1
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.old_make */
void F1382_12439 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "old_make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
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
	
	RTEAA(l_feature_name, 1381, Current, 0, 1, 19053);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19053);
	RTCC(arg1, 1381, l_feature_name, 1, eif_new_type(1277, 0x01), 0x01);
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
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9459, dtype))(Current, ui4_1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("interface_assigned", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9342, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
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
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.make_with_pixmap */
void F1382_12440 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_with_pixmap";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_POINTER, &loc2);
	
	RTEAA(l_feature_name, 1381, Current, 2, 1, 19054);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19054);
	RTCC(arg1, 1381, l_feature_name, 1, eif_new_type(1333, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000608, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1544, 0x00), loc1);
	RTHOOK(3);
	RTCT0("l_pixmap_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(loc1 + RTVA(11113, "drawable", loc1));
	up2 = tp2;
	tp3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	up3 = tp3;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = ((EIF_INTEGER_32) 0L);
	ui4_4 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10943, "width", loc1))(loc1)).it_i4);
	ui4_5 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10944, "height", loc1))(loc1)).it_i4);
	ui4_6 = ti4_2;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5485, 969))(Current, up1x, up2x, up3x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x)).it_p);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(5);
	up1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9485, dtype))(Current, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.make */
void F1382_12441 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1381, Current, 0, 0, 19055);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19055);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9483, 0xF80000A3, 0); /* reusable_managed_pointer */
	tr1 = RTLNSMART(RTWCT(9483, dtype, Dftype(Current)).id);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	up1 = tp1;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3173, Dtype(tr1)))(tr1, up1x, ui4_1x);
	RTNHOOK(1,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(9483, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9355, dtype))(Current, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
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
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ui4_1
#undef ui1_1
#undef ub1
}

/* {EV_PIXEL_BUFFER_IMP}.set_with_named_path */
void F1382_12442 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_with_named_path";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLR(6,loc4);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_POINTER, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1381, Current, 4, 1, 19056);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19056);
	RTCC(arg1, 1381, l_feature_name, 1, eif_new_type(185, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_file_name_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3828, "is_empty", arg1))(arg1)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5639, 970))(Current)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
		RTHOOK(3);
		RTDBGAL(1, 0xF80004D4, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(1236, 0x01).id);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8163, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(3,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAL(3, 0x40000000, 1, 0); /* loc3 */
		tp1 = *(EIF_POINTER *)(loc1 + RTVA(8165, "item", loc1));
		up1 = tp1;
		up2 = (EIF_POINTER *) &(loc2);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5626, 970))(Current, up1x, up2x)).it_p);
		loc3 = (EIF_POINTER) tp1;
		RTHOOK(5);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc2 != tp1)) {
			RTHOOK(6);
			tr1 = RTLN(eif_new_type(62, 0x01).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(6,1);
			tr2 = RTMS_EX_H("Could not load image file.",26,2015163694);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1290, "raise", tr1))(tr1, ur1x);
		} else {
			RTHOOK(7);
			up1 = loc3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9485, dtype))(Current, up1x);
		}
	} else {
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9484, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = RTCCL(tr1);
		if (EIF_TEST(loc4)) {
			RTHOOK(9);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9120, "set_with_named_path", loc4))(loc4, ur1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.set_with_pointer */
void F1382_12443 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_with_pointer";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1381, Current, 3, 2, 19057);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19057);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(3, 0xF80004D3, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1235, 0x01).id);
	up1 = arg1;
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(8154, Dtype(tr1)))(tr1, up1x, ui4_1x);
	RTNHOOK(1,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8155, "item", loc3))(loc3)).it_p);
	up1 = tp1;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	up2 = tp2;
	up3 = (EIF_POINTER *) &(loc2);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5627, 970))(Current, up1x, up2x, up3x)).it_p);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(3);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(loc2 != tp1)) {
		RTHOOK(4);
		tr1 = RTLN(eif_new_type(62, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(4,1);
		tr2 = RTMS_EX_H("Could not load image from stream.",33,404722734);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1290, "raise", tr1))(tr1, ur1x);
	} else {
		RTHOOK(5);
		up1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9485, dtype))(Current, up1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.save_to_named_path */
void F1382_12444 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "save_to_named_path";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(14);
	RTLR(0,arg1);
	RTLR(1,loc7);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,ur1);
	RTLR(5,loc5);
	RTLR(6,loc9);
	RTLR(7,loc6);
	RTLR(8,Current);
	RTLR(9,loc1);
	RTLR(10,loc2);
	RTLR(11,tr2);
	RTLR(12,loc10);
	RTLR(13,ur2);
	RTLIU(14);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_POINTER, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	
	RTEAA(l_feature_name, 1381, Current, 10, 1, 19058);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19058);
	RTCC(arg1, 1381, l_feature_name, 1, eif_new_type(185, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_file_name_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3828, "is_empty", arg1))(arg1)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(7, 0xF80003EE, 0, 0); /* loc7 */
	tr1 = RTLN(eif_new_type(1006, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(4, 0xF8000153, 0, 0); /* loc4 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6460, "writeable_pixbuf_formats", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("jpeg",4,1785750887);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3833, "has_extension", arg1))(arg1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(5);
		RTDBGAL(5, 0xF80000ED, 0, 0); /* loc5 */
		tr1 = RTMS32_EX_H("j\000\000\000p\000\000\000g\000\000\000",3,6975591);
		loc5 = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3837, "extension", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc9 = tr1;
		if (EIF_TEST(loc9)) {
			RTHOOK(7);
			RTDBGAL(5, 0xF80000ED, 0, 0); /* loc5 */
			loc5 = (EIF_REFERENCE) loc9;
		} else {
			RTHOOK(8);
			RTDBGAL(5, 0xF80000ED, 0, 0); /* loc5 */
			tr1 = RTMS32_EX_H("p\000\000\000n\000\000\000g\000\000\000",3,7368295);
			loc5 = (EIF_REFERENCE) tr1;
		}
	}
	RTHOOK(9);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(10);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc4))(loc4)).it_i4);
		if ((EIF_BOOLEAN) (loc8 > ti4_1)) break;
		RTHOOK(11);
		ui4_1 = loc8;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "i_th", loc4))(loc4, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(loc5);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4895, "is_case_insensitive_equal", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTHOOK(12);
			RTDBGAL(6, 0xF80000ED, 0, 0); /* loc6 */
			loc6 = (EIF_REFERENCE) RTCCL(loc5);
		}
		RTHOOK(13);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		loc8++;
	}
	RTHOOK(14);
	if ((EIF_BOOLEAN)(loc6 != NULL)) {
		RTHOOK(15);
		tr1 = RTMS32_EX_H("j\000\000\000p\000\000\000g\000\000\000",3,6975591);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4895, "is_case_insensitive_equal", loc6))(loc6, ur1x)).it_b);
		if (tb1) {
			RTHOOK(16);
			RTDBGAL(6, 0xF80000ED, 0, 0); /* loc6 */
			tr1 = RTMS32_EX_H("j\000\000\000p\000\000\000e\000\000\000g\000\000\000",4,1785750887);
			loc6 = (EIF_REFERENCE) tr1;
		}
		RTHOOK(17);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5639, 970))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_2 >= ((EIF_INTEGER_32) 2L))) {
			RTHOOK(18);
			RTDBGAL(1, 0xF80004D4, 0, 0); /* loc1 */
			tr1 = RTLN(eif_new_type(1236, 0x01).id);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8163, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(18,1);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(19);
			RTDBGAL(2, 0xF80004D4, 0, 0); /* loc2 */
			tr1 = RTLN(eif_new_type(1236, 0x01).id);
			ur1 = RTCCL(loc6);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8168, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(19,1);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(20);
			tp1 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
			up1 = tp1;
			tp2 = *(EIF_POINTER *)(loc1 + RTVA(8165, "item", loc1));
			up2 = tp2;
			tp3 = *(EIF_POINTER *)(loc2 + RTVA(8165, "item", loc2));
			up3 = tp3;
			up4 = (EIF_POINTER *) &(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5484, 969))(Current, up1x, up2x, up3x, up4x);
			RTHOOK(21);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
			if ((EIF_BOOLEAN)(loc3 != tp1)) {
				RTHOOK(22);
				tr1 = RTLN(eif_new_type(62, 0x01).id);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
				RTNHOOK(22,1);
				tr2 = RTMS_EX_H("Could not save image file.",26,1692795182);
				ur1 = tr2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1290, "raise", tr1))(tr1, ur1x);
			}
		} else {
			RTHOOK(23);
			tb1 = '\0';
			tr1 = RTMS32_EX_H("j\000\000\000p\000\000\000g\000\000\000",3,6975591);
			ur1 = tr1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4895, "is_case_insensitive_equal", loc6))(loc6, ur1x)).it_b);
			if (tb2) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9484, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc10 = RTCCL(tr1);
				tb1 = EIF_TEST(loc10);
			}
			if (tb1) {
				RTHOOK(24);
				tr1 = RTLN(eif_new_type(1029, 0x01).id);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
				RTNHOOK(24,1);
				ur1 = RTCCL(tr1);
				ur2 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9126, "save_to_named_path", loc10))(loc10, ur1x, ur2x);
			} else {
				RTHOOK(25);
				tr1 = RTLN(eif_new_type(62, 0x01).id);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
				RTNHOOK(25,1);
				tr2 = RTMS_EX_H("Could not save image file.",26,1692795182);
				ur1 = tr2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1290, "raise", tr1))(tr1, ur1x);
			}
		}
	} else {
		RTHOOK(26);
		tr1 = RTLN(eif_new_type(62, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(26,1);
		tr2 = RTMS_EX_H("Could not save image file.",26,1692795182);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1290, "raise", tr1))(tr1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(13);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef up4
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.save_to_pointer */
EIF_TYPED_VALUE F1382_12445 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "save_to_pointer";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE up5x = {{0}, SK_POINTER};
#define up5 up5x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_POINTER, &loc4);
	RTLU(SK_POINTER, &loc5);
	
	RTEAA(l_feature_name, 1381, Current, 5, 0, 19059);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19059);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0xF80004D4, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1236, 0x01).id);
	tr2 = RTMS_EX_H("png",3,7368295);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8168, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
	up1 = tp1;
	up2 = (EIF_POINTER *) &(loc5);
	up3 = (EIF_INTEGER_32 *) &(loc3);
	tp2 = *(EIF_POINTER *)(loc2 + RTVA(8165, "item", loc2));
	up4 = tp2;
	up5 = (EIF_POINTER *) &(loc4);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5629, 970))(Current, up1x, up2x, up3x, up4x, up5x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_CHECK) {
		RTHOOK(3);
		RTCT("success", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		RTDBGAL(0, 0xF80000A3, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(163, 0x01).id);
		up1 = loc5;
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3174, Dtype(tr1)))(tr1, up1x, ui4_1x);
		RTNHOOK(5,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef up4
#undef up5
#undef ur1
#undef ui4_1
}

/* {EV_PIXEL_BUFFER_IMP}.sub_pixmap */
EIF_TYPED_VALUE F1382_12446 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "sub_pixmap";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
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
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLR(5,loc3);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1381, Current, 3, 1, 19060);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19060);
	RTCC(arg1, 1381, l_feature_name, 1, eif_new_type(1168, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5639, 970))(Current)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
		RTHOOK(2);
		RTDBGAL(0, 0xF8000535, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(1333, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(2,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(3);
		RTDBGAL(1, 0xF8000608, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr1);
		loc1 = RTRV(eif_new_type(1544, 0x00), loc1);
		RTHOOK(4);
		RTCT0("l_pixmap_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(5);
		RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
		tp1 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
		up1 = tp1;
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(7802, "x", arg1));
		ui4_1 = ti4_1;
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(7803, "y", arg1));
		ui4_2 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(7804, "width", arg1));
		ui4_3 = ti4_3;
		ti4_4 = *(EIF_INTEGER_32 *)(arg1 + RTVA(7805, "height", arg1));
		ui4_4 = ti4_4;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5632, 970))(Current, up1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x)).it_p);
		loc2 = (EIF_POINTER) tp1;
		RTHOOK(6);
		up1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11103, "set_pixmap_from_pixbuf", loc1))(loc1, up1x);
		RTHOOK(7);
		up1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5537, 969))(Current, up1x);
	} else {
		RTHOOK(8);
		RTDBGAL(3, 0xF8000535, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9484, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(9);
		RTCT0("l_internal_pixmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(10);
		RTDBGAL(0, 0xF8000535, 0,0); /* Result */
		ur1 = RTCCL(arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8734, "sub_pixmap", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.stretched */
EIF_TYPED_VALUE F1382_12447 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "stretched";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
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
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,loc5);
	RTLR(5,loc3);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1381, Current, 5, 2, 19061);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19061);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_width_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_height_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_locked", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9474, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(0, 0xF80004FD, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1277, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(4,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(1, 0xF8000565, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1381, 0x00), loc1);
	RTHOOK(6);
	RTCT0("l_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(7);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5639, 970))(Current)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
		RTHOOK(8);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 16L)) && (EIF_BOOLEAN) (arg2 <= ((EIF_INTEGER_32) 16L)))) {
			RTHOOK(9);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5456, 969))(Current)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(10);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5454, 969))(Current)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(11);
		RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
		tp1 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
		up1 = tp1;
		ui4_1 = arg1;
		ui4_2 = arg2;
		ui4_3 = loc4;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5452, 969))(Current, up1x, ui4_1x, ui4_2x, ui4_3x)).it_p);
		loc2 = (EIF_POINTER) tp1;
		RTHOOK(12);
		up1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9485, "set_gdkpixbuf", loc1))(loc1, up1x);
	} else {
		RTHOOK(13);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9484, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = RTCCL(tr1);
		if (EIF_TEST(loc5)) {
			RTHOOK(14);
			RTDBGAL(3, 0xF8000535, 0, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(15);
			ui4_1 = arg1;
			ui4_2 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9124, "stretch", loc3))(loc3, ui4_1x, ui4_2x);
			RTHOOK(16);
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9486, "set_internal_pixmap", loc1))(loc1, ur1x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("result_width_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8489, "width", Result))(Result)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("result_height_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8490, "height", Result))(Result)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.sub_pixel_buffer */
EIF_TYPED_VALUE F1382_12448 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "sub_pixel_buffer";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ur8_4x = {{0}, SK_REAL64};
#define ur8_4 ur8_4x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLR(6,Result);
	RTLR(7,loc3);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1381, Current, 4, 1, 19062);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19062);
	RTCC(arg1, 1381, l_feature_name, 1, eif_new_type(1168, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5639, 970))(Current)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
		RTHOOK(2);
		RTDBGAL(4, 0xF8000490, 0, 0); /* loc4 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9478, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ur1 = RTCCL(arg1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7819, "intersection", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc4 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(3);
		RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
		tp1 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
		up1 = tp1;
		ti4_1 = *(EIF_INTEGER_32 *)(loc4 + RTVA(7802, "x", loc4));
		ui4_1 = ti4_1;
		ti4_2 = *(EIF_INTEGER_32 *)(loc4 + RTVA(7803, "y", loc4));
		ui4_2 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(loc4 + RTVA(7804, "width", loc4));
		ui4_3 = ti4_3;
		ti4_4 = *(EIF_INTEGER_32 *)(loc4 + RTVA(7805, "height", loc4));
		ui4_4 = ti4_4;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5632, 970))(Current, up1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x)).it_p);
		loc1 = (EIF_POINTER) tp1;
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9478, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7817, "contains", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTHOOK(5);
			RTDBGAL(0, 0xF80004FD, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(1277, 0x01).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(5,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8493, "actual_implementation", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			up1 = loc1;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5620, 970))(Current, up1x)).it_p);
			up1 = tp1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9485, "set_gdkpixbuf", tr1))(tr1, up1x);
		} else {
			RTHOOK(7);
			RTDBGAL(0, 0xF80004FD, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(1277, 0x01).id);
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(7804, "width", arg1));
			ui4_1 = ti4_1;
			ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(7805, "height", arg1));
			ui4_2 = ti4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(8472, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
			RTNHOOK(7,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(8);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7810, "has_area", loc4))(loc4)).it_b);
			if (tb1) {
				RTHOOK(9);
				RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8493, "actual_implementation", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(9,1);
				tp1 = *(EIF_POINTER *)(tr1 + RTVA(9487, "gdk_pixbuf", tr1));
				loc2 = (EIF_POINTER) tp1;
				RTHOOK(10);
				up1 = loc1;
				up2 = loc2;
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(7802, "x", arg1));
				ui4_1 = ((EIF_INTEGER_32) 0L);
				ti4_2 = eif_max_int32 ((EIF_INTEGER_32) -ti4_1,ui4_1);
				ui4_1 = ti4_2;
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(7803, "y", arg1));
				ui4_2 = ((EIF_INTEGER_32) 0L);
				ti4_3 = eif_max_int32 ((EIF_INTEGER_32) -ti4_1,ui4_2);
				ui4_2 = ti4_3;
				ti4_1 = *(EIF_INTEGER_32 *)(loc4 + RTVA(7804, "width", loc4));
				ui4_3 = ti4_1;
				ti4_4 = *(EIF_INTEGER_32 *)(loc4 + RTVA(7805, "height", loc4));
				ui4_4 = ti4_4;
				ti4_5 = *(EIF_INTEGER_32 *)(arg1 + RTVA(7802, "x", arg1));
				ui4_5 = ((EIF_INTEGER_32) 0L);
				ti4_6 = eif_max_int32 ((EIF_INTEGER_32) -ti4_5,ui4_5);
				tr8_1 = (EIF_REAL_64) (ti4_6);
				ur8_1 = tr8_1;
				ti4_5 = *(EIF_INTEGER_32 *)(arg1 + RTVA(7802, "x", arg1));
				ui4_5 = ((EIF_INTEGER_32) 0L);
				ti4_6 = eif_max_int32 ((EIF_INTEGER_32) -ti4_5,ui4_5);
				tr8_2 = (EIF_REAL_64) (ti4_6);
				ur8_2 = tr8_2;
				ur8_3 = (EIF_REAL_64) 1.0;
				ur8_4 = (EIF_REAL_64) 1.0;
				ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5456, 969))(Current)).it_i4);
				ui4_5 = ti4_5;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5453, 969))(Current, up1x, up2x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur8_1x, ur8_2x, ur8_3x, ur8_4x, ui4_5x);
			}
		}
		RTHOOK(11);
		up1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5537, 969))(Current, up1x);
	} else {
		RTHOOK(12);
		RTDBGAL(0, 0xF80004FD, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(1277, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(12,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(13);
		RTDBGAL(3, 0xF8000535, 0, 0); /* loc3 */
		ur1 = RTCCL(arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9466, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(14);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8493, "actual_implementation", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(14,1);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9486, "set_internal_pixmap", tr1))(tr1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.get_pixel */
EIF_TYPED_VALUE F1382_12449 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "get_pixel";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	
	RTEAA(l_feature_name, 1381, Current, 5, 2, 19063);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19063);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_x_valid", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9476, dtype))(Current)).it_i4);
		RTNHOOK(1,1);
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		RTTE((EIF_BOOLEAN) (arg1 < tu4_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_y_valid", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9477, dtype))(Current)).it_i4);
		RTNHOOK(2,1);
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		RTTE((EIF_BOOLEAN) (arg2 <= tu4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5624, 970))(Current, up1x)).it_n4);
	loc3 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(4);
	RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5625, 970))(Current, up1x)).it_n4);
	loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 8L));
	RTHOOK(5);
	RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5623, 970))(Current, up1x)).it_n4);
	loc4 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(6);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (arg2 * loc4) + (EIF_NATURAL_32) ((EIF_NATURAL_32) (arg1 * loc3) * loc5)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAL(2, 0xF80000A3, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9483, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	tp1 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5619, 970))(Current, up1x)).it_p);
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1568, 120))(Current)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (loc1 + ti4_1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3175, "set_from_pointer", loc2))(loc2, up1x, ui4_1x);
	RTHOOK(9);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = loc1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3239, "read_natural_32_be", loc2))(loc2, ui4_1x)).it_n4);
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.set_pixel */
void F1382_12450 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "set_pixel";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_n4
#define arg3 arg3x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	
	RTEAA(l_feature_name, 1381, Current, 5, 3, 19064);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19064);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_x_valid", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9476, dtype))(Current)).it_i4);
		RTNHOOK(1,1);
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		RTTE((EIF_BOOLEAN) (arg1 < tu4_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_y_valid", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9477, dtype))(Current)).it_i4);
		RTNHOOK(2,1);
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		RTTE((EIF_BOOLEAN) (arg2 <= tu4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5624, 970))(Current, up1x)).it_n4);
	loc3 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(4);
	RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5625, 970))(Current, up1x)).it_n4);
	loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 8L));
	RTHOOK(5);
	RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
	up1 = tp1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5623, 970))(Current, up1x)).it_n4);
	loc4 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(6);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (arg2 * loc4) + (EIF_NATURAL_32) ((EIF_NATURAL_32) (arg1 * loc3) * loc5)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAL(2, 0xF80000A3, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9483, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	tp1 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5619, 970))(Current, up1x)).it_p);
	up1 = tp1;
	ti4_1 = (EIF_INTEGER_32) (EIF_NATURAL_32) (loc5 * loc3);
	ui4_1 = (EIF_INTEGER_32) (loc1 + ti4_1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3175, "set_from_pointer", loc2))(loc2, up1x, ui4_1x);
	RTHOOK(9);
	uu4_1 = arg3;
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3249, "put_natural_32_be", loc2))(loc2, uu4_1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("pixel_set", EX_POST);
		uu4_1 = arg1;
		uu4_2 = arg2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9472, dtype))(Current, uu4_1x, uu4_2x)).it_n4);
		if ((EIF_BOOLEAN)(tu4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.draw_text */
void F1382_12451 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "draw_text";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_POINTER loc8 = (EIF_POINTER) 0;
	EIF_POINTER loc9 = (EIF_POINTER) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_NATURAL_8 loc13 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc14 = (EIF_NATURAL_8) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ur8_4x = {{0}, SK_REAL64};
#define ur8_4 ur8_4x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE uu1_2x = {{0}, SK_UINT8};
#define uu1_2 uu1_2x.it_n1
	EIF_TYPED_VALUE uu1_3x = {{0}, SK_UINT8};
#define uu1_3 uu1_3x.it_n1
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc5);
	RTLR(4,ur1);
	RTLR(5,tr1);
	RTLR(6,Current);
	RTLR(7,loc6);
	RTLR(8,loc12);
	RTLR(9,loc7);
	RTLR(10,loc10);
	RTLR(11,loc11);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_POINTER, &loc8);
	RTLU(SK_POINTER, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_UINT8, &loc13);
	RTLU(SK_UINT8, &loc14);
	
	RTEAA(l_feature_name, 1381, Current, 14, 3, 19065);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19065);
	RTCC(arg1, 1381, l_feature_name, 1, eif_new_type(229, 0x01), 0x01);
	RTCC(arg2, 1381, l_feature_name, 2, eif_new_type(1279, 0x01), 0x01);
	RTCC(arg3, 1381, l_feature_name, 3, eif_new_type(1169, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7844, "x", arg3))(arg3)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7846, "y", arg3))(arg3)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(5, 0xF80000BA, 0, 0); /* loc5 */
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8528, "string_size", arg2))(arg2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = eif_integer_32_item(RTCW(loc5),1);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9476, dtype))(Current)).it_i4);
	ui4_1 = ti4_2;
	ti4_2 = eif_min_int32 ((EIF_INTEGER_32) (loc1 + ti4_1),ui4_1);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 - loc1);
	RTHOOK(5);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ti4_1 = eif_integer_32_item(RTCW(loc5),2);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9477, dtype))(Current)).it_i4);
	ui4_1 = ti4_2;
	ti4_2 = eif_min_int32 ((EIF_INTEGER_32) (loc2 + ti4_1),ui4_1);
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 - loc2);
	RTHOOK(6);
	RTDBGAL(6, 0xF8000535, 0, 0); /* loc6 */
	tr1 = RTLN(eif_new_type(1333, 0x01).id);
	ui4_1 = loc3;
	ui4_2 = loc4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(9111, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(6,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8726, "set_font", loc6))(loc6, ur1x);
	RTHOOK(8);
	RTDBGAL(13, 0x30000000, 1, 0); /* loc13 */
	loc13 = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 75L);
	RTHOOK(9);
	RTDBGAL(14, 0x30000000, 1, 0); /* loc14 */
	loc14 = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 200L);
	RTHOOK(10);
	RTDBGAL(12, 0xF8000500, 0, 0); /* loc12 */
	tr1 = RTLN(eif_new_type(1280, 0x01).id);
	ti4_1 = (EIF_INTEGER_32) loc13;
	ui4_1 = ti4_1;
	ti4_2 = (EIF_INTEGER_32) loc13;
	ui4_2 = ti4_2;
	ti4_3 = (EIF_INTEGER_32) loc13;
	ui4_3 = ti4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(8529, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(10,1);
	loc12 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(11);
	ur1 = RTCCL(loc12);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8652, "set_background_color", loc6))(loc6, ur1x);
	RTHOOK(12);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8745, "clear", loc6))(loc6);
	RTHOOK(13);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8750, "draw_text_top_left", loc6))(loc6, ui4_1x, ui4_2x, ur1x);
	RTHOOK(14);
	RTDBGAL(7, 0xF8000608, 0, 0); /* loc7 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc7 = RTCCL(tr1);
	loc7 = RTRV(eif_new_type(1544, 0x00), loc7);
	RTHOOK(15);
	RTCT0("l_pixmap_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc7 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(16);
	RTDBGAL(10, 0xF80004FD, 0, 0); /* loc10 */
	tr1 = RTLN(eif_new_type(1277, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(16,1);
	loc10 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(17);
	RTDBGAL(11, 0xF8000565, 0, 0); /* loc11 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc11 = RTCCL(tr1);
	loc11 = RTRV(eif_new_type(1381, 0x00), loc11);
	RTHOOK(18);
	RTCT0("l_pixbuf_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc11 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(19);
	RTDBGAL(8, 0x40000000, 1, 0); /* loc8 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(loc7 + RTVA(11113, "drawable", loc7));
	up2 = tp2;
	tp3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	up3 = tp3;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = ((EIF_INTEGER_32) 0L);
	ui4_4 = ((EIF_INTEGER_32) 0L);
	ui4_5 = loc3;
	ui4_6 = loc4;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5485, 969))(Current, up1x, up2x, up3x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x)).it_p);
	loc8 = (EIF_POINTER) tp1;
	RTHOOK(20);
	RTDBGAL(9, 0x40000000, 1, 0); /* loc9 */
	up1 = loc8;
	ub1 = (EIF_BOOLEAN) 1;
	uu1_1 = loc13;
	uu1_2 = loc13;
	uu1_3 = loc13;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5261, 969))(Current, up1x, ub1x, uu1_1x, uu1_2x, uu1_3x)).it_p);
	loc9 = (EIF_POINTER) tp1;
	RTHOOK(21);
	up1 = loc8;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5537, 969))(Current, up1x);
	RTHOOK(22);
	RTDBGAL(8, 0x40000000, 1, 0); /* loc8 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	loc8 = (EIF_POINTER) tp1;
	RTHOOK(23);
	up1 = loc9;
	tp1 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
	up2 = tp1;
	ui4_1 = loc1;
	ui4_2 = loc2;
	ui4_3 = loc3;
	ui4_4 = loc4;
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_1 = tr8_1;
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	ur8_2 = tr8_2;
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
	ur8_3 = tr8_3;
	tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
	ur8_4 = tr8_4;
	ui4_5 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (EIF_INTEGER_32) loc14;
	ui4_6 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5458, 969))(Current, up1x, up2x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur8_1x, ur8_2x, ur8_3x, ur8_4x, ui4_5x, ui4_6x);
	RTHOOK(24);
	up1 = loc9;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5537, 969))(Current, up1x);
	RTHOOK(25);
	RTDBGAL(9, 0x40000000, 1, 0); /* loc9 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	loc9 = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(19);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef uu1_1
#undef uu1_2
#undef uu1_3
#undef ub1
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.draw_pixel_buffer_with_x_y */
void F1382_12452 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "draw_pixel_buffer_with_x_y";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ur8_4x = {{0}, SK_REAL64};
#define ur8_4 ur8_4x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,arg3);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	
	RTEAA(l_feature_name, 1381, Current, 5, 3, 19066);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19066);
	RTCC(arg3, 1381, l_feature_name, 3, eif_new_type(1277, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000565, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1381, 0x00), loc1);
	RTHOOK(2);
	RTCT0("l_pixel_buffer_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) arg1;
	RTHOOK(4);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	loc5 = (EIF_INTEGER_32) arg2;
	RTHOOK(5);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9476, "width", loc1))(loc1)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9477, "height", loc1))(loc1)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	if ((EIF_BOOLEAN) (loc4 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(8);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(9);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 += arg1;
		RTHOOK(10);
		if ((EIF_BOOLEAN) (loc2 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(11);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
	}
	RTHOOK(12);
	if ((EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(13);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 += arg2;
		RTHOOK(14);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(15);
		if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(16);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
	}
	RTHOOK(17);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9476, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 + loc2) > ti4_1)) {
		RTHOOK(18);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9476, dtype))(Current)).it_i4);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - loc4);
		RTHOOK(19);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9476, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (loc4 > ti4_1)) {
			RTHOOK(20);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9476, dtype))(Current)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(21);
		if ((EIF_BOOLEAN) (loc2 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(22);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
	}
	RTHOOK(23);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9477, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc5 + loc3) > ti4_1)) {
		RTHOOK(24);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9477, dtype))(Current)).it_i4);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - loc5);
		RTHOOK(25);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9477, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (loc5 > ti4_1)) {
			RTHOOK(26);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9477, dtype))(Current)).it_i4);
			loc5 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(27);
		if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(28);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
	}
	RTHOOK(29);
	tp1 = *(EIF_POINTER *)(loc1 + RTVA(9487, "gdk_pixbuf", loc1));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
	up2 = tp2;
	ui4_1 = loc4;
	ui4_2 = loc5;
	ui4_3 = loc2;
	ui4_4 = loc3;
	tr8_1 = (EIF_REAL_64) (arg1);
	ur8_1 = tr8_1;
	tr8_2 = (EIF_REAL_64) (arg2);
	ur8_2 = tr8_2;
	tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
	ur8_3 = tr8_3;
	tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
	ur8_4 = tr8_4;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5455, 969))(Current)).it_i4);
	ui4_5 = ti4_1;
	ui4_6 = ((EIF_INTEGER_32) 255L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5458, 969))(Current, up1x, up2x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur8_1x, ur8_2x, ur8_3x, ur8_4x, ui4_5x, ui4_6x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef up1
#undef up2
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.width */
EIF_TYPED_VALUE F1382_12453 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "width";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1381, Current, 1, 0, 19067);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19067);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5639, 970))(Current)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		tp1 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
		up1 = tp1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5621, 970))(Current, up1x)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9484, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr1);
		if (EIF_TEST(loc1)) {
			RTHOOK(4);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8732, "width", loc1))(loc1)).it_i4);
			Result = (EIF_INTEGER_32) ti4_1;
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {EV_PIXEL_BUFFER_IMP}.height */
EIF_TYPED_VALUE F1382_12454 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "height";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1381, Current, 1, 0, 19068);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19068);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5639, 970))(Current)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		tp1 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
		up1 = tp1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5622, 970))(Current, up1x)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9484, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr1);
		if (EIF_TEST(loc1)) {
			RTHOOK(4);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8733, "height", loc1))(loc1)).it_i4);
			Result = (EIF_INTEGER_32) ti4_1;
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {EV_PIXEL_BUFFER_IMP}.data_ptr */
EIF_TYPED_VALUE F1382_12455 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "data_ptr";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1381, Current, 0, 0, 19069);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19069);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x40000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5619, 970))(Current, up1x)).it_p);
	Result = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef up1
}

/* {EV_PIXEL_BUFFER_IMP}.set_from_stock_id */
void F1382_12456 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_from_stock_id";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
#define arg1 arg1x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	
	RTEAA(l_feature_name, 1381, Current, 2, 1, 19070);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19070);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_stock_id_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5919, 970))(Current, up1x)).it_p);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(3);
	up1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5536, 969))(Current, up1x);
	RTHOOK(4);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	up1 = loc2;
	up2 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5181, 969))(Current)).it_i4);
	ui4_1 = ti4_1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	up3 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5460, 969))(Current, up1x, up2x, ui4_1x, up3x)).it_p);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(5);
	up1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5537, 969))(Current, up1x);
	RTHOOK(6);
	RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(7);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		RTHOOK(8);
		up1 = loc1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5620, 970))(Current, up1x)).it_p);
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9485, dtype))(Current, up1x);
		RTHOOK(9);
		up1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5537, 969))(Current, up1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ui4_1
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.reusable_managed_pointer */
EIF_TYPED_VALUE F1382_12457 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9483,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_IMP}.internal_pixmap */
EIF_TYPED_VALUE F1382_12458 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9484,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_IMP}.set_gdkpixbuf */
void F1382_12459 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_gdkpixbuf";
	RTEX;
#define arg1 arg1x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE uu1_2x = {{0}, SK_UINT8};
#define uu1_2 uu1_2x.it_n1
	EIF_TYPED_VALUE uu1_3x = {{0}, SK_UINT8};
#define uu1_3 uu1_3x.it_n1
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1381, Current, 0, 1, 19073);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19073);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(tp1 != tp2)) {
		RTHOOK(2);
		tp1 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5537, 969))(Current, up1x);
	}
	RTHOOK(3);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(arg1 != tp1)) {
		RTHOOK(4);
		up1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5481, 969))(Current, up1x)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(5);
			RTDBGAA(Current, dtype, 9487, 0x40000000, 1); /* gdk_pixbuf */
			up1 = arg1;
			ub1 = (EIF_BOOLEAN) 0;
			uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			uu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			uu1_3 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5261, 969))(Current, up1x, ub1x, uu1_1x, uu1_2x, uu1_3x)).it_p);
			*(EIF_POINTER *)(Current + RTWA(9487, dtype)) = (EIF_POINTER) tp1;
			RTHOOK(6);
			up1 = arg1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5537, 969))(Current, up1x);
		} else {
			RTHOOK(7);
			RTDBGAA(Current, dtype, 9487, 0x40000000, 1); /* gdk_pixbuf */
			*(EIF_POINTER *)(Current + RTWA(9487, dtype)) = (EIF_POINTER) arg1;
		}
	} else {
		RTHOOK(8);
		RTDBGAA(Current, dtype, 9487, 0x40000000, 1); /* gdk_pixbuf */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		*(EIF_POINTER *)(Current + RTWA(9487, dtype)) = (EIF_POINTER) tp1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef uu1_1
#undef uu1_2
#undef uu1_3
#undef ub1
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.set_internal_pixmap */
void F1382_12460 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_internal_pixmap";
	RTEX;
#define arg1 arg1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1381, Current, 0, 1, 19074);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19074);
	RTCC(arg1, 1381, l_feature_name, 1, RTWCT(9484, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_pixmap_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 9484, 0xF8000535, 0); /* internal_pixmap */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(9484, dtype)) = (EIF_REFERENCE) tr1;
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

/* {EV_PIXEL_BUFFER_IMP}.gdk_pixbuf */
EIF_TYPED_VALUE F1382_12461 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(9487,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_IMP}.destroy */
void F1382_12462 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "destroy";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 1381, Current, 0, 0, 19076);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19076);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9357, dtype))(Current, ub1x);
	RTHOOK(2);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9485, dtype))(Current, up1x);
	RTHOOK(3);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9356, dtype))(Current, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_in_destroy_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9354, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
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
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ub1
}

/* {EV_PIXEL_BUFFER_IMP}.dispose */
void F1382_12463 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dispose";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1381, Current, 0, 0, 19077);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19077);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9485, dtype))(Current, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {EV_PIXEL_BUFFER_IMP}.draw_pixel_buffer */
void F1382_12464 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "draw_pixel_buffer";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1381, Current, 1, 2, 19078);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1381, Current, 19078);
	RTCC(arg1, 1381, l_feature_name, 1, eif_new_type(1277, 0x01), 0x01);
	RTCC(arg2, 1381, l_feature_name, 2, eif_new_type(1168, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000565, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1381, 0x00), loc1);
	RTHOOK(2);
	RTCT0("l_pixel_buffer_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(loc1 + RTVA(9487, "gdk_pixbuf", loc1));
	up1 = tp1;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7804, "width", arg2));
	ui4_3 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7805, "height", arg2));
	ui4_4 = ti4_2;
	tp2 = *(EIF_POINTER *)(Current + RTWA(9487, dtype));
	up2 = tp2;
	ti4_3 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7802, "x", arg2));
	ui4_5 = ti4_3;
	ti4_4 = *(EIF_INTEGER_32 *)(arg2 + RTVA(7803, "y", arg2));
	ui4_6 = ti4_4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5459, 969))(Current, up1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, up2x, ui4_5x, ui4_6x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef arg2
#undef arg1
}

void EIF_Minit1382 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
