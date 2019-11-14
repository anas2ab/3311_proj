/*
 * Code for class EV_PIXMAP_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1545_15197(EIF_REFERENCE);
extern void F1545_15198(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1545_15199(EIF_REFERENCE);
extern void F1545_15200(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1545_15201(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1545_15202(EIF_REFERENCE);
extern void F1545_15203(EIF_REFERENCE);
extern void F1545_15204(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1545_15205(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1545_15206(EIF_REFERENCE);
extern void F1545_15207(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1545_15208(EIF_REFERENCE);
extern void F1545_15209(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1545_15210(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1545_15211(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1545_15212(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1545_15213(EIF_REFERENCE);
extern void F1545_15214(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1545_15215(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1545_15216(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1545_15217(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1545_15218(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1545_15219(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1545_15220(EIF_REFERENCE);
extern void F1545_15221(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1545_15222(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1545_15223(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1545_15224(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1545_15225(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1545_15226(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1545_15227(EIF_REFERENCE);
extern void F1545_15228(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1545_15229(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1545_15230(EIF_REFERENCE);
static EIF_TYPED_VALUE F1545_15231_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1545_15231(EIF_REFERENCE);
extern void EIF_Minit1545(void);
extern EIF_REFERENCE _A1242_324_3_4_5_6();

#ifdef __cplusplus
}
#endif

#include <string.h>
#include "ev_c_util.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PIXMAP_IMP}.needs_event_box */
EIF_TYPED_VALUE F1545_15197 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1544, Current, 0, 0, 21291);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21291);
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

/* {EV_PIXMAP_IMP}.old_make */
void F1545_15198 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 1544, Current, 0, 1, 21292);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21292);
	RTCC(arg1, 1544, l_feature_name, 1, RTWCT(9342, dtype, Dftype(Current)), 0x01);
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

/* {EV_PIXMAP_IMP}.make */
void F1545_15199 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
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
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1544, Current, 3, 0, 21293);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21293);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5605, 969))(Current)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9859, dtype))(Current, up1x);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9337, 1492))(Current);
	RTHOOK(3);
	RTDBGAL(3, 0xF8000573, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11055, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
	up1 = tp1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(9757, "best_available_color_depth", loc3));
	ui4_3 = ti4_1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5827, 970))(Current, up1x, ui4_1x, ui4_2x, ui4_3x)).it_p);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(5);
	up1 = loc1;
	up2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11106, dtype))(Current, up1x, up2x);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 11032, 0x40000000, 1); /* gc */
	up1 = loc1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5794, 970))(Current, up1x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(11032, dtype)) = (EIF_POINTER) tp1;
	RTHOOK(7);
	tp1 = *(EIF_POINTER *)(Current + RTWA(11032, dtype));
	up1 = tp1;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11052, dtype))(Current)).it_p);
	up2 = tp2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5806, 970))(Current, up1x, up2x);
	RTHOOK(8);
	tp1 = *(EIF_POINTER *)(Current + RTWA(11032, dtype));
	up1 = tp1;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11053, dtype))(Current)).it_p);
	up2 = tp2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5797, 970))(Current, up1x, up2x);
	RTHOOK(9);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11031, dtype))(Current);
	RTHOOK(10);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = ((EIF_INTEGER_32) 1L);
	ui4_4 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10963, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
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
	RTHOOK(12);
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
#undef ui1_1
}

