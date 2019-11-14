/*
 * Code for class EV_PICK_AND_DROPABLE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1443_13448(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1443_13451(EIF_REFERENCE);
extern void F1443_13452(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1443_13453(EIF_REFERENCE);
extern void F1443_13454(EIF_REFERENCE);
extern void F1443_13455(EIF_REFERENCE);
extern void F1443_13456(EIF_REFERENCE);
extern void F1443_13457(EIF_REFERENCE);
extern void F1443_13458(EIF_REFERENCE);
extern void F1443_13459(EIF_REFERENCE);
extern void F1443_13460(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1443_13462(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1443_13463(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1443_13464(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1443_13465(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1443_13466(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1443_13467(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1443_13468(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1443_13469(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1443_13470(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1443_13471(EIF_REFERENCE);
static EIF_TYPED_VALUE F1443_13472_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1443_13472(EIF_REFERENCE);
extern void F1443_16546(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit1443(void);
extern EIF_REFERENCE _A1443_212();

#ifdef __cplusplus
}
#endif

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

/* {EV_PICK_AND_DROPABLE_IMP}.on_pointer_motion */
void F1443_13448 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "on_pointer_motion";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_16 loc5 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_16 loc6 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_16 loc7 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_16 loc8 = (EIF_INTEGER_16) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_16 ti2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc4);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,loc9);
	RTLR(7,ur1);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT16, &loc5);
	RTLU(SK_INT16, &loc6);
	RTLU(SK_INT16, &loc7);
	RTLU(SK_INT16, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 1442, Current, 9, 1, 19882);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19882);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,7,186,218,218,206,206,206,218,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1442, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x04000000, 1, 0); /* loc2 */
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	RTDBGAL(4, 0xF80005A2, 0, 0); /* loc4 */
	loc4 = (EIF_REFERENCE) RTCCL(Current);
	RTHOOK(4);
	RTDBGAL(1, 0xF800057E, 0, 0); /* loc1 */
	loc1 = RTCCL(Current);
	loc1 = RTRV(eif_new_type(1406, 0x00), loc1);
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(6);
		tb1 = '\0';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10250, dtype))(Current)).it_b);
		if (tb2) {
			tb2 = '\01';
			tb3 = *(EIF_BOOLEAN *)(loc1 + RTVA(10037, "awaiting_movement", loc1));
			if (!tb3) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(6,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9813, "docking_source", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				tb2 = RTCEQ(tr2, loc1);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(7);
			RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(8);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", arg1))(arg1, ui4_1x)).it_i4);
			ui4_1 = ti4_1;
			ui4_2 = ((EIF_INTEGER_32) 2L);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", arg1))(arg1, ui4_2x)).it_i4);
			ui4_2 = ti4_2;
			ui4_3 = ((EIF_INTEGER_32) 3L);
			tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3907, "double_item", arg1))(arg1, ui4_3x)).it_r8);
			ur8_1 = tr8_1;
			ui4_3 = ((EIF_INTEGER_32) 4L);
			tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3907, "double_item", arg1))(arg1, ui4_3x)).it_r8);
			ur8_2 = tr8_2;
			ui4_3 = ((EIF_INTEGER_32) 5L);
			tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3907, "double_item", arg1))(arg1, ui4_3x)).it_r8);
			ur8_3 = tr8_3;
			ui4_3 = ((EIF_INTEGER_32) 6L);
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", arg1))(arg1, ui4_3x)).it_i4);
			ui4_3 = ti4_3;
			ui4_4 = ((EIF_INTEGER_32) 7L);
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", arg1))(arg1, ui4_4x)).it_i4);
			ui4_4 = ti4_4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10040, "dragable_motion", loc1))(loc1, ui4_1x, ui4_2x, ur8_1x, ur8_2x, ur8_3x, ui4_3x, ui4_4x);
		} else {
			RTHOOK(9);
			tb1 = '\0';
			tb2 = '\0';
			tb3 = *(EIF_BOOLEAN *)(loc1 + RTVA(10037, "awaiting_movement", loc1));
			if (tb3) {
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10216, dtype))(Current)).it_b);
				tb2 = tb3;
			}
			if (tb2) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(9,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9660, "pick_and_drop_source", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				tb1 = (EIF_BOOLEAN)(tr2 == NULL);
			}
			if (tb1) {
				RTHOOK(10);
				RTDBGAL(5, 0x14000000, 1, 0); /* loc5 */
				ti2_1 = *(EIF_INTEGER_16 *)(loc1 + RTVA(7004, "original_x_offset", loc1));
				loc5 = (EIF_INTEGER_16) ti2_1;
				RTHOOK(11);
				RTDBGAL(6, 0x14000000, 1, 0); /* loc6 */
				ti2_1 = *(EIF_INTEGER_16 *)(loc1 + RTVA(7005, "original_y_offset", loc1));
				loc6 = (EIF_INTEGER_16) ti2_1;
				RTHOOK(12);
				tb1 = '\01';
				ti4_1 = (EIF_INTEGER_32) loc5;
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", arg1))(arg1, ui4_1x)).it_i4);
				ti4_3 = eif_abs_int32 ((EIF_INTEGER_32) (ti4_1 - ti4_2));
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10041, "drag_and_drop_starting_movement", loc1))(loc1)).it_i4);
				if (!(EIF_BOOLEAN) (ti4_3 > ti4_1)) {
					ti4_1 = (EIF_INTEGER_32) loc6;
					ui4_1 = ((EIF_INTEGER_32) 2L);
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", arg1))(arg1, ui4_1x)).it_i4);
					ti4_3 = eif_abs_int32 ((EIF_INTEGER_32) (ti4_1 - ti4_2));
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10041, "drag_and_drop_starting_movement", loc1))(loc1)).it_i4);
					tb1 = (EIF_BOOLEAN) (ti4_3 > ti4_1);
				}
				if (tb1) {
					RTHOOK(13);
					RTDBGAL(7, 0x14000000, 1, 0); /* loc7 */
					ti2_1 = *(EIF_INTEGER_16 *)(loc1 + RTVA(10038, "original_screen_x", loc1));
					loc7 = (EIF_INTEGER_16) ti2_1;
					RTHOOK(14);
					RTDBGAL(8, 0x14000000, 1, 0); /* loc8 */
					ti2_1 = *(EIF_INTEGER_16 *)(loc1 + RTVA(10039, "original_screen_y", loc1));
					loc8 = (EIF_INTEGER_16) ti2_1;
					RTHOOK(15);
					RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
					loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(16);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(10046, "reset_drag_data", loc1))(loc1);
					RTHOOK(17);
					ti4_1 = (EIF_INTEGER_32) loc5;
					ui4_1 = ti4_1;
					ti4_2 = (EIF_INTEGER_32) loc6;
					ui4_2 = ti4_2;
					ui4_3 = ((EIF_INTEGER_32) 1L);
					ub1 = (EIF_BOOLEAN) 1;
					ur8_1 = (EIF_REAL_64) 0.0;
					ur8_2 = (EIF_REAL_64) 0.0;
					ur8_3 = (EIF_REAL_64) 0.0;
					ti4_3 = (EIF_INTEGER_32) loc7;
					ui4_4 = ti4_3;
					ti4_4 = (EIF_INTEGER_32) loc8;
					ui4_5 = ti4_4;
					ub2 = (EIF_BOOLEAN) 0;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10227, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ub1x, ur8_1x, ur8_2x, ur8_3x, ui4_4x, ui4_5x, ub2x);
				}
			}
		}
		RTHOOK(18);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(18,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9813, "docking_source", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		if (RTCEQ(tr2, loc1)) {
			RTHOOK(19);
			RTDBGAL(2, 0x04000000, 1, 0); /* loc2 */
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	}
	RTHOOK(20);
	tb1 = '\0';
	if (loc3) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(20,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9660, "pick_and_drop_source", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tb1 = RTCEQ(tr2, loc4);
	}
	if (tb1) {
		RTHOOK(21);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", arg1))(arg1, ui4_1x)).it_i4);
		ui4_1 = ti4_1;
		ui4_2 = ((EIF_INTEGER_32) 2L);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", arg1))(arg1, ui4_2x)).it_i4);
		ui4_2 = ti4_2;
		ui4_3 = ((EIF_INTEGER_32) 3L);
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3907, "double_item", arg1))(arg1, ui4_3x)).it_r8);
		ur8_1 = tr8_1;
		ui4_3 = ((EIF_INTEGER_32) 4L);
		tr8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3907, "double_item", arg1))(arg1, ui4_3x)).it_r8);
		ur8_2 = tr8_2;
		ui4_3 = ((EIF_INTEGER_32) 5L);
		tr8_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3907, "double_item", arg1))(arg1, ui4_3x)).it_r8);
		ur8_3 = tr8_3;
		ui4_3 = ((EIF_INTEGER_32) 6L);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", arg1))(arg1, ui4_3x)).it_i4);
		ui4_3 = ti4_3;
		ui4_4 = ((EIF_INTEGER_32) 7L);
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3914, "integer_32_item", arg1))(arg1, ui4_4x)).it_i4);
		ui4_4 = ti4_4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10229, dtype))(Current, ui4_1x, ui4_2x, ur8_1x, ur8_2x, ur8_3x, ui4_3x, ui4_4x);
		RTHOOK(22);
		RTDBGAL(2, 0x04000000, 1, 0); /* loc2 */
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTHOOK(23);
	tb1 = '\0';
	if (loc2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10244, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc9 = RTCCL(tr1);
		tb1 = EIF_TEST(loc9);
	}
	if (tb1) {
		RTHOOK(24);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", loc9))(loc9, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef up2
#undef ur1
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
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_IMP}.enable_capture */
void F1443_13451 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_capture";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
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
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_POINTER, &loc2);
	
	RTEAA(l_feature_name, 1442, Current, 2, 0, 19883);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19883);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10246, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5912, 970))(Current)).it_p);
		loc2 = (EIF_POINTER) tp1;
		RTHOOK(3);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc2 != tp1)) {
			RTHOOK(4);
			up1 = loc2;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5653, 970))(Current, up1x)).it_b);
			if (tb1) {
				RTHOOK(5);
				up1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5931, 970))(Current, up1x);
			}
		}
		RTHOOK(6);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9893, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9892, dtype))(Current);
		}
		RTHOOK(8);
		RTDBGAL(1, 0xF800051C, 0, 0); /* loc1 */
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9342, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTRV(eif_new_type(1308, 0x00), loc1);
		if (RTAL & CK_CHECK) {
			RTHOOK(9);
			RTCT("l_interface /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(10);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,1);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9672, "set_captured_widget", tr1))(tr1, ur1x);
		RTHOOK(11);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9886, dtype))(Current)).it_p);
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5911, 970))(Current, up1x);
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9766, "focused_popup_window", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9901, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (!RTCEQ(tr2, tr1)) {
			RTHOOK(13);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10247, dtype))(Current);
		}
		RTHOOK(14);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(14,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9825, "disable_debugger", tr1))(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
}

