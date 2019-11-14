/*
 * Code for class EV_TOOL_BAR_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1497_14318(EIF_REFERENCE);
extern void F1497_14319(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1497_14320(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1497_14321(EIF_REFERENCE);
extern void F1497_14322(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1497_14323(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1497_14324(EIF_REFERENCE);
extern void F1497_14325(EIF_REFERENCE);
extern void F1497_14326(EIF_REFERENCE);
extern void F1497_14327(EIF_REFERENCE);
extern void F1497_14328(EIF_REFERENCE);
extern void F1497_14329(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1497_14330(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1497_14331(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1497_14332(EIF_REFERENCE);
extern void F1497_14333(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1497_14334(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1497_14335(EIF_REFERENCE);
static EIF_TYPED_VALUE F1497_14336_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1497_14336(EIF_REFERENCE);
extern void EIF_Minit1497(void);

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

/* {EV_TOOL_BAR_IMP}.needs_event_box */
EIF_TYPED_VALUE F1497_14318 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "needs_event_box";
	RTEX;
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
	
	RTEAA(l_feature_name, 1496, Current, 0, 0, 20525);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1496, Current, 20525);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
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

/* {EV_TOOL_BAR_IMP}.old_make */
void F1497_14319 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 1496, Current, 0, 1, 20526);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1496, Current, 20526);
	RTCC(arg1, 1496, l_feature_name, 1, RTWCT(9342, dtype, Dftype(Current)), 0x01);
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

/* {EV_TOOL_BAR_IMP}.make */
void F1497_14320 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_8 ti1_1;
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
	
	RTEAA(l_feature_name, 1496, Current, 1, 0, 20527);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTAOMS(14319,1);
	RTDBGEAA(1496, Current, 20527);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5271, 969))(Current)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9859, dtype))(Current, up1x);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9337, 1609))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9337, 1492))(Current);
	RTHOOK(4);
	RTDBGAL(1, 0xF80004D4, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1236, 0x00).id);
	RTCOMS(tr2,14319,0,"v2toolbar",9,821754994);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8168, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(4,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10765, dtype))(Current)).it_p);
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(loc1 + RTVA(8165, "item", loc1));
	up2 = tp2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6016, 970))(Current, up1x, up2x);
	RTHOOK(6);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10765, dtype))(Current)).it_p);
	up1 = tp1;
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5266, 969))(Current, up1x, ub1x);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 10769, 0x04000000, 1); /* has_vertical_button_style */
	*(EIF_BOOLEAN *)(Current + RTWA(10769, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10600, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
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
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui1_1
#undef ub1
}

/* {EV_TOOL_BAR_IMP}.list_widget */
EIF_TYPED_VALUE F1497_14321 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "list_widget";
	RTEX;
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
	
	RTEAA(l_feature_name, 1496, Current, 0, 0, 20528);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1496, Current, 20528);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x40000000, 1,0); /* Result */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10111, dtype))(Current)).it_p);
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
}

/* {EV_TOOL_BAR_IMP}.set_parent_imp */
void F1497_14322 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_parent_imp";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1496, Current, 0, 1, 20510);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1496, Current, 20510);
	if (arg1) {
		RTCC(arg1, 1496, l_feature_name, 1, eif_new_type(1446, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10290, 1492))(Current, ur1x);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10766, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {EV_TOOL_BAR_IMP}.has_vertical_button_style */
EIF_TYPED_VALUE F1497_14323 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(10769,Dtype(Current)));
	return r;
}


/* {EV_TOOL_BAR_IMP}.is_vertical */
EIF_TYPED_VALUE F1497_14324 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(10768,Dtype(Current)));
	return r;
}


/* {EV_TOOL_BAR_IMP}.enable_vertical_button_style */
void F1497_14325 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_vertical_button_style";
	RTEX;
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
	
	RTEAA(l_feature_name, 1496, Current, 0, 0, 20513);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1496, Current, 20513);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10769, 0x04000000, 1); /* has_vertical_button_style */
	*(EIF_BOOLEAN *)(Current + RTWA(10769, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10766, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("vertical_button_style_assigned", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10769, dtype));
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
}

/* {EV_TOOL_BAR_IMP}.disable_vertical_button_style */
void F1497_14326 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_vertical_button_style";
	RTEX;
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
	
	RTEAA(l_feature_name, 1496, Current, 0, 0, 20514);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1496, Current, 20514);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10769, 0x04000000, 1); /* has_vertical_button_style */
	*(EIF_BOOLEAN *)(Current + RTWA(10769, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10766, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("vertical_button_style_not_assigned", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10769, dtype));
		if ((EIF_BOOLEAN) !tb1) {
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
}

/* {EV_TOOL_BAR_IMP}.enable_vertical */
void F1497_14327 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_vertical";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
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
	
	RTEAA(l_feature_name, 1496, Current, 0, 0, 20515);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1496, Current, 20515);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10768, 0x04000000, 1); /* is_vertical */
	*(EIF_BOOLEAN *)(Current + RTWA(10768, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10765, dtype))(Current)).it_p);
	up1 = tp1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5144, 969))(Current, up1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ui4_1
}

