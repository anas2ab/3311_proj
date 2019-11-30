/*
 * Code for class EV_PICK_AND_DROPABLE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1959_23605(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1959_23606(EIF_REFERENCE);
extern void F1959_23607(EIF_REFERENCE);
extern void F1959_23608(EIF_REFERENCE);
extern void F1959_23609(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1959_23610(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1959_23611(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1959_23612(EIF_REFERENCE);
extern void F1959_23613(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1959_23614(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1959_23615(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1959_23616(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1959_23617(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1959_23618(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1959_23619(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1959_23620(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1959_23621(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1959_23622(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1959_23623(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1959_23624(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1959_23625(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1959_23626(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1959_23627(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1959_23628(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1959_23629(EIF_REFERENCE);
extern void F1959_23630(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1959_23632(EIF_REFERENCE);
extern void F1959_23633(EIF_REFERENCE);
extern void F1959_23634(EIF_REFERENCE);
extern void F1959_23635(EIF_REFERENCE);
extern void F1959_23636(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1959_23638(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1959_23644(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1959_23645(EIF_REFERENCE);
extern void EIF_Minit1959(void);
extern EIF_REFERENCE _A1959_255();

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

/* {EV_PICK_AND_DROPABLE_IMP}.capture_enabled */
EIF_TYPED_VALUE F1959_23605 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "capture_enabled";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1958, Current, 0, 0, 29547);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29547);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19421, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1718, "item", tr1))(tr1)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {EV_PICK_AND_DROPABLE_IMP}.transport_executing */
EIF_TYPED_VALUE F1959_23606 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "transport_executing";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA(l_feature_name, 1958, Current, 0, 0, 29548);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29548);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(19402, dtype));
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(19403, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tb1 || tb2);
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

/* {EV_PICK_AND_DROPABLE_IMP}.enable_transport */
void F1959_23607 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_transport";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
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
	
	RTEAA(l_feature_name, 1958, Current, 0, 0, 29549);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29549);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pebble_not_void", EX_PRE);
		tb1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16349, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (!(EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16350, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_CHECK) {
		RTHOOK(2);
		RTCT("release_not_connected", EX_CHECK);
		tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(19405, dtype));
		tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19407, dtype))(Current)).it_n1);
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(3);
	RTDBGAA(Current, dtype, 19404, 0x30000000, 1); /* press_action */
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19408, dtype))(Current)).it_n1);
	*(EIF_NATURAL_8 *)(Current + RTWA(19404, dtype)) = (EIF_NATURAL_8) tu1_1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 16374, 0x04000000, 1); /* is_transport_enabled */
	*(EIF_BOOLEAN *)(Current + RTWA(16374, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_transport_enabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(16374, dtype));
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

/* {EV_PICK_AND_DROPABLE_IMP}.disable_transport */
void F1959_23608 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_transport";
	RTEX;
	EIF_NATURAL_8 tu1_1;
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
	
	RTEAA(l_feature_name, 1958, Current, 0, 0, 29550);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29550);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 19405, 0x30000000, 1); /* release_action */
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19407, dtype))(Current)).it_n1);
	*(EIF_NATURAL_8 *)(Current + RTWA(19405, dtype)) = (EIF_NATURAL_8) tu1_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 19404, 0x30000000, 1); /* press_action */
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19407, dtype))(Current)).it_n1);
	*(EIF_NATURAL_8 *)(Current + RTWA(19404, dtype)) = (EIF_NATURAL_8) tu1_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 19406, 0x30000000, 1); /* motion_action */
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19407, dtype))(Current)).it_n1);
	*(EIF_NATURAL_8 *)(Current + RTWA(19406, dtype)) = (EIF_NATURAL_8) tu1_1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 16374, 0x04000000, 1); /* is_transport_enabled */
	*(EIF_BOOLEAN *)(Current + RTWA(16374, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_transport_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(16374, dtype));
		if ((EIF_BOOLEAN) !tb1) {
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
}

/* {EV_PICK_AND_DROPABLE_IMP}.pnd_press */
void F1959_23609 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "pnd_press";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
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
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE ub2x = {{0}, SK_BOOL};
#define ub2 ub2x.it_b
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
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
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1958, Current, 0, 5, 29551);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29551);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(19404, dtype));
	switch (tu1_1) {
		case 1U:
			RTHOOK(2);
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = arg3;
			ub1 = (EIF_BOOLEAN) 1;
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			ur8_1 = tr8_1;
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			ur8_2 = tr8_2;
			ur8_3 = (EIF_REAL_64) 0.5;
			ui4_4 = arg4;
			ui4_5 = arg5;
			ub2 = (EIF_BOOLEAN) 0;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16387, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ub1x, ur8_1x, ur8_2x, ur8_3x, ui4_4x, ui4_5x, ub2x);
			break;
		case 2U:
			RTHOOK(3);
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = arg3;
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			ur8_1 = tr8_1;
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			ur8_2 = tr8_2;
			tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			ur8_3 = tr8_3;
			ui4_4 = arg4;
			ui4_5 = arg5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16388, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ur8_1x, ur8_2x, ur8_3x, ui4_4x, ui4_5x);
			break;
		default:
			if (RTAL & CK_CHECK) {
				RTHOOK(4);
				RTCT("disabled", EX_CHECK);
				tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(19404, dtype));
				tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19407, dtype))(Current)).it_n1);
				if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
					RTCK;
				} else {
					RTCF;
				}
			}
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ub1
#undef ub2
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_IMP}.check_drag_and_drop_release */
void F1959_23610 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "check_drag_and_drop_release";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1958, Current, 1, 2, 29552);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29552);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16376, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18447, "end_awaiting_movement", tr1))(tr1);
		RTHOOK(3);
		tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(19404, dtype));
		tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19409, dtype))(Current)).it_n1);
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTHOOK(4);
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = ((EIF_INTEGER_32) 1L);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			ur8_1 = tr8_1;
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			ur8_2 = tr8_2;
			tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			ur8_3 = tr8_3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			ui4_5 = ((EIF_INTEGER_32) 0L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16388, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ur8_1x, ur8_2x, ur8_3x, ui4_4x, ui4_5x);
		} else {
			RTHOOK(5);
			tb1 = '\0';
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(10056, dtype));
			if (tb2) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19414, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc1 = RTCCL(tr1);
				tb1 = EIF_TEST(loc1);
			}
			if (tb1) {
				RTHOOK(6);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19731, "move_to_foreground", loc1))(loc1);
			}
		}
		RTHOOK(7);
		RTDBGAA(Current, dtype, 10058, 0x10000000, 1); /* original_x */
		*(EIF_INTEGER_32 *)(Current + RTWA(10058, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		RTHOOK(8);
		RTDBGAA(Current, dtype, 10059, 0x10000000, 1); /* original_y */
		*(EIF_INTEGER_32 *)(Current + RTWA(10059, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		RTHOOK(9);
		RTDBGAA(Current, dtype, 10056, 0x04000000, 1); /* awaiting_movement */
		*(EIF_BOOLEAN *)(Current + RTWA(10056, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
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
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef arg2
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_IMP}.pnd_motion */
void F1959_23611 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "pnd_motion";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1958, Current, 1, 4, 29553);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29553);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10056, dtype));
	if (tb1) {
		RTHOOK(2);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16349, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr1);
		if (EIF_TEST(loc1)) {
			tb2 = '\01';
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10058, dtype));
			ti4_2 = eif_abs_int32 ((EIF_INTEGER_32) (ti4_1 - arg1));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10057, dtype))(Current)).it_i4);
			if (!(EIF_BOOLEAN) (ti4_2 > ti4_1)) {
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10059, dtype));
				ti4_2 = eif_abs_int32 ((EIF_INTEGER_32) (ti4_1 - arg2));
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10057, dtype))(Current)).it_i4);
				tb2 = (EIF_BOOLEAN) (ti4_2 > ti4_1);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(3);
			ur1 = RTCCL(loc1);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10058, dtype));
			ui4_1 = ti4_1;
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(10059, dtype));
			ui4_2 = ti4_2;
			ui4_3 = ((EIF_INTEGER_32) 1L);
			tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(10060, dtype));
			ur8_1 = tr8_1;
			tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(10061, dtype));
			ur8_2 = tr8_2;
			tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(10062, dtype));
			ur8_3 = tr8_3;
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(10058, dtype));
			ui4_4 = (EIF_INTEGER_32) (arg3 + (EIF_INTEGER_32) (ti4_3 - arg1));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(10059, dtype));
			ui4_5 = (EIF_INTEGER_32) (arg4 + (EIF_INTEGER_32) (ti4_4 - arg2));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(19398, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ur8_1x, ur8_2x, ur8_3x, ui4_4x, ui4_5x);
			RTHOOK(4);
			RTDBGAA(Current, dtype, 10056, 0x04000000, 1); /* awaiting_movement */
			*(EIF_BOOLEAN *)(Current + RTWA(10056, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	} else {
		RTHOOK(5);
		tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(19406, dtype));
		switch (tu1_1) {
			case 3U:
				RTHOOK(6);
				ui4_1 = arg1;
				ui4_2 = arg2;
				tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
				ur8_1 = tr8_1;
				tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
				ur8_2 = tr8_2;
				ur8_3 = (EIF_REAL_64) 0.5;
				ui4_3 = arg3;
				ui4_4 = arg4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16389, dtype))(Current, ui4_1x, ui4_2x, ur8_1x, ur8_2x, ur8_3x, ui4_3x, ui4_4x);
				break;
			default:
				if (RTAL & CK_CHECK) {
					RTHOOK(7);
					RTCT("disabled", EX_CHECK);
					tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(19406, dtype));
					tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19407, dtype))(Current)).it_n1);
					if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
						RTCK;
					} else {
						RTCF;
					}
				}
				break;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_IMP}.escape_pnd */