/* {EV_PICK_AND_DROPABLE_IMP}.disable_capture */
void F1443_13452 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_capture";
	RTEX;
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
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1442, Current, 0, 0, 19884);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19884);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10246, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9886, dtype))(Current)).it_p);
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5913, 970))(Current, up1x);
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9766, "focused_popup_window", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9901, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (!RTCEQ(tr2, tr1)) {
			RTHOOK(4);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10248, dtype))(Current);
		}
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ur1 = NULL;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9672, "set_captured_widget", tr1))(tr1, ur1x);
	}
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9824, "enable_debugger", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
#undef ur1
}

/* {EV_PICK_AND_DROPABLE_IMP}.has_capture */
EIF_TYPED_VALUE F1443_13453 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "has_capture";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1442, Current, 0, 0, 19885);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19885);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9659, "captured_widget", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9342, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (!RTCEQ(tr2, tr1)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,2);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9660, "pick_and_drop_source", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tb1 = RTCEQ(tr2, Current);
	}
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
#undef up2
}

/* {EV_PICK_AND_DROPABLE_IMP}.grab_keyboard_and_mouse */
void F1443_13454 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "grab_keyboard_and_mouse";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
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
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_POINTER, &loc2);
	
	RTEAA(l_feature_name, 1442, Current, 2, 0, 19863);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19863);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9825, "disable_debugger", tr1))(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9886, dtype))(Current)).it_p);
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6142, 970))(Current, up1x)).it_p);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	up1 = loc2;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5692, 970))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5691, 970))(Current)).it_i4);
	ui4_2 = ti4_2;
	ti4_2 = eif_bit_or(ti4_1,ui4_2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5686, 970))(Current)).it_i4);
	ui4_2 = ti4_1;
	ti4_1 = eif_bit_or(ti4_2,ui4_2);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5687, 970))(Current)).it_i4);
	ui4_2 = ti4_2;
	ti4_2 = eif_bit_or(ti4_1,ui4_2);
	ui4_2 = ti4_2;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
	up2 = tp1;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
	up3 = tp2;
	ui4_3 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5830, 970))(Current, up1x, ui4_1x, ui4_2x, up2x, up3x, ui4_3x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	up1 = loc2;
	ub1 = (EIF_BOOLEAN) 1;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5818, 970))(Current, up1x, ub1x, ui4_1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
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
#undef up3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ub1
}