/* {EV_PIXMAP_IMP}.init_from_pointer_style */
void F1545_15200 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "init_from_pointer_style";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 1544, Current, 2, 1, 21294);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21294);
	RTCC(arg1, 1544, l_feature_name, 1, eif_new_type(1278, 0x01), 0x01);
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
	RTDBGAL(1, 0xF8000568, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1384, 0x00), loc1);
	RTHOOK(3);
	RTCT0("a_pointer_style_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(9508, "predefined_cursor_code", loc1));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(9508, "predefined_cursor_code", loc1));
		switch (ti4_1) {
			case 1L:
				RTHOOK(6);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7610, 1126))(Current)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11107, dtype))(Current, up1x);
				break;
			case 13L:
				RTHOOK(7);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7622, 1126))(Current)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11107, dtype))(Current, up1x);
				break;
			case 3L:
				RTHOOK(8);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7611, 1126))(Current)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11107, dtype))(Current, up1x);
				break;
			case 4L:
				RTHOOK(9);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7612, 1126))(Current)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11107, dtype))(Current, up1x);
				break;
			case 5L:
				RTHOOK(10);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7613, 1126))(Current)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11107, dtype))(Current, up1x);
				break;
			case 6L:
				RTHOOK(11);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7614, 1126))(Current)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11107, dtype))(Current, up1x);
				break;
			case 7L:
				RTHOOK(12);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7615, 1126))(Current)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11107, dtype))(Current, up1x);
				break;
			case 10L:
				RTHOOK(13);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7616, 1126))(Current)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11107, dtype))(Current, up1x);
				break;
			case 8L:
				RTHOOK(14);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7617, 1126))(Current)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11107, dtype))(Current, up1x);
				break;
			case 9L:
				RTHOOK(15);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7618, 1126))(Current)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11107, dtype))(Current, up1x);
				break;
			case 11L:
				RTHOOK(16);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7619, 1126))(Current)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11107, dtype))(Current, up1x);
				break;
			case 12L:
				RTHOOK(17);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7621, 1126))(Current)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11107, dtype))(Current, up1x);
				break;
			case 2L:
				RTHOOK(18);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7620, 1126))(Current)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11107, dtype))(Current, up1x);
				break;
			default:
				RTHOOK(19);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8502, "width", arg1))(arg1)).it_i4);
				ui4_1 = ti4_1;
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8503, "height", arg1))(arg1)).it_i4);
				ui4_2 = ti4_2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11020, dtype))(Current, ui4_1x, ui4_2x);
				RTHOOK(20);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10962, dtype))(Current);
				break;
		}
	} else {
		RTHOOK(21);
		RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
		tp1 = *(EIF_POINTER *)(loc1 + RTVA(9507, "gdk_pixbuf", loc1));
		loc2 = (EIF_POINTER) tp1;
		RTHOOK(22);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc2 != tp1)) {
			RTHOOK(23);
			tp1 = *(EIF_POINTER *)(loc1 + RTVA(9507, "gdk_pixbuf", loc1));
			up1 = tp1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11103, dtype))(Current, up1x);
		} else {
			RTHOOK(24);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8502, "width", arg1))(arg1)).it_i4);
			ui4_1 = ti4_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8503, "height", arg1))(arg1)).it_i4);
			ui4_2 = ti4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11020, dtype))(Current, ui4_1x, ui4_2x);
			RTHOOK(25);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10962, dtype))(Current);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {EV_PIXMAP_IMP}.init_from_pixel_buffer */
void F1545_15201 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "init_from_pixel_buffer";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 1544, Current, 1, 1, 21295);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21295);
	RTCC(arg1, 1544, l_feature_name, 1, eif_new_type(1277, 0x01), 0x01);
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
	RTDBGAL(1, 0xF8000565, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1381, 0x00), loc1);
	RTHOOK(3);
	RTCT0("l_pixel_buffer_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(loc1 + RTVA(9487, "gdk_pixbuf", loc1));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11103, dtype))(Current, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef arg1
}

/* {EV_PIXMAP_IMP}.redraw */
void F1545_15202 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "redraw";
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
	
	RTEAA(l_feature_name, 1544, Current, 0, 0, 21296);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21296);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11060, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_PIXMAP_IMP}.flush */
void F1545_15203 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "flush";
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
	
	RTEAA(l_feature_name, 1544, Current, 0, 0, 21297);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21297);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10258, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_PIXMAP_IMP}.update_if_needed */
void F1545_15204 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "update_if_needed";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	
	RTEAA(l_feature_name, 1544, Current, 0, 0, 21298);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21298);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10267, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10111, dtype))(Current)).it_p);
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6011, 970))(Current, up1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {EV_PIXMAP_IMP}.width */
EIF_TYPED_VALUE F1545_15205 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "width";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_POINTER tp1;
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
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1544, Current, 1, 0, 21299);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21299);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + RTWA(11113, dtype));
	up1 = tp1;
	up2 = (EIF_INTEGER_32 *) &(Result);
	up3 = (EIF_INTEGER_32 *) &(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5186, 969))(Current, up1x, up2x, up3x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("positive", EX_POST);
		if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef up3
}

/* {EV_PIXMAP_IMP}.height */
EIF_TYPED_VALUE F1545_15206 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "height";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_POINTER tp1;
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
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1544, Current, 1, 0, 21300);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21300);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + RTWA(11113, dtype));
	up1 = tp1;
	up2 = (EIF_INTEGER_32 *) &(loc1);
	up3 = (EIF_INTEGER_32 *) &(Result);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5186, 969))(Current, up1x, up2x, up3x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("positive", EX_POST);
		if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef up3
}

