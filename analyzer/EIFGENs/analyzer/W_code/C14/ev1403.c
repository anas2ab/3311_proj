/*
 * Code for class EV_MENU_ITEM_LIST_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1403_13071(EIF_REFERENCE);
extern void F1403_13072(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1403_13073(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1403_13074(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1403_13075(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1403_13076(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1403_13077(EIF_REFERENCE);
extern void F1403_13078(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1403_13079(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1403_13080(EIF_REFERENCE);
static EIF_TYPED_VALUE F1403_13083_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1403_13083(EIF_REFERENCE);
extern void EIF_Minit1403(void);

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

/* {EV_MENU_ITEM_LIST_IMP}.list_widget */
EIF_TYPED_VALUE F1403_13071 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1402, Current, 0, 0, 19587);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1402, Current, 19587);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x40000000, 1,0); /* Result */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9983, dtype))(Current)).it_p);
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

/* {EV_MENU_ITEM_LIST_IMP}.insert_i_th */
void F1403_13072 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "insert_i_th";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER loc6 = (EIF_POINTER) 0;
	EIF_POINTER loc7 = (EIF_POINTER) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,loc3);
	RTLR(7,loc8);
	RTLR(8,loc4);
	RTLR(9,loc5);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_POINTER, &loc6);
	RTLU(SK_POINTER, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 1402, Current, 8, 2, 19588);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1402, Current, 19588);
	RTCC(arg1, 1402, l_feature_name, 1, RTWCT(9932, dtype, Dftype(Current)), 0x01);
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
	RTDBGAL(1, 0xF80005F4, 0, 0); /* loc1 */
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr2);
	loc1 = RTRV(eif_new_type(1524, 0x00), loc1);
	RTHOOK(3);
	RTCT0("an_item_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9933, dtype));
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(5);
	ur1 = RTCCL(loc1);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9975, dtype))(Current, ur1x, ui4_1x);
	RTHOOK(6);
	RTDBGAL(3, 0xF80005F7, 0, 0); /* loc3 */
	loc3 = RTCCL(loc1);
	loc3 = RTRV(eif_new_type(1527, 0x00), loc3);
	RTHOOK(7);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		if (RTAL & CK_CHECK) {
			RTHOOK(8);
			RTCT("sep_imp_radio_group_void", EX_CHECK);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10914, "radio_group", loc3))(loc3)).it_p);
			tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
			if ((EIF_BOOLEAN)(tp1 == tp2)) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(9);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9947, dtype))(Current, ui4_1x);
		for (;;) {
			RTHOOK(10);
			tb1 = '\01';
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9933, dtype));
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9941, dtype))(Current)).it_i4);
			if (!((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L))))) {
				tb2 = '\0';
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9933, dtype));
				ui4_1 = ti4_2;
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9936, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc8 = RTCCL(tr2);
				if (EIF_TEST(loc8)) {
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr2);
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9977, dtype))(Current, ur1x)).it_b);
					tb2 = tb3;
				}
				tb1 = tb2;
			}
			if (tb1) break;
			RTHOOK(11);
			RTDBGAL(4, 0xF80005F6, 0, 0); /* loc4 */
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9933, dtype));
			ui4_1 = ti4_2;
			loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9936, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = RTRV(eif_new_type(1526, 0x00), loc4);
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				RTHOOK(13);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10914, "radio_group", loc3))(loc3)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10909, "set_radio_group", loc4))(loc4, up1x);
				RTHOOK(14);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10914, "radio_group", loc3))(loc3)).it_p);
				if ((EIF_BOOLEAN)(tp1 != loc7)) {
					RTHOOK(15);
					tp1 = *(EIF_POINTER *)(loc4 + RTVA(9858, "c_object", loc4));
					up1 = tp1;
					ub1 = (EIF_BOOLEAN) 0;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5878, 970))(Current, up1x, ub1x);
				}
				RTHOOK(16);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10087, "radio_group", loc4))(loc4)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10913, "set_radio_group", loc3))(loc3, up1x);
			}
			RTHOOK(17);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9946, dtype))(Current);
		}
	} else {
		RTHOOK(18);
		RTDBGAL(4, 0xF80005F6, 0, 0); /* loc4 */
		loc4 = RTCCL(loc1);
		loc4 = RTRV(eif_new_type(1526, 0x00), loc4);
		RTHOOK(19);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTHOOK(20);
			RTDBGAL(3, 0xF80005F7, 0, 0); /* loc3 */
			ui4_1 = arg2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9976, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = (EIF_REFERENCE) RTCCL(tr2);
			RTHOOK(21);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTHOOK(22);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10914, "radio_group", loc3))(loc3)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10909, "set_radio_group", loc4))(loc4, up1x);
				RTHOOK(23);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10914, "radio_group", loc3))(loc3)).it_p);
				tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
				if ((EIF_BOOLEAN)(tp1 != tp2)) {
					RTHOOK(24);
					tp1 = *(EIF_POINTER *)(loc4 + RTVA(9858, "c_object", loc4));
					up1 = tp1;
					ub1 = (EIF_BOOLEAN) 0;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5878, 970))(Current, up1x, ub1x);
				}
				RTHOOK(25);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10087, "radio_group", loc4))(loc4)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10913, "set_radio_group", loc3))(loc3, up1x);
			} else {
				RTHOOK(26);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9980, dtype))(Current)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10909, "set_radio_group", loc4))(loc4, up1x);
				RTHOOK(27);
				RTDBGAL(6, 0x40000000, 1, 0); /* loc6 */
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10087, "radio_group", loc4))(loc4)).it_p);
				loc6 = (EIF_POINTER) tp1;
				RTHOOK(28);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9980, dtype))(Current)).it_p);
				tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
				if ((EIF_BOOLEAN)(tp1 != tp2)) {
					RTHOOK(29);
					tp1 = *(EIF_POINTER *)(loc4 + RTVA(9858, "c_object", loc4));
					up1 = tp1;
					ub1 = (EIF_BOOLEAN) 0;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5878, 970))(Current, up1x, ub1x);
				}
				RTHOOK(30);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10087, "radio_group", loc4))(loc4)).it_p);
				up1 = tp1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9979, dtype))(Current, up1x);
			}
		}
	}
	RTHOOK(31);
	ur1 = RTCCL(loc1);
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9977, dtype))(Current, ur1x)).it_b);
	if ((EIF_BOOLEAN) !tb2) {
		RTHOOK(32);
		RTDBGAL(5, 0xF80005F5, 0, 0); /* loc5 */
		loc5 = RTCCL(loc1);
		loc5 = RTRV(eif_new_type(1525, 0x00), loc5);
		RTHOOK(33);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTHOOK(34);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10105, "is_selected", loc5))(loc5)).it_b);
			if (tb2) {
				RTHOOK(35);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(10106, "enable_select", loc5))(loc5);
			}
		}
	}
	RTHOOK(36);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9947, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(37);
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
	RTHOOK(38);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ub1