void F1959_23612 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "escape_pnd";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 1958, Current, 1, 0, 29554);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29554);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80007A6, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18477, "pick_and_drop_source", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		if (RTCEQ(loc1, Current)) {
			RTHOOK(4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18450, "clear_transport_just_ended", tr1))(tr1);
			RTHOOK(5);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ui4_3 = ((EIF_INTEGER_32) 2L);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			ur8_1 = tr8_1;
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			ur8_2 = tr8_2;
			tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			ur8_3 = tr8_3;
			ui4_4 = ((EIF_INTEGER_32) 0L);
			ui4_5 = ((EIF_INTEGER_32) 0L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(16388, "end_transport", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ur8_1x, ur8_2x, ur8_3x, ui4_4x, ui4_5x);
		} else {
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19397, "escape_pnd", loc1))(loc1);
		}
	} else {
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18450, "clear_transport_just_ended", tr1))(tr1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("not_in_transport", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19393, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
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
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
}

/* {EV_PICK_AND_DROPABLE_IMP}.start_transport */
void F1959_23613 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x, EIF_TYPED_VALUE arg10x)
{
	GTCX
	char *l_feature_name = "start_transport";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_b
#define arg5 arg5x.it_r8
#define arg6 arg6x.it_r8
#define arg7 arg7x.it_r8
#define arg8 arg8x.it_i4
#define arg9 arg9x.it_i4
#define arg10 arg10x.it_b
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
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
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
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg10x.type & SK_HEAD) == SK_REF) arg10x.it_b = * (EIF_BOOLEAN *) arg10x.it_r;
	if ((arg9x.type & SK_HEAD) == SK_REF) arg9x.it_i4 = * (EIF_INTEGER_32 *) arg9x.it_r;
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_r8 = * (EIF_REAL_64 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_r8 = * (EIF_REAL_64 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r8 = * (EIF_REAL_64 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_b = * (EIF_BOOLEAN *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLR(7,ur3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_BOOL,&arg4);
	RTLU(SK_REAL64,&arg5);
	RTLU(SK_REAL64,&arg6);
	RTLU(SK_REAL64,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU(SK_INT32,&arg9);
	RTLU(SK_BOOL,&arg10);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1958, Current, 2, 10, 29555);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29555);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18450, "clear_transport_just_ended", tr1))(tr1);
	RTHOOK(2);
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16375, dtype))(Current)).it_b);
	if (tb2) {
		tb1 = (EIF_BOOLEAN)(arg3 != ((EIF_INTEGER_32) 3L));
	}
	if (tb1) {
	} else {
		RTHOOK(3);
		ui4_1 = arg1;
		ui4_2 = arg2;
		ui4_3 = arg8;
		ui4_4 = arg9;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16395, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTHOOK(4);
		RTDBGAL(2, 0xF8000000, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16349, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16362, dtype))(Current);
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		tb1 = *(EIF_BOOLEAN *)(tr1 + RTVA(18437, "drop_actions_executing", tr1));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(7);
			tb1 = '\0';
			tb2 = '\01';
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16377, dtype))(Current)).it_b);
			if (!tb3) {
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16378, dtype))(Current)).it_b);
				tb2 = tb3;
			}
			if (tb2) {
				tb1 = (EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 3L));
			}
			if (tb1) {
				RTHOOK(8);
				tb1 = '\0';
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16378, dtype))(Current)).it_b);
					tb1 = tb2;
				}
				if (tb1) {
					RTHOOK(9);
					RTDBGAL(1, 0xF80000FA, 0, 0); /* loc1 */
					{
						EIF_TYPE_INDEX typarr0[] = {0xFFF9,10,186,0xFF01,0,0xFF01,0,218,218,218,206,206,206,218,218,0xFFFF};
						EIF_TYPE typres0;
						typarr0[4] = dftype;
						
						typres0 = eif_compound_id(dftype, typarr0);
						tr1 = RTLNTS(typres0.id, 11, 0);
					}
					((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
					RTAR(tr1,Current);
					((EIF_TYPED_VALUE *)tr1+2)->it_r = loc2;
					RTAR(tr1,loc2);
					((EIF_TYPED_VALUE *)tr1+3)->it_i4 = arg1;
					((EIF_TYPED_VALUE *)tr1+4)->it_i4 = arg2;
					((EIF_TYPED_VALUE *)tr1+5)->it_i4 = arg3;
					((EIF_TYPED_VALUE *)tr1+6)->it_r8 = arg5;
					((EIF_TYPED_VALUE *)tr1+7)->it_r8 = arg6;
					((EIF_TYPED_VALUE *)tr1+8)->it_r8 = arg7;
					((EIF_TYPED_VALUE *)tr1+9)->it_i4 = arg8;
					((EIF_TYPED_VALUE *)tr1+10)->it_i4 = arg9;
					
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,250,0xFF01,0xFFF9,0,186,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1959_255, (EIF_POINTER)(0),19398, 0, 0, 1, -1, tr1, 0);
					}
					loc1 = (EIF_REFERENCE) RTCCL(tr2);
				}
				RTHOOK(10);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(10,1);
				ui4_1 = arg1;
				ui4_2 = arg2;
				ui4_3 = arg8;
				ui4_4 = arg9;
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15740, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				ur1 = RTCCL(tr2);
				ur2 = RTCCL(loc2);
				ur3 = RTCCL(loc1);
				ub1 = arg10;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(16034, "create_target_menu", tr1))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur1x, ur2x, ur3x, ub1x);
			} else {
				RTHOOK(11);
				tb1 = '\0';
				tb2 = '\0';
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16375, dtype))(Current)).it_b);
					tb2 = tb3;
				}
				if (tb2) {
					tb1 = (EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 3L));
				}
				if (tb1) {
					RTHOOK(12);
					ur1 = RTCCL(loc2);
					ui4_1 = arg1;
					ui4_2 = arg2;
					ui4_3 = arg3;
					ur8_1 = arg5;
					ur8_2 = arg6;
					ur8_3 = arg7;
					ui4_4 = arg8;
					ui4_5 = arg9;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(19398, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ur8_1x, ur8_2x, ur8_3x, ui4_4x, ui4_5x);
				} else {
					RTHOOK(13);
					tb1 = '\0';
					tb2 = '\0';
					if ((EIF_BOOLEAN)(loc2 != NULL)) {
						tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16376, dtype))(Current)).it_b);
						tb2 = tb3;
					}
					if (tb2) {
						tb1 = (EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L));
					}
					if (tb1) {
						RTHOOK(14);
						RTDBGAA(Current, dtype, 16349, 0xF8000000, 0); /* pebble */
						tr1 = RTCCL(loc2);
						RTAR(Current, tr1);
						*(EIF_REFERENCE *)(Current + RTWA(16349, dtype)) = (EIF_REFERENCE) tr1;
						RTHOOK(15);
						tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10056, dtype));
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(16);
							RTDBGAA(Current, dtype, 10058, 0x10000000, 1); /* original_x */
							*(EIF_INTEGER_32 *)(Current + RTWA(10058, dtype)) = (EIF_INTEGER_32) arg1;
							RTHOOK(17);
							RTDBGAA(Current, dtype, 10059, 0x10000000, 1); /* original_y */
							*(EIF_INTEGER_32 *)(Current + RTWA(10059, dtype)) = (EIF_INTEGER_32) arg2;
							RTHOOK(18);
							RTDBGAA(Current, dtype, 10060, 0x20000000, 1); /* original_x_tilt */
							*(EIF_REAL_64 *)(Current + RTWA(10060, dtype)) = (EIF_REAL_64) arg5;
							RTHOOK(19);
							RTDBGAA(Current, dtype, 10061, 0x20000000, 1); /* original_y_tilt */
							*(EIF_REAL_64 *)(Current + RTWA(10061, dtype)) = (EIF_REAL_64) arg6;
							RTHOOK(20);
							RTDBGAA(Current, dtype, 10062, 0x20000000, 1); /* original_pressure */
							*(EIF_REAL_64 *)(Current + RTWA(10062, dtype)) = (EIF_REAL_64) arg7;
							RTHOOK(21);
							RTDBGAA(Current, dtype, 10056, 0x04000000, 1); /* awaiting_movement */
							*(EIF_BOOLEAN *)(Current + RTWA(10056, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(22);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(22,1);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18446, "start_awaiting_movement", tr1))(tr1);
						}
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ur3
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ub1
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