/* {EV_PIXMAP_IMP}.read_from_named_path */
void F1545_15207 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "read_from_named_path";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
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
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_POINTER, &loc3);
	
	RTEAA(l_feature_name, 1544, Current, 3, 1, 21301);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21301);
	RTCC(arg1, 1544, l_feature_name, 1, eif_new_type(185, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("file_path_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("file_path_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3828, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
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
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11103, dtype))(Current, up1x);
	}
	RTHOOK(8);
	up1 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5537, 969))(Current, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {EV_PIXMAP_IMP}.set_with_default */
void F1545_15208 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_with_default";
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
	
	RTEAA(l_feature_name, 1544, Current, 0, 0, 21302);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21302);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11110, dtype))(Current)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11107, dtype))(Current, up1x);
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

/* {EV_PIXMAP_IMP}.stretch */
void F1545_15209 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "stretch";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
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
	EIF_POINTER tp1;
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
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	
	RTEAA(l_feature_name, 1544, Current, 5, 2, 21303);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21303);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("x_coordinate_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("y_coordinate_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10943, dtype))(Current)).it_i4);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10944, dtype))(Current)).it_i4);
	loc5 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc4 != arg1) || (EIF_BOOLEAN)(loc5 != arg2))) {
		RTHOOK(6);
		RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11046, dtype))(Current)).it_p);
		loc1 = (EIF_POINTER) tp1;
		RTHOOK(7);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc4 <= ((EIF_INTEGER_32) 16L)) && (EIF_BOOLEAN) (loc5 <= ((EIF_INTEGER_32) 16L)))) {
			RTHOOK(8);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5456, 969))(Current)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(9);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5454, 969))(Current)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(10);
		RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
		up1 = loc1;
		ui4_1 = arg1;
		ui4_2 = arg2;
		ui4_3 = loc3;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5452, 969))(Current, up1x, ui4_1x, ui4_2x, ui4_3x)).it_p);
		loc2 = (EIF_POINTER) tp1;
		RTHOOK(11);
		up1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5537, 969))(Current, up1x);
		RTHOOK(12);
		up1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11103, dtype))(Current, up1x);
		RTHOOK(13);
		up1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5537, 969))(Current, up1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {EV_PIXMAP_IMP}.set_size */
void F1545_15210 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_size";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_POINTER loc6 = (EIF_POINTER) 0;
	EIF_POINTER loc7 = (EIF_POINTER) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
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
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_POINTER, &loc5);
	RTLU(SK_POINTER, &loc6);
	RTLU(SK_POINTER, &loc7);
	
	RTEAA(l_feature_name, 1544, Current, 7, 2, 21304);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21304);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("x_coordinate_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("y_coordinate_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10943, dtype))(Current)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10944, dtype))(Current)).it_i4);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != arg1) || (EIF_BOOLEAN)(loc4 != arg2))) {
		RTHOOK(6);
		RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
		tp1 = *(EIF_POINTER *)(Current + RTWA(11113, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5828, 970))(Current, up1x)).it_p);
		loc1 = (EIF_POINTER) tp1;
		RTHOOK(7);
		tp1 = *(EIF_POINTER *)(Current + RTWA(11112, dtype));
		if ((EIF_BOOLEAN)(tp1 != loc7)) {
			RTHOOK(8);
			RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
			tp1 = *(EIF_POINTER *)(Current + RTWA(11112, dtype));
			up1 = tp1;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5828, 970))(Current, up1x)).it_p);
			loc2 = (EIF_POINTER) tp1;
		}
		RTHOOK(9);
		RTDBGAA(Current, dtype, 11113, 0x40000000, 1); /* drawable */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
		up1 = tp1;
		ui4_1 = arg1;
		ui4_2 = arg2;
		tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11055, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(9,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(9757, "best_available_color_depth", tr1));
		ui4_3 = ti4_1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5827, 970))(Current, up1x, ui4_1x, ui4_2x, ui4_3x)).it_p);
		*(EIF_POINTER *)(Current + RTWA(11113, dtype)) = (EIF_POINTER) tp1;
		RTHOOK(10);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ui4_3 = arg1;
		ui4_4 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10963, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTHOOK(11);
		RTDBGAL(5, 0x40000000, 1, 0); /* loc5 */
		tp1 = *(EIF_POINTER *)(Current + RTWA(11113, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5794, 970))(Current, up1x)).it_p);
		loc5 = (EIF_POINTER) tp1;
		RTHOOK(12);
		up1 = loc5;
		up2 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5798, 970))(Current, up1x, up2x);
		RTHOOK(13);
		up1 = loc5;
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5799, 970))(Current, up1x, ui4_1x, ui4_2x);
		RTHOOK(14);
		tp1 = *(EIF_POINTER *)(Current + RTWA(11113, dtype));
		up1 = tp1;
		up2 = loc5;
		up3 = loc1;
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ui4_3 = ((EIF_INTEGER_32) 0L);
		ui4_4 = ((EIF_INTEGER_32) 0L);
		ui4_5 = loc3;
		ui4_6 = loc4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5165, 969))(Current, up1x, up2x, up3x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
		RTHOOK(15);
		up1 = loc5;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5813, 970))(Current, up1x);
		RTHOOK(16);
		up1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5829, 970))(Current, up1x);
		RTHOOK(17);
		if ((EIF_BOOLEAN)(loc2 != loc7)) {
			RTHOOK(18);
			RTDBGAA(Current, dtype, 11112, 0x40000000, 1); /* mask */
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
			up1 = tp1;
			ui4_1 = arg1;
			ui4_2 = arg2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11111, dtype))(Current)).it_i4);
			ui4_3 = ti4_1;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5827, 970))(Current, up1x, ui4_1x, ui4_2x, ui4_3x)).it_p);
			*(EIF_POINTER *)(Current + RTWA(11112, dtype)) = (EIF_POINTER) tp1;
			RTHOOK(19);
			RTDBGAL(6, 0x40000000, 1, 0); /* loc6 */
			tp1 = *(EIF_POINTER *)(Current + RTWA(11112, dtype));
			up1 = tp1;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5794, 970))(Current, up1x)).it_p);
			loc6 = (EIF_POINTER) tp1;
			RTHOOK(20);
			up1 = loc6;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11053, dtype))(Current)).it_p);
			up2 = tp1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5806, 970))(Current, up1x, up2x);
			RTHOOK(21);
			tp1 = *(EIF_POINTER *)(Current + RTWA(11112, dtype));
			up1 = tp1;
			up2 = loc6;
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ui4_3 = ((EIF_INTEGER_32) 0L);
			ui4_4 = arg1;
			ui4_5 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5776, 970))(Current, up1x, up2x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x);
			RTHOOK(22);
			tp1 = *(EIF_POINTER *)(Current + RTWA(11112, dtype));
			up1 = tp1;
			up2 = loc6;
			up3 = loc2;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ui4_3 = ((EIF_INTEGER_32) 0L);
			ui4_4 = ((EIF_INTEGER_32) 0L);
			ui4_5 = loc3;
			ui4_6 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5165, 969))(Current, up1x, up2x, up3x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
			RTHOOK(23);
			up1 = loc6;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5813, 970))(Current, up1x);
			RTHOOK(24);
			up1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5829, 970))(Current, up1x);
		}
		RTHOOK(25);
		tp1 = *(EIF_POINTER *)(Current + RTWA(11113, dtype));
		up1 = tp1;
		tp2 = *(EIF_POINTER *)(Current + RTWA(11112, dtype));
		up2 = tp2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11106, dtype))(Current, up1x, up2x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
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
#undef arg2
#undef arg1
}

