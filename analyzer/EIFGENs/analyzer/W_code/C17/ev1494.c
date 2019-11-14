/*
 * Code for class EV_TREE_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1494_14177(EIF_REFERENCE);
extern void F1494_14178(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1494_14179(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1494_14180(EIF_REFERENCE);
extern void F1494_14181(EIF_REFERENCE);
extern void F1494_14182(EIF_REFERENCE);
extern void F1494_14183(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1494_14184(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1494_14185(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1494_14186(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1494_14187(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1494_14188(EIF_REFERENCE);
extern void F1494_14189(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1494_14190(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1494_14191(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1494_14192(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1494_14193(EIF_REFERENCE);
extern void F1494_14194(EIF_REFERENCE);
extern void F1494_14195(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1494_14196(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1494_14197(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1494_14198(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1494_14199(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1494_14200(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1494_14201(EIF_REFERENCE);
extern void F1494_14202(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1494_14203(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1494_14204(EIF_REFERENCE);
extern void F1494_14205(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1494_14206(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1494_14207(EIF_REFERENCE);
extern void F1494_14208(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1494_14209(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1494_14210(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1494_14211(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1494_14212(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1494_14213(EIF_REFERENCE);
extern void F1494_14214(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1494_14215(EIF_REFERENCE);
extern void F1494_14216(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1494_14217(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1494_14218(EIF_REFERENCE);
extern void F1494_14219(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1494_14220(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1494_14221(EIF_REFERENCE);
static EIF_TYPED_VALUE F1494_14222_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1494_14222(EIF_REFERENCE);
extern void EIF_Minit1494(void);
extern EIF_REFERENCE _A1242_317();
extern EIF_REFERENCE _A1242_314_4_5();

#ifdef __cplusplus
}
#endif

#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1494_14220
static EIF_POINTER inline_F1494_14220 (void)
{
	return (EIF_POINTER) (gtk_tree_store_new (2, GDK_TYPE_PIXBUF, G_TYPE_STRING))
	;
}
#define INLINE_F1494_14220
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TREE_IMP}.needs_event_box */
EIF_TYPED_VALUE F1494_14177 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1493, Current, 0, 0, 20392);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20392);
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

/* {EV_TREE_IMP}.old_make */
void F1494_14178 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 1493, Current, 0, 1, 20393);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20393);
	RTCC(arg1, 1493, l_feature_name, 1, RTWCT(9342, dtype, Dftype(Current)), 0x01);
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

/* {EV_TREE_IMP}.call_selection_action_sequences */
void F1494_14179 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "call_selection_action_sequences";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc3);
	RTLR(5,ur1);
	RTLR(6,loc2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1493, Current, 4, 0, 20394);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20394);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000555, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10539, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (!RTCEQ(loc1, tr1)) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = RTCCL(tr1);
		if (EIF_TEST(loc4)) {
			RTHOOK(4);
			RTDBGAL(3, 0xF80005EB, 0, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = RTCCL(tr1);
			loc3 = RTRV(eif_new_type(1515, 0x00), loc3);
			RTHOOK(5);
			RTCT0("previous_selected_item_imp /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6335, "deselect_actions_internal", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				RTHOOK(7);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6334, "deselect_actions", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(7,1);
				ur1 = NULL;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
			}
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6343, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				RTHOOK(9);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6343, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(9,1);
				ur1 = NULL;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
			}
		}
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(11);
			RTDBGAL(2, 0xF80005EB, 0, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = RTCCL(tr1);
			loc2 = RTRV(eif_new_type(1515, 0x00), loc2);
			RTHOOK(12);
			RTCT0("a_selected_item_imp /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			RTHOOK(13);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6333, "select_actions_internal", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				RTHOOK(14);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6332, "select_actions", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(14,1);
				ur1 = NULL;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
			}
			RTHOOK(15);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6341, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				RTHOOK(16);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6341, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(16,1);
				ur1 = NULL;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
			}
		}
	}
	RTHOOK(17);
	RTDBGAA(Current, dtype, 10719, 0xF8000555, 0); /* previous_selected_item */
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(10719, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
}

/* {EV_TREE_IMP}.visual_widget */
EIF_TYPED_VALUE F1494_14180 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1493, Current, 0, 0, 20395);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20395);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x40000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(10727, dtype));
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

/* {EV_TREE_IMP}.initialize_model */
void F1494_14181 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "initialize_model";
	RTEX;
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
	
	RTEAA(l_feature_name, 1493, Current, 0, 0, 20396);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20396);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10724, 0x40000000, 1); /* tree_store */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10728, dtype))(Current)).it_p);
	*(EIF_POINTER *)(Current + RTWA(10724, dtype)) = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_TREE_IMP}.make */
