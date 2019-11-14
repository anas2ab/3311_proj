/*
 * Code for class EV_VIEWPORT_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1466_13742(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1466_13743(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1466_13744(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1466_13745(EIF_REFERENCE);
extern void F1466_13746(EIF_REFERENCE);
extern void F1466_13747(EIF_REFERENCE);
extern void F1466_13748(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1466_13749(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1466_13750(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1466_13751(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1466_13752(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1466_13753(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1466_13754(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1466_13755(EIF_REFERENCE);
extern void F1466_13756(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1466_13757(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1466_13758(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1466_13759(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1466_13760(EIF_REFERENCE);
extern void F1466_13761(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1466_13762(EIF_REFERENCE);
static EIF_TYPED_VALUE F1466_13763_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1466_13763(EIF_REFERENCE);
extern void EIF_Minit1466(void);

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

/* {EV_VIEWPORT_IMP}.make */
void F1466_13742 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 1465, Current, 0, 0, 20091);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1465, Current, 20091);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + RTWA(9858, dtype));
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(tp1 == tp2)) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 10417, 0x40000000, 1); /* viewport */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5608, 970))(Current)).it_p);
		up1 = tp1;
		tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5608, 970))(Current)).it_p);
		up2 = tp2;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5997, 970))(Current, up1x, up2x)).it_p);
		*(EIF_POINTER *)(Current + RTWA(10417, dtype)) = (EIF_POINTER) tp1;
		RTHOOK(3);
		tp1 = *(EIF_POINTER *)(Current + RTWA(10417, dtype));
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9859, dtype))(Current, up1x);
		RTHOOK(4);
		tp1 = *(EIF_POINTER *)(Current + RTWA(10417, dtype));
		up1 = tp1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5680, 970))(Current)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5998, 970))(Current, up1x, ui4_1x);
		RTHOOK(5);
		tp1 = *(EIF_POINTER *)(Current + RTWA(10417, dtype));
		up1 = tp1;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5234, 969))(Current, up1x, ui4_1x, ui4_2x);
		RTHOOK(6);
		RTDBGAA(Current, dtype, 10418, 0x40000000, 1); /* container_widget */
		tp1 = *(EIF_POINTER *)(Current + RTWA(10417, dtype));
		*(EIF_POINTER *)(Current + RTWA(10418, dtype)) = (EIF_POINTER) tp1;
	}
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9337, 1463))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
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
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
#undef ui1_1
}

/* {EV_VIEWPORT_IMP}.needs_event_box */
EIF_TYPED_VALUE F1466_13743 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1465, Current, 0, 0, 20092);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1465, Current, 20092);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {EV_VIEWPORT_IMP}.x_offset */
EIF_TYPED_VALUE F1466_13744 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "x_offset";
	RTEX;
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
	
	RTEAA(l_feature_name, 1465, Current, 0, 0, 20093);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1465, Current, 20093);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10412, dtype));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {EV_VIEWPORT_IMP}.y_offset */
EIF_TYPED_VALUE F1466_13745 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "y_offset";
	RTEX;
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
	
	RTEAA(l_feature_name, 1465, Current, 0, 0, 20094);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1465, Current, 20094);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10413, dtype));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {EV_VIEWPORT_IMP}.block_resize_actions */
void F1466_13746 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "block_resize_actions";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1465, Current, 1, 0, 20095);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1465, Current, 20095);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10407, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6977, "resize_actions_internal", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr2 != NULL)) {
			RTHOOK(3);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(3,1);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6975, "resize_actions", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(3,2);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3117, "block", tr2))(tr2);
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
#undef up1
}

/* {EV_VIEWPORT_IMP}.unblock_resize_actions */
void F1466_13747 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unblock_resize_actions";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1465, Current, 1, 0, 20096);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1465, Current, 20096);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10407, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6977, "resize_actions_internal", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr2 != NULL)) {
			RTHOOK(3);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(3,1);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6975, "resize_actions", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(3,2);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3119, "resume", tr2))(tr2);
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
#undef up1
}