/* {EV_PIXMAP_IMP}.reset_for_buffering */
void F1545_15211 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "reset_for_buffering";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
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
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
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
	RTLU(SK_POINTER, &loc1);
	
	RTEAA(l_feature_name, 1544, Current, 1, 2, 21305);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21305);
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
	tb1 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10943, dtype))(Current)).it_i4);
	if (!(EIF_BOOLEAN)(arg1 != ti4_1)) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10944, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(arg2 != ti4_1);
	}
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
		up1 = tp1;
		ui4_1 = arg1;
		ui4_2 = arg2;
		tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11055, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(4,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(9757, "best_available_color_depth", tr1));
		ui4_3 = ti4_1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5827, 970))(Current, up1x, ui4_1x, ui4_2x, ui4_3x)).it_p);
		loc1 = (EIF_POINTER) tp1;
		RTHOOK(5);
		up1 = loc1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		up2 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11106, dtype))(Current, up1x, up2x);
	}
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
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {EV_PIXMAP_IMP}.set_mask */
void F1545_15212 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_mask";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1544, Current, 1, 1, 21306);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21306);
	RTCC(arg1, 1544, l_feature_name, 1, eif_new_type(1303, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("mask_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("mask_same_dimensions", EX_PRE);
		tb1 = '\0';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8732, "width", arg1))(arg1)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10943, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8733, "height", arg1))(arg1)).it_i4);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10944, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0xF8000606, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1542, 0x00), loc1);
	RTHOOK(4);
	RTCT0("a_mask_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(Current + RTWA(11113, dtype));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(loc1 + RTVA(11084, "drawable", loc1));
	up2 = tp2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10943, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10944, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11104, dtype))(Current, up1x, up2x, ui4_1x, ui4_2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {EV_PIXMAP_IMP}.raw_image_data */
EIF_TYPED_VALUE F1545_15213 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "raw_image_data";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_POINTER loc6 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
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
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,loc10);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_POINTER, &loc5);
	RTLU(SK_POINTER, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_INT32, &loc11);
	
	RTEAA(l_feature_name, 1544, Current, 11, 0, 21307);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21307);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800046E, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1134, 0x01).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10943, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10944, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7698, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9341, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7715, "set_originating_pixmap", Result))(Result, ur1x);
	RTHOOK(3);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(11113, dtype));
	up1 = tp1;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10943, dtype))(Current)).it_i4);
	ui4_3 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10944, dtype))(Current)).it_i4);
	ui4_4 = ti4_2;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5815, 970))(Current, up1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x)).it_p);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(4);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10943, dtype))(Current)).it_i4);
	loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 4L));
	RTHOOK(5);
	RTDBGAL(6, 0x40000000, 1, 0); /* loc6 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5422, 969))(Current)).it_p);
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5160, 969))(Current, up1x)).it_p);
	loc6 = (EIF_POINTER) tp1;
	RTHOOK(6);
	RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
	up1 = loc6;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5758, 970))(Current, up1x)).it_p);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(7);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	up1 = loc2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6088, 970))(Current, up1x)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	RTDBGAL(5, 0x40000000, 1, 0); /* loc5 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6173, 970))(Current)).it_p);
	loc5 = (EIF_POINTER) tp1;
	RTHOOK(9);
	RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10944, dtype))(Current)).it_i4);
	loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 * ti4_1);
	RTHOOK(10);
	RTDBGAL(10, 0xF8000188, 0, 0); /* loc10 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2156, "area", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc10 = (EIF_REFERENCE) tr1;
	RTHOOK(11);
	RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5647, 970))(Current)).it_i4);
	loc11 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(12);
		if ((EIF_BOOLEAN)(loc8 == loc9)) break;
		RTHOOK(13);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		up1 = loc1;
		ui4_1 = ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc8 % loc7) / ((EIF_INTEGER_32) 4L)));
		ui4_2 = ((EIF_INTEGER_32) (loc8 / loc7));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5816, 970))(Current, up1x, ui4_1x, ui4_2x)).it_i4);
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(14);
		up1 = loc6;
		ui4_1 = loc4;
		up2 = loc5;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5451, 969))(Current, up1x, ui4_1x, up2x);
		RTHOOK(15);
		up1 = loc5;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6040, 970))(Current, up1x)).it_i4);
		tu1_1 = (EIF_NATURAL_8) (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 256L));
		uu1_1 = tu1_1;
		ui4_1 = loc8;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2689, "put", loc10))(loc10, uu1_1x, ui4_1x);
		RTHOOK(16);
		up1 = loc5;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6038, 970))(Current, up1x)).it_i4);
		tu1_1 = (EIF_NATURAL_8) (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 256L));
		uu1_1 = tu1_1;
		ui4_1 = (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2689, "put", loc10))(loc10, uu1_1x, ui4_1x);
		RTHOOK(17);
		up1 = loc5;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6037, 970))(Current, up1x)).it_i4);
		tu1_1 = (EIF_NATURAL_8) (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 256L));
		uu1_1 = tu1_1;
		ui4_1 = (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2689, "put", loc10))(loc10, uu1_1x, ui4_1x);
		RTHOOK(18);
		uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
		ui4_1 = (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 3L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2689, "put", loc10))(loc10, uu1_1x, ui4_1x);
		RTHOOK(19);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		loc8 += ((EIF_INTEGER_32) 4L);
	}
	RTHOOK(20);
	free(loc5);
	RTHOOK(21);
	up1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5814, 970))(Current, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(13);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu1_1
}

/* {EV_PIXMAP_IMP}.copy_pixmap */
void F1545_15214 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "copy_pixmap";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
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
	
	RTEAA(l_feature_name, 1544, Current, 1, 1, 21308);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21308);
	RTCC(arg1, 1544, l_feature_name, 1, eif_new_type(1333, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000608, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1544, 0x00), loc1);
	RTHOOK(2);
	RTCT0("other_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(loc1 + RTVA(11113, "drawable", loc1));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(loc1 + RTVA(11112, "mask", loc1));
	up2 = tp2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10943, "width", loc1))(loc1)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10944, "height", loc1))(loc1)).it_i4);
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11104, dtype))(Current, up1x, up2x, ui4_1x, ui4_2x);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 11105, 0x40000000, 1); /* internal_xpm_data */
	tp1 = *(EIF_POINTER *)(loc1 + RTVA(11105, "internal_xpm_data", loc1));
	*(EIF_POINTER *)(Current + RTWA(11105, dtype)) = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {EV_PIXMAP_IMP}.set_pixmap_from_pixbuf */