/* {EV_PICK_AND_DROPABLE_IMP}.release_keyboard_and_mouse */
void F1443_13455 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "release_keyboard_and_mouse";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
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
	
	RTEAA(l_feature_name, 1442, Current, 0, 0, 19864);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19864);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5831, 970))(Current, ui4_1x);
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5819, 970))(Current, ui4_1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9824, "enable_debugger", tr1))(tr1);
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
}

/* {EV_PICK_AND_DROPABLE_IMP}.draw_rubber_band */
void F1443_13456 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1442, Current, 0, 0, 19865);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19865);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9708, "draw_rubber_band", tr1))(tr1);
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
void F1443_13457 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1442, Current, 0, 0, 19866);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19866);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9709, "erase_rubber_band", tr1))(tr1);
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

/* {EV_PICK_AND_DROPABLE_IMP}.enable_transport */
void F1443_13458 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_transport";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 1442, Current, 0, 0, 19867);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19867);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pebble_not_void", EX_PRE);
		tb1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10189, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (!(EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10190, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 10214, 0x04000000, 1); /* is_transport_enabled */
	*(EIF_BOOLEAN *)(Current + RTWA(10214, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_transport_enabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10214, dtype));
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
}

/* {EV_PICK_AND_DROPABLE_IMP}.disable_transport */
void F1443_13459 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_transport";
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
	
	RTEAA(l_feature_name, 1442, Current, 0, 0, 19868);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19868);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10214, 0x04000000, 1); /* is_transport_enabled */
	*(EIF_BOOLEAN *)(Current + RTWA(10214, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_transport_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10214, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("is_transport_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10214, dtype));
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

/* {EV_PICK_AND_DROPABLE_IMP}.pre_pick_steps */
void F1443_13460 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "pre_pick_steps";
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
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
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
	EIF_INTEGER_16 ti2_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,loc1);
	RTLR(4,ur2);
	RTLR(5,tr2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1442, Current, 1, 4, 19869);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19869);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5790, 970))(Current);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10231, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10230, dtype))(Current, ur1x);
	RTHOOK(3);
	RTDBGAL(1, 0xF8000000, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10189, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ur1 = RTCCL(Current);
		ur2 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9809, "on_pick", tr1))(tr1, ur1x, ur2x);
	}
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6620, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6620, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,218,218,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0.id, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
		((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg2;
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
	}
	RTHOOK(8);
	RTDBGAA(Current, dtype, 7015, 0x14000000, 1); /* pointer_x */
	ti2_1 = (EIF_INTEGER_16) arg3;
	*(EIF_INTEGER_16 *)(Current + RTWA(7015, dtype)) = (EIF_INTEGER_16) ti2_1;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 7016, 0x14000000, 1); /* pointer_y */
	ti2_1 = (EIF_INTEGER_16) arg4;
	*(EIF_INTEGER_16 *)(Current + RTWA(7016, dtype)) = (EIF_INTEGER_16) ti2_1;
	RTHOOK(10);
	ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(10219, dtype));
	ti2_2 = *(EIF_INTEGER_16 *)(Current + RTWA(10220, dtype));
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti2_1 == (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti2_2 == (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L)))) {
		RTHOOK(11);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		ui4_1 = arg3;
		ui4_2 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9706, "set_x_y_origin", tr1))(tr1, ui4_1x, ui4_2x);
	} else {
		RTHOOK(12);
		ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(10219, dtype));
		ti4_1 = (EIF_INTEGER_32) ti2_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10057, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
			RTHOOK(13);
			RTDBGAA(Current, dtype, 10219, 0x14000000, 1); /* pick_x */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10057, dtype))(Current)).it_i4);
			RTNHOOK(13,1);
			ti2_1 = (EIF_INTEGER_16) ti4_1;
			*(EIF_INTEGER_16 *)(Current + RTWA(10219, dtype)) = (EIF_INTEGER_16) ti2_1;
		}
		RTHOOK(14);
		ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(10220, dtype));
		ti4_1 = (EIF_INTEGER_32) ti2_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10058, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
			RTHOOK(15);
			RTDBGAA(Current, dtype, 10220, 0x14000000, 1); /* pick_y */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10058, dtype))(Current)).it_i4);
			RTNHOOK(15,1);
			ti2_1 = (EIF_INTEGER_16) ti4_1;
			*(EIF_INTEGER_16 *)(Current + RTWA(10220, dtype)) = (EIF_INTEGER_16) ti2_1;
		}
		RTHOOK(16);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(16,1);
		ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(10219, dtype));
		ti4_1 = (EIF_INTEGER_32) ti2_1;
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (arg3 - arg1));
		ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(10220, dtype));
		ti4_2 = (EIF_INTEGER_32) ti2_1;
		ui4_2 = (EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) (arg4 - arg2));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9706, "set_x_y_origin", tr1))(tr1, ui4_1x, ui4_2x);
	}
	RTHOOK(17);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10236, dtype))(Current, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ub1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_IMP}.set_to_drag_and_drop */
