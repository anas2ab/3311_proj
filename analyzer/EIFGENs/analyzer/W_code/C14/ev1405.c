/*
 * Code for class EV_COLORIZABLE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1405_13092(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1405_13093(EIF_REFERENCE);
extern void F1405_13094(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1405_13095(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1405_13096(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1405_13097(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1405_13098(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1405_13102(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1405_13103(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1405_13104(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1405_13105(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1405_13106(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1405_13107(EIF_REFERENCE);
static EIF_TYPED_VALUE F1405_13108_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1405_13108(EIF_REFERENCE);
extern void EIF_Minit1405(void);

#ifdef __cplusplus
}
#endif

#include <string.h>
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

/* {EV_COLORIZABLE_IMP}.background_color_internal */
EIF_TYPED_VALUE F1405_13092 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "background_color_internal";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1404, Current, 2, 0, 19600);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1404, Current, 19600);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9996, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTHOOK(2);
		RTDBGAL(0, 0xF8000500, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9341, "attached_interface", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr2);
	} else {
		RTHOOK(3);
		RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9998, dtype))(Current)).it_p);
		loc1 = (EIF_POINTER) tp1;
		RTHOOK(4);
		RTDBGAL(0, 0xF8000500, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(1280, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(4,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		up1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6040, 970))(Current, up1x)).it_i4);
		ui4_1 = ti4_1;
		up1 = loc1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6038, 970))(Current, up1x)).it_i4);
		ui4_2 = ti4_2;
		up1 = loc1;
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6037, 970))(Current, up1x)).it_i4);
		ui4_3 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8552, "set_rgb_with_16_bit", Result))(Result, ui4_1x, ui4_2x, ui4_3x);
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
#undef ui4_3
}

/* {EV_COLORIZABLE_IMP}.foreground_color_internal */
EIF_TYPED_VALUE F1405_13093 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "foreground_color_internal";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1404, Current, 2, 0, 19601);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1404, Current, 19601);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9997, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTHOOK(2);
		RTDBGAL(0, 0xF8000500, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9341, "attached_interface", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr2);
	} else {
		RTHOOK(3);
		RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9999, dtype))(Current)).it_p);
		loc1 = (EIF_POINTER) tp1;
		RTHOOK(4);
		RTDBGAL(0, 0xF8000500, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(1280, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(4,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		up1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6040, 970))(Current, up1x)).it_i4);
		ui4_1 = ti4_1;
		up1 = loc1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6038, 970))(Current, up1x)).it_i4);
		ui4_2 = ti4_2;
		up1 = loc1;
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6037, 970))(Current, up1x)).it_i4);
		ui4_3 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8552, "set_rgb_with_16_bit", Result))(Result, ui4_1x, ui4_2x, ui4_3x);
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
#undef ui4_3
}