void F1545_15215 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_pixmap_from_pixbuf";
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
	
	RTEAA(l_feature_name, 1544, Current, 2, 1, 21309);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21309);
	RTIV(Current, RTAL);
	RTHOOK(1);
	up1 = arg1;
	up2 = (EIF_POINTER *) &(loc1);
	up3 = (EIF_POINTER *) &(loc2);
	ui4_1 = ((EIF_INTEGER_32) 127L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5630, 970))(Current, up1x, up2x, up3x, ui4_1x);
	RTHOOK(2);
	up1 = loc1;
	up2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11106, dtype))(Current, up1x, up2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
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

/* {EV_PIXMAP_IMP}.copy_from_gdk_data */
void F1545_15216 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "copy_from_gdk_data";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_POINTER, &loc3);
	RTLU(SK_POINTER, &loc4);
	
	RTEAA(l_feature_name, 1544, Current, 4, 4, 21310);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21310);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
	up1 = tp1;
	ui4_1 = arg3;
	ui4_2 = arg4;
	tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11055, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(1,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(9757, "best_available_color_depth", tr1));
	ui4_3 = ti4_1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5827, 970))(Current, up1x, ui4_1x, ui4_2x, ui4_3x)).it_p);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(2);
	RTDBGAL(3, 0x40000000, 1, 0); /* loc3 */
	up1 = loc1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5794, 970))(Current, up1x)).it_p);
	loc3 = (EIF_POINTER) tp1;
	RTHOOK(3);
	up1 = loc1;
	up2 = loc3;
	up3 = arg1;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = ((EIF_INTEGER_32) 0L);
	ui4_4 = ((EIF_INTEGER_32) 0L);
	ui4_5 = arg3;
	ui4_6 = arg4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5165, 969))(Current, up1x, up2x, up3x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
	RTHOOK(4);
	up1 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5813, 970))(Current, up1x);
	RTHOOK(5);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(arg2 != tp1)) {
		RTHOOK(6);
		RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
		up1 = tp1;
		ui4_1 = arg3;
		ui4_2 = arg4;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11111, dtype))(Current)).it_i4);
		ui4_3 = ti4_1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5827, 970))(Current, up1x, ui4_1x, ui4_2x, ui4_3x)).it_p);
		loc2 = (EIF_POINTER) tp1;
		RTHOOK(7);
		RTDBGAL(4, 0x40000000, 1, 0); /* loc4 */
		up1 = loc2;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5794, 970))(Current, up1x)).it_p);
		loc4 = (EIF_POINTER) tp1;
		RTHOOK(8);
		up1 = loc2;
		up2 = loc4;
		up3 = arg2;
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ui4_3 = ((EIF_INTEGER_32) 0L);
		ui4_4 = ((EIF_INTEGER_32) 0L);
		ui4_5 = arg3;
		ui4_6 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5165, 969))(Current, up1x, up2x, up3x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
		RTHOOK(9);
		up1 = loc4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5813, 970))(Current, up1x);
	}
	RTHOOK(10);
	up1 = loc1;
	up2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11106, dtype))(Current, up1x, up2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
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
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PIXMAP_IMP}.drawable */
EIF_TYPED_VALUE F1545_15217 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(11113,Dtype(Current)));
	return r;
}