void F1494_14182 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
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
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,tr5);
	RTLR(8,ur2);
	RTLR(9,ur3);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_POINTER, &loc4);
	
	RTEAA(l_feature_name, 1493, Current, 4, 0, 20397);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20397);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10729, 0x40000000, 1); /* scrollable_area */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
	up1 = tp1;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
	up2 = tp2;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5971, 970))(Current, up1x, up2x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(10729, dtype)) = (EIF_POINTER) tp1;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(10729, dtype));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5683, 970))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5175, 969))(Current, up1x, ui4_1x);
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + RTWA(10729, dtype));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9859, dtype))(Current, up1x);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 10727, 0x40000000, 1); /* tree_view */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5405, 969))(Current)).it_p);
	*(EIF_POINTER *)(Current + RTWA(10727, dtype)) = (EIF_POINTER) tp1;
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(Current + RTWA(10729, dtype));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(Current + RTWA(10727, dtype));
	up2 = tp2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5881, 970))(Current, up1x, up2x);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9337, 1609))(Current);
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9337, 1492))(Current);
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9337, 1476))(Current);
	RTHOOK(9);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10710, dtype))(Current);
	RTHOOK(10);
	tp1 = *(EIF_POINTER *)(Current + RTWA(10727, dtype));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(Current + RTWA(10724, dtype));
	up2 = tp2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5406, 969))(Current, up1x, up2x);
	RTHOOK(11);
	tp1 = *(EIF_POINTER *)(Current + RTWA(10729, dtype));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5719, 970))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5719, 970))(Current)).it_i4);
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5972, 970))(Current, up1x, ui4_1x, ui4_2x);
	RTHOOK(12);
	tp1 = *(EIF_POINTER *)(Current + RTWA(10727, dtype));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6021, 970))(Current, up1x);
	RTHOOK(13);
	tp1 = *(EIF_POINTER *)(Current + RTWA(10727, dtype));
	up1 = tp1;
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5333, 969))(Current, up1x, ub1x);
	RTHOOK(14);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5384, 969))(Current)).it_p);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(15);
	up1 = loc1;
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5366, 969))(Current, up1x, ub1x);
	RTHOOK(16);
	RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5375, 969))(Current)).it_p);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(17);
	up1 = loc1;
	up2 = loc2;
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5387, 969))(Current, up1x, up2x, ub1x);
	RTHOOK(18);
	RTDBGAL(3, 0xF80004D4, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1236, 0x00).id);
	tr2 = RTMS_EX_H("text",4,1952807028);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8168, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(18,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(19);
	up1 = loc1;
	up2 = loc2;
	tp1 = *(EIF_POINTER *)(loc3 + RTVA(8165, "item", loc3));
	up3 = tp1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5374, 969))(Current, up1x, up2x, up3x, ui4_1x);
	RTHOOK(20);
	RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5376, 969))(Current)).it_p);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(21);
	up1 = loc1;
	up2 = loc2;
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5387, 969))(Current, up1x, up2x, ub1x);
	RTHOOK(22);
	RTDBGAL(3, 0xF80004D4, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1236, 0x00).id);
	tr2 = RTMS_EX_H("pixbuf",6,93246054);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8168, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(22,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(23);
	up1 = loc1;
	up2 = loc2;
	tp1 = *(EIF_POINTER *)(loc3 + RTVA(8165, "item", loc3));
	up3 = tp1;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5374, 969))(Current, up1x, up2x, up3x, ui4_1x);
	RTHOOK(24);
	tp1 = *(EIF_POINTER *)(Current + RTWA(10727, dtype));
	up1 = tp1;
	up2 = loc1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5381, 969))(Current, up1x, up2x, ui4_1x);
	RTHOOK(25);
	tp1 = *(EIF_POINTER *)(Current + RTWA(10727, dtype));
	up1 = tp1;
	tr1 = RTMS_EX_H("row-collapsed",13,409101156);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,186,0xFF01,1241,218,203,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 4, 0);
	}
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10112, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(25,1);
	tr4 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9762, "gtk_marshal", tr3))(tr3)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr4;
	RTAR(tr2,tr4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3419, dtype));
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ti4_1;
	((EIF_TYPED_VALUE *)tr2+3)->it_b = (EIF_BOOLEAN) 0;
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {595,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr4) = 2L;
		memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
	}
	*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr4+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr4)))(tr4).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,275,0xFF01,0xFFF9,2,186,218,227,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1242_314_4_5, (EIF_POINTER)(0),8180, tr3, 0, 1, -1, tr2, 2);
	}
	ur2 = RTCCL(tr5);
	ur3 = NULL;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9863, dtype))(Current, up1x, ur1x, ur2x, ur3x);
	RTHOOK(26);
	tp1 = *(EIF_POINTER *)(Current + RTWA(10727, dtype));
	up1 = tp1;
	tr1 = RTMS_EX_H("row-expanded",12,747253348);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,3,186,0xFF01,1241,218,203,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 4, 0);
	}
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10112, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(26,1);
	tr4 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9762, "gtk_marshal", tr3))(tr3)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr4;
	RTAR(tr2,tr4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3419, dtype));
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ti4_1;
	((EIF_TYPED_VALUE *)tr2+3)->it_b = (EIF_BOOLEAN) 1;
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {595,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr4) = 2L;
		memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
	}
	*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr4+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr4)))(tr4).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,275,0xFF01,0xFFF9,2,186,218,227,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1242_314_4_5, (EIF_POINTER)(0),8180, tr3, 0, 1, -1, tr2, 2);
	}
	ur2 = RTCCL(tr5);
	ur3 = NULL;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9863, dtype))(Current, up1x, ur1x, ur2x, ur3x);
	RTHOOK(27);
	RTDBGAL(4, 0x40000000, 1, 0); /* loc4 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(10727, dtype));
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5359, 969))(Current, up1x)).it_p);
	loc4 = (EIF_POINTER) tp1;
	RTHOOK(28);
	up1 = loc4;
	tr1 = RTMS_EX_H("changed",7,346303332);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,186,0xFF01,1241,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 0);
	}
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10112, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(28,1);
	tr4 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9762, "gtk_marshal", tr3))(tr3)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr4;
	RTAR(tr2,tr4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3419, dtype));
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ti4_1;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,275,0xFF01,0xFFF9,0,186,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1242_317, (EIF_POINTER)(0),8183, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ur3 = NULL;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9863, dtype))(Current, up1x, ur1x, ur2x, ur3x);
	RTHOOK(29);
	up1 = loc4;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5723, 970))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5360, 969))(Current, up1x, ui4_1x);
	RTHOOK(30);
	tp1 = *(EIF_POINTER *)(Current + RTWA(10727, dtype));
	up1 = tp1;
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5334, 969))(Current, up1x, ub1x);
	RTHOOK(31);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10076, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(32);
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
	RTHOOK(33);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui1_1
#undef ub1
}

/* {EV_TREE_IMP}.call_button_event_actions */
void F1494_14183 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x)
{
	GTCX
	char *l_feature_name = "call_button_event_actions";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_POINTER loc7 = (EIF_POINTER) 0;
	EIF_POINTER loc8 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc10 = (EIF_BOOLEAN) 0;
	EIF_POINTER loc11 = (EIF_POINTER) 0;
	EIF_POINTER loc12 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
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
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
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
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,loc2);
	RTLR(6,loc1);
	RTLIU(7);
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
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_BOOL, &loc6);
	RTLU(SK_POINTER, &loc7);
	RTLU(SK_POINTER, &loc8);
	RTLU(SK_INT32, &loc9);
	RTLU(SK_BOOL, &loc10);
	RTLU(SK_POINTER, &loc11);
	RTLU(SK_POINTER, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	
	RTEAA(l_feature_name, 1493, Current, 14, 9, 20398);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTAOMS(14182,2);
	RTDBGEAA(1493, Current, 20398);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	ui4_4 = arg4;
	ur8_1 = arg5;
	ur8_2 = arg6;
	ur8_3 = arg7;
	ui4_5 = arg8;
	ui4_6 = arg9;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10245, 1492))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur8_1x, ur8_2x, ur8_3x, ui4_5x, ui4_6x);
	RTHOOK(2);
	RTDBGAL(11, 0x40000000, 1, 0); /* loc11 */
	up1 = (EIF_INTEGER_32 *) &(loc13);
	up2 = (EIF_INTEGER_32 *) &(loc14);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5842, 970))(Current, up1x, up2x)).it_p);
	loc11 = (EIF_POINTER) tp1;
	RTHOOK(3);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(loc11 != tp1)) {
		RTHOOK(4);
		up1 = loc11;
		up2 = (EIF_POINTER *) &(loc12);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5846, 970))(Current, up1x, up2x);
		RTHOOK(5);
		tp1 = *(EIF_POINTER *)(Current + RTWA(10727, dtype));
		if ((EIF_BOOLEAN)(loc12 != tp1)) {
			RTHOOK(6);
			RTDBGAL(10, 0x04000000, 1, 0); /* loc10 */
			loc10 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(7);
			RTDBGAL(3, 0xF80004D4, 0, 0); /* loc3 */
			tr1 = RTLN(eif_new_type(1236, 0x00).id);
			RTCOMS(tr2,14182,0,"expander-size",13,1515618149);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8168, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(7,1);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(8);
			tp1 = *(EIF_POINTER *)(Current + RTWA(10727, dtype));
			up1 = tp1;
			tp2 = *(EIF_POINTER *)(loc3 + RTVA(8165, "item", loc3));
			up2 = tp2;
			up3 = (EIF_INTEGER_32 *) &(loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5248, 969))(Current, up1x, up2x, up3x);
			RTHOOK(9);
			RTDBGAL(3, 0xF80004D4, 0, 0); /* loc3 */
			tr1 = RTLN(eif_new_type(1236, 0x00).id);
			RTCOMS(tr2,14182,1,"horizontal-separator",20,1855499634);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8168, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(9,1);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(10);
			tp1 = *(EIF_POINTER *)(Current + RTWA(10727, dtype));
			up1 = tp1;
			tp2 = *(EIF_POINTER *)(loc3 + RTVA(8165, "item", loc3));
			up2 = tp2;
			up3 = (EIF_INTEGER_32 *) &(loc5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5248, 969))(Current, up1x, up2x, up3x);
			RTHOOK(11);
			RTDBGAL(6, 0x04000000, 1, 0); /* loc6 */
			tp1 = *(EIF_POINTER *)(Current + RTWA(10727, dtype));
			up1 = tp1;
			ui4_1 = arg2;
			ui4_2 = arg3;
			up2 = (EIF_POINTER *) &(loc7);
			up3 = (EIF_POINTER *) &(loc8);
			tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
			up4 = tp2;
			tp3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
			up5 = tp3;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5325, 969))(Current, up1x, ui4_1x, ui4_2x, up2x, up3x, up4x, up5x)).it_b);
			loc6 = (EIF_BOOLEAN) tb1;
			RTHOOK(12);
			if (loc6) {
				RTHOOK(13);
				RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
				up1 = loc7;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5335, 969))(Current, up1x)).it_i4);
				loc9 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(14);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc4) + loc5) * loc9)) && (EIF_BOOLEAN) (arg2 >= (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc4) + loc5) * (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L)))))) {
					RTHOOK(15);
					RTDBGAL(10, 0x04000000, 1, 0); /* loc10 */
					loc10 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
				RTHOOK(16);
				up1 = loc7;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5324, 969))(Current, up1x);
			}
		}
	}
	RTHOOK(17);
	if ((EIF_BOOLEAN) !loc10) {
		RTHOOK(18);
		RTDBGAL(2, 0xF80005EB, 0, 0); /* loc2 */
		ui4_1 = arg2;
		ui4_2 = arg3;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7229, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(19);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(20);
			RTDBGAL(1, 0xF80000BA, 0, 0); /* loc1 */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,8,186,218,218,218,206,206,206,218,218,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr1 = RTLNTS(typres0.id, 9, 1);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg2;
			((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg3;
			((EIF_TYPED_VALUE *)tr1+3)->it_i4 = arg4;
			((EIF_TYPED_VALUE *)tr1+4)->it_r8 = arg5;
			((EIF_TYPED_VALUE *)tr1+5)->it_r8 = arg6;
			((EIF_TYPED_VALUE *)tr1+6)->it_r8 = arg7;
			((EIF_TYPED_VALUE *)tr1+7)->it_i4 = arg8;
			((EIF_TYPED_VALUE *)tr1+8)->it_i4 = arg9;
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(21);
			tb1 = '\0';
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5658, 970))(Current)).it_i4);
			if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6396, "pointer_button_press_actions_internal", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tb1 = (EIF_BOOLEAN)(tr1 != NULL);
			}
			if (tb1) {
				RTHOOK(22);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6395, "pointer_button_press_actions", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(22,1);
				ur1 = RTCCL(loc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
			} else {
				RTHOOK(23);
				tb1 = '\0';
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5659, 970))(Current)).it_i4);
				if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6398, "pointer_double_press_actions_internal", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tb1 = (EIF_BOOLEAN)(tr1 != NULL);
				}
				if (tb1) {
					RTHOOK(24);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6397, "pointer_double_press_actions", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(24,1);
					ur1 = RTCCL(loc1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(25);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef up4
#undef up5
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
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

/* {EV_TREE_IMP}.on_pointer_motion */
void F1494_14184 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "on_pointer_motion";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1493, Current, 1, 1, 20399);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20399);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,7,186,218,218,206,206,206,218,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1493, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10243, 1492))(Current, ur1x);
	RTHOOK(2);
	tb1 = '\0';
	tb2 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10112, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9812, "is_in_transport", tr1))(tr1)).it_b);
	if ((EIF_BOOLEAN) !tb3) {
		ui4_1 = ((EIF_INTEGER_32) 2L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3915, "integer_item", arg1))(arg1, ui4_1x)).it_i4);
		tb2 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	}
	if (tb2) {
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3915, "integer_item", arg1))(arg1, ui4_1x)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10057, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN) (ti4_1 <= ti4_2);
	}
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(1, 0xF80005EB, 0, 0); /* loc1 */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3915, "integer_item", arg1))(arg1, ui4_1x)).it_i4);
		ui4_1 = ti4_1;
		ui4_2 = ((EIF_INTEGER_32) 2L);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3915, "integer_item", arg1))(arg1, ui4_2x)).it_i4);
		ui4_2 = ti4_2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7229, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6394, "pointer_motion_actions_internal", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				RTHOOK(6);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6393, "pointer_motion_actions", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(6,1);
				ur1 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
			}
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
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {EV_TREE_IMP}.selected_item */
EIF_TYPED_VALUE F1494_14185 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "selected_item";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_POINTER, &loc3);
	RTLU(SK_POINTER, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1493, Current, 5, 0, 20400);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20400);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(10727, dtype));
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5359, 969))(Current, up1x)).it_p);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(2);
	RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
	up1 = loc1;
	up2 = (EIF_POINTER *) &(loc3);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5342, 969))(Current, up1x, up2x)).it_p);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(3);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(loc2 != tp1)) {
		RTHOOK(4);
		RTDBGAL(4, 0x40000000, 1, 0); /* loc4 */
		up1 = loc2;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6089, 970))(Current, up1x)).it_p);
		loc4 = (EIF_POINTER) tp1;
		RTHOOK(5);
		RTDBGAL(5, 0xF80005EB, 0, 0); /* loc5 */
		up1 = loc4;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10711, dtype))(Current, up1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		up1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5200, 969))(Current, up1x);
		RTHOOK(7);
		up1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5740, 970))(Current, up1x);
		RTHOOK(8);
		RTDBGAL(0, 0xF8000555, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9342, "interface", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
}