/* {EV_COLORIZABLE_IMP}.set_background_color */
void F1405_13094 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_background_color";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1404, Current, 0, 1, 19602);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1404, Current, 19602);
	RTCC(arg1, 1404, l_feature_name, 1, eif_new_type(1280, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_color_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9996, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	if (!RTCEQ(tr1, tr2)) {
		RTHOOK(3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9995, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(4);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9994, dtype))(Current)).it_p);
			up1 = tp1;
			ub1 = (EIF_BOOLEAN) 1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5228, 969))(Current, up1x, ub1x);
		}
		RTHOOK(5);
		RTDBGAA(Current, dtype, 9996, 0xF800056C, 0); /* background_color_imp */
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr2);
		*(EIF_REFERENCE *)(Current + RTWA(9996, dtype)) = RTRV(RTWCT(9996, dtype, Dftype(Current)), tr1);
		RTAR(Current, tr1);
		RTHOOK(6);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9993, dtype))(Current)).it_p);
		up1 = tp1;
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9991, dtype))(Current, up1x, ur1x);
		RTHOOK(7);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9993, dtype))(Current)).it_p);
		tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9994, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(tp1 != tp2)) {
			RTHOOK(8);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9994, dtype))(Current)).it_p);
			up1 = tp1;
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9991, dtype))(Current, up1x, ur1x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("background_color_assigned", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9353, dtype))(Current)).it_b);
		if (tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9985, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			ur1 = RTCCL(arg1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ub1
#undef arg1
}

/* {EV_COLORIZABLE_IMP}.real_set_background_color */
void F1405_13095 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "real_set_background_color";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_INT32, &loc10);
	
	RTEAA(l_feature_name, 1404, Current, 10, 2, 19603);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1404, Current, 19603);
	if (arg2) {
		RTCC(arg2, 1404, l_feature_name, 2, eif_new_type(1280, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		RTHOOK(2);
		RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6173, 970))(Current)).it_p);
		loc2 = (EIF_POINTER) tp1;
		RTHOOK(3);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8553, "red_16_bit", arg2))(arg2)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8554, "green_16_bit", arg2))(arg2)).it_i4);
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8555, "blue_16_bit", arg2))(arg2)).it_i4);
		loc5 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8560, "max_16_bit", arg2))(arg2)).it_i4);
		loc9 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		up1 = loc2;
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6150, 970))(Current, up1x, ui4_1x);
		RTHOOK(8);
		up1 = loc2;
		ui4_1 = loc4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6148, 970))(Current, up1x, ui4_1x);
		RTHOOK(9);
		up1 = loc2;
		ui4_1 = loc5;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6147, 970))(Current, up1x, ui4_1x);
	}
	RTHOOK(10);
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5662, 970))(Current)).it_i4);
	ui4_1 = ti4_1;
	up2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5506, 969))(Current, up1x, ui4_1x, up2x);
	RTHOOK(11);
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5662, 970))(Current)).it_i4);
	ui4_1 = ti4_1;
	up2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5463, 969))(Current, up1x, ui4_1x, up2x);
	RTHOOK(12);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		RTHOOK(13);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		tr4_1 = (EIF_REAL_32) (loc3);
		tr4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10001, dtype))(Current)).it_r4);
		tr1 = RTLN(eif_new_type(191, 0x00).id);
		*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (tr4_1 * tr4_2);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4092, "rounded", tr1))(tr1)).it_i4);
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(14);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		tr4_1 = (EIF_REAL_32) (loc4);
		tr4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10001, dtype))(Current)).it_r4);
		tr1 = RTLN(eif_new_type(191, 0x00).id);
		*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (tr4_1 * tr4_2);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4092, "rounded", tr1))(tr1)).it_i4);
		loc7 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(15);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		tr4_1 = (EIF_REAL_32) (loc5);
		tr4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10001, dtype))(Current)).it_r4);
		tr1 = RTLN(eif_new_type(191, 0x00).id);
		*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (tr4_1 * tr4_2);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4092, "rounded", tr1))(tr1)).it_i4);
		loc8 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(16);
		if ((EIF_BOOLEAN) (loc6 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(17);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
		RTHOOK(18);
		if ((EIF_BOOLEAN) (loc7 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(19);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
		RTHOOK(20);
		if ((EIF_BOOLEAN) (loc8 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(21);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
		RTHOOK(22);
		up1 = loc2;
		ui4_1 = loc6;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6150, 970))(Current, up1x, ui4_1x);
		RTHOOK(23);
		up1 = loc2;
		ui4_1 = loc7;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6148, 970))(Current, up1x, ui4_1x);
		RTHOOK(24);
		up1 = loc2;
		ui4_1 = loc8;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6147, 970))(Current, up1x, ui4_1x);
	}
	RTHOOK(25);
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5668, 970))(Current)).it_i4);
	ui4_1 = ti4_1;
	up2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5506, 969))(Current, up1x, ui4_1x, up2x);
	RTHOOK(26);
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5668, 970))(Current)).it_i4);
	ui4_1 = ti4_1;
	up2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5463, 969))(Current, up1x, ui4_1x, up2x);
	RTHOOK(27);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		RTHOOK(28);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		tr4_1 = (EIF_REAL_32) (loc3);
		tr4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10000, dtype))(Current)).it_r4);
		tr1 = RTLN(eif_new_type(191, 0x00).id);
		*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (tr4_1 * tr4_2);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4092, "rounded", tr1))(tr1)).it_i4);
		RTNHOOK(28,1);
		ui4_1 = loc9;
		ti4_2 = eif_min_int32 (ti4_1,ui4_1);
		loc6 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(29);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		tr4_1 = (EIF_REAL_32) (loc4);
		tr4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10000, dtype))(Current)).it_r4);
		tr1 = RTLN(eif_new_type(191, 0x00).id);
		*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (tr4_1 * tr4_2);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4092, "rounded", tr1))(tr1)).it_i4);
		RTNHOOK(29,1);
		ui4_1 = loc9;
		ti4_2 = eif_min_int32 (ti4_1,ui4_1);
		loc7 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(30);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		tr4_1 = (EIF_REAL_32) (loc5);
		tr4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10000, dtype))(Current)).it_r4);
		tr1 = RTLN(eif_new_type(191, 0x00).id);
		*(EIF_REAL_32 *)tr1 = (EIF_REAL_32) (tr4_1 * tr4_2);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4092, "rounded", tr1))(tr1)).it_i4);
		RTNHOOK(30,1);
		ui4_1 = loc9;
		ti4_2 = eif_min_int32 (ti4_1,ui4_1);
		loc8 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(31);
		up1 = loc2;
		ui4_1 = loc6;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6150, 970))(Current, up1x, ui4_1x);
		RTHOOK(32);
		up1 = loc2;
		ui4_1 = loc7;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6148, 970))(Current, up1x, ui4_1x);
		RTHOOK(33);
		up1 = loc2;
		ui4_1 = loc8;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6147, 970))(Current, up1x, ui4_1x);
	}
	RTHOOK(34);
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5664, 970))(Current)).it_i4);
	ui4_1 = ti4_1;
	up2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5506, 969))(Current, up1x, ui4_1x, up2x);
	RTHOOK(35);
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5664, 970))(Current)).it_i4);
	ui4_1 = ti4_1;
	up2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5463, 969))(Current, up1x, ui4_1x, up2x);
	RTHOOK(36);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		RTHOOK(37);
		up1 = loc2;
		ui4_1 = (EIF_INTEGER_32) (loc9 - loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6150, 970))(Current, up1x, ui4_1x);
		RTHOOK(38);
		up1 = loc2;
		ui4_1 = (EIF_INTEGER_32) (loc9 - loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6148, 970))(Current, up1x, ui4_1x);
		RTHOOK(39);
		up1 = loc2;
		ui4_1 = (EIF_INTEGER_32) (loc9 - (EIF_INTEGER_32) (loc5 / ((EIF_INTEGER_32) 2L)));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6147, 970))(Current, up1x, ui4_1x);
	}
	RTHOOK(40);
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5666, 970))(Current)).it_i4);
	ui4_1 = ti4_1;
	up2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5506, 969))(Current, up1x, ui4_1x, up2x);
	RTHOOK(41);
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5666, 970))(Current)).it_i4);
	ui4_1 = ti4_1;
	up2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5463, 969))(Current, up1x, ui4_1x, up2x);
	RTHOOK(42);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		RTHOOK(43);
		RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
		ui4_1 = loc4;
		ti4_1 = eif_max_int32 (loc3,ui4_1);
		RTNHOOK(43,1);
		ui4_1 = loc5;
		ti4_2 = eif_max_int32 (ti4_1,ui4_1);
		loc10 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(44);
		up1 = loc2;
		ui4_1 = (EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - loc10) / ((EIF_INTEGER_32) 4L))));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6150, 970))(Current, up1x, ui4_1x);
		RTHOOK(45);
		up1 = loc2;
		ui4_1 = (EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - loc10) / ((EIF_INTEGER_32) 4L))));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6148, 970))(Current, up1x, ui4_1x);
		RTHOOK(46);
		up1 = loc2;
		ui4_1 = (EIF_INTEGER_32) (loc10 + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 - loc10) / ((EIF_INTEGER_32) 4L))));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6147, 970))(Current, up1x, ui4_1x);
	}
	RTHOOK(47);
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5670, 970))(Current)).it_i4);
	ui4_1 = ti4_1;
	up2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5506, 969))(Current, up1x, ui4_1x, up2x);
	RTHOOK(48);
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5670, 970))(Current)).it_i4);
	ui4_1 = ti4_1;
	up2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5463, 969))(Current, up1x, ui4_1x, up2x);
	RTHOOK(49);
	if ((EIF_BOOLEAN)(loc2 != loc1)) {
		RTHOOK(50);
		free(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(51);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EV_COLORIZABLE_IMP}.set_foreground_color */
void F1405_13096 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_foreground_color";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1404, Current, 0, 1, 19604);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1404, Current, 19604);
	RTCC(arg1, 1404, l_feature_name, 1, eif_new_type(1280, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_color_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9997, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	if (!RTCEQ(tr1, tr2)) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 9997, 0xF800056C, 0); /* foreground_color_imp */
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr2);
		*(EIF_REFERENCE *)(Current + RTWA(9997, dtype)) = RTRV(RTWCT(9997, dtype, Dftype(Current)), tr1);
		RTAR(Current, tr1);
		RTHOOK(4);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9993, dtype))(Current)).it_p);
		up1 = tp1;
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9992, dtype))(Current, up1x, ur1x);
		RTHOOK(5);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9993, dtype))(Current)).it_p);
		tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9994, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(tp1 != tp2)) {
			RTHOOK(6);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9994, dtype))(Current)).it_p);
			up1 = tp1;
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9992, dtype))(Current, up1x, ur1x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("foreground_color_assigned", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9353, dtype))(Current)).it_b);
		if (tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9984, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			ur1 = RTCCL(arg1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {EV_COLORIZABLE_IMP}.real_set_foreground_color */
void F1405_13097 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "real_set_foreground_color";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1404, Current, 3, 2, 19605);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1404, Current, 19605);
	if (arg2) {
		RTCC(arg2, 1404, l_feature_name, 2, eif_new_type(1280, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		RTHOOK(2);
		RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6173, 970))(Current)).it_p);
		loc1 = (EIF_POINTER) tp1;
		RTHOOK(3);
		RTDBGAL(3, 0xF800056C, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9997, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTCT0("l_foreground_color_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(5);
		up1 = loc1;
		ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(9599, "red_16_bit", loc3));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6150, 970))(Current, up1x, ui4_1x);
		RTHOOK(6);
		up1 = loc1;
		ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(9598, "green_16_bit", loc3));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6148, 970))(Current, up1x, ui4_1x);
		RTHOOK(7);
		up1 = loc1;
		ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(9597, "blue_16_bit", loc3));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6147, 970))(Current, up1x, ui4_1x);
	}
	RTHOOK(8);
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5662, 970))(Current)).it_i4);
	ui4_1 = ti4_1;
	up2 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5505, 969))(Current, up1x, ui4_1x, up2x);
	RTHOOK(9);
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5668, 970))(Current)).it_i4);
	ui4_1 = ti4_1;
	up2 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5505, 969))(Current, up1x, ui4_1x, up2x);
	RTHOOK(10);
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5664, 970))(Current)).it_i4);
	ui4_1 = ti4_1;
	up2 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5505, 969))(Current, up1x, ui4_1x, up2x);
	RTHOOK(11);
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5662, 970))(Current)).it_i4);
	ui4_1 = ti4_1;
	up2 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5462, 969))(Current, up1x, ui4_1x, up2x);
	RTHOOK(12);
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5668, 970))(Current)).it_i4);
	ui4_1 = ti4_1;
	up2 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5462, 969))(Current, up1x, ui4_1x, up2x);
	RTHOOK(13);
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5664, 970))(Current)).it_i4);
	ui4_1 = ti4_1;
	up2 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5462, 969))(Current, up1x, ui4_1x, up2x);
	RTHOOK(14);
	if ((EIF_BOOLEAN)(loc1 != loc2)) {
		RTHOOK(15);
		free(loc1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EV_COLORIZABLE_IMP}.set_default_colors */
void F1405_13098 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_default_colors";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,ur1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1404, Current, 0, 0, 19606);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1404, Current, 19606);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9996, 0xF800056C, 0); /* background_color_imp */
	*(EIF_REFERENCE *)(Current + RTWA(9996, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 9997, 0xF800056C, 0); /* foreground_color_imp */
	*(EIF_REFERENCE *)(Current + RTWA(9997, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(3);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9993, dtype))(Current)).it_p);
	up1 = tp1;
	ur1 = NULL;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9992, dtype))(Current, up1x, ur1x);
	RTHOOK(4);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9993, dtype))(Current)).it_p);
	up1 = tp1;
	ur1 = NULL;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9991, dtype))(Current, up1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
}