/* {EV_PICK_AND_DROPABLE_IMP}.real_start_transport */
void F1959_23614 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x)
{
	GTCX
	char *l_feature_name = "real_start_transport";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r8
#define arg6 arg6x.it_r8
#define arg7 arg7x.it_r8
#define arg8 arg8x.it_i4
#define arg9 arg9x.it_i4
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
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg9x.type & SK_HEAD) == SK_REF) arg9x.it_i4 = * (EIF_INTEGER_32 *) arg9x.it_r;
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_r8 = * (EIF_REAL_64 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_r8 = * (EIF_REAL_64 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r8 = * (EIF_REAL_64 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,ur1);
	RTLR(5,loc3);
	RTLR(6,loc1);
	RTLR(7,loc2);
	RTLR(8,loc4);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REAL64,&arg5);
	RTLU(SK_REAL64,&arg6);
	RTLU(SK_REAL64,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU(SK_INT32,&arg9);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1958, Current, 4, 9, 29556);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29556);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_already_transporting", EX_PRE);
		tb1 = '\0';
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(19402, dtype));
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(19403, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !tb2 && (EIF_BOOLEAN) !tb3)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(1,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18477, "pick_and_drop_source", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tb1 = (EIF_BOOLEAN)(tr2 == NULL);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("original_window_void", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19415, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 == NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\0';
	tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16376, dtype))(Current)).it_b);
	if (tb4) {
		tb3 = (EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 1L));
	}
	if (!(tb3)) {
		tb3 = '\0';
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16375, dtype))(Current)).it_b);
		if (tb4) {
			tb3 = (EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 3L));
		}
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = '\0';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16377, dtype))(Current)).it_b);
		if (tb3) {
			tb2 = (EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 3L));
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 16349, 0xF8000000, 0); /* pebble */
		tr1 = RTCCL(arg1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(16349, dtype)) = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		RTDBGAA(Current, dtype, 19415, 0xF80007C0, 0); /* original_top_level_window_imp */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19414, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(19415, dtype)) = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15740, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12369, "pointer_motion_actions", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(6,2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3117, "block", tr2))(tr2);
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		ur1 = RTCCL(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18443, "transport_started", tr1))(tr1, ur1x);
		RTHOOK(8);
		ub1 = (EIF_BOOLEAN) 1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16396, dtype))(Current, ub1x);
		RTHOOK(9);
		RTDBGAL(3, 0xF8000653, 0, 0); /* loc3 */
		tr1 = RTLN(eif_new_type(1619, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(9,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(10);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14863, "implementation", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15930, "application_i", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9364, "pick_actions", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,3);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = arg1;
		RTAR(tr2,arg1);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
		RTHOOK(11);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10427, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(12);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10427, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,218,218,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 3, 1);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg2;
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
		}
		RTHOOK(13);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16375, dtype))(Current)).it_b);
		if (!tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16377, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(14);
			RTDBGAA(Current, dtype, 19402, 0x04000000, 1); /* is_pnd_in_transport */
			*(EIF_BOOLEAN *)(Current + RTWA(19402, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(15);
			RTDBGAA(Current, dtype, 19403, 0x04000000, 1); /* is_dnd_in_transport */
			*(EIF_BOOLEAN *)(Current + RTWA(19403, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTHOOK(16);
		RTDBGAA(Current, dtype, 10452, 0x14000000, 1); /* pointer_x */
		ti2_1 = (EIF_INTEGER_16) arg8;
		*(EIF_INTEGER_16 *)(Current + RTWA(10452, dtype)) = (EIF_INTEGER_16) ti2_1;
		RTHOOK(17);
		RTDBGAA(Current, dtype, 10453, 0x14000000, 1); /* pointer_y */
		ti2_1 = (EIF_INTEGER_16) arg9;
		*(EIF_INTEGER_16 *)(Current + RTWA(10453, dtype)) = (EIF_INTEGER_16) ti2_1;
		RTHOOK(18);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16351, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(19);
			RTDBGAL(1, 0xF8000774, 0, 0); /* loc1 */
			tr1 = RTLN(eif_new_type(1908, 0x01).id);
			ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(16379, dtype));
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			ui4_1 = ti4_1;
			ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(16380, dtype));
			ti4_2 = (EIF_INTEGER_32) ti2_1;
			ui4_2 = ti4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(18376, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
			RTNHOOK(19,1);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(20);
			RTDBGAL(2, 0xF8000774, 0, 0); /* loc2 */
			tr1 = RTLN(eif_new_type(1908, 0x01).id);
			ui4_1 = arg8;
			ui4_2 = arg9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(18376, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
			RTNHOOK(20,1);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(21);
			RTDBGAL(4, 0xF800077A, 0, 0); /* loc4 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18384, "window_at", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(22);
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				RTHOOK(23);
				ur1 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18385, "client_to_screen", loc1))(loc1, ur1x);
			} else {
				RTHOOK(24);
				RTDBGAL(4, 0xF800077A, 0, 0); /* loc4 */
				loc4 = RTCCL(Current);
				loc4 = RTRV(eif_new_type(1914, 0x00), loc4);
				RTHOOK(25);
				RTCT0("l_win_not_void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					RTCK0;
				} else {
					RTCF0;
				}
				RTHOOK(26);
				ur1 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18385, "client_to_screen", loc1))(loc1, ur1x);
			}
			RTHOOK(27);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(27,1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18378, "x", loc1))(loc1)).it_i4);
			ui4_1 = ti4_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18379, "y", loc1))(loc1)).it_i4);
			ui4_2 = ti4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(16027, "set_x_y_origin", tr1))(tr1, ui4_1x, ui4_2x);
		} else {
			RTHOOK(28);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(28,1);
			ui4_1 = arg8;
			ui4_2 = arg9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(16027, "set_x_y_origin", tr1))(tr1, ui4_1x, ui4_2x);
		}
		RTHOOK(29);
		RTDBGAA(Current, dtype, 19404, 0x30000000, 1); /* press_action */
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19409, dtype))(Current)).it_n1);
		*(EIF_NATURAL_8 *)(Current + RTWA(19404, dtype)) = (EIF_NATURAL_8) tu1_1;
		RTHOOK(30);
		RTDBGAA(Current, dtype, 19406, 0x30000000, 1); /* motion_action */
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19410, dtype))(Current)).it_n1);
		*(EIF_NATURAL_8 *)(Current + RTWA(19406, dtype)) = (EIF_NATURAL_8) tu1_1;
		RTHOOK(31);
		RTDBGAA(Current, dtype, 19411, 0xF8000651, 0); /* pnd_stored_cursor */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10066, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(19411, dtype)) = (EIF_REFERENCE) tr1;
		RTHOOK(32);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(32,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18467, 1912))(Current)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18455, "set_capture_type", tr1))(tr1, ui4_1x);
		RTHOOK(33);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(33,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16023, "pnd_screen", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(33,2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14863, "implementation", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(33,3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(16853, "refresh_graphics_context", tr1))(tr1);
		RTHOOK(34);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16391, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16390, dtype))(Current, ur1x);
		RTHOOK(35);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19413, dtype))(Current);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(36);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ub1
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