#undef arg2
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.insert_menu_item */
void F1403_13073 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "insert_menu_item";
	RTEX;
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1402, Current, 0, 2, 19589);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1402, Current, 19589);
	RTCC(arg1, 1402, l_feature_name, 1, eif_new_type(1524, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9974, dtype))(Current)).it_p);
	up1 = tp1;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10903, "menu_item", arg1))(arg1)).it_p);
	up2 = tp2;
	ui4_1 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5934, 970))(Current, up1x, up2x, ui4_1x);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2796, "go_i_th", tr1))(tr1, ui4_1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9341, "attached_interface", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2824, "put_left", tr1))(tr1, ur1x);
	RTHOOK(4);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10897, "set_item_parent_imp", arg1))(arg1, ur1x);
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
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.separator_imp_by_index */
EIF_TYPED_VALUE F1403_13074 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "separator_imp_by_index";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,Result);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1402, Current, 3, 1, 19590);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1402, Current, 19590);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_index_within_bounds", EX_PRE);
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
	RTHOOK(2);
	RTDBGAL(1, 0xF800008E, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9934, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9944, dtype))(Current);
	RTHOOK(4);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9933, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9941, dtype))(Current)).it_i4);
		if (!((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L))))) {
			tb1 = (EIF_BOOLEAN)(arg1 == loc2);
		}
		if (tb1) break;
		RTHOOK(6);
		RTDBGAL(3, 0xF8000547, 0, 0); /* loc3 */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9933, dtype));
		ui4_1 = ti4_1;
		loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9936, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = RTRV(eif_new_type(1351, 0x00), loc3);
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTHOOK(8);
			RTDBGAL(0, 0xF80005F7, 0,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = RTCCL(tr1);
			Result = RTRV(eif_new_type(1527, 0x00), Result);
		}
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9946, dtype))(Current);
		RTHOOK(10);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(11);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9948, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.is_menu_separator_imp */