/* {EV_TREE_IMP}.node_from_tree_path */
EIF_TYPED_VALUE F1494_14186 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "node_from_tree_path";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc5);
	RTLR(4,loc6);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 1493, Current, 6, 1, 20401);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20401);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	up1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5335, 969))(Current, up1x)).it_i4);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	up1 = arg1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5336, 969))(Current, up1x)).it_p);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(3);
	RTDBGAL(2, 0xF80000A3, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(163, 0x01).id);
	up1 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, 120))(Current)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 * loc4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3173, Dtype(tr1)))(tr1, up1x, ui4_1x);
	RTNHOOK(3,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(5, 0xF8000555, 0, 0); /* loc5 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3185, "read_integer_32", loc2))(loc2, ui4_1x)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9936, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTCT0("a_tree_node /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc5 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(6);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc3 == loc4)) break;
		RTHOOK(8);
		RTDBGAL(5, 0xF8000555, 0, 0); /* loc5 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, 120))(Current)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (loc3 * ti4_1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3185, "read_integer_32", loc2))(loc2, ui4_1x)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "i_th", loc5))(loc5, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(9);
		RTCT0("a_tree_node /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(10);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3++;
	}
	RTHOOK(11);
	RTDBGAL(6, 0xF80005EB, 0, 0); /* loc6 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc6 = RTCCL(tr1);
	loc6 = RTRV(eif_new_type(1515, 0x00), loc6);
	RTHOOK(12);
	RTCT0("l_result /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc6 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(13);
	RTDBGAL(0, 0xF80005EB, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc6);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {EV_TREE_IMP}.selected */
EIF_TYPED_VALUE F1494_14187 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "selected";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 1493, Current, 0, 0, 20402);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20402);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10539, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
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