/* {EV_PIXMAP_IMP}.mask */
EIF_TYPED_VALUE F1545_15218 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(11112,Dtype(Current)));
	return r;
}


/* {EV_PIXMAP_IMP}.corruptable_onscreen */
EIF_TYPED_VALUE F1545_15219 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {EV_PIXMAP_IMP}.internal_xpm_data */
EIF_TYPED_VALUE F1545_15220 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(11105,Dtype(Current)));
	return r;
}


/* {EV_PIXMAP_IMP}.set_pixmap */
void F1545_15221 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_pixmap";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1544, Current, 0, 2, 21315);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21315);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10111, dtype))(Current)).it_p);
	up1 = tp1;
	up2 = arg1;
	up3 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5599, 969))(Current, up1x, up2x, up3x);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11113, 0x40000000, 1); /* drawable */
	*(EIF_POINTER *)(Current + RTWA(11113, dtype)) = (EIF_POINTER) arg1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 11112, 0x40000000, 1); /* mask */
	*(EIF_POINTER *)(Current + RTWA(11112, dtype)) = (EIF_POINTER) arg2;
	RTHOOK(4);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(arg1 != tp1)) {
		RTHOOK(5);
		up1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5829, 970))(Current, up1x);
	}
	RTHOOK(6);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(arg2 != tp1)) {
		RTHOOK(7);
		up1 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5829, 970))(Current, up1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef arg2
#undef arg1
}