/* {EV_PICK_AND_DROPABLE_IMP}.end_transport */
void F1959_23615 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x)
{
	GTCX
	char *l_feature_name = "end_transport";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_r8
#define arg5 arg5x.it_r8
#define arg6 arg6x.it_r8
#define arg7 arg7x.it_i4
#define arg8 arg8x.it_i4
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
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_r8 = * (EIF_REAL_64 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r8 = * (EIF_REAL_64 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r8 = * (EIF_REAL_64 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(12);
	RTLR(0,Current);
	RTLR(1,loc6);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc7);
	RTLR(5,ur1);
	RTLR(6,tr2);
	RTLR(7,loc8);
	RTLR(8,loc1);
	RTLR(9,loc5);
	RTLR(10,loc2);
	RTLR(11,loc3);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_REAL64,&arg4);
	RTLU(SK_REAL64,&arg5);
	RTLU(SK_REAL64,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 1958, Current, 8, 8, 29557);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29557);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(19404, dtype));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19409, dtype))(Current)).it_n1);
	if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19415, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc6 = RTCCL(tr1);
		tb1 = EIF_TEST(loc6);
	}
	if (tb1) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 10452, 0x14000000, 1); /* pointer_x */
		ti2_1 = (EIF_INTEGER_16) arg7;
		*(EIF_INTEGER_16 *)(Current + RTWA(10452, dtype)) = (EIF_INTEGER_16) ti2_1;
		RTHOOK(3);
		RTDBGAA(Current, dtype, 10453, 0x14000000, 1); /* pointer_y */
		ti2_1 = (EIF_INTEGER_16) arg8;
		*(EIF_INTEGER_16 *)(Current + RTWA(10453, dtype)) = (EIF_INTEGER_16) ti2_1;
		RTHOOK(4);
		ub1 = (EIF_BOOLEAN) 0;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16396, dtype))(Current, ub1x);
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16400, dtype))(Current);
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18468, 1912))(Current)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18455, "set_capture_type", tr1))(tr1, ui4_1x);
		RTHOOK(7);
		RTDBGAA(Current, dtype, 19405, 0x30000000, 1); /* release_action */
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19407, dtype))(Current)).it_n1);
		*(EIF_NATURAL_8 *)(Current + RTWA(19405, dtype)) = (EIF_NATURAL_8) tu1_1;
		RTHOOK(8);
		RTDBGAA(Current, dtype, 19406, 0x30000000, 1); /* motion_action */
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19407, dtype))(Current)).it_n1);
		*(EIF_NATURAL_8 *)(Current + RTWA(19406, dtype)) = (EIF_NATURAL_8) tu1_1;
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16394, dtype))(Current);
		RTHOOK(10);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16401, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,1);
		ui4_1 = arg7;
		ui4_2 = arg8;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(16033, "set_pnd_pointer_coords", tr1))(tr1, ui4_1x, ui4_2x);
		RTHOOK(11);
		RTDBGAL(4, 0xF80007D8, 0, 0); /* loc4 */
		loc4 = RTCCL(Current);
		loc4 = RTRV(eif_new_type(2008, 0x00), loc4);
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19411, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc7 = RTCCL(tr1);
		if (EIF_TEST(loc7)) {
			RTHOOK(13);
			ur1 = RTCCL(loc7);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16398, dtype))(Current, ur1x);
		} else {
			RTHOOK(14);
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				RTHOOK(15);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10065, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(15,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7660, "ibeam_cursor", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16398, dtype))(Current, ur1x);
			} else {
				RTHOOK(16);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10065, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(16,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7657, "standard_cursor", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16398, dtype))(Current, ur1x);
			}
		}
		RTHOOK(17);
		loc8 = RTCCL(loc4);
		if (EIF_TEST(loc8)) {
			RTHOOK(18);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19954, "disable_context_menu", loc8))(loc8);
		}
		RTHOOK(19);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(19,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18444, "transport_ended", tr1))(tr1);
		RTHOOK(20);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(20,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18449, "set_transport_just_ended", tr1))(tr1);
		RTHOOK(21);
		RTDBGAL(1, 0xF8000653, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(1619, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(21,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(22);
		RTDBGAL(5, 0xF8000000, 0, 0); /* loc5 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16349, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(23);
		RTCT0("l_pebble /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(24);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(19402, dtype));
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(19403, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 3L)) && tb1) || (EIF_BOOLEAN) ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L)) && tb2))) {
			RTHOOK(25);
			RTDBGAL(2, 0xF80005AD, 0, 0); /* loc2 */
			ui4_1 = arg1;
			ui4_2 = arg2;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(19400, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(26);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTHOOK(27);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12370, "drop_actions", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(27,1);
				ur1 = RTCCL(loc5);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11833, "accepts_pebble", tr1))(tr1, ur1x)).it_b);
				if (tb1) {
					RTHOOK(28);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(28,1);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18439, "enable_drop_actions_executing", tr1))(tr1);
					RTHOOK(29);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12370, "drop_actions", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(29,1);
					{
						EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,0xFF01,0,0,0xFFFF};
						EIF_TYPE typres0;
						{
							EIF_TYPE l_type;
							l_type = RTWCT(16349, dtype, dftype);
							typarr0[5] = l_type.annotations | 0xFF00;
							typarr0[6] = l_type.id;
						}
						
						typres0 = eif_compound_id(dftype, typarr0);
						tr2 = RTLNTS(typres0.id, 2, 0);
					}
					((EIF_TYPED_VALUE *)tr2+1)->it_r = loc5;
					RTAR(tr2,loc5);
					ur1 = RTCCL(tr2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
					RTHOOK(30);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14863, "implementation", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(30,1);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15930, "application_i", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(30,2);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9366, "drop_actions", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(30,3);
					{
						EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,0xFF01,0,0,0xFFFF};
						EIF_TYPE typres0;
						{
							EIF_TYPE l_type;
							l_type = RTWCT(16349, dtype, dftype);
							typarr0[5] = l_type.annotations | 0xFF00;
							typarr0[6] = l_type.id;
						}
						
						typres0 = eif_compound_id(dftype, typarr0);
						tr2 = RTLNTS(typres0.id, 2, 0);
					}
					((EIF_TYPED_VALUE *)tr2+1)->it_r = loc5;
					RTAR(tr2,loc5);
					ur1 = RTCCL(tr2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
					RTHOOK(31);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(31,1);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18440, "disable_drop_actions_executing", tr1))(tr1);
				} else {
					RTHOOK(32);
					ur1 = RTCCL(loc5);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(19399, dtype))(Current, ur1x);
				}
			} else {
				RTHOOK(33);
				ur1 = RTCCL(loc5);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(19399, dtype))(Current, ur1x);
			}
		} else {
			RTHOOK(34);
			ur1 = RTCCL(loc5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(19399, dtype))(Current, ur1x);
		}
		RTHOOK(35);
		RTDBGAL(3, 0xF80005AD, 0, 0); /* loc3 */
		loc3 = RTCCL(loc2);
		loc3 = RTRV(eif_new_type(1453, 0x00), loc3);
		if (RTAL & CK_CHECK) {
			RTHOOK(36);
			RTCT("abstract_pick_and_dropable_correct", EX_CHECK);
			if ((!((EIF_BOOLEAN)(loc2 != NULL)) || ((EIF_BOOLEAN)(loc3 != NULL)))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(37);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10428, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(37,1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,1453,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = loc3;
		RTAR(tr2,loc3);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
		RTHOOK(38);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16363, dtype))(Current);
		RTHOOK(39);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15740, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(39,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12369, "pointer_motion_actions", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(39,2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3119, "resume", tr2))(tr2);
		RTHOOK(40);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19730, "allow_movement", loc6))(loc6);
		RTHOOK(41);
		RTDBGAA(Current, dtype, 19415, 0xF80007C0, 0); /* original_top_level_window_imp */
		*(EIF_REFERENCE *)(Current + RTWA(19415, dtype)) = (EIF_REFERENCE) NULL;
		RTHOOK(42);
		RTDBGAA(Current, dtype, 19403, 0x04000000, 1); /* is_dnd_in_transport */
		*(EIF_BOOLEAN *)(Current + RTWA(19403, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(43);
		RTDBGAA(Current, dtype, 19402, 0x04000000, 1); /* is_pnd_in_transport */
		*(EIF_BOOLEAN *)(Current + RTWA(19402, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(44);
		RTDBGAA(Current, dtype, 19404, 0x30000000, 1); /* press_action */
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19408, dtype))(Current)).it_n1);
		*(EIF_NATURAL_8 *)(Current + RTWA(19404, dtype)) = (EIF_NATURAL_8) tu1_1;
		RTHOOK(45);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16362, dtype))(Current);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(46);
		RTCT("original_window_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19415, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(47);
		RTCT("press_action_reset", EX_POST);
		tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(19404, dtype));
		tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19408, dtype))(Current)).it_n1);
		if ((EIF_BOOLEAN)(tu1_1 == tu1_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(48);
		RTCT("not_has_capture", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19421, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(48,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1718, "item", tr1))(tr1)).it_b);
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(49);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(18);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ub1
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_IMP}.call_cancel_actions */
void F1959_23616 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "call_cancel_actions";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	
	RTEAA(l_feature_name, 1958, Current, 0, 1, 29558);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29558);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pebble_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9369, "cancel_actions_internal", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	if ((EIF_BOOLEAN)(tr2 != NULL)) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9368, "cancel_actions", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(3,2);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = arg1;
		RTAR(tr1,arg1);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr2))(tr2, ur1x);
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
#undef up2
#undef ur1
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_IMP}.pointed_target_from_position */
EIF_TYPED_VALUE F1959_23617 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "pointed_target_from_position";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_16 ti2_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(10);
	RTLR(0,loc6);
	RTLR(1,tr1);
	RTLR(2,loc7);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,loc1);
	RTLR(6,Result);
	RTLR(7,loc2);
	RTLR(8,loc3);
	RTLR(9,tr2);
	RTLIU(10);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 1958, Current, 7, 2, 29559);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29559);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(6, 0xF8000774, 0, 0); /* loc6 */
	tr1 = RTLN(eif_new_type(1908, 0x01).id);
	ui4_1 = arg1;
	ui4_2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(18376, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	loc7 = RTCCL(Current);
	loc7 = RTRV(eif_new_type(1914, 0x01),loc7);
	if (EIF_TEST(loc7)) {
		RTHOOK(3);
		ur1 = RTCCL(loc7);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18385, "client_to_screen", loc6))(loc6, ur1x);
	} else {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18383, "set_cursor_position", loc6))(loc6);
	}
	RTHOOK(5);
	RTDBGAL(1, 0xF800066A, 0, 0); /* loc1 */
	ur1 = RTCCL(loc6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(19401, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(0, 0xF80005AD, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc1);
	RTHOOK(7);
	RTDBGAL(2, 0xF800066D, 0, 0); /* loc2 */
	loc2 = RTCCL(loc1);
	loc2 = RTRV(eif_new_type(1645, 0x00), loc2);
	RTHOOK(8);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(9);
		RTDBGAL(3, 0xF8000331, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14863, "implementation", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16408, "actual_drop_target_agent", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTHOOK(11);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(10452, dtype));
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15121, "screen_x", loc2))(loc2)).it_i4);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ti4_2);
			RTHOOK(12);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(10453, dtype));
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15122, "screen_y", loc2))(loc2)).it_i4);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ti4_2);
			RTHOOK(13);
			RTDBGAL(0, 0xF80005AD, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,218,218,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr1 = RTLNTS(typres0.id, 3, 1);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_i4 = loc4;
			((EIF_TYPED_VALUE *)tr1+2)->it_i4 = loc5;
			ur1 = RTCCL(tr1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4636, "item", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_IMP}.real_pointed_target */
EIF_TYPED_VALUE F1959_23618 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "real_pointed_target";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1958, Current, 1, 0, 29560);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29560);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000774, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1908, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(18376, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18383, "set_cursor_position", loc1))(loc1);
	RTHOOK(3);
	RTDBGAL(0, 0xF800066A, 0,0); /* Result */
	ur1 = RTCCL(loc1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(19401, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {EV_PICK_AND_DROPABLE_IMP}.real_pointed_target_at */
EIF_TYPED_VALUE F1959_23619 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "real_pointed_target_at";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_POINTER loc11 = (EIF_POINTER) 0;
	EIF_POINTER loc12 = (EIF_POINTER) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
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
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(17);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc10);
	RTLR(5,loc13);
	RTLR(6,ur1);
	RTLR(7,loc14);
	RTLR(8,Current);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,loc1);
	RTLR(12,loc5);
	RTLR(13,loc6);
	RTLR(14,tr2);
	RTLR(15,loc7);
	RTLR(16,Result);
	RTLIU(17);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_POINTER, &loc11);
	RTLU(SK_POINTER, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	
	RTEAA(l_feature_name, 1958, Current, 14, 1, 29561);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29561);
	RTCC(arg1, 1958, l_feature_name, 1, eif_new_type(1908, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(3, 0xF800077A, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18384, "window_at", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTHOOK(3);
		RTDBGAL(2, 0xF80007B4, 0, 0); /* loc2 */
		loc2 = RTCCL(loc3);
		loc2 = RTRV(eif_new_type(1972, 0x00), loc2);
		RTHOOK(4);
		RTDBGAL(10, 0xF800077B, 0, 0); /* loc10 */
		loc10 = RTCCL(loc3);
		loc10 = RTRV(eif_new_type(1915, 0x00), loc10);
		RTHOOK(5);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc10 != NULL)) {
			tb2 = '\01';
			if (!(EIF_BOOLEAN)(loc2 == NULL)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16404, "parent", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tb2 = (EIF_BOOLEAN)(tr1 != NULL);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(6);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTHOOK(7);
				RTDBGAL(13, 0xF8000774, 0, 0); /* loc13 */
				tr1 = RTLN(eif_new_type(1908, 0x01).id);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18378, "x", arg1))(arg1)).it_i4);
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16247, "screen_x", loc2))(loc2)).it_i4);
				ui4_1 = (EIF_INTEGER_32) (ti4_1 - ti4_2);
				ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18379, "y", arg1))(arg1)).it_i4);
				ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16248, "screen_y", loc2))(loc2)).it_i4);
				ui4_2 = (EIF_INTEGER_32) (ti4_3 - ti4_4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(18376, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
				RTNHOOK(7,1);
				loc13 = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(8);
				RTDBGAL(13, 0xF8000774, 0, 0); /* loc13 */
				tr1 = RTLN(eif_new_type(1908, 0x01).id);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18378, "x", arg1))(arg1)).it_i4);
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18505, "absolute_x", loc10))(loc10)).it_i4);
				ui4_1 = (EIF_INTEGER_32) (ti4_1 - ti4_2);
				ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18379, "y", arg1))(arg1)).it_i4);
				ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18506, "absolute_y", loc10))(loc10)).it_i4);
				ui4_2 = (EIF_INTEGER_32) (ti4_3 - ti4_4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(18376, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
				RTNHOOK(8,1);
				loc13 = (EIF_REFERENCE) RTCCL(tr1);
			}
			RTHOOK(9);
			RTDBGAL(11, 0x40000000, 1, 0); /* loc11 */
			ur1 = RTCCL(loc13);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(18733, "child_window_from_point", loc10))(loc10, ur1x)).it_p);
			loc11 = (EIF_POINTER) tp1;
			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc11 != loc12)) {
				RTHOOK(11);
				RTDBGAL(14, 0xF800077A, 0, 0); /* loc14 */
				up1 = loc11;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18197, dtype))(Current, up1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc14 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(12);
				if ((EIF_BOOLEAN)(loc14 != NULL)) {
					RTHOOK(13);
					RTDBGAL(2, 0xF80007B4, 0, 0); /* loc2 */
					loc2 = RTCCL(loc14);
					loc2 = RTRV(eif_new_type(1972, 0x00), loc2);
				}
			}
		}
		RTHOOK(14);
		if ((EIF_BOOLEAN)(loc2 == NULL)) {
			RTHOOK(15);
			RTDBGAL(8, 0xF800079A, 0, 0); /* loc8 */
			loc8 = RTCCL(loc3);
			loc8 = RTRV(eif_new_type(1946, 0x00), loc8);
			RTHOOK(16);
			if ((EIF_BOOLEAN)(loc8 != NULL)) {
				RTHOOK(17);
				RTDBGAL(2, 0xF80007B4, 0, 0); /* loc2 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(19215, "parent", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc2 = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(18);
				RTDBGAL(9, 0xF8000794, 0, 0); /* loc9 */
				loc9 = RTCCL(loc3);
				loc9 = RTRV(eif_new_type(1940, 0x00), loc9);
				RTHOOK(19);
				if ((EIF_BOOLEAN)(loc9 != NULL)) {
					RTHOOK(20);
					RTDBGAL(2, 0xF80007B4, 0, 0); /* loc2 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(19159, "parent", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc2 = (EIF_REFERENCE) RTCCL(tr1);
				}
			}
		}
		RTHOOK(21);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(22);
			RTDBGAL(1, 0xF80005AD, 0, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15740, "attached_interface", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(23);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3521, "object_id", loc1))(loc1)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(24);
			RTDBGAL(5, 0xF80007F9, 0, 0); /* loc5 */
			{
				static EIF_TYPE_INDEX typarr0[] = {2041,0xFF01,1681,0xFF01,1960,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc5 = RTCCL(loc2);
				loc5 = RTRV(typres0, loc5);
			}
			RTHOOK(25);
			if ((EIF_BOOLEAN)(loc5 != NULL)) {
				RTHOOK(26);
				RTDBGAL(6, 0xF80007A8, 0, 0); /* loc6 */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18378, "x", arg1))(arg1)).it_i4);
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16120, "screen_x", loc5))(loc5)).it_i4);
				ui4_1 = (EIF_INTEGER_32) (ti4_1 - ti4_2);
				ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18379, "y", arg1))(arg1)).it_i4);
				ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16121, "screen_y", loc5))(loc5)).it_i4);
				ui4_2 = (EIF_INTEGER_32) (ti4_3 - ti4_4);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(16119, "find_item_at_position", loc5))(loc5, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc6 = RTCCL(tr1);
				loc6 = RTRV(eif_new_type(1960, 0x00), loc6);
				RTHOOK(27);
				if ((EIF_BOOLEAN)(loc6 != NULL)) {
					RTHOOK(28);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15740, "attached_interface", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(28,1);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12370, "drop_actions", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(28,2);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2210, "is_empty", tr2))(tr2)).it_b);
					if ((EIF_BOOLEAN) !tb1) {
						RTHOOK(29);
						RTDBGAL(7, 0xF800066C, 0, 0); /* loc7 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15740, "attached_interface", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc7 = RTCCL(tr1);
						loc7 = RTRV(eif_new_type(1644, 0x00), loc7);
						RTHOOK(30);
						tb1 = '\01';
						if (!(EIF_BOOLEAN)(loc7 == NULL)) {
							tb2 = '\0';
							if ((EIF_BOOLEAN)(loc7 != NULL)) {
								tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15276, "is_sensitive", loc7))(loc7)).it_b);
								tb2 = tb3;
							}
							tb1 = tb2;
						}
						if (tb1) {
							RTHOOK(31);
							RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15740, "attached_interface", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(31,1);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3521, "object_id", tr1))(tr1)).it_i4);
							loc4 = (EIF_INTEGER_32) ti4_1;
						}
					}
				}
			}
		}
		RTHOOK(32);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc4 != ((EIF_INTEGER_32) 0L))) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10437, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(32,1);
			ui4_1 = loc4;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2254, "has", tr1))(tr1, ui4_1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(33);
			RTDBGAL(0, 0xF800066A, 0,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15740, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(33,1);
			ui4_1 = loc4;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3522, "id_object", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			Result = RTCCL(tr2);
			Result = RTRV(eif_new_type(1642, 0x00), Result);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_IMP}.is_pnd_in_transport */
EIF_TYPED_VALUE F1959_23620 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(19402,Dtype(Current)));
	return r;
}