/* {EV_TREE_IMP}.pebble_source */
EIF_TYPED_VALUE F1494_14188 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "pebble_source";
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
	
	RTEAA(l_feature_name, 1493, Current, 1, 0, 20403);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20403);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10714, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		RTDBGAL(0, 0xF8000519, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9341, "attached_interface", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0xF8000519, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10254, 1492))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
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
}

/* {EV_TREE_IMP}.ensure_item_visible */
void F1494_14189 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "ensure_item_visible";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ur4_2x = {{0}, SK_REAL32};
#define ur4_2 ur4_2x.it_r4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1493, Current, 3, 1, 20404);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20404);
	RTCC(arg1, 1493, l_feature_name, 1, eif_new_type(1365, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80005EB, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1515, 0x00), loc1);
	RTHOOK(2);
	RTCT0("tree_item_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	RTDBGAL(3, 0xF800045C, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10882, "list_iter", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTCT0("l_list_iter /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(5);
	RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(10724, dtype));
	up1 = tp1;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1101, "item", loc3))(loc3)).it_p);
	up2 = tp2;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5350, 969))(Current, up1x, up2x)).it_p);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(6);
	tp1 = *(EIF_POINTER *)(Current + RTWA(10727, dtype));
	up1 = tp1;
	up2 = loc2;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
	up3 = tp2;
	ub1 = (EIF_BOOLEAN) 0;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	ur4_1 = tr4_1;
	tr4_2 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	ur4_2 = tr4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5247, 969))(Current, up1x, up2x, up3x, ub1x, ur4_1x, ur4_2x);
	RTHOOK(7);
	up1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5324, 969))(Current, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur4_1
#undef ur4_2
#undef ub1
#undef arg1
}

/* {EV_TREE_IMP}.set_to_drag_and_drop */
EIF_TYPED_VALUE F1494_14190 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_to_drag_and_drop";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1493, Current, 1, 0, 20405);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20405);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10714, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10216, "mode_is_drag_and_drop", loc1))(loc1)).it_b);
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10216, dtype))(Current)).it_b);
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {EV_TREE_IMP}.able_to_transport */
EIF_TYPED_VALUE F1494_14191 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "able_to_transport";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1493, Current, 1, 1, 20406);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20406);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10714, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10879, "able_to_transport", loc1))(loc1, ui4_1x)).it_b);
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10252, 1492))(Current, ui4_1x)).it_b);
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {EV_TREE_IMP}.ready_for_pnd_menu */
EIF_TYPED_VALUE F1494_14192 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "ready_for_pnd_menu";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1493, Current, 1, 2, 20407);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20407);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10714, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		ui4_1 = arg1;
		ub1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10880, "ready_for_pnd_menu", loc1))(loc1, ui4_1x, ub1x)).it_b);
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		ui4_1 = arg1;
		ub1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10255, 1492))(Current, ui4_1x, ub1x)).it_b);
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef ub1
#undef arg2
#undef arg1
}

/* {EV_TREE_IMP}.disable_transport */
void F1494_14193 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1493, Current, 0, 0, 20408);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20408);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10204, 1492))(Current);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10712, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_transport_disabled", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10214, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
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
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_TREE_IMP}.update_pnd_status */
void F1494_14194 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "update_pnd_status";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
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
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc5);
	RTLR(5,loc4);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1493, Current, 5, 0, 20409);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20409);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(3, 0xF800008E, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2381, "cursor", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(2);
	RTDBGAL(5, 0xF8000153, 0, 0); /* loc5 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2409, "start", loc5))(loc5);
	RTHOOK(4);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		tb1 = '\01';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc5))(loc5)).it_i4);
		if (!(EIF_BOOLEAN) (loc2 > ti4_1)) {
			tb1 = loc1;
		}
		if (tb1) break;
		RTHOOK(6);
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2796, "go_i_th", loc5))(loc5, ui4_1x);
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2375, "item", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(8);
			RTDBGAL(4, 0xF80005EB, 0, 0); /* loc4 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2375, "item", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = RTCCL(tr2);
			loc4 = RTRV(eif_new_type(1515, 0x00), loc4);
			if (RTAL & CK_CHECK) {
				RTHOOK(9);
				RTCT("a_tree_node_imp /= Void", EX_CHECK);
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				RTHOOK(11);
				RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10878, "is_transport_enabled_iterator", loc4))(loc4)).it_b);
				loc1 = (EIF_BOOLEAN) tb2;
			}
		}
		RTHOOK(12);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(13);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2383, "go_to", loc5))(loc5, ur1x);
	RTHOOK(14);
	ub1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10713, dtype))(Current, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ub1
}

/* {EV_TREE_IMP}.update_pnd_connection */
void F1494_14195 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_pnd_connection";
	RTEX;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1493, Current, 0, 1, 20410);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20410);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10214, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		tb1 = '\01';
		if (!arg1) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10189, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb1) {
			RTHOOK(3);
			RTDBGAA(Current, dtype, 10214, 0x04000000, 1); /* is_transport_enabled */
			*(EIF_BOOLEAN *)(Current + RTWA(10214, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		RTHOOK(4);
		tb1 = '\0';
		if ((EIF_BOOLEAN) !arg1) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10189, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 == NULL);
		}
		if (tb1) {
			RTHOOK(5);
			RTDBGAA(Current, dtype, 10214, 0x04000000, 1); /* is_transport_enabled */
			*(EIF_BOOLEAN *)(Current + RTWA(10214, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
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
#undef arg1
}

/* {EV_TREE_IMP}.on_mouse_button_event */
void F1494_14196 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x)
{
	GTCX
	char *l_feature_name = "on_mouse_button_event";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
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
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
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
	
	RTEAA(l_feature_name, 1493, Current, 1, 9, 20411);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20411);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80005EB, 0, 0); /* loc1 */
	ui4_1 = arg2;
	ui4_2 = arg3;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7229, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 10714, 0xF80005EB, 0); /* pnd_row_imp */
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(10714, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = '\01';
		ui4_1 = arg4;
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10879, "able_to_transport", loc1))(loc1, ui4_1x)).it_b);
		if (!tb3) {
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10218, "mode_is_configurable_target_menu", loc1))(loc1)).it_b);
			tb2 = tb3;
		}
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 10714, 0xF80005EB, 0); /* pnd_row_imp */
		*(EIF_REFERENCE *)(Current + RTWA(10714, dtype)) = (EIF_REFERENCE) NULL;
	}
	RTHOOK(5);
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	ui4_4 = arg4;
	ur8_1 = arg5;
	ur8_2 = arg6;
	ur8_3 = arg7;
	ui4_5 = arg8;
	ui4_6 = arg9;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10253, 1492))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur8_1x, ur8_2x, ur8_3x, ui4_5x, ui4_6x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
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