/* {EV_VIEWPORT_IMP}.set_x_offset */
void F1466_13748 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_x_offset";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
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
	
	RTEAA(l_feature_name, 1465, Current, 0, 1, 20097);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1465, Current, 20097);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = arg1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10413, dtype));
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10393, dtype))(Current, ui4_1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("assigned", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10389, dtype))(Current)).it_i4);
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
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {EV_VIEWPORT_IMP}.set_offset */
void F1466_13749 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_offset";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
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
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_BOOL, &loc3);
	
	RTEAA(l_feature_name, 1465, Current, 3, 2, 20098);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1465, Current, 20098);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x04000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10412, dtype));
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 != ti4_1);
	RTHOOK(2);
	RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10413, dtype));
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg2 != ti4_1);
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc2 || loc3)) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10410, dtype))(Current);
		RTHOOK(5);
		if (loc2) {
			RTHOOK(6);
			RTDBGAA(Current, dtype, 10412, 0x10000000, 1); /* internal_x_offset */
			*(EIF_INTEGER_32 *)(Current + RTWA(10412, dtype)) = (EIF_INTEGER_32) arg1;
			RTHOOK(7);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10414, dtype))(Current)).it_p);
			up1 = tp1;
			ui4_1 = arg1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10416, dtype))(Current, up1x, ui4_1x);
		}
		RTHOOK(8);
		if (loc3) {
			RTHOOK(9);
			RTDBGAA(Current, dtype, 10413, 0x10000000, 1); /* internal_y_offset */
			*(EIF_INTEGER_32 *)(Current + RTWA(10413, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(10);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10415, dtype))(Current)).it_p);
			up1 = tp1;
			ui4_1 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10416, dtype))(Current, up1x, ui4_1x);
		}
		RTHOOK(11);
		tp1 = *(EIF_POINTER *)(Current + RTWA(10417, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6135, 970))(Current, up1x)).it_p);
		if ((EIF_BOOLEAN)(tp1 != loc1)) {
			RTHOOK(12);
			tp1 = *(EIF_POINTER *)(Current + RTWA(10417, dtype));
			up1 = tp1;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6135, 970))(Current, up1x)).it_p);
			up1 = tp1;
			ui4_1 = (EIF_INTEGER_32) -arg1;
			ui4_2 = (EIF_INTEGER_32) -arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5849, 970))(Current, up1x, ui4_1x, ui4_2x);
		} else {
			RTHOOK(13);
			if (loc2) {
				RTHOOK(14);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10414, dtype))(Current)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5865, 970))(Current, up1x);
			}
			RTHOOK(15);
			if (loc3) {
				RTHOOK(16);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10415, dtype))(Current)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5865, 970))(Current, up1x);
			}
		}
		RTHOOK(17);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10411, dtype))(Current);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("assigned", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10389, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("assigned", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10390, dtype))(Current)).it_i4);
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
	RTLO(7);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {EV_VIEWPORT_IMP}.set_y_offset */
void F1466_13750 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_y_offset";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
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
	
	RTEAA(l_feature_name, 1465, Current, 0, 1, 20099);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1465, Current, 20099);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10412, dtype));
	ui4_1 = ti4_1;
	ui4_2 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10393, dtype))(Current, ui4_1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("assigned", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10390, dtype))(Current)).it_i4);
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
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {EV_VIEWPORT_IMP}.set_item_size */
void F1466_13751 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_item_size";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
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
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,loc1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_POINTER, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_POINTER, &loc5);
	
	RTEAA(l_feature_name, 1465, Current, 5, 2, 20100);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1465, Current, 20100);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_width_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_height_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_width_not_smaller_than_minimum_width", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8681, "minimum_width", tr1))(tr1)).it_i4);
		RTTE((EIF_BOOLEAN) (arg1 >= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_height_not_smaller_than_minimum_height", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8682, "minimum_height", tr1))(tr1)).it_i4);
		RTTE((EIF_BOOLEAN) (arg2 >= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAL(4, 0xF800051C, 0, 0); /* loc4 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10407, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTCT0("l_item /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(7);
	RTDBGAL(1, 0xF80005A4, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1444, 0x00), loc1);
	RTHOOK(8);
	RTCT0("w_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(9);
	RTDBGAL(3, 0x40000000, 1, 0); /* loc3 */
	tp1 = *(EIF_POINTER *)(loc1 + RTVA(9858, "c_object", loc1));
	loc3 = (EIF_POINTER) tp1;
	RTHOOK(10);
	RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
	up1 = loc3;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6139, 970))(Current, up1x)).it_p);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(11);
	RTDBGAL(5, 0x40000000, 1, 0); /* loc5 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5650, 970))(Current)).it_i4);
	ui4_1 = ti4_1;
	tp1 = malloc((size_t)ui4_1);
	loc5 = (EIF_POINTER) tp1;
	RTHOOK(12);
	up1 = loc5;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10412, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6106, 970))(Current, up1x, ui4_1x);
	RTHOOK(13);
	up1 = loc5;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10413, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6107, 970))(Current, up1x, ui4_1x);
	RTHOOK(14);
	up1 = loc5;
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6105, 970))(Current, up1x, ui4_1x);
	RTHOOK(15);
	up1 = loc5;
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6104, 970))(Current, up1x, ui4_1x);
	RTHOOK(16);
	up1 = loc2;
	ui4_1 = arg1;
	ui4_2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5234, 969))(Current, up1x, ui4_1x, ui4_2x);
	RTHOOK(17);
	up1 = loc2;
	up2 = loc5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5235, 969))(Current, up1x, up2x);
	RTHOOK(18);
	free(loc5);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {EV_VIEWPORT_IMP}.gtk_insert_i_th */