/* {EV_PICK_AND_DROPABLE_IMP}.is_dnd_in_transport */
EIF_TYPED_VALUE F1959_23621 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(19403,Dtype(Current)));
	return r;
}


/* {EV_PICK_AND_DROPABLE_IMP}.press_action */
EIF_TYPED_VALUE F1959_23622 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = *(EIF_NATURAL_8 *)(Current + RTWA(19404,Dtype(Current)));
	return r;
}


/* {EV_PICK_AND_DROPABLE_IMP}.release_action */
EIF_TYPED_VALUE F1959_23623 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = *(EIF_NATURAL_8 *)(Current + RTWA(19405,Dtype(Current)));
	return r;
}


/* {EV_PICK_AND_DROPABLE_IMP}.motion_action */
EIF_TYPED_VALUE F1959_23624 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = *(EIF_NATURAL_8 *)(Current + RTWA(19406,Dtype(Current)));
	return r;
}


/* {EV_PICK_AND_DROPABLE_IMP}.ev_pnd_disabled */
EIF_TYPED_VALUE F1959_23625 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 0U);
	return r;
}

/* {EV_PICK_AND_DROPABLE_IMP}.ev_pnd_start_transport */
EIF_TYPED_VALUE F1959_23626 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 1U);
	return r;
}

