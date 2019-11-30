/*
 * Code for class WEL_FONT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1888_21583(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1888_21584(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1888_21585(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1888_21586(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1888_21587(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1888_21588(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1888_21589(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1888_21590(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1888_21591(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1888_21592(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1888_21593(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1888_21594(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1888_21595(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1888_21596(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1888_21597(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1888_21598(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1888_21599(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1888_21600(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1888_21601(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1888_21602(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1888_21603(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1888_21604(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1888(void);

#ifdef __cplusplus
}
#endif

#include <wel.h>
#include "eif_helpers.h"
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

/* {WEL_FONT}.make */
void F1888_21583 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x, EIF_TYPED_VALUE arg10x, EIF_TYPED_VALUE arg11x, EIF_TYPED_VALUE arg12x, EIF_TYPED_VALUE arg13x, EIF_TYPED_VALUE arg14x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_i4
#define arg8 arg8x.it_i4
#define arg9 arg9x.it_i4
#define arg10 arg10x.it_i4
#define arg11 arg11x.it_i4
#define arg12 arg12x.it_i4
#define arg13 arg13x.it_i4
#define arg14 arg14x.it_r
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
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE ui4_7x = {{0}, SK_INT32};
#define ui4_7 ui4_7x.it_i4
	EIF_TYPED_VALUE ui4_8x = {{0}, SK_INT32};
#define ui4_8 ui4_8x.it_i4
	EIF_TYPED_VALUE ui4_9x = {{0}, SK_INT32};
#define ui4_9 ui4_9x.it_i4
	EIF_TYPED_VALUE ui4_10x = {{0}, SK_INT32};
#define ui4_10 ui4_10x.it_i4
	EIF_TYPED_VALUE ui4_11x = {{0}, SK_INT32};
#define ui4_11 ui4_11x.it_i4
	EIF_TYPED_VALUE ui4_12x = {{0}, SK_INT32};
#define ui4_12 ui4_12x.it_i4
	EIF_TYPED_VALUE ui4_13x = {{0}, SK_INT32};
#define ui4_13 ui4_13x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg13x.type & SK_HEAD) == SK_REF) arg13x.it_i4 = * (EIF_INTEGER_32 *) arg13x.it_r;
	if ((arg12x.type & SK_HEAD) == SK_REF) arg12x.it_i4 = * (EIF_INTEGER_32 *) arg12x.it_r;
	if ((arg11x.type & SK_HEAD) == SK_REF) arg11x.it_i4 = * (EIF_INTEGER_32 *) arg11x.it_r;
	if ((arg10x.type & SK_HEAD) == SK_REF) arg10x.it_i4 = * (EIF_INTEGER_32 *) arg10x.it_r;
	if ((arg9x.type & SK_HEAD) == SK_REF) arg9x.it_i4 = * (EIF_INTEGER_32 *) arg9x.it_r;
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,arg14);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU(SK_INT32,&arg9);
	RTLU(SK_INT32,&arg10);
	RTLU(SK_INT32,&arg11);
	RTLU(SK_INT32,&arg12);
	RTLU(SK_INT32,&arg13);
	RTLU(SK_REF,&arg14);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1887, Current, 1, 14, 27560);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1887, Current, 27560);
	RTCC(arg14, 1887, l_feature_name, 14, eif_new_type(229, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_face_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg14 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF800053D, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1341, 0x01).id);
	ur1 = RTCCL(arg14);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2819, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 12376, 0x40000000, 1); /* item */
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	ui4_4 = arg4;
	ui4_5 = arg5;
	ui4_6 = arg6;
	ui4_7 = arg7;
	ui4_8 = arg8;
	ui4_9 = arg9;
	ui4_10 = arg10;
	ui4_11 = arg11;
	ui4_12 = arg12;
	ui4_13 = arg13;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2826, "item", loc1))(loc1)).it_p);
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17856, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x, ui4_6x, ui4_7x, ui4_8x, ui4_9x, ui4_10x, ui4_11x, ui4_12x, ui4_13x, up1x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(12376, dtype)) = (EIF_POINTER) tp1;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12791, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef ui4_7
#undef ui4_8
#undef ui4_9
#undef ui4_10
#undef ui4_11
#undef ui4_12
#undef ui4_13
#undef arg14
#undef arg13
#undef arg12
#undef arg11
#undef arg10
#undef arg9
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_FONT}.make_indirect */
void F1888_21584 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_indirect";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 1887, Current, 0, 1, 27561);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1887, Current, 27561);
	RTCC(arg1, 1887, l_feature_name, 1, eif_new_type(1548, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_log_font_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_log_font_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12378, "exists", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 12376, 0x40000000, 1); /* item */
	tp1 = *(EIF_POINTER *)(arg1 + RTVA(12376, "item", arg1));
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17857, dtype))(Current, up1x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(12376, dtype)) = (EIF_POINTER) tp1;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12791, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {WEL_FONT}.set_height */
void F1888_21585 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_height";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1887, Current, 2, 1, 27562);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1887, Current, 27562);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11648, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_height_bigger_than_zero", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(2, 0xF80005BD, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1469, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12478, "get", loc2))(loc2);
	RTHOOK(5);
	RTDBGAL(1, 0xF800060C, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17841, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	ur1 = RTCCL(loc2);
	ui4_1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17828, dtype))(Current, ur1x, ui4_1x)).it_i4);
	ui4_1 = (EIF_INTEGER_32) -ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14033, "set_height", loc1))(loc1, ui4_1x);
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12479, "release", loc2))(loc2);
	RTHOOK(8);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17840, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {WEL_FONT}.set_height_in_points */