/* {EV_PIXMAP_IMP}.set_from_xpm_data */
void F1545_15222 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_from_xpm_data";
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
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	
	RTEAA(l_feature_name, 1544, Current, 2, 1, 21316);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21316);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("xpm_data_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11105, 0x40000000, 1); /* internal_xpm_data */
	*(EIF_POINTER *)(Current + RTWA(11105, dtype)) = (EIF_POINTER) arg1;
	RTHOOK(3);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11055, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9832, "default_gdk_window", tr1))(tr1)).it_p);
	up1 = tp1;
	up2 = (EIF_POINTER *) &(loc2);
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
	up3 = tp2;
	up4 = arg1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5826, 970))(Current, up1x, up2x, up3x, up4x)).it_p);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(4);
	up1 = loc1;
	up2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11106, dtype))(Current, up1x, up2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef up4
#undef arg1
}

/* {EV_PIXMAP_IMP}.set_from_stock_id */
void F1545_15223 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_from_stock_id";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
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
	EIF_POINTER tp2;
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
	
	RTEAA(l_feature_name, 1544, Current, 1, 1, 21317);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21317);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_stock_id_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(9858, dtype));
	up1 = tp1;
	up2 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5181, 969))(Current)).it_i4);
	ui4_1 = ti4_1;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	up3 = tp2;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5460, 969))(Current, up1x, up2x, ui4_1x, up3x)).it_p);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(3);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		RTHOOK(4);
		up1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11103, dtype))(Current, up1x);
		RTHOOK(5);
		up1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5537, 969))(Current, up1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ui4_1
#undef arg1
}

/* {EV_PIXMAP_IMP}.call_expose_actions */
void F1545_15224 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "call_expose_actions";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1544, Current, 0, 4, 21318);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21318);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6933, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6933, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,186,218,218,218,218,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0.id, 5, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg2;
		((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg3;
		((EIF_TYPED_VALUE *)tr2+4)->it_i4 = arg4;
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PIXMAP_IMP}.init_expose_actions */
void F1545_15225 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "init_expose_actions";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(14);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,ur1);
	RTLR(7,tr4);
	RTLR(8,tr5);
	RTLR(9,tr6);
	RTLR(10,ur2);
	RTLR(11,tr7);
	RTLR(12,tr8);
	RTLR(13,ur3);
	RTLIU(14);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1544, Current, 1, 1, 21319);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTAOMS(15224,1);
	RTDBGEAA(1544, Current, 21319);
	RTCC(arg1, 1544, l_feature_name, 1, RTWCT(6932, dtype, dftype), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000573, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11055, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9762, "gtk_marshal", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10111, dtype))(Current)).it_p);
	up1 = tp1;
	tr2 = RTLN(eif_new_type(1236, 0x00).id);
	RTCOMS(tr3,15224,0,"expose-event",12,1736732276);
	ur1 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8168, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(2,2);
	ur1 = RTCCL(tr2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,186,0xFF01,1241,227,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0.id, 3, 0);
	}
	tr4 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9762, "gtk_marshal", loc1))(loc1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	tp2 = *(EIF_POINTER *)(Current + RTWA(9858, dtype));
	((EIF_TYPED_VALUE *)tr3+2)->it_p = tp2;
	ui4_1 = ((EIF_INTEGER_32) 4L);
	{
		static EIF_TYPE_INDEX typarr0[] = {595,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr5) = 4L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	*((EIF_INTEGER_32 *)tr5+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr5+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr5+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr5+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr5)))(tr5).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,275,0xFF01,0xFFF9,4,186,218,218,218,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr6= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1242_324_3_4_5_6, (EIF_POINTER)(0),8190, tr4, 0, 1, -1, tr3, 4);
	}
	ur2 = RTCCL(tr6);
	tr7 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9762, "gtk_marshal", loc1))(loc1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(2,3);
	tr8 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8267, "expose_translate_agent", tr7))(tr7)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur3 = RTCCL(tr8);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8262, "signal_connect", tr1))(tr1, up1x, ur1x, ur2x, ur3x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ub1
#undef arg1
}