EIF_TYPED_VALUE F1443_13462 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_to_drag_and_drop";
	RTEX;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 1442, Current, 0, 0, 19870);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19870);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10216, dtype))(Current)).it_b);
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
}

/* {EV_PICK_AND_DROPABLE_IMP}.able_to_transport */
EIF_TYPED_VALUE F1443_13463 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "able_to_transport";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1442, Current, 0, 1, 19871);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19871);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10216, dtype))(Current)).it_b);
	if (tb4) {
		tb3 = (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L));
	}
	if (tb3) {
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10250, dtype))(Current)).it_b);
		tb2 = (EIF_BOOLEAN) !tb3;
	}
	if (!(tb2)) {
		tb2 = '\0';
		tb3 = '\0';
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10215, dtype))(Current)).it_b);
		if (tb4) {
			tb3 = (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 3L));
		}
		if (tb3) {
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10218, dtype))(Current)).it_b);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_IMP}.on_mouse_button_event */
void F1443_13464 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x)
{
	GTCX
	char *l_feature_name = "on_mouse_button_event";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_i4
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
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE ub2x = {{0}, SK_BOOL};
#define ub2 ub2x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
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
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
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
	RTLU(SK_BOOL, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_BOOL, &loc6);
	
	RTEAA(l_feature_name, 1442, Current, 6, 9, 19872);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19872);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(6, 0x04000000, 1, 0); /* loc6 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5661, 970))(Current)).it_i4);
	loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 != ti4_1);
	RTHOOK(2);
	RTDBGAL(1, 0xF8000573, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9812, "is_in_transport", loc1))(loc1)).it_b);
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	RTHOOK(4);
	RTDBGAL(2, 0xF80005BF, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9901, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(6);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9812, "is_in_transport", loc1))(loc1)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(7);
			if ((EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 1L))) {
				RTHOOK(8);
				RTDBGAL(4, 0xF800057E, 0, 0); /* loc4 */
				loc4 = RTCCL(Current);
				loc4 = RTRV(eif_new_type(1406, 0x00), loc4);
				RTHOOK(9);
				tb1 = '\0';
				tb2 = '\0';
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5658, 970))(Current)).it_i4);
				if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
					tb2 = (EIF_BOOLEAN)(loc4 != NULL);
				}
				if (tb2) {
					tb2 = '\01';
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10250, dtype))(Current)).it_b);
					if (!tb3) {
						ui4_1 = arg4;
						tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10252, dtype))(Current, ui4_1x)).it_b);
						tb2 = tb3;
					}
					tb1 = tb2;
				}
				if (tb1) {
					RTHOOK(10);
					ui4_1 = arg1;
					ui4_2 = arg2;
					ui4_3 = arg3;
					ui4_4 = arg4;
					ur8_1 = arg5;
					ur8_2 = arg6;
					ur8_3 = arg7;
					ui4_5 = arg8;
					ui4_6 = arg9;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10036, "start_dragable_filter", loc4))(loc4, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur8_1x, ur8_2x, ur8_3x, ui4_5x, ui4_6x);
				}
				RTHOOK(11);
				tb1 = '\0';
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5661, 970))(Current)).it_i4);
					tb1 = (EIF_BOOLEAN)(arg1 == ti4_1);
				}
				if (tb1) {
					RTHOOK(12);
					ui4_1 = arg2;
					ui4_2 = arg3;
					ui4_3 = arg4;
					ur8_1 = arg5;
					ur8_2 = arg6;
					ur8_3 = arg7;
					ui4_4 = arg8;
					ui4_5 = arg9;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10045, "end_dragable", loc4))(loc4, ui4_1x, ui4_2x, ui4_3x, ur8_1x, ur8_2x, ur8_3x, ui4_4x, ui4_5x);
				}
			} else {
				RTHOOK(13);
				tb1 = '\01';
				tb2 = '\0';
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5661, 970))(Current)).it_i4);
				if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
					tb3 = '\0';
					tb4 = '\0';
					tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10215, dtype))(Current)).it_b);
					if (tb5) {
						tb4 = (EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 3L));
					}
					if (tb4) {
						tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10218, dtype))(Current)).it_b);
						tb3 = (EIF_BOOLEAN) !tb4;
					}
					tb2 = tb3;
				}
				if (!(tb2)) {
					ui4_1 = arg4;
					ub1 = loc6;
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10255, dtype))(Current, ui4_1x, ub1x)).it_b);
					tb1 = tb2;
				}
				if (tb1) {
					RTHOOK(14);
					ui4_1 = arg2;
					ui4_2 = arg3;
					ui4_3 = arg4;
					ub1 = loc6;
					ur8_1 = arg5;
					ur8_2 = arg6;
					ur8_3 = arg7;
					ui4_4 = arg8;
					ui4_5 = arg9;
					ub2 = (EIF_BOOLEAN) 0;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10227, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ub1x, ur8_1x, ur8_2x, ur8_3x, ui4_4x, ui4_5x, ub2x);
					RTHOOK(15);
					RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10189, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 == NULL);
				}
			}
		} else {
			RTHOOK(16);
			RTDBGAL(5, 0xF80005A2, 0, 0); /* loc5 */
			loc5 = (EIF_REFERENCE) RTCCL(Current);
			RTHOOK(17);
			RTDBGAL(4, 0xF800057E, 0, 0); /* loc4 */
			loc4 = RTCCL(loc5);
			loc4 = RTRV(eif_new_type(1406, 0x00), loc4);
			RTHOOK(18);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5661, 970))(Current)).it_i4);
				tb1 = (EIF_BOOLEAN)(arg1 == ti4_1);
			}
			if (tb1) {
				RTHOOK(19);
				ui4_1 = arg2;
				ui4_2 = arg3;
				ui4_3 = arg4;
				ur8_1 = arg5;
				ur8_2 = arg6;
				ur8_3 = arg7;
				ui4_4 = arg8;
				ui4_5 = arg9;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10045, "end_dragable", loc4))(loc4, ui4_1x, ui4_2x, ui4_3x, ur8_1x, ur8_2x, ur8_3x, ui4_4x, ui4_5x);
			}
			RTHOOK(20);
			tb1 = '\0';
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5661, 970))(Current)).it_i4);
			if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9660, "pick_and_drop_source", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tb1 = RTCEQ(tr1, loc5);
			}
			if (tb1) {
				RTHOOK(21);
				ui4_1 = arg2;
				ui4_2 = arg3;
				ui4_3 = arg4;
				ur8_1 = arg5;
				ur8_2 = arg6;
				ur8_3 = arg7;
				ui4_4 = arg8;
				ui4_5 = arg9;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10228, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ur8_1x, ur8_2x, ur8_3x, ui4_4x, ui4_5x);
			}
		}
		RTHOOK(22);
		if (loc3) {
			RTHOOK(23);
			ui4_1 = arg1;
			ui4_2 = arg2;
			ui4_3 = arg3;
			ui4_4 = arg4;
			ur8_1 = arg5;
			ur8_2 = arg6;
			ur8_3 = arg7;
			ui4_5 = arg8;
			ui4_6 = arg9;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10245, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur8_1x, ur8_2x, ur8_3x, ui4_5x, ui4_6x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
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
#undef ui4_6
#undef ub1
#undef ub2
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

/* {EV_PICK_AND_DROPABLE_IMP}.start_transport */
void F1443_13465 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x, EIF_TYPED_VALUE arg10x)
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
	EIF_BOOLEAN tb1;
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
	RTLR(1,loc2);
	RTLR(2,tr1);
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
	
	RTEAA(l_feature_name, 1442, Current, 2, 10, 19873);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19873);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg8;
	ui4_4 = arg9;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10235, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000000, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10189, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10202, dtype))(Current);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(5);
		RTDBGAL(1, 0xF8000113, 0, 0); /* loc1 */
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,6,186,0xFF01,0,0,0,218,218,218,218,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(10189, dtype, dftype);
				typarr0[5] = l_type.annotations | 0xFF00;
				typarr0[6] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0.id, 7, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
		RTAR(tr1,Current);
		((EIF_TYPED_VALUE *)tr1+2)->it_r = loc2;
		RTAR(tr1,loc2);
		((EIF_TYPED_VALUE *)tr1+3)->it_i4 = arg1;
		((EIF_TYPED_VALUE *)tr1+4)->it_i4 = arg2;
		((EIF_TYPED_VALUE *)tr1+5)->it_i4 = arg8;
		((EIF_TYPED_VALUE *)tr1+6)->it_i4 = arg9;
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,275,0xFF01,0xFFF9,0,186,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1443_212, (EIF_POINTER)(0),12024, 0, 0, 1, 1442, tr1, 0);
		}
		loc1 = (EIF_REFERENCE) RTCCL(tr2);
	}
	RTHOOK(6);
	ui4_1 = arg3;
	ub1 = arg4;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10255, dtype))(Current, ui4_1x, ub1x)).it_b);
	if (tb1) {
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		ui4_1 = arg1;
		ui4_2 = arg2;
		ui4_3 = arg8;
		ui4_4 = arg9;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10254, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		ur2 = RTCCL(loc2);
		ur3 = RTCCL(loc1);
		ub1 = arg10;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9713, "create_target_menu", tr1))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur1x, ur2x, ur3x, ub1x);
	} else {
		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(9);
			ur1 = NULL;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4611, "call", loc1))(loc1, ur1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
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
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
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

/* {EV_PICK_AND_DROPABLE_IMP}.pebble_source */
EIF_TYPED_VALUE F1443_13466 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "pebble_source";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1442, Current, 0, 0, 19874);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19874);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000519, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9341, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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
#undef up1
}