/* {EV_TOOL_BAR_IMP}.disable_vertical */
void F1497_14328 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_vertical";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
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
	
	RTEAA(l_feature_name, 1496, Current, 0, 0, 20516);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1496, Current, 20516);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10768, 0x04000000, 1); /* is_vertical */
	*(EIF_BOOLEAN *)(Current + RTWA(10768, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10765, dtype))(Current)).it_p);
	up1 = tp1;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5144, 969))(Current, up1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ui4_1
}

/* {EV_TOOL_BAR_IMP}.block_selection_for_docking */
void F1497_14329 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "block_selection_for_docking";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1496, Current, 0, 0, 20517);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1496, Current, 20517);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_TOOL_BAR_IMP}.item_from_coords */
EIF_TYPED_VALUE F1497_14330 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "item_from_coords";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1496, Current, 3, 2, 20518);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1496, Current, 20518);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(2);
		tb1 = '\01';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9941, dtype))(Current)).it_i4);
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = (EIF_BOOLEAN)(Result != NULL);
		}
		if (tb1) break;
		RTHOOK(3);
		RTDBGAL(3, 0xF80005ED, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = loc1;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2370, "at", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = RTCCL(tr1);
		loc3 = RTRV(eif_new_type(1517, 0x00), loc3);
		if (RTAL & CK_CHECK) {
			RTHOOK(4);
			RTCT("l_item_imp /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTHOOK(6);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10057, "width", loc3))(loc3)).it_i4);
			loc2 += ti4_1;
		}
		RTHOOK(7);
		if ((EIF_BOOLEAN) (arg1 < loc2)) {
			RTHOOK(8);
			RTDBGAL(0, 0xF800058C, 0,0); /* Result */
			Result = RTCCL(loc3);
			Result = RTRV(eif_new_type(1420, 0x00), Result);
		}
		RTHOOK(9);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EV_TOOL_BAR_IMP}.update_toolbar_style */
void F1497_14331 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "update_toolbar_style";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
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
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	
	RTEAA(l_feature_name, 1496, Current, 5, 0, 20519);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1496, Current, 20519);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10291, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(2);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(3);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9941, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN) (loc4 > ti4_1)) break;
			RTHOOK(4);
			RTDBGAL(1, 0xF80005FD, 0, 0); /* loc1 */
			ui4_1 = loc4;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9936, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc1 = RTCCL(tr2);
			loc1 = RTRV(eif_new_type(1533, 0x00), loc1);
			RTHOOK(5);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10129, "text", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(5,1);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", tr1))(tr1)).it_b);
				tb1 = (EIF_BOOLEAN) !tb2;
			}
			if (tb1) {
				RTHOOK(6);
				RTDBGAL(2, 0x04000000, 1, 0); /* loc2 */
				loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			RTHOOK(7);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10121, "internal_pixmap", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tb1 = (EIF_BOOLEAN)(tr1 != NULL);
			}
			if (tb1) {
				RTHOOK(8);
				RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			RTHOOK(9);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4++;
		}
		RTHOOK(10);
		if ((EIF_BOOLEAN) (loc2 && loc3)) {
			RTHOOK(11);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10769, dtype));
			if (tb1) {
				RTHOOK(12);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5278, 969))(Current)).it_i4);
				loc5 = (EIF_INTEGER_32) ti4_2;
			} else {
				RTHOOK(13);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5279, 969))(Current)).it_i4);
				loc5 = (EIF_INTEGER_32) ti4_2;
			}
		} else {
			RTHOOK(14);
			if (loc2) {
				RTHOOK(15);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5277, 969))(Current)).it_i4);
				loc5 = (EIF_INTEGER_32) ti4_2;
			} else {
				RTHOOK(16);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5276, 969))(Current)).it_i4);
				loc5 = (EIF_INTEGER_32) ti4_2;
			}
		}
		RTHOOK(17);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10111, dtype))(Current)).it_p);
		up1 = tp1;
		ui4_1 = loc5;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5145, 969))(Current, up1x, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
}

/* {EV_TOOL_BAR_IMP}.insertion_position */
EIF_TYPED_VALUE F1497_14332 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "insertion_position";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1496, Current, 2, 0, 20520);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1496, Current, 20520);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9941, dtype))(Current)).it_i4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(2);
	RTDBGAL(1, 0xF8000576, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10112, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9829, "gtk_widget_imp_at_pointer_position", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(4);
		RTDBGAL(2, 0xF8000541, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9342, "interface", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		loc2 = RTRV(eif_new_type(1345, 0x00), loc2);
		RTHOOK(5);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			ur1 = RTCCL(loc2);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9943, dtype))(Current, ur1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(6);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			ur1 = RTCCL(loc2);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9938, dtype))(Current, ur1x, ui4_1x)).it_i4);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
}