/* {EV_TREE_IMP}.pnd_row_imp */
EIF_TYPED_VALUE F1494_14197 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10714,Dtype(Current)));
	return r;
}


/* {EV_TREE_IMP}.temp_pebble */
EIF_TYPED_VALUE F1494_14198 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10715,Dtype(Current)));
	return r;
}


/* {EV_TREE_IMP}.temp_pebble_function */
EIF_TYPED_VALUE F1494_14199 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10716,Dtype(Current)));
	return r;
}


/* {EV_TREE_IMP}.temp_accept_cursor */
EIF_TYPED_VALUE F1494_14200 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10717,Dtype(Current)));
	return r;
}


/* {EV_TREE_IMP}.temp_deny_cursor */
EIF_TYPED_VALUE F1494_14201 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10718,Dtype(Current)));
	return r;
}


/* {EV_TREE_IMP}.call_pebble_function */
void F1494_14202 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "call_pebble_function";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1493, Current, 2, 4, 20371);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20371);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10715, 0xF8000000, 0); /* temp_pebble */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10189, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(10715, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 10716, 0xF8000183, 0); /* temp_pebble_function */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10190, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(10716, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10714, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 10189, 0xF8000000, 0); /* pebble */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10189, "pebble", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10189, dtype)) = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		RTDBGAA(Current, dtype, 10190, 0xF8000183, 0); /* pebble_function */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10190, "pebble_function", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10190, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10190, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTHOOK(7);
		RTDBGAA(Current, dtype, 10189, 0xF8000000, 0); /* pebble */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,218,218,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg1;
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg2;
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4636, "item", loc2))(loc2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10189, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ur1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_TREE_IMP}.pre_pick_steps */
void F1494_14203 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "pre_pick_steps";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
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
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 ti2_2;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,loc2);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1493, Current, 2, 4, 20372);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20372);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10717, 0xF80004FE, 0); /* temp_accept_cursor */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10193, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(10717, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 10718, 0xF80004FE, 0); /* temp_deny_cursor */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10194, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(10718, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAL(1, 0xF8000000, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10189, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10112, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ur1 = RTCCL(Current);
		ur2 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9809, "on_pick", tr1))(tr1, ur1x, ur2x);
	}
	RTHOOK(6);
	RTDBGAL(2, 0xF80005EB, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10714, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6620, "pick_actions_internal", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6619, "pick_actions", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,218,218,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 3, 1);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg2;
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
		}
		RTHOOK(10);
		RTDBGAA(Current, dtype, 10193, 0xF80004FE, 0); /* accept_cursor */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10193, "accept_cursor", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10193, dtype)) = (EIF_REFERENCE) tr1;
		RTHOOK(11);
		RTDBGAA(Current, dtype, 10194, 0xF80004FE, 0); /* deny_cursor */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10194, "deny_cursor", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(10194, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6620, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(13);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6620, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(13,1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,218,218,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr2 = RTLNTS(typres0.id, 3, 1);
			}
			((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
			((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg2;
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr1))(tr1, ur1x);
		}
	}
	RTHOOK(14);
	RTDBGAA(Current, dtype, 7015, 0x14000000, 1); /* pointer_x */
	ti2_1 = (EIF_INTEGER_16) arg3;
	*(EIF_INTEGER_16 *)(Current + RTWA(7015, dtype)) = (EIF_INTEGER_16) ti2_1;
	RTHOOK(15);
	RTDBGAA(Current, dtype, 7016, 0x14000000, 1); /* pointer_y */
	ti2_1 = (EIF_INTEGER_16) arg4;
	*(EIF_INTEGER_16 *)(Current + RTWA(7016, dtype)) = (EIF_INTEGER_16) ti2_1;
	RTHOOK(16);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		RTHOOK(17);
		ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(10219, dtype));
		ti2_2 = *(EIF_INTEGER_16 *)(Current + RTWA(10220, dtype));
		if (((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti2_1 == (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti2_2 == (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L))))) {
			RTHOOK(18);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10112, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(18,1);
			ui4_1 = arg3;
			ui4_2 = arg4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9706, "set_x_y_origin", tr1))(tr1, ui4_1x, ui4_2x);
		} else {
			RTHOOK(19);
			ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(10219, dtype));
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10057, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
				RTHOOK(20);
				RTDBGAA(Current, dtype, 10219, 0x14000000, 1); /* pick_x */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10057, dtype))(Current)).it_i4);
				RTNHOOK(20,1);
				ti2_1 = (EIF_INTEGER_16) ti4_1;
				*(EIF_INTEGER_16 *)(Current + RTWA(10219, dtype)) = (EIF_INTEGER_16) ti2_1;
			}
			RTHOOK(21);
			ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(10220, dtype));
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10058, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
				RTHOOK(22);
				RTDBGAA(Current, dtype, 10220, 0x14000000, 1); /* pick_y */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10058, dtype))(Current)).it_i4);
				RTNHOOK(22,1);
				ti2_1 = (EIF_INTEGER_16) ti4_1;
				*(EIF_INTEGER_16 *)(Current + RTWA(10220, dtype)) = (EIF_INTEGER_16) ti2_1;
			}
			RTHOOK(23);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10112, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(23,1);
			ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(10219, dtype));
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			ui4_1 = (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (arg3 - arg1));
			ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(10220, dtype));
			ti4_2 = (EIF_INTEGER_32) ti2_1;
			ui4_2 = (EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) (arg4 - arg2));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9706, "set_x_y_origin", tr1))(tr1, ui4_1x, ui4_2x);
		}
	} else {
		RTHOOK(24);
		tb1 = '\0';
		ti2_1 = *(EIF_INTEGER_16 *)(loc2 + RTVA(10219, "pick_x", loc2));
		if ((EIF_BOOLEAN)(ti2_1 == (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L))) {
			ti2_1 = *(EIF_INTEGER_16 *)(loc2 + RTVA(10220, "pick_y", loc2));
			tb1 = (EIF_BOOLEAN)(ti2_1 == (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			RTHOOK(25);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10112, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(25,1);
			ui4_1 = arg3;
			ui4_2 = arg4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9706, "set_x_y_origin", tr1))(tr1, ui4_1x, ui4_2x);
		} else {
			RTHOOK(26);
			ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(10219, dtype));
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10057, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
				RTHOOK(27);
				RTDBGAA(Current, dtype, 10219, 0x14000000, 1); /* pick_x */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10057, dtype))(Current)).it_i4);
				RTNHOOK(27,1);
				ti2_1 = (EIF_INTEGER_16) ti4_1;
				*(EIF_INTEGER_16 *)(Current + RTWA(10219, dtype)) = (EIF_INTEGER_16) ti2_1;
			}
			RTHOOK(28);
			ti2_1 = *(EIF_INTEGER_16 *)(Current + RTWA(10220, dtype));
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10726, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
				RTHOOK(29);
				RTDBGAA(Current, dtype, 10220, 0x14000000, 1); /* pick_y */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10726, dtype))(Current)).it_i4);
				RTNHOOK(29,1);
				ti2_1 = (EIF_INTEGER_16) ti4_1;
				*(EIF_INTEGER_16 *)(Current + RTWA(10220, dtype)) = (EIF_INTEGER_16) ti2_1;
			}
			RTHOOK(30);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10112, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(30,1);
			ti2_1 = *(EIF_INTEGER_16 *)(loc2 + RTVA(10219, "pick_x", loc2));
			ti4_1 = (EIF_INTEGER_32) ti2_1;
			ui4_1 = (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (arg3 - arg1));
			ti2_1 = *(EIF_INTEGER_16 *)(loc2 + RTVA(10220, "pick_y", loc2));
			ti4_2 = (EIF_INTEGER_32) ti2_1;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9967, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(30,2);
			tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9341, "attached_interface", loc2))(loc2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
			ur1 = RTCCL(tr3);
			ui4_2 = ((EIF_INTEGER_32) 1L);
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2417, "index_of", tr2))(tr2, ur1x, ui4_2x)).it_i4);
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10726, dtype))(Current)).it_i4);
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) (arg4 - arg2)) + ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L)) * ti4_4)));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9706, "set_x_y_origin", tr1))(tr1, ui4_1x, ui4_2x);
		}
	}
	RTHOOK(31);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10236, dtype))(Current, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef up2
#undef up3
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

/* {EV_TREE_IMP}.reset_pebble_function */
void F1494_14204 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset_pebble_function";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1493, Current, 0, 0, 20373);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20373);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10190, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10189, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = tr4;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10189, 0xF8000000, 0); /* pebble */
	tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10715, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr5 = RTCCL(tr5);
	RTAR(Current, tr5);
	*(EIF_REFERENCE *)(Current + RTWA(10189, dtype)) = (EIF_REFERENCE) tr5;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 10190, 0xF8000183, 0); /* pebble_function */
	tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10716, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr5 = RTCCL(tr5);
	RTAR(Current, tr5);
	*(EIF_REFERENCE *)(Current + RTWA(10190, dtype)) = (EIF_REFERENCE) tr5;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 10715, 0xF8000000, 0); /* temp_pebble */
	*(EIF_REFERENCE *)(Current + RTWA(10715, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 10716, 0xF8000183, 0); /* temp_pebble_function */
	*(EIF_REFERENCE *)(Current + RTWA(10716, dtype)) = (EIF_REFERENCE) NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("pebble_function_preserved", EX_POST);
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10190, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTCO(tr2);
		if (RTCEQ(tr5, tr1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("pebble_without_function", EX_POST);
		tb1 = '\01';
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10190, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr5 == NULL)) {
			tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10189, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTCO(tr4);
			tb1 = RTCEQ(tr5, tr3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("pebble_with_function", EX_POST);
		tb1 = '\01';
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10190, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr5 != NULL)) {
			tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10189, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr5 == NULL);
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
	RTLO(2);
	RTEE;
#undef up1
}