void F1888_21586 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_height_in_points";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1887, Current, 2, 1, 27563);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1887, Current, 27563);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11648, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(2, 0xF80005BD, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1469, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12478, "get", loc2))(loc2);
	RTHOOK(4);
	RTDBGAL(1, 0xF800060C, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17841, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	ur1 = RTCCL(loc2);
	ui4_1 = arg1;
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17826, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
	ui4_1 = (EIF_INTEGER_32) -ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14033, "set_height", loc1))(loc1, ui4_1x);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12479, "release", loc2))(loc2);
	RTHOOK(7);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17840, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {WEL_FONT}.set_indirect */
void F1888_21587 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_indirect";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
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
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_POINTER, &loc2);
	
	RTEAA(l_feature_name, 1887, Current, 2, 1, 27564);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1887, Current, 27564);
	RTCC(arg1, 1887, l_feature_name, 1, eif_new_type(1548, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11648, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_log_font_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (
		WDBG(1887,"wel_gdi_count")
	) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12795, dtype))(Current);
	}
	RTHOOK(4);
	RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(12376, dtype));
	up1 = tp1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12797, dtype))(Current, up1x)).it_b);
	loc1 = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_CHECK) {
		RTHOOK(5);
		RTCT("c_object_destroyed", EX_CHECK);
		if (loc1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(6);
	RTDBGAA(Current, dtype, 12376, 0x40000000, 1); /* item */
	*(EIF_POINTER *)(Current + RTWA(12376, dtype)) = (EIF_POINTER) loc2;
	if (RTAL & CK_CHECK) {
		RTHOOK(7);
		RTCT("c_object_destroyed", EX_CHECK);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11648, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(8);
	RTDBGAA(Current, dtype, 12376, 0x40000000, 1); /* item */
	tp1 = *(EIF_POINTER *)(arg1 + RTVA(12376, "item", arg1));
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17857, dtype))(Current, up1x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(12376, dtype)) = (EIF_POINTER) tp1;
	if (
		WDBG(1887,"wel_gdi_count")
	) {
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12794, dtype))(Current);
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
#undef arg1
}

/* {WEL_FONT}.log_font */
EIF_TYPED_VALUE F1888_21588 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "log_font";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1887, Current, 0, 0, 27565);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1887, Current, 27565);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11648, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF800060C, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1548, 0x01).id);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(13989, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
#undef ur1
}