/* {EV_PICK_AND_DROPABLE_IMP}.ready_for_pnd_menu */
EIF_TYPED_VALUE F1443_13467 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "ready_for_pnd_menu";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_b
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1442, Current, 0, 2, 19875);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19875);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\01';
	tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10217, dtype))(Current)).it_b);
	if (!tb4) {
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10218, dtype))(Current)).it_b);
		tb3 = tb4;
	}
	if (tb3) {
		tb2 = (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 3L));
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN) !arg2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg2
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_IMP}.end_transport */
void F1443_13468 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x)
{
	GTCX
	char *l_feature_name = "end_transport";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
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
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc6);
	RTLR(4,ur1);
	RTLR(5,loc4);
	RTLR(6,loc2);
	RTLR(7,loc1);
	RTLR(8,loc7);
	RTLR(9,tr2);
	RTLIU(10);
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
	RTLU(SK_POINTER, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 1442, Current, 7, 8, 19876);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19876);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10240, dtype))(Current);
	RTHOOK(2);
	RTDBGAL(3, 0xF8000573, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10234, dtype))(Current);
	RTHOOK(4);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10236, dtype))(Current, ub1x);
	RTHOOK(5);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9340, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9890, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc6 = RTCCL(tr1);
		if (EIF_TEST(loc6)) {
			RTHOOK(7);
			ur1 = RTCCL(loc6);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10238, dtype))(Current, ur1x);
		} else {
			RTHOOK(8);
			RTDBGAL(5, 0x40000000, 1, 0); /* loc5 */
			tp1 = *(EIF_POINTER *)(Current + RTWA(9858, dtype));
			up1 = tp1;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6142, 970))(Current, up1x)).it_p);
			loc5 = (EIF_POINTER) tp1;
			RTHOOK(9);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
			if ((EIF_BOOLEAN)(loc5 != tp1)) {
				RTHOOK(10);
				up1 = loc5;
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
				up2 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5852, 970))(Current, up1x, up2x);
			}
		}
	}
	RTHOOK(11);
	RTDBGAL(4, 0xF8000000, 0, 0); /* loc4 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10189, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(12);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		RTHOOK(13);
		ur1 = RTCCL(loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9810, "on_drop", loc3))(loc3, ur1x);
		RTHOOK(14);
		RTDBGAL(2, 0xF80000BA, 0, 0); /* loc2 */
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,0xFF01,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(10189, dtype, dftype);
				typarr0[5] = l_type.annotations | 0xFF00;
				typarr0[6] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = loc4;
		RTAR(tr1,loc4);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(15);
		tb1 = '\01';
		ui4_1 = arg3;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10252, dtype))(Current, ui4_1x)).it_b);
		if (!tb2) {
			ui4_1 = arg3;
			ub1 = (EIF_BOOLEAN) 0;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10255, dtype))(Current, ui4_1x, ub1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(16);
			RTDBGAL(1, 0xF80004D8, 0, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10231, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(17);
			tb1 = '\0';
			loc7 = RTCCL(loc1);
			if (EIF_TEST(loc7)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8253, "drop_actions", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(17,1);
				ur1 = RTCCL(loc4);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "accepts_pebble", tr1))(tr1, ur1x)).it_b);
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(18);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8253, "drop_actions", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(18,1);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
				RTHOOK(19);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6665, "drop_actions", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(19,1);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
			} else {
				RTHOOK(20);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6667, "cancel_actions", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(20,1);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
			}
		} else {
			RTHOOK(21);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6667, "cancel_actions", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(21,1);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
		}
		RTHOOK(22);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6622, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(23);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6622, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(23,1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,1240,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
			RTAR(tr2,loc1);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
		}
	}
	RTHOOK(24);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10203, dtype))(Current);
	RTHOOK(25);
	ui4_1 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10256, dtype))(Current, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
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

/* {EV_PICK_AND_DROPABLE_IMP}.post_drop_steps */
void F1443_13469 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "post_drop_steps";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1442, Current, 0, 1, 19877);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19877);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9706, "set_x_y_origin", tr1))(tr1, ui4_1x, ui4_2x);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10202, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {EV_PICK_AND_DROPABLE_IMP}.real_pointed_target */
EIF_TYPED_VALUE F1443_13470 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "real_pointed_target";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc7);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 1442, Current, 7, 0, 19878);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19878);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(7, 0xF8000573, 0, 0); /* loc7 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9871, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(loc7 + RTVA(9821, "use_stored_display_data", loc7));
	if (tb1) {
	} else {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9818, "update_display_data", loc7))(loc7);
	}
	RTHOOK(4);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9823, "stored_display_data", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	tp1 = eif_pointer_item(RTCW(tr1),1);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(5);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9823, "stored_display_data", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	ti4_1 = eif_integer_32_item(RTCW(tr1),2);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9823, "stored_display_data", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	ti4_1 = eif_integer_32_item(RTCW(tr1),3);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		RTHOOK(8);
		RTDBGAL(4, 0xF80005A2, 0, 0); /* loc4 */
		up1 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9830, "gtk_widget_from_gdk_window", loc7))(loc7, up1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = RTCCL(tr1);
		loc4 = RTRV(eif_new_type(1442, 0x00), loc4);
		RTHOOK(9);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			tp1 = *(EIF_POINTER *)(loc4 + RTVA(9858, "c_object", loc4));
			up1 = tp1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6121, 970))(Current, up1x)).it_i4);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5672, 970))(Current)).it_i4);
			ui4_1 = ti4_2;
			ti4_2 = eif_bit_and(ti4_1,ui4_1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5672, 970))(Current)).it_i4);
			tb2 = (EIF_BOOLEAN)(ti4_2 == ti4_1);
		}
		if (tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9340, "is_destroyed", loc4))(loc4)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9656, "pnd_targets", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9341, "attached_interface", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,2);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3415, "object_id", tr2))(tr2)).it_i4);
			ui4_1 = ti4_1;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2371, "has", tr1))(tr1, ui4_1x)).it_b);
			if (tb1) {
				RTHOOK(11);
				RTDBGAL(0, 0xF8000519, 0,0); /* Result */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9342, "interface", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			}
			RTHOOK(12);
			RTDBGAL(5, 0xF8000459, 0, 0); /* loc5 */
			loc5 = RTCCL(loc4);
			loc5 = RTRV(eif_new_type(1113, 0x00), loc5);
			RTHOOK(13);
			if ((EIF_BOOLEAN)(loc5 != NULL)) {
				RTHOOK(14);
				RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
				tp1 = *(EIF_POINTER *)(loc4 + RTVA(9858, "c_object", loc4));
				up1 = tp1;
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6142, 970))(Current, up1x)).it_p);
				up1 = tp1;
				up2 = (EIF_INTEGER_32 *) &(loc2);
				up3 = (EIF_INTEGER_32 *) &(loc3);
				tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
				up4 = tp2;
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5844, 970))(Current, up1x, up2x, up3x, up4x)).it_p);
				loc1 = (EIF_POINTER) tp1;
				RTHOOK(15);
				RTDBGAL(6, 0xF800058C, 0, 0); /* loc6 */
				ui4_1 = loc2;
				ui4_2 = loc3;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7229, "item_from_coords", loc5))(loc5, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc6 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(16);
				tb1 = '\0';
				if ((EIF_BOOLEAN)(loc6 != NULL)) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9656, "pnd_targets", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(16,1);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9341, "attached_interface", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(16,2);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3415, "object_id", tr2))(tr2)).it_i4);
					ui4_1 = ti4_1;
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2371, "has", tr1))(tr1, ui4_1x)).it_b);
					tb1 = tb2;
				}
				if (tb1) {
					RTHOOK(17);
					RTDBGAL(0, 0xF8000519, 0,0); /* Result */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9342, "interface", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					Result = (EIF_REFERENCE) RTCCL(tr1);
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef up4
#undef ui4_1
#undef ui4_2
}