/* {EV_PICK_AND_DROPABLE_IMP}.ev_pnd_end_transport */
EIF_TYPED_VALUE F1959_23627 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 2U);
	return r;
}

/* {EV_PICK_AND_DROPABLE_IMP}.ev_pnd_execute */
EIF_TYPED_VALUE F1959_23628 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 3U);
	return r;
}

/* {EV_PICK_AND_DROPABLE_IMP}.pnd_stored_cursor */
EIF_TYPED_VALUE F1959_23629 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(19411,Dtype(Current)));
	return r;
}


/* {EV_PICK_AND_DROPABLE_IMP}.set_pointer_style */
void F1959_23630 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_pointer_style";
	RTEX;
#define arg1 arg1x.it_r
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
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1958, Current, 0, 1, 29572);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29572);
	RTCC(arg1, 1958, l_feature_name, 1, eif_new_type(1617, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19393, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16398, dtype))(Current, ur1x);
	}
	RTHOOK(3);
	RTDBGAA(Current, dtype, 19411, 0xF8000651, 0); /* pnd_stored_cursor */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(19411, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_IMP}.draw_rubber_band */
void F1959_23632 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "draw_rubber_band";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 1958, Current, 0, 0, 29573);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29573);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(16029, "draw_rubber_band", tr1))(tr1);
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