EIF_TYPED_VALUE F1403_13075 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_menu_separator_imp";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1402, Current, 1, 1, 19591);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1402, Current, 19591);
	RTCC(arg1, 1402, l_feature_name, 1, eif_new_type(1509, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80005F7, 0, 0); /* loc1 */
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(1527, 0x00), loc1);
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc1 != NULL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.remove_i_th */
void F1403_13076 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "remove_i_th";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_POINTER loc6 = (EIF_POINTER) 0;
	EIF_POINTER loc7 = (EIF_POINTER) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
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
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLR(8,loc8);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTLU(SK_POINTER, &loc6);
	RTLU(SK_POINTER, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 1402, Current, 8, 1, 19592);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1402, Current, 19592);
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
	RTDBGAL(1, 0xF80005ED, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ui4_1 = arg1;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "i_th", loc1))(loc1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(2,2);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTRV(eif_new_type(1517, 0x00), tr3);
	RTHOOK(3);
	RTCT0("item_imp_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9974, dtype))(Current)).it_p);
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(loc1 + RTVA(9858, "c_object", loc1));
	up2 = tp2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5884, 970))(Current, up1x, up2x);
	RTHOOK(5);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2796, "go_i_th", tr2))(tr2, ui4_1x);
	RTHOOK(6);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2380, "remove", tr2))(tr2);
	RTHOOK(7);
	ur1 = NULL;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10897, "set_item_parent_imp", loc1))(loc1, ur1x);
	RTHOOK(8);
	RTDBGAL(2, 0xF80005F6, 0, 0); /* loc2 */
	loc2 = RTCCL(loc1);
	loc2 = RTRV(eif_new_type(1526, 0x00), loc2);
	RTHOOK(9);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(10);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10079, "is_selected", loc2))(loc2)).it_b);
		if (tb1) {
			RTHOOK(11);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10087, "radio_group", loc2))(loc2)).it_p);
			up1 = tp1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5751, 970))(Current, up1x)).it_i4);
			if ((EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 1L))) {
				RTHOOK(12);
				RTDBGAL(6, 0x40000000, 1, 0); /* loc6 */
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10087, "radio_group", loc2))(loc2)).it_p);
				up1 = tp1;
				ui4_1 = ((EIF_INTEGER_32) 0L);
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5752, 970))(Current, up1x, ui4_1x)).it_p);
				loc6 = (EIF_POINTER) tp1;
				RTHOOK(13);
				tp1 = *(EIF_POINTER *)(loc2 + RTVA(9858, "c_object", loc2));
				if ((EIF_BOOLEAN)(loc6 == tp1)) {
					RTHOOK(14);
					RTDBGAL(6, 0x40000000, 1, 0); /* loc6 */
					tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10087, "radio_group", loc2))(loc2)).it_p);
					up1 = tp1;
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5752, 970))(Current, up1x, ui4_1x)).it_p);
					loc6 = (EIF_POINTER) tp1;
				}
				RTHOOK(15);
				RTDBGAL(2, 0xF80005F6, 0, 0); /* loc2 */
				up1 = loc6;
				loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9982, dtype))(Current, up1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc2 = RTRV(eif_new_type(1526, 0x00), loc2);
				RTHOOK(16);
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					RTHOOK(17);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(10082, "enable_select", loc2))(loc2);
				}
			}
		}
		RTHOOK(18);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(19);
			tp1 = *(EIF_POINTER *)(loc2 + RTVA(9858, "c_object", loc2));
			up1 = tp1;
			up2 = loc7;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5964, 970))(Current, up1x, up2x);
		}
	} else {
		RTHOOK(20);
		RTDBGAL(3, 0xF80005F7, 0, 0); /* loc3 */
		loc3 = RTCCL(loc1);
		loc3 = RTRV(eif_new_type(1527, 0x00), loc3);
		RTHOOK(21);
		RTDBGAL(8, 0xF8000557, 0, 0); /* loc8 */
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9342, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc8 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(22);
		RTCT0("l_interface /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc8 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(23);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc8))(loc8)).it_i4);
			tb1 = (EIF_BOOLEAN) (arg1 <= ti4_2);
		}
		if (tb1) {
			RTHOOK(24);
			RTDBGAL(3, 0xF80005F7, 0, 0); /* loc3 */
			ui4_1 = arg1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9976, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = (EIF_REFERENCE) RTCCL(tr2);
			RTHOOK(25);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2419, "index", loc8))(loc8)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(26);
			ui4_1 = arg1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2796, "go_i_th", loc8))(loc8, ui4_1x);
			for (;;) {
				RTHOOK(27);
				tb1 = '\01';
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2423, "after", loc8))(loc8)).it_b);
				if (!tb2) {
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2375, "item", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(27,1);
					tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr3);
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9977, dtype))(Current, ur1x)).it_b);
					tb1 = tb2;
				}
				if (tb1) break;
				RTHOOK(28);
				RTDBGAL(2, 0xF80005F6, 0, 0); /* loc2 */
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2375, "item", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(28,1);
				tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc2 = RTCCL(tr3);
				loc2 = RTRV(eif_new_type(1526, 0x00), loc2);
				RTHOOK(29);
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					RTHOOK(30);
					RTDBGAL(5, 0x04000000, 1, 0); /* loc5 */
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(31);
					if ((EIF_BOOLEAN)(loc3 != NULL)) {
						RTHOOK(32);
						tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10914, "radio_group", loc3))(loc3)).it_p);
						up1 = tp1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10909, "set_radio_group", loc2))(loc2, up1x);
						RTHOOK(33);
						tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10087, "radio_group", loc2))(loc2)).it_p);
						up1 = tp1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10913, "set_radio_group", loc3))(loc3, up1x);
					} else {
						RTHOOK(34);
						tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9980, dtype))(Current)).it_p);
						up1 = tp1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10909, "set_radio_group", loc2))(loc2, up1x);
						RTHOOK(35);
						tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10087, "radio_group", loc2))(loc2)).it_p);
						up1 = tp1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9979, dtype))(Current, up1x);
					}
					RTHOOK(36);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(10907, "disable_select", loc2))(loc2);
				}
				RTHOOK(37);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2425, "forth", loc8))(loc8);
			}
			RTHOOK(38);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc5 && (EIF_BOOLEAN)(loc3 == NULL))) {
				RTHOOK(39);
				up1 = loc7;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9979, dtype))(Current, up1x);
			}
			RTHOOK(40);
			ui4_1 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2796, "go_i_th", loc8))(loc8, ui4_1x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(41);
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
	RTHOOK(42);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.radio_group_ref */
EIF_TYPED_VALUE F1403_13077 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "radio_group_ref";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1402, Current, 1, 0, 19593);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1402, Current, 19593);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80000E2, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9981, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(3);
		RTDBGAL(1, 0xF80000E2, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(226, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(3,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 9981, 0xF80000E2, 0); /* radio_group_ref_internal */
		tr1 = RTCCL(loc1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(9981, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(5);
	RTDBGAL(0, 0xF80000E2, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {EV_MENU_ITEM_LIST_IMP}.set_radio_group */
void F1403_13078 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_radio_group";
	RTEX;
#define arg1 arg1x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
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
	
	RTEAA(l_feature_name, 1402, Current, 0, 1, 19594);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1402, Current, 19594);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9978, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	up2 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4575, "set_item", tr1))(tr1, up2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef arg1
}

/* {EV_MENU_ITEM_LIST_IMP}.radio_group */
EIF_TYPED_VALUE F1403_13079 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "radio_group";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1402, Current, 0, 0, 19595);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1402, Current, 19595);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x40000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9978, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tp1 = *(EIF_POINTER *)(tr1 + RTVA(4574, "item", tr1));
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

/* {EV_MENU_ITEM_LIST_IMP}.radio_group_ref_internal */
EIF_TYPED_VALUE F1403_13080 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9981,Dtype(Current)));
	return r;
}


/* {EV_MENU_ITEM_LIST_IMP}.interface */
static EIF_TYPED_VALUE F1403_13083_body (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1402, Current, 0, 0, 19586);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1402, Current, 19586);
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

EIF_TYPED_VALUE F1403_13083 (EIF_REFERENCE Current)
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
			r.it_r = (F1403_13083_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(9342,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1403 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