/* {WEL_FONT}.width */
EIF_TYPED_VALUE F1888_21589 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "width";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1887, Current, 0, 0, 27566);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1887, Current, 27566);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11648, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = RTMS_EX_H("x",1,120);
	ur1 = tr1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17845, dtype))(Current, ur1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
}

/* {WEL_FONT}.height */
EIF_TYPED_VALUE F1888_21590 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "height";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1887, Current, 1, 0, 27567);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1887, Current, 27567);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11648, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF80005BD, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1469, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12478, "get", loc1))(loc1);
	RTHOOK(4);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ur1 = RTCCL(loc1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17841, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13992, "height", tr1))(tr1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) -ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17829, dtype))(Current, ur1x, ui4_1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12479, "release", loc1))(loc1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_bigger_than_zero", EX_POST);
		if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {WEL_FONT}.point */
EIF_TYPED_VALUE F1888_21591 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "point";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1887, Current, 1, 0, 27568);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1887, Current, 27568);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11648, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF80005BD, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1469, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12478, "get", loc1))(loc1);
	RTHOOK(4);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ur1 = RTCCL(loc1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17841, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13992, "height", tr1))(tr1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) -ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(17825, dtype))(Current, ur1x, ui4_1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12479, "release", loc1))(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {WEL_FONT}.string_width */
EIF_TYPED_VALUE F1888_21592 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "string_width";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1887, Current, 0, 1, 27569);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1887, Current, 27569);
	RTCC(arg1, 1887, l_feature_name, 1, eif_new_type(229, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11648, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17848, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ti4_1 = eif_integer_32_item(RTCW(tr1),1);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {WEL_FONT}.string_height */
EIF_TYPED_VALUE F1888_21593 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "string_height";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1887, Current, 0, 1, 27570);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1887, Current, 27570);
	RTCC(arg1, 1887, l_feature_name, 1, eif_new_type(229, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11648, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17848, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ti4_1 = eif_integer_32_item(RTCW(tr1),2);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {WEL_FONT}.string_size_extended */
EIF_TYPED_VALUE F1888_21594 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "string_size_extended";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc9 = (EIF_POINTER) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_POINTER loc14 = (EIF_POINTER) 0;
	EIF_NATURAL_32 loc15 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc16 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc17 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc18 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc19 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc20 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc22 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc23 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc24 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,loc21);
	RTLR(6,loc10);
	RTLR(7,loc13);
	RTLR(8,loc12);
	RTLR(9,ur2);
	RTLR(10,Result);
	RTLIU(11);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_POINTER, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_POINTER, &loc14);
	RTLU(SK_UINT32, &loc15);
	RTLU(SK_INT32, &loc16);
	RTLU(SK_INT32, &loc17);
	RTLU(SK_INT32, &loc18);
	RTLU(SK_INT32, &loc19);
	RTLU(SK_INT32, &loc20);
	RTLU(SK_REF, &loc21);
	RTLU(SK_INT32, &loc22);
	RTLU(SK_INT32, &loc23);
	RTLU(SK_BOOL, &loc24);
	
	RTEAA(l_feature_name, 1887, Current, 24, 1, 27571);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1887, Current, 27571);
	RTCC(arg1, 1887, l_feature_name, 1, eif_new_type(229, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11648, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4681, "count", arg1))(arg1)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(5);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(6);
		RTDBGAL(3, 0xF80005BD, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17849, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12478, "get", loc3))(loc3);
		RTHOOK(8);
		ur1 = RTCCL(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12537, "select_font", loc3))(loc3, ur1x);
		RTHOOK(9);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4681, "count", arg1))(arg1)).it_i4);
		loc5 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(10);
		RTDBGAL(21, 0xF800060E, 0, 0); /* loc21 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17850, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc21 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(11);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14124, "set_from_dc", loc21))(loc21, ur1x);
		RTHOOK(12);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14143, "pitch_and_family", loc21))(loc21)).it_i4);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8474, dtype))(Current)).it_i4);
		ui4_2 = ti4_2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12111, dtype))(Current, ui4_1x, ui4_2x)).it_b);
		if (tb1) {
			RTHOOK(13);
			RTDBGAL(22, 0x10000000, 1, 0); /* loc22 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14125, "height", loc21))(loc21)).it_i4);
			loc22 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(14);
			RTDBGAL(24, 0x04000000, 1, 0); /* loc24 */
			loc24 = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 48L));
			RTHOOK(15);
			RTDBGAL(10, 0xF80005F7, 0, 0); /* loc10 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17851, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc10 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(16);
			RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13059, "structure_size", loc10))(loc10)).it_i4);
			loc11 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(17);
			if ((EIF_BOOLEAN) !loc24) {
				RTHOOK(18);
				RTDBGAL(13, 0xF80000AB, 0, 0); /* loc13 */
				tr1 = RTLN(eif_new_type(171, 0x01).id);
				ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 256L) * loc11);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3276, Dtype(tr1)))(tr1, ui4_1x);
				RTNHOOK(18,1);
				loc13 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(19);
				tp1 = *(EIF_POINTER *)(loc3 + RTVA(12376, "item", loc3));
				up1 = tp1;
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				uu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
				tp2 = *(EIF_POINTER *)(loc13 + RTVA(3282, "item", loc13));
				up2 = tp2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12684, "cwel_get_char_abc_widths", loc3))(loc3, up1x, uu4_1x, uu4_2x, up2x);
				RTHOOK(20);
				RTDBGAL(14, 0x40000000, 1, 0); /* loc14 */
				tp1 = *(EIF_POINTER *)(loc13 + RTVA(3282, "item", loc13));
				loc14 = (EIF_POINTER) tp1;
			}
			RTHOOK(21);
			RTDBGAL(9, 0x40000000, 1, 0); /* loc9 */
			tp1 = *(EIF_POINTER *)(loc3 + RTVA(12376, "item", loc3));
			loc9 = (EIF_POINTER) tp1;
			RTHOOK(22);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1000L);
			RTHOOK(23);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1000L);
			RTHOOK(24);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(25);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			for (;;) {
				RTHOOK(26);
				if ((EIF_BOOLEAN) (loc4 > loc5)) break;
				RTHOOK(27);
				RTDBGAL(15, 0x38000000, 1, 0); /* loc15 */
				ui4_1 = loc4;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4644, "code", arg1))(arg1, ui4_1x)).it_n4);
				loc15 = (EIF_NATURAL_32) tu4_1;
				if (RTAL & CK_CHECK) {
					RTHOOK(28);
					RTCT("character_code_not_too_big", EX_CHECK);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4426, 218))(Current)).it_i4);
					tu4_1 = (EIF_NATURAL_32) ti4_1;
					if ((EIF_BOOLEAN) (loc15 <= tu4_1)) {
						RTCK;
					} else {
						RTCF;
					}
				}
				RTHOOK(29);
				ti4_1 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '\012');
				RTNHOOK(29,1);
				tu4_1 = (EIF_NATURAL_32) ti4_1;
				if ((EIF_BOOLEAN)(loc15 == tu4_1)) {
					RTHOOK(30);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					ui4_1 = loc19;
					ti4_1 = eif_max_int32 (loc1,ui4_1);
					loc1 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(31);
					RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
					ui4_1 = (EIF_INTEGER_32) (loc19 - loc8);
					ti4_1 = eif_max_int32 (loc7,ui4_1);
					loc7 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(32);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(33);
					RTDBGAL(19, 0x10000000, 1, 0); /* loc19 */
					loc19 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(34);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2 += loc22;
					RTHOOK(35);
					RTDBGAL(23, 0x10000000, 1, 0); /* loc23 */
					loc23 = (EIF_INTEGER_32) loc4;
				} else {
					RTHOOK(36);
					if ((EIF_BOOLEAN) (loc24 || (EIF_BOOLEAN) (loc15 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L)))) {
						RTHOOK(37);
						tp1 = *(EIF_POINTER *)(loc3 + RTVA(12376, "item", loc3));
						up1 = tp1;
						uu4_1 = loc15;
						uu4_2 = loc15;
						tp2 = *(EIF_POINTER *)(loc10 + RTVA(12376, "item", loc10));
						up2 = tp2;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12684, "cwel_get_char_abc_widths", loc3))(loc3, up1x, uu4_1x, uu4_2x, up2x);
					} else {
						RTHOOK(38);
						RTDBGAL(10, 0xF80005F7, 0, 0); /* loc10 */
						tr1 = RTLN(eif_new_type(1527, 0x01).id);
						ti4_1 = (EIF_INTEGER_32) loc15;
						ui4_1 = (EIF_INTEGER_32) (ti4_1 * loc11);
						tp1 = RTPOF(loc14,ui4_1);
						up1 = tp1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12375, Dtype(tr1)))(tr1, up1x);
						RTNHOOK(38,1);
						loc10 = (EIF_REFERENCE) RTCCL(tr1);
					}
					RTHOOK(39);
					RTDBGAL(16, 0x10000000, 1, 0); /* loc16 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13611, "a", loc10))(loc10)).it_i4);
					loc16 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(40);
					RTDBGAL(17, 0x10000000, 1, 0); /* loc17 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13612, "b", loc10))(loc10)).it_i4);
					loc17 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(41);
					RTDBGAL(18, 0x10000000, 1, 0); /* loc18 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13613, "c", loc10))(loc10)).it_i4);
					loc18 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(42);
					RTDBGAL(20, 0x10000000, 1, 0); /* loc20 */
					loc20 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc16 + loc17) + loc18);
					RTHOOK(43);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					ui4_1 = ((EIF_INTEGER_32) 1000L);
					ti4_1 = eif_min_int32 ((EIF_INTEGER_32) (loc8 + loc20),ui4_1);
					loc8 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(44);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					ui4_1 = loc18;
					ti4_1 = eif_min_int32 (loc8,ui4_1);
					loc8 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(45);
					RTDBGAL(19, 0x10000000, 1, 0); /* loc19 */
					loc19 += loc20;
					RTHOOK(46);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc23 == (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L))) || (EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 1L)))) {
						RTHOOK(47);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						ui4_1 = loc16;
						ti4_1 = eif_min_int32 (loc6,ui4_1);
						loc6 = (EIF_INTEGER_32) ti4_1;
					}
				}
				RTHOOK(48);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4++;
			}
			RTHOOK(49);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 += loc22;
			RTHOOK(50);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			ui4_1 = loc19;
			ti4_1 = eif_max_int32 (loc1,ui4_1);
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(51);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			ui4_1 = (EIF_INTEGER_32) (loc19 - loc8);
			ti4_1 = eif_max_int32 (loc7,ui4_1);
			loc7 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(52);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - loc7);
		} else {
			RTHOOK(53);
			RTDBGAL(12, 0xF800061D, 0, 0); /* loc12 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11003, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc12 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(54);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ui4_3 = ((EIF_INTEGER_32) 32767L);
			ui4_4 = ((EIF_INTEGER_32) 32767L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14479, "set_rect", loc12))(loc12, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
			RTHOOK(55);
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(loc12);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11523, dtype))(Current)).it_i4);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11519, dtype))(Current)).it_i4);
			ui4_1 = ti4_2;
			ti4_2 = eif_bit_or(ti4_1,ui4_1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11524, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			ti4_1 = eif_bit_or(ti4_2,ui4_1);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12551, "draw_text", loc3))(loc3, ur1x, ur2x, ui4_1x);
			RTHOOK(56);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14477, "width", loc12))(loc12)).it_i4);
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(57);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14478, "height", loc12))(loc12)).it_i4);
			loc2 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(58);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12543, "unselect_font", loc3))(loc3);
		RTHOOK(59);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12712, "quick_release", loc3))(loc3);
	}
	RTHOOK(60);
	RTDBGAL(0, 0xF80000BA, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17852, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(61);
	
	eif_put_integer_32_item(RTCW(Result),1,loc1);
	RTHOOK(62);
	
	eif_put_integer_32_item(RTCW(Result),2,loc2);
	RTHOOK(63);
	
	eif_put_integer_32_item(RTCW(Result),3,loc6);
	RTHOOK(64);
	
	eif_put_integer_32_item(RTCW(Result),4,loc7);
	if (RTAL & CK_ENSURE) {
		RTHOOK(65);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	RTLO(27);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
#undef uu4_2
#undef arg1
}

/* {WEL_FONT}.string_size */
EIF_TYPED_VALUE F1888_21595 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "string_size";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	RTLR(4,loc3);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLR(7,Result);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1887, Current, 4, 1, 27572);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1887, Current, 27572);
	RTCC(arg1, 1887, l_feature_name, 1, eif_new_type(229, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11648, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4681, "count", arg1))(arg1)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(5);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(6);
		RTDBGAL(4, 0xF800061D, 0, 0); /* loc4 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11003, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ui4_3 = ((EIF_INTEGER_32) 32767L);
		ui4_4 = ((EIF_INTEGER_32) 32767L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14479, "set_rect", loc4))(loc4, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTHOOK(8);
		RTDBGAL(3, 0xF80005BD, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17849, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12478, "get", loc3))(loc3);
		RTHOOK(10);
		ur1 = RTCCL(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12537, "select_font", loc3))(loc3, ur1x);
		RTHOOK(11);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(loc4);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11523, dtype))(Current)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11519, dtype))(Current)).it_i4);
		ui4_1 = ti4_2;
		ti4_2 = eif_bit_or(ti4_1,ui4_1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11524, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_1 = eif_bit_or(ti4_2,ui4_1);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12551, "draw_text", loc3))(loc3, ur1x, ur2x, ui4_1x);
		RTHOOK(12);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14477, "width", loc4))(loc4)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(13);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14478, "height", loc4))(loc4)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(14);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12543, "unselect_font", loc3))(loc3);
		RTHOOK(15);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12712, "quick_release", loc3))(loc3);
	}
	RTHOOK(16);
	RTDBGAL(0, 0xF80000BA, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17853, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(17);
	
	eif_put_integer_32_item(RTCW(Result),1,loc1);
	RTHOOK(18);
	
	eif_put_integer_32_item(RTCW(Result),2,loc2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {WEL_FONT}.reusable_screen_dc */