/* {EV_TREE_IMP}.post_drop_steps */
void F1494_14205 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "post_drop_steps";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
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
	
	RTEAA(l_feature_name, 1493, Current, 0, 1, 20374);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20374);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10256, 1492))(Current, ui4_1x);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 10193, 0xF80004FE, 0); /* accept_cursor */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10717, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(10193, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 10194, 0xF80004FE, 0); /* deny_cursor */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10718, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(10194, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 10717, 0xF80004FE, 0); /* temp_accept_cursor */
	*(EIF_REFERENCE *)(Current + RTWA(10717, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 10718, 0xF80004FE, 0); /* temp_deny_cursor */
	*(EIF_REFERENCE *)(Current + RTWA(10718, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 10714, 0xF80005EB, 0); /* pnd_row_imp */
	*(EIF_REFERENCE *)(Current + RTWA(10714, dtype)) = (EIF_REFERENCE) NULL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
#undef arg1
}

/* {EV_TREE_IMP}.item_from_coords */
EIF_TYPED_VALUE F1494_14206 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "item_from_coords";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_POINTER loc4 = (EIF_POINTER) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
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
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
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
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLR(2,tr1);
	RTLR(3,loc7);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLU(SK_POINTER, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_INT32, &loc9);
	
	RTEAA(l_feature_name, 1493, Current, 9, 2, 20375);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20375);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(10727, dtype));
	up1 = tp1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = arg2;
	up2 = (EIF_POINTER *) &(loc1);
	up3 = (EIF_POINTER *) &(loc2);
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
	up4 = tp2;
	tp3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
	up5 = tp3;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5325, 969))(Current, up1x, ui4_1x, ui4_2x, up2x, up3x, up4x, up5x)).it_b);
	loc3 = (EIF_BOOLEAN) tb1;
	RTHOOK(2);
	if (loc3) {
		RTHOOK(3);
		RTDBGAL(4, 0x40000000, 1, 0); /* loc4 */
		up1 = loc1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5336, 969))(Current, up1x)).it_p);
		loc4 = (EIF_POINTER) tp1;
		RTHOOK(4);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		up1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5335, 969))(Current, up1x)).it_i4);
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		RTDBGAL(5, 0xF80000A3, 0, 0); /* loc5 */
		tr1 = RTLN(eif_new_type(163, 0x01).id);
		up1 = loc4;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, 120))(Current)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_1 * loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3173, Dtype(tr1)))(tr1, up1x, ui4_1x);
		RTNHOOK(5,1);
		loc5 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3185, "read_integer_32", loc5))(loc5, ui4_1x)).it_i4);
		loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		RTHOOK(7);
		RTDBGAL(7, 0xF80005EB, 0, 0); /* loc7 */
		loc7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		ui4_1 = loc9;
		tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "i_th", loc7))(loc7, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(7,2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc7 = RTRV(eif_new_type(1515, 0x00), tr2);
		RTHOOK(8);
		RTCT0("a_tree_node_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc7 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(9);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc8 == loc6)) break;
			RTHOOK(11);
			RTDBGAL(9, 0x10000000, 1, 0); /* loc9 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, 120))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (loc8 * ti4_1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3185, "read_integer_32", loc5))(loc5, ui4_1x)).it_i4);
			loc9 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
			RTHOOK(12);
			RTDBGAL(7, 0xF80005EB, 0, 0); /* loc7 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9967, "child_array", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,1);
			ui4_1 = loc9;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "i_th", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,2);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc7 = RTRV(eif_new_type(1515, 0x00), tr1);
			RTHOOK(13);
			RTCT0("a_tree_node_imp /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc7 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			RTHOOK(14);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			loc8++;
		}
		RTHOOK(15);
		RTDBGAL(0, 0xF80005EB, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(loc7);
		RTHOOK(16);
		up1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5324, 969))(Current, up1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(13);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef up4
#undef up5
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {EV_TREE_IMP}.previous_selected_item */
EIF_TYPED_VALUE F1494_14207 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10719,Dtype(Current)));
	return r;
}