/* {EV_PICK_AND_DROPABLE_IMP}.pointer_position */
EIF_TYPED_VALUE F1443_13471 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "pointer_position";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_POINTER, &loc4);
	
	RTEAA(l_feature_name, 1442, Current, 4, 0, 19879);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19879);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(4, 0x40000000, 1, 0); /* loc4 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(9858, dtype));
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6142, 970))(Current, up1x)).it_p);
	up1 = tp1;
	up2 = (EIF_INTEGER_32 *) &(loc1);
	up3 = (EIF_INTEGER_32 *) &(loc2);
	up4 = (EIF_INTEGER_32 *) &(loc3);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5844, 970))(Current, up1x, up2x, up3x, up4x)).it_p);
	loc4 = (EIF_POINTER) tp1;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000491, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1169, 0x01).id);
	ui4_1 = loc1;
	ui4_2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7839, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef up4
#undef ui4_1
#undef ui4_2
}

/* {EV_PICK_AND_DROPABLE_IMP}.interface */
static EIF_TYPED_VALUE F1443_13472_body (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1442, Current, 0, 0, 19880);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19880);
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

EIF_TYPED_VALUE F1443_13472 (EIF_REFERENCE Current)
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
			r.it_r = (F1443_13472_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(9342,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


/* {EV_PICK_AND_DROPABLE_IMP}.inline-agent#1 of start_transport */
void F1443_16546 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "inline-agent#1 of start_transport";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
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
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1442, Current, 2, 5, 19881);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1442, Current, 19881);
	RTCC(arg1, 1442, l_feature_name, 1, RTWCT(10189, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10189, 0xF8000000, 0); /* pebble */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(10189, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10239, dtype))(Current);
		RTHOOK(4);
		ui4_1 = arg2;
		ui4_2 = arg3;
		ui4_3 = arg4;
		ui4_4 = arg5;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10249, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTHOOK(5);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6626, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6626, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			ur1 = RTCCL(arg1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7738, "accepts_pebble", tr1))(tr1, ur1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10193, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = RTCCL(tr1);
			if (EIF_TEST(loc1)) {
				RTHOOK(7);
				ur1 = RTCCL(loc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10238, dtype))(Current, ur1x);
			} else {
				RTHOOK(8);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6997, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10238, dtype))(Current, ur1x);
			}
		} else {
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10194, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = RTCCL(tr1);
			if (EIF_TEST(loc2)) {
				RTHOOK(10);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10238, dtype))(Current, ur1x);
			} else {
				RTHOOK(11);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6998, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10238, dtype))(Current, ur1x);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit1443 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