RTOID (F1888_21596)
EIF_TYPED_VALUE F1888_21596 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reusable_screen_dc";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1888_21596);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1887, Current, 0, 0, 27573);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1887, Current, 27573);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80005BD, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1469, 0x01).id);
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

/* {WEL_FONT}.reusable_text_metric */
RTOID (F1888_21597)
EIF_TYPED_VALUE F1888_21597 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reusable_text_metric";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1888_21597);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1887, Current, 0, 0, 27574);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1887, Current, 27574);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800060E, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1550, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(14122, Dtype(tr1)))(tr1);
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

/* {WEL_FONT}.reusable_abc_struct */
RTOID (F1888_21598)
EIF_TYPED_VALUE F1888_21598 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reusable_abc_struct";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1888_21598);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1887, Current, 0, 0, 27575);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1887, Current, 27575);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80005F7, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1527, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(13055, Dtype(tr1)))(tr1);
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

/* {WEL_FONT}.reusable_string_size_extended_tuple */
RTOID (F1888_21599)
EIF_TYPED_VALUE F1888_21599 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reusable_string_size_extended_tuple";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1888_21599);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1887, Current, 0, 0, 27576);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1887, Current, 27576);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80000BA, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,186,218,218,218,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 5, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr1+3)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr1+4)->it_i4 = ((EIF_INTEGER_32) 0L);
	Result = (EIF_REFERENCE) tr1;
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