/* {EV_TREE_IMP}.append */
void F1494_14208 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1493, Current, 0, 1, 20377);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20377);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,281,0xFF01,1366,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1493, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("sequence_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
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
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9950, 1476))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("count_increased", EX_POST);
		RTCO(tr1);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", arg1))(arg1)).it_i4);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9941, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 + ti4_2) == ti4_3)) {
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
#undef arg1
}

/* {EV_TREE_IMP}.insert_i_th */
void F1494_14209 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "insert_i_th";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
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
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1493, Current, 1, 2, 20378);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20378);
	RTCC(arg1, 1493, l_feature_name, 1, RTWCT(9932, dtype, Dftype(Current)), 0x01);
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
	RTDBGAL(1, 0xF80005EB, 0, 0); /* loc1 */
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr2);
	loc1 = RTRV(eif_new_type(1515, 0x00), loc1);
	if (RTAL & CK_CHECK) {
		RTHOOK(3);
		RTCT("item_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(5);
		ur1 = RTCCL(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10883, "set_parent_imp", loc1))(loc1, ur1x);
		RTHOOK(6);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ui4_1 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2796, "go_i_th", tr2))(tr2, ui4_1x);
		RTHOOK(7);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2824, "put_left", tr2))(tr2, ur1x);
		RTHOOK(8);
		ur1 = RTCCL(Current);
		ur2 = NULL;
		ui4_1 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10885, "add_item_and_children_to_parent_tree", loc1))(loc1, ur1x, ur2x, ui4_1x);
		RTHOOK(9);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10723, dtype))(Current, ur1x);
		RTHOOK(10);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10878, "is_transport_enabled_iterator", loc1))(loc1)).it_b);
		if (tb1) {
			RTHOOK(11);
			ub1 = (EIF_BOOLEAN) 1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10713, dtype))(Current, ub1x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
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
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ub1
#undef arg2
#undef arg1
}

/* {EV_TREE_IMP}.remove_i_th */
void F1494_14210 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "remove_i_th";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,loc2);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1493, Current, 2, 1, 20379);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20379);
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
	RTDBGAL(1, 0xF80005EB, 0, 0); /* loc1 */
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ui4_1 = arg1;
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2370, "at", tr2))(tr2, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8413, "implementation", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr2);
	loc1 = RTRV(eif_new_type(1515, 0x00), loc1);
	if (RTAL & CK_CHECK) {
		RTHOOK(3);
		RTCT("item_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(5);
		RTDBGAL(2, 0xF800045C, 0, 0); /* loc2 */
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10882, "list_iter", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr2);
		if (RTAL & CK_CHECK) {
			RTHOOK(6);
			RTCT("l_list_iter /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(8);
			tp1 = *(EIF_POINTER *)(Current + RTWA(10724, dtype));
			up1 = tp1;
			tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1101, "item", loc2))(loc2)).it_p);
			up2 = tp2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5413, 969))(Current, up1x, up2x);
			RTHOOK(9);
			ur1 = NULL;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10883, "set_parent_imp", loc1))(loc1, ur1x);
			RTHOOK(10);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			ui4_1 = arg1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2796, "go_i_th", tr2))(tr2, ui4_1x);
			RTHOOK(11);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2380, "remove", tr2))(tr2);
			RTHOOK(12);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10712, dtype))(Current);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
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
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_TREE_IMP}.get_text_from_position */
EIF_TYPED_VALUE F1494_14211 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_text_from_position";
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
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,tr2);
	RTLR(6,Result);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1493, Current, 4, 1, 20380);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20380);
	RTCC(arg1, 1493, l_feature_name, 1, eif_new_type(1515, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10722, dtype))(Current)).it_p);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(2);
	up1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5201, 969))(Current, up1x);
	RTHOOK(3);
	RTDBGAL(4, 0xF800045C, 0, 0); /* loc4 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10882, "list_iter", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_CHECK) {
		RTHOOK(4);
		RTCT("l_list_iter /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		RTHOOK(6);
		tp1 = *(EIF_POINTER *)(Current + RTWA(10724, dtype));
		up1 = tp1;
		tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1101, "item", loc4))(loc4)).it_p);
		up2 = tp2;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		up3 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5351, 969))(Current, up1x, up2x, ui4_1x, up3x);
	}
	RTHOOK(7);
	RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
	up1 = loc1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5403, 969))(Current, up1x)).it_p);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(8);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(loc2 != tp1)) {
		RTHOOK(9);
		RTDBGAL(3, 0xF80004D4, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10112, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9841, "reusable_gtk_c_string", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(10);
		up1 = loc1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5403, 969))(Current, up1x)).it_p);
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8170, "share_from_pointer", loc3))(loc3, up1x);
		RTHOOK(11);
		RTDBGAL(0, 0xF80000EE, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8166, "string", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(12);
		RTDBGAL(0, 0xF80000EE, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(238, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
		RTNHOOK(12,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef ui4_1
#undef arg1
}

/* {EV_TREE_IMP}.set_text_on_position */
void F1494_14212 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_text_on_position";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
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
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,ur1);
	RTLR(7,loc3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1493, Current, 3, 2, 20381);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20381);
	RTCC(arg1, 1493, l_feature_name, 1, eif_new_type(1515, 0x01), 0x01);
	RTCC(arg2, 1493, l_feature_name, 2, eif_new_type(229, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80004D4, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10112, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9841, "reusable_gtk_c_string", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(2);
	ur1 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8169, "share_with_eiffel_string", loc1))(loc1, ur1x);
	RTHOOK(3);
	RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10722, dtype))(Current)).it_p);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(4);
	up1 = loc2;
	tp1 = *(EIF_POINTER *)(loc1 + RTVA(8165, "item", loc1));
	up2 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5404, 969))(Current, up1x, up2x);
	RTHOOK(5);
	RTDBGAL(3, 0xF800045C, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10882, "list_iter", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_CHECK) {
		RTHOOK(6);
		RTCT("l_list_iter /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTHOOK(8);
		tp1 = *(EIF_POINTER *)(Current + RTWA(10724, dtype));
		up1 = tp1;
		tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1101, "item", loc3))(loc3)).it_p);
		up2 = tp2;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		up3 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5415, 969))(Current, up1x, up2x, ui4_1x, up3x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
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

/* {EV_TREE_IMP}.g_value_string_struct */
RTOID (F1494_14213)
EIF_TYPED_VALUE F1494_14213 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "g_value_string_struct";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_POINTER)
	RTOTDB(EIF_POINTER, F1494_14213);
	dtype = Dtype(Current);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1493, Current, 0, 0, 20382);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20382);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0x40000000, 1,0); /* Result */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5391, 969))(Current)).it_p);
	Result = (EIF_POINTER) tp1;
	RTHOOK(2);
	up1 = Result;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5395, 969))(Current, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef up1
#undef Result
}