void F1466_13752 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "gtk_insert_i_th";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	
	RTEAA(l_feature_name, 1465, Current, 1, 3, 20101);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1465, Current, 20101);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5901, 970))(Current)).it_p);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(2);
	up1 = loc1;
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5228, 969))(Current, up1x, ub1x);
	RTHOOK(3);
	up1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6021, 970))(Current, up1x);
	RTHOOK(4);
	up1 = loc1;
	up2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5881, 970))(Current, up1x, up2x);
	RTHOOK(5);
	up1 = arg1;
	up2 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5881, 970))(Current, up1x, up2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef ub1
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_VIEWPORT_IMP}.gtk_container_remove */
void F1466_13753 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "gtk_container_remove";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
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
	RTLU(SK_POINTER, &loc1);
	
	RTEAA(l_feature_name, 1465, Current, 1, 2, 20102);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1465, Current, 20102);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	up1 = arg2;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6139, 970))(Current, up1x)).it_p);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(2);
	up1 = loc1;
	up2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5884, 970))(Current, up1x, up2x);
	RTHOOK(3);
	up1 = arg1;
	up2 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5884, 970))(Current, up1x, up2x);
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
#undef arg2
#undef arg1
}

/* {EV_VIEWPORT_IMP}.container_widget */
EIF_TYPED_VALUE F1466_13754 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(10418,Dtype(Current)));
	return r;
}


/* {EV_VIEWPORT_IMP}.visual_widget */
EIF_TYPED_VALUE F1466_13755 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "visual_widget";
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
	
	RTEAA(l_feature_name, 1465, Current, 0, 0, 20104);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1465, Current, 20104);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x40000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(10417, dtype));
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

/* {EV_VIEWPORT_IMP}.on_removed_item */
void F1466_13756 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "on_removed_item";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
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
	
	RTEAA(l_feature_name, 1465, Current, 0, 1, 20105);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1465, Current, 20105);
	RTCC(arg1, 1465, l_feature_name, 1, eif_new_type(1444, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10335, 1463))(Current, ur1x);
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10393, dtype))(Current, ui4_1x, ui4_2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {EV_VIEWPORT_IMP}.internal_x_offset */
EIF_TYPED_VALUE F1466_13757 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(10412,Dtype(Current)));
	return r;
}


/* {EV_VIEWPORT_IMP}.internal_y_offset */
EIF_TYPED_VALUE F1466_13758 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(10413,Dtype(Current)));
	return r;
}


/* {EV_VIEWPORT_IMP}.horizontal_adjustment */
EIF_TYPED_VALUE F1466_13759 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "horizontal_adjustment";
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
	
	RTEAA(l_feature_name, 1465, Current, 0, 0, 20108);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1465, Current, 20108);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x40000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(10417, dtype));
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5995, 970))(Current, up1x)).it_p);
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

/* {EV_VIEWPORT_IMP}.vertical_adjustment */
EIF_TYPED_VALUE F1466_13760 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "vertical_adjustment";
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
	
	RTEAA(l_feature_name, 1465, Current, 0, 0, 20109);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1465, Current, 20109);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x40000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(10417, dtype));
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5996, 970))(Current, up1x)).it_p);
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

/* {EV_VIEWPORT_IMP}.internal_set_value_from_adjustment */
void F1466_13761 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "internal_set_value_from_adjustment";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_POINTER tp1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1465, Current, 0, 2, 20110);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1465, Current, 20110);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("l_adj_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	up1 = arg1;
	tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6094, 970))(Current, up1x)).it_r4);
	tr4_2 = (EIF_REAL_32) (arg2);
	if ((EIF_BOOLEAN) eif_is_greater_real_32 (tr4_1, tr4_2)) {
		RTHOOK(3);
		up1 = arg1;
		tr4_1 = (EIF_REAL_32) (arg2);
		ur4_1 = tr4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6162, 970))(Current, up1x, ur4_1x);
	} else {
		RTHOOK(4);
		up1 = arg1;
		tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6098, 970))(Current, up1x)).it_r4);
		tr4_2 = (EIF_REAL_32) (arg2);
		if ((EIF_BOOLEAN) eif_is_less_real_32 (tr4_1, tr4_2)) {
			RTHOOK(5);
			up1 = arg1;
			tr4_1 = (EIF_REAL_32) (arg2);
			ur4_1 = tr4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6166, 970))(Current, up1x, ur4_1x);
		}
	}
	RTHOOK(6);
	up1 = arg1;
	tr4_1 = (EIF_REAL_32) (arg2);
	ur4_1 = tr4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6167, 970))(Current, up1x, ur4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("value_set", EX_POST);
		up1 = arg1;
		tr4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6099, 970))(Current, up1x)).it_r4);
		tr4_2 = (EIF_REAL_32) (arg2);
		if ((EIF_BOOLEAN) eif_is_equal_real_32 (tr4_1, tr4_2)) {
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
	RTLO(4);
	RTEE;
#undef up1
#undef ur4_1
#undef arg2
#undef arg1
}

/* {EV_VIEWPORT_IMP}.viewport */
EIF_TYPED_VALUE F1466_13762 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(10417,Dtype(Current)));
	return r;
}


/* {EV_VIEWPORT_IMP}.interface */
static EIF_TYPED_VALUE F1466_13763_body (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1465, Current, 0, 0, 20112);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1465, Current, 20112);
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

EIF_TYPED_VALUE F1466_13763 (EIF_REFERENCE Current)
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
			r.it_r = (F1466_13763_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(9342,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1466 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