/* {WEL_FONT}.reusable_string_size_tuple */
RTOID (F1888_21600)
EIF_TYPED_VALUE F1888_21600 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reusable_string_size_tuple";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1888_21600);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1887, Current, 0, 0, 27577);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1887, Current, 27577);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80000BA, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,218,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	Result = (EIF_REFERENCE) tr1;
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

/* {WEL_FONT}.get_char_a_width */
EIF_TYPED_VALUE F1888_21601 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "get_char_a_width";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1887, Current, 0, 2, 27578);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1887, Current, 27578);
	RTCC(arg1, 1887, l_feature_name, 1, eif_new_type(1464, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("dc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("character_code_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	uu4_1 = arg2;
	uu4_2 = arg2;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12506, "char_abc_widths", arg1))(arg1, uu4_1x, uu4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "i_th", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13611, "a", tr2))(tr2)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef arg2
#undef arg1
}

/* {WEL_FONT}.get_char_c_width */
EIF_TYPED_VALUE F1888_21602 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "get_char_c_width";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1887, Current, 0, 2, 27579);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1887, Current, 27579);
	RTCC(arg1, 1887, l_feature_name, 1, eif_new_type(1464, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("dc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("character_code_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	uu4_1 = arg2;
	uu4_2 = arg2;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12506, "char_abc_widths", arg1))(arg1, uu4_1x, uu4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "i_th", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13613, "c", tr2))(tr2)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef arg2