/* {EV_TOOL_BAR_IMP}.insert_i_th */
void F1497_14333 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "insert_i_th";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,loc2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1496, Current, 2, 2, 20521);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1496, Current, 20521);
	RTCC(arg1, 1496, l_feature_name, 1, RTWCT(9932, dtype, Dftype(Current)), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_within_bounds", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9941, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9941, dtype))(Current)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	RTDBGAL(1, 0xF80005ED, 0, 0); /* loc1 */
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr2);
	loc1 = RTRV(eif_new_type(1517, 0x00), loc1);
	RTHOOK(3);
	RTCT0("v_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10897, "set_item_parent_imp", loc1))(loc1, ur1x);
	RTHOOK(5);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10111, dtype))(Current)).it_p);
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(loc1 + RTVA(9858, "c_object", loc1));
	up2 = tp2;
	ui4_1 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5284, 969))(Current, up1x, up2x, ui4_1x);
	RTHOOK(6);
	RTDBGAL(2, 0xF80005FE, 0, 0); /* loc2 */
	loc2 = RTCCL(loc1);
	loc2 = RTRV(eif_new_type(1534, 0x00), loc2);
	RTHOOK(7);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(8);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10085, "visual_widget", loc2))(loc2)).it_p);
		up1 = tp1;
		tp2 = *(EIF_POINTER *)(Current + RTWA(10767, dtype));
		up2 = tp2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5274, 969))(Current, up1x, up2x);
		RTHOOK(9);
		RTDBGAA(Current, dtype, 10767, 0x40000000, 1); /* radio_group */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10087, "radio_group", loc2))(loc2)).it_p);
		*(EIF_POINTER *)(Current + RTWA(10767, dtype)) = (EIF_POINTER) tp1;
	}
	RTHOOK(10);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(10,1);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2796, "go_i_th", tr2))(tr2, ui4_1x);
	RTHOOK(11);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(11,1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2824, "put_left", tr2))(tr2, ur1x);
	RTHOOK(12);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10291, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr2 != NULL)) {
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10766, dtype))(Current);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("count_increased", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9941, dtype))(Current)).it_i4);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EV_TOOL_BAR_IMP}.remove_i_th */
void F1497_14334 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "remove_i_th";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
#define arg1 arg1x.it_i4
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
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLR(4,tr3);
	RTLR(5,loc3);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_POINTER, &loc4);
	
	RTEAA(l_feature_name, 1496, Current, 4, 1, 20522);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1496, Current, 20522);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_within_bounds", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9941, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN) (arg1 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9941, dtype))(Current)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2796, "go_i_th", tr2))(tr2, ui4_1x);
	RTHOOK(3);
	RTDBGAL(1, 0xF80005ED, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = arg1;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "i_th", loc1))(loc1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(3,2);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTRV(eif_new_type(1517, 0x00), tr3);
	RTHOOK(4);
	RTCT0("imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(5);
	RTDBGAL(3, 0xF80005FE, 0, 0); /* loc3 */
	loc3 = RTCCL(loc1);
	loc3 = RTRV(eif_new_type(1534, 0x00), loc3);
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTHOOK(7);
		RTDBGAL(4, 0x40000000, 1, 0); /* loc4 */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10085, "visual_widget", loc3))(loc3)).it_p);
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5275, 969))(Current, up1x)).it_p);
		loc4 = (EIF_POINTER) tp1;
		if (RTAL & CK_CHECK) {
			RTHOOK(8);
			RTCT("radio_button_not_null", EX_CHECK);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
			if ((EIF_BOOLEAN)(loc4 != tp1)) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(9);
		up1 = loc4;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5751, 970))(Current, up1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(10);
			RTDBGAA(Current, dtype, 10767, 0x40000000, 1); /* radio_group */
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
			*(EIF_POINTER *)(Current + RTWA(10767, dtype)) = (EIF_POINTER) tp1;
		}
	}
	RTHOOK(11);
	RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
	tp1 = *(EIF_POINTER *)(loc1 + RTVA(9858, "c_object", loc1));
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(12);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10765, dtype))(Current)).it_p);
	up1 = tp1;
	up2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5884, 970))(Current, up1x, up2x);
	RTHOOK(13);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(13,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2380, "remove", tr2))(tr2);
	RTHOOK(14);
	ur1 = NULL;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10897, "set_item_parent_imp", loc1))(loc1, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("count_decreased", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9941, dtype))(Current)).it_i4);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
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
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_TOOL_BAR_IMP}.radio_group */
EIF_TYPED_VALUE F1497_14335 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(10767,Dtype(Current)));
	return r;
}


/* {EV_TOOL_BAR_IMP}.interface */
static EIF_TYPED_VALUE F1497_14336_body (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1496, Current, 0, 0, 20524);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1496, Current, 20524);
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

EIF_TYPED_VALUE F1497_14336 (EIF_REFERENCE Current)
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
			r.it_r = (F1497_14336_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(9342,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1497 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