/* {EV_PICK_AND_DROPABLE_IMP}.erase_rubber_band */
void F1959_23633 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "erase_rubber_band";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 1958, Current, 0, 0, 29574);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29574);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(16030, "erase_rubber_band", tr1))(tr1);
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

/* {EV_PICK_AND_DROPABLE_IMP}.enable_capture */
void F1959_23634 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_capture";
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
	
	RTEAA(l_feature_name, 1958, Current, 0, 0, 29575);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29575);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19413, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.internal_enable_capture */
void F1959_23635 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "internal_enable_capture";
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
	
	RTEAA(l_feature_name, 1958, Current, 0, 0, 29576);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29576);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19419, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.disable_capture */
void F1959_23636 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_capture";
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
	
	RTEAA(l_feature_name, 1958, Current, 0, 0, 29577);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29577);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19420, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_PICK_AND_DROPABLE_IMP}.original_top_level_window_imp */
EIF_TYPED_VALUE F1959_23638 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(19415,Dtype(Current)));
	return r;
}


/* {EV_PICK_AND_DROPABLE_IMP}.internal_capture_status */
RTOID (F1959_23644)
EIF_TYPED_VALUE F1959_23644 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "internal_capture_status";
	RTEX;
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1959_23644);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1958, Current, 0, 0, 29545);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29545);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800037D, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,893,203,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1719, Dtype(tr1)))(tr1, ub1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("internal_capture_status_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ub1
#undef Result
}

/* {EV_PICK_AND_DROPABLE_IMP}.application_imp */
EIF_TYPED_VALUE F1959_23645 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "application_imp";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1958, Current, 1, 0, 29546);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1958, Current, 29546);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000778, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16401, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTRV(eif_new_type(1912, 0x00), loc1);
	RTHOOK(2);
	RTCT0("l_result /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	RTDBGAL(0, 0xF8000778, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

void EIF_Minit1959 (void)
{
	GTCX
	RTOTS (23644,F1959_23644)
}


#ifdef __cplusplus
}
#endif