#undef arg1
}

/* {WEL_FONT}.cwin_create_font */
EIF_TYPED_VALUE F1888_21603 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x, EIF_TYPED_VALUE arg10x, EIF_TYPED_VALUE arg11x, EIF_TYPED_VALUE arg12x, EIF_TYPED_VALUE arg13x, EIF_TYPED_VALUE arg14x)
{
	GTCX
	char *l_feature_name = "cwin_create_font";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_i4
#define arg8 arg8x.it_i4
#define arg9 arg9x.it_i4
#define arg10 arg10x.it_i4
#define arg11 arg11x.it_i4
#define arg12 arg12x.it_i4
#define arg13 arg13x.it_i4
#define arg14 arg14x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg14x.type & SK_HEAD) == SK_REF) arg14x.it_p = * (EIF_POINTER *) arg14x.it_r;
	if ((arg13x.type & SK_HEAD) == SK_REF) arg13x.it_i4 = * (EIF_INTEGER_32 *) arg13x.it_r;
	if ((arg12x.type & SK_HEAD) == SK_REF) arg12x.it_i4 = * (EIF_INTEGER_32 *) arg12x.it_r;
	if ((arg11x.type & SK_HEAD) == SK_REF) arg11x.it_i4 = * (EIF_INTEGER_32 *) arg11x.it_r;
	if ((arg10x.type & SK_HEAD) == SK_REF) arg10x.it_i4 = * (EIF_INTEGER_32 *) arg10x.it_r;
	if ((arg9x.type & SK_HEAD) == SK_REF) arg9x.it_i4 = * (EIF_INTEGER_32 *) arg9x.it_r;
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU(SK_INT32,&arg9);
	RTLU(SK_INT32,&arg10);
	RTLU(SK_INT32,&arg11);
	RTLU(SK_INT32,&arg12);
	RTLU(SK_INT32,&arg13);
	RTLU(SK_POINTER,&arg14);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1887, Current, 0, 14, 27580);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1887, Current, 27580);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) CreateFont(((int) arg1), ((int) arg2), ((int) arg3), ((int) arg4), ((int) arg5), ((DWORD) arg6), ((DWORD) arg7), ((DWORD) arg8), ((DWORD) arg9), ((DWORD) arg10), ((DWORD) arg11), ((DWORD) arg12), ((DWORD) arg13), ((LPCTSTR) arg14));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(16);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg14
#undef arg13
#undef arg12
#undef arg11
#undef arg10
#undef arg9
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_FONT}.cwin_create_font_indirect */
EIF_TYPED_VALUE F1888_21604 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwin_create_font_indirect";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1887, Current, 0, 1, 27581);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1887, Current, 27581);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) CreateFontIndirect(((LOGFONT *) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

void EIF_Minit1888 (void)
{
	GTCX
	RTOTS (21596,F1888_21596)
	RTOTS (21597,F1888_21597)
	RTOTS (21598,F1888_21598)
	RTOTS (21599,F1888_21599)
	RTOTS (21600,F1888_21600)
}


#ifdef __cplusplus
}
#endif