/* {EV_COLORIZABLE_IMP}.background_color_imp */
EIF_TYPED_VALUE F1405_13102 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9996,Dtype(Current)));
	return r;
}


/* {EV_COLORIZABLE_IMP}.foreground_color_imp */
EIF_TYPED_VALUE F1405_13103 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9997,Dtype(Current)));
	return r;
}


/* {EV_COLORIZABLE_IMP}.background_color_pointer */
EIF_TYPED_VALUE F1405_13104 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "background_color_pointer";
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
	
	RTEAA(l_feature_name, 1404, Current, 0, 0, 19609);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1404, Current, 19609);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x40000000, 1,0); /* Result */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9993, dtype))(Current)).it_p);
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5965, 970))(Current, up1x)).it_p);
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6128, 970))(Current, up1x)).it_p);
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

/* {EV_COLORIZABLE_IMP}.foreground_color_pointer */
EIF_TYPED_VALUE F1405_13105 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "foreground_color_pointer";
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
	
	RTEAA(l_feature_name, 1404, Current, 0, 0, 19610);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1404, Current, 19610);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x40000000, 1,0); /* Result */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9993, dtype))(Current)).it_p);
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5965, 970))(Current, up1x)).it_p);
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6131, 970))(Current, up1x)).it_p);
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

/* {EV_COLORIZABLE_IMP}.prelight_scale */
EIF_TYPED_VALUE F1405_13106 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = (EIF_REAL_32) 1.0909488000000001f;
	return r;
}

/* {EV_COLORIZABLE_IMP}.highlight_scale */
EIF_TYPED_VALUE F1405_13107 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = (EIF_REAL_32) 0.90912397f;
	return r;
}

/* {EV_COLORIZABLE_IMP}.interface */
static EIF_TYPED_VALUE F1405_13108_body (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1404, Current, 0, 0, 19613);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1404, Current, 19613);
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

EIF_TYPED_VALUE F1405_13108 (EIF_REFERENCE Current)
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
			r.it_r = (F1405_13108_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(9342,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1405 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