/* {EV_TREE_IMP}.update_row_pixmap */
void F1494_14214 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_row_pixmap";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
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
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1493, Current, 2, 1, 20383);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20383);
	RTCC(arg1, 1493, l_feature_name, 1, eif_new_type(1515, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(arg1 + RTVA(10893, "gdk_pixbuf", arg1));
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(2);
	RTDBGAL(2, 0xF800045C, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10882, "list_iter", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_CHECK) {
		RTHOOK(3);
		RTCT("l_list_iter /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(5);
		tp1 = *(EIF_POINTER *)(Current + RTWA(10724, dtype));
		up1 = tp1;
		tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1101, "item", loc2))(loc2)).it_p);
		up2 = tp2;
		ui4_1 = ((EIF_INTEGER_32) 0L);
		up3 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5417, 969))(Current, up1x, up2x, ui4_1x, up3x);
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
#undef up3
#undef ui4_1
#undef arg1
}

/* {EV_TREE_IMP}.tree_store */
EIF_TYPED_VALUE F1494_14215 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(10724,Dtype(Current)));
	return r;
}


/* {EV_TREE_IMP}.set_row_height */
void F1494_14216 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_row_height";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
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
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_POINTER, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	
	RTEAA(l_feature_name, 1493, Current, 5, 1, 20385);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20385);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(10727, dtype));
	up1 = tp1;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5356, 969))(Current, up1x, ui4_1x)).it_p);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(2);
	RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
	up1 = loc1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5327, 969))(Current, up1x)).it_p);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(3);
	RTDBGAL(3, 0x40000000, 1, 0); /* loc3 */
	up1 = loc2;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5745, 970))(Current, up1x, ui4_1x)).it_p);
	loc3 = (EIF_POINTER) tp1;
	RTHOOK(4);
	RTDBGAL(4, 0xF80004D4, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(1236, 0x00).id);
	tr2 = RTMS_EX_H("vertical-separator",18,1613565554);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8168, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(4,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(Current + RTWA(10727, dtype));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(loc4 + RTVA(8165, "item", loc4));
	up2 = tp2;
	up3 = (EIF_INTEGER_32 *) &(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5248, 969))(Current, up1x, up2x, up3x);
	RTHOOK(6);
	RTDBGAL(4, 0xF80004D4, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(1236, 0x00).id);
	tr2 = RTMS_EX_H("height",6,1973632628);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(8168, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(6,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	up1 = loc3;
	tp1 = *(EIF_POINTER *)(loc4 + RTVA(8165, "item", loc4));
	up2 = tp1;
	ui4_1 = (EIF_INTEGER_32) (arg1 - loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5526, 969))(Current, up1x, up2x, ui4_1x);
	RTHOOK(8);
	up1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5740, 970))(Current, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_TREE_IMP}.row_height */
EIF_TYPED_VALUE F1494_14217 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "row_height";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
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
	EIF_TYPED_VALUE up6x = {{0}, SK_POINTER};
#define up6 up6x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
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
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	
	RTEAA(l_feature_name, 1493, Current, 5, 0, 20386);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20386);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	tp1 = *(EIF_POINTER *)(Current + RTWA(10727, dtype));
	up1 = tp1;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5356, 969))(Current, up1x, ui4_1x)).it_p);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(2);
	up1 = loc1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9872, dtype))(Current)).it_p);
	up2 = tp1;
	up3 = (EIF_INTEGER_32 *) &(loc2);
	up4 = (EIF_INTEGER_32 *) &(loc3);
	up5 = (EIF_INTEGER_32 *) &(loc4);
	up6 = (EIF_INTEGER_32 *) &(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5328, 969))(Current, up1x, up2x, up3x, up4x, up5x, up6x);
	RTHOOK(3);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) loc5;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef up4
#undef up5
#undef up6
#undef ui4_1
}

/* {EV_TREE_IMP}.tree_view */
EIF_TYPED_VALUE F1494_14218 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(10727,Dtype(Current)));
	return r;
}


/* {EV_TREE_IMP}.pixmaps_size_changed */
void F1494_14219 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "pixmaps_size_changed";
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
	
	RTEAA(l_feature_name, 1493, Current, 0, 0, 20388);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20388);
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

/* {EV_TREE_IMP}.new_tree_store */
EIF_TYPED_VALUE F1494_14220 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "new_tree_store";
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
	
	RTEAA(l_feature_name, 1493, Current, 0, 0, 20389);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1493, Current, 20389);
	RTIV(Current, RTAL);
	Result = inline_F1494_14220 ();
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

/* {EV_TREE_IMP}.scrollable_area */
EIF_TYPED_VALUE F1494_14221 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(10729,Dtype(Current)));
	return r;
}


/* {EV_TREE_IMP}.interface */
static EIF_TYPED_VALUE F1494_14222_body (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1493, Current, 0, 0, 20391);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1493, Current, 20391);
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

EIF_TYPED_VALUE F1494_14222 (EIF_REFERENCE Current)
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
			r.it_r = (F1494_14222_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(9342,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1494 (void)
{
	GTCX
	RTOTS (14213,F1494_14213)
}


#ifdef __cplusplus
}
#endif