/* {EV_PIXMAP_IMP}.save_to_named_path */
void F1545_15226 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "save_to_named_path";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
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
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,ur1);
	RTLR(7,loc4);
	RTLR(8,loc5);
	RTLR(9,ur2);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_POINTER, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1544, Current, 5, 2, 21320);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21320);
	RTCC(arg1, 1544, l_feature_name, 1, eif_new_type(1028, 0x01), 0x01);
	RTCC(arg2, 1544, l_feature_name, 2, eif_new_type(185, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_format_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_filepath_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11055, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6460, "writeable_pixbuf_formats", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(3,2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6638, "file_extension", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,3);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4704, "as_upper", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2326, "has", tr2))(tr2, ur1x)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11046, dtype))(Current)).it_p);
		loc1 = (EIF_POINTER) tp1;
		RTHOOK(5);
		RTDBGAL(4, 0xF80004D4, 0, 0); /* loc4 */
		tr1 = RTLN(eif_new_type(1236, 0x01).id);
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8163, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(5,1);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		RTDBGAL(5, 0xF80004D4, 0, 0); /* loc5 */
		tr1 = RTLN(eif_new_type(1236, 0x00).id);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6638, "file_extension", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8168, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(6,1);
		loc5 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		tb1 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6635, "scale_width", arg1));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6636, "scale_height", arg1));
			tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			RTHOOK(8);
			RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
			up1 = loc1;
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6635, "scale_width", arg1));
			ui4_1 = ti4_1;
			ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6636, "scale_height", arg1));
			ui4_2 = ti4_2;
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5454, 969))(Current)).it_i4);
			ui4_3 = ti4_3;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5452, 969))(Current, up1x, ui4_1x, ui4_2x, ui4_3x)).it_p);
			loc2 = (EIF_POINTER) tp1;
			RTHOOK(9);
			up1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5537, 969))(Current, up1x);
			RTHOOK(10);
			RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
			loc1 = (EIF_POINTER) loc2;
		}
		RTHOOK(11);
		up1 = loc1;
		tp1 = *(EIF_POINTER *)(loc4 + RTVA(8165, "item", loc4));
		up2 = tp1;
		tp2 = *(EIF_POINTER *)(loc5 + RTVA(8165, "item", loc5));
		up3 = tp2;
		up4 = (EIF_POINTER *) &(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5484, 969))(Current, up1x, up2x, up3x, up4x);
		RTHOOK(12);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc3 != tp1)) {
			RTHOOK(13);
			tr1 = RTLN(eif_new_type(62, 0x01).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(13,1);
			tr2 = RTMS_EX_H("Could not save image file.",26,1692795182);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1290, "raise", tr1))(tr1, ur1x);
		}
		RTHOOK(14);
		up1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5537, 969))(Current, up1x);
	} else {
		RTHOOK(15);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11023, 1539))(Current, ur1x, ur2x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef up4
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {EV_PIXMAP_IMP}.destroy */
void F1545_15227 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "destroy";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_POINTER tp1;
	EIF_POINTER tp2;
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
	
	RTEAA(l_feature_name, 1544, Current, 0, 0, 21321);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21321);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
	up1 = tp1;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
	up2 = tp2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11106, dtype))(Current, up1x, up2x);
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(11032, dtype));
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(tp1 != tp2)) {
		RTHOOK(3);
		tp1 = *(EIF_POINTER *)(Current + RTWA(11032, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5813, 970))(Current, up1x);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 11032, 0x40000000, 1); /* gc */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
		*(EIF_POINTER *)(Current + RTWA(11032, dtype)) = (EIF_POINTER) tp1;
	}
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9339, 1492))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_in_destroy_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9354, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
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
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
}

/* {EV_PIXMAP_IMP}.dispose */
void F1545_15228 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dispose";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_POINTER tp2;
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
	
	RTEAA(l_feature_name, 1544, Current, 0, 0, 21322);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21322);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + RTWA(11032, dtype));
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(tp1 != tp2)) {
		RTHOOK(2);
		tp1 = *(EIF_POINTER *)(Current + RTWA(11032, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11064, dtype))(Current, up1x);
		RTHOOK(3);
		RTDBGAA(Current, dtype, 11032, 0x40000000, 1); /* gc */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
		*(EIF_POINTER *)(Current + RTWA(11032, dtype)) = (EIF_POINTER) tp1;
	}
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3145, 1492))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("object_freed", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3417, dtype))(Current)).it_b);
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
}

/* {EV_PIXMAP_IMP}.default_pixmap_xpm */
EIF_TYPED_VALUE F1545_15229 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_pixmap_xpm";
	RTEX;
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
	
	RTEAA(l_feature_name, 1544, Current, 0, 0, 21323);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1544, Current, 21323);
	RTIV(Current, RTAL);Result = (EIF_POINTER) default_pixmap_xpm();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {EV_PIXMAP_IMP}.monochrome_color_depth */
EIF_TYPED_VALUE F1545_15230 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {EV_PIXMAP_IMP}.interface */
static EIF_TYPED_VALUE F1545_15231_body (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1544, Current, 0, 0, 21325);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1544, Current, 21325);
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

EIF_TYPED_VALUE F1545_15231 (EIF_REFERENCE Current)
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
			r.it_r = (F1545_15231_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(9342,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1545 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
