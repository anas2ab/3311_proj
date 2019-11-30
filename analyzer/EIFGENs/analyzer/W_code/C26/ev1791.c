/*
 * Code for class EV_RICH_TEXT_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1791_20040(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1791_20041(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1791_20045(EIF_REFERENCE);
extern void F1791_20057(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1791_20058(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1791_20059(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1791_20060(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1791_20061(EIF_REFERENCE);
static EIF_TYPED_VALUE F1791_20072_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1791_20072(EIF_REFERENCE);
extern void EIF_Minit1791(void);

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

/* {EV_RICH_TEXT_I}.buffer_locked_in_format_mode */
EIF_TYPED_VALUE F1791_20040 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(16719,Dtype(Current)));
	return r;
}


/* {EV_RICH_TEXT_I}.buffer_locked_in_append_mode */
EIF_TYPED_VALUE F1791_20041 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(16720,Dtype(Current)));
	return r;
}


/* {EV_RICH_TEXT_I}.tab_positions */
EIF_TYPED_VALUE F1791_20045 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(16724,Dtype(Current)));
	return r;
}


/* {EV_RICH_TEXT_I}.save_to_named_path */
void F1791_20057 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "save_to_named_path";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc13 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(18);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,loc9);
	RTLR(9,tr7);
	RTLR(10,ur1);
	RTLR(11,loc7);
	RTLR(12,loc11);
	RTLR(13,loc12);
	RTLR(14,tr8);
	RTLR(15,loc8);
	RTLR(16,ur2);
	RTLR(17,loc10);
	RTLIU(18);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_BOOL, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_INT32, &loc15);
	
	RTEAA(l_feature_name, 1790, Current, 15, 1, 26226);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1790, Current, 26226);
	RTCC(arg1, 1790, l_feature_name, 1, eif_new_type(185, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("filename_not_void", EX_PRE);
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
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16320, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16678, dtype))(Current)).it_i4);
		ti4_1 = ti4_2;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16679, dtype))(Current)).it_b);
		tb1 = tb2;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16680, dtype))(Current)).it_i4);
		ti4_2 = ti4_3;
		tr5 = NULL;
		RTE_O
		tr5 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16681, dtype))(Current)).it_i4);
		ti4_3 = ti4_4;
		tr6 = NULL;
		RTE_O
		tr6 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	RTDBGAL(9, 0xF8000753, 0, 0); /* loc9 */
	tr7 = RTLN(eif_new_type(1875, 0x01).id);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17597, Dtype(tr7)))(tr7, ur1x);
	RTNHOOK(2,1);
	loc9 = (EIF_REFERENCE) RTCCL(tr7);
	RTHOOK(3);
	RTDBGAL(7, 0xF80000EE, 0, 0); /* loc7 */
	tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16320, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc7 = (EIF_REFERENCE) RTCCL(tr7);
	RTHOOK(4);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_4 = *(EIF_INTEGER_32 *)(loc7 + RTVA(4910, "count", loc7));
	loc1 = (EIF_INTEGER_32) ti4_4;
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16745, dtype))(Current);
	RTHOOK(6);
	ur1 = RTCCL(loc7);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17603, "generate_paragraph_information", loc9))(loc9, ur1x);
	RTHOOK(7);
	RTDBGAL(11, 0xF800022C, 0, 0); /* loc11 */
	tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17651, "paragraph_start_indexes", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc11 = (EIF_REFERENCE) RTCCL(tr7);
	RTHOOK(8);
	RTDBGAL(12, 0xF800010E, 0, 0); /* loc12 */
	tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17652, "paragraph_formats", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc12 = (EIF_REFERENCE) RTCCL(tr7);
	RTHOOK(9);
	RTCT0("paragraph_formats /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc12 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(10);
	RTCT0("paragraph_indexes /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc11 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(11);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(12);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(13);
	tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17602, "internal_text", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(13,1);
	ui4_1 = loc2;
	tr8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "i_th", loc12))(loc12, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr8);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4929, "append", tr7))(tr7, ur1x);
	RTHOOK(14);
	ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", loc12))(loc12)).it_i4);
	if ((EIF_BOOLEAN)(ti4_4 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(15);
		RTDBGAL(13, 0x04000000, 1, 0); /* loc13 */
		loc13 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(16);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2++;
	RTHOOK(17);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(18);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(19);
		if ((EIF_BOOLEAN) (loc6 >= loc1)) break;
		RTHOOK(20);
		RTDBGAL(8, 0xF80006B1, 0, 0); /* loc8 */
		ui4_1 = (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L));
		tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16742, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc8 = (EIF_REFERENCE) RTCCL(tr7);
		RTHOOK(21);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		ui4_1 = loc6;
		ui4_2 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16739, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
		loc6 = (EIF_INTEGER_32) ti4_4;
		RTHOOK(22);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc6 > loc5) && (EIF_BOOLEAN) !loc13)) {
			RTHOOK(23);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			ui4_1 = loc2;
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "i_th", loc11))(loc11, ui4_1x)).it_i4);
			loc5 = (EIF_INTEGER_32) ti4_4;
			RTHOOK(24);
			if ((EIF_BOOLEAN)(loc5 != loc3)) {
				RTHOOK(25);
				ui4_1 = loc3;
				ui4_2 = (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
				tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4722, "substring", loc7))(loc7, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr7);
				ur2 = RTCCL(loc8);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17600, "append_text_for_rtf", loc9))(loc9, ur1x, ur2x);
				RTHOOK(26);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3 = (EIF_INTEGER_32) loc5;
			}
			for (;;) {
				RTHOOK(27);
				tb2 = '\01';
				ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", loc12))(loc12)).it_i4);
				if (!(EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)) > ti4_4)) {
					ui4_1 = loc2;
					ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "i_th", loc11))(loc11, ui4_1x)).it_i4);
					tb2 = (EIF_BOOLEAN) (ti4_4 >= loc6);
				}
				if (tb2) break;
				RTHOOK(28);
				tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17602, "internal_text", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(28,1);
				ui4_1 = loc2;
				tr8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "i_th", loc12))(loc12, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr8);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4929, "append", tr7))(tr7, ur1x);
				RTHOOK(29);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
				RTHOOK(30);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				ui4_1 = loc2;
				ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "i_th", loc11))(loc11, ui4_1x)).it_i4);
				RTNHOOK(30,1);
				ui4_1 = loc6;
				ti4_5 = eif_min_int32 (ti4_4,ui4_1);
				loc5 = (EIF_INTEGER_32) ti4_5;
				RTHOOK(31);
				ui4_1 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
				ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "i_th", loc11))(loc11, ui4_1x)).it_i4);
				ui4_1 = ti4_4;
				ui4_2 = (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
				tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4722, "substring", loc7))(loc7, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr7);
				ur2 = RTCCL(loc8);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17600, "append_text_for_rtf", loc9))(loc9, ur1x, ur2x);
				RTHOOK(32);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3 = (EIF_INTEGER_32) loc5;
			}
			RTHOOK(33);
			ui4_1 = loc2;
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "i_th", loc11))(loc11, ui4_1x)).it_i4);
			if ((EIF_BOOLEAN) (loc6 > ti4_4)) {
				RTHOOK(34);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
			}
			RTHOOK(35);
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", loc11))(loc11)).it_i4);
			if ((EIF_BOOLEAN) (loc2 > ti4_4)) {
				RTHOOK(36);
				RTDBGAL(13, 0x04000000, 1, 0); /* loc13 */
				loc13 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(37);
				tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17602, "internal_text", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(37,1);
				ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", loc12))(loc12)).it_i4);
				ui4_1 = ti4_4;
				tr8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2252, "i_th", loc12))(loc12, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr8);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4929, "append", tr7))(tr7, ur1x);
				RTHOOK(38);
				if ((EIF_BOOLEAN) (loc3 < loc6)) {
					RTHOOK(39);
					ui4_1 = loc3;
					ui4_2 = (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L));
					tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4722, "substring", loc7))(loc7, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr7);
					ur2 = RTCCL(loc8);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17600, "append_text_for_rtf", loc9))(loc9, ur1x, ur2x);
					RTHOOK(40);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3 = (EIF_INTEGER_32) loc6;
				}
			}
		} else {
			RTHOOK(41);
			ui4_1 = loc3;
			ti4_4 = *(EIF_INTEGER_32 *)(loc7 + RTVA(4910, "count", loc7));
			ui4_2 = ti4_4;
			ti4_4 = eif_min_int32 ((EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L)),ui4_2);
			ui4_2 = ti4_4;
			tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4722, "substring", loc7))(loc7, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr7);
			ur2 = RTCCL(loc8);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(17600, "append_text_for_rtf", loc9))(loc9, ur1x, ur2x);
			RTHOOK(42);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (EIF_INTEGER_32) loc6;
		}
		RTHOOK(43);
		tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8553, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr7 != NULL)) {
			RTHOOK(44);
			RTDBGAL(15, 0x10000000, 1, 0); /* loc15 */
			loc15 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 * ((EIF_INTEGER_32) 100L)) / (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)));
			RTHOOK(45);
			if ((EIF_BOOLEAN)(loc15 != loc14)) {
				RTHOOK(46);
				RTDBGAL(14, 0x10000000, 1, 0); /* loc14 */
				loc14 = (EIF_INTEGER_32) loc15;
				RTHOOK(47);
				tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8553, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(47,1);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,218,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
					tr8 = RTLNTS(typres0.id, 2, 1);
				}
				((EIF_TYPED_VALUE *)tr8+1)->it_i4 = loc15;
				ur1 = RTCCL(tr8);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", tr7))(tr7, ur1x);
			}
		}
	}
	if (RTAL & CK_CHECK) {
		RTHOOK(48);
		RTCT("counter_set_to_length_plus_one", EX_CHECK);
		if ((EIF_BOOLEAN)(loc6 == (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(49);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(17606, "generate_complete_rtf_from_buffering", loc9))(loc9);
	RTHOOK(50);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16746, dtype))(Current);
	RTHOOK(51);
	RTDBGAL(10, 0xF80000B6, 0, 0); /* loc10 */
	tr7 = RTLN(eif_new_type(182, 0x01).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3632, Dtype(tr7)))(tr7, ur1x);
	RTNHOOK(51,1);
	loc10 = (EIF_REFERENCE) RTCCL(tr7);
	RTHOOK(52);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3682, "open_write", loc10))(loc10);
	RTHOOK(53);
	tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17602, "internal_text", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(53,1);
	tr8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4698, "as_string_8", tr7))(tr7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr8);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3562, "put_string", loc10))(loc10, ur1x);
	RTHOOK(54);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3559, "close", loc10))(loc10);
	if (RTAL & CK_ENSURE) {
		RTHOOK(55);
		RTCT("text_not_changed", EX_POST);
		tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16320, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(55,1);
		RTCO(tr2);
		ur1 = RTCCL(tr1);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr7))(tr7, ur1x)).it_b);
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(56);
		RTCT("caret_not_moved", EX_POST);
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16678, dtype))(Current)).it_i4);
		RTCO(tr3);
		if ((EIF_BOOLEAN)(ti4_4 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(57);
		RTCT("selection_not_changed", EX_POST);
		tb3 = '\01';
		tb4 = '\0';
		RTCO(tr4);
		tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16679, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN)(tb1 == tb5)) {
			tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16679, dtype))(Current)).it_b);
			tb4 = tb5;
		}
		if (tb4) {
			tb4 = '\0';
			RTCO(tr5);
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16680, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN)(ti4_2 == ti4_4)) {
				RTCO(tr6);
				ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16681, dtype))(Current)).it_i4);
				tb4 = (EIF_BOOLEAN)(ti4_3 == ti4_4);
			}
			tb3 = tb4;
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(58);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(18);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {EV_RICH_TEXT_I}.set_with_named_path */
void F1791_20058 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_with_named_path";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
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
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,tr5);
	RTLR(8,loc1);
	RTLR(9,tr6);
	RTLR(10,loc2);
	RTLR(11,loc3);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1790, Current, 3, 1, 26227);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1790, Current, 26227);
	RTCC(arg1, 1790, l_feature_name, 1, eif_new_type(185, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("filename_not_void", EX_PRE);
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
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16320, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16320, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
		tb1 = tb2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16678, dtype))(Current)).it_i4);
		ti4_1 = ti4_2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16679, dtype))(Current)).it_b);
		tb2 = tb3;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16680, dtype))(Current)).it_i4);
		ti4_2 = ti4_3;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16681, dtype))(Current)).it_i4);
		ti4_3 = ti4_4;
		tr5 = NULL;
		RTE_O
		tr5 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16747, dtype))(Current);
	RTHOOK(3);
	RTDBGAL(1, 0xF80000B6, 0, 0); /* loc1 */
	tr6 = RTLN(eif_new_type(182, 0x01).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3632, Dtype(tr6)))(tr6, ur1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr6);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3681, "open_read", loc1))(loc1);
	RTHOOK(5);
	ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2269, "count", loc1))(loc1)).it_i4);
	ui4_1 = ti4_4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3601, "read_stream", loc1))(loc1, ui4_1x);
	RTHOOK(6);
	RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
	tr6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3535, "last_string", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr6);
	if (RTAL & CK_CHECK) {
		RTHOOK(7);
		RTCT("l_text /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3559, "close", loc1))(loc1);
	RTHOOK(9);
	RTDBGAL(3, 0xF8000753, 0, 0); /* loc3 */
	tr6 = RTLN(eif_new_type(1875, 0x01).id);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(17597, Dtype(tr6)))(tr6, ur1x);
	RTNHOOK(9,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr6);
	RTHOOK(10);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17604, "set_with_rtf", loc3))(loc3, ur1x);
	RTHOOK(11);
	RTDBGAA(Current, dtype, 16738, 0x04000000, 1); /* last_load_successful */
	tb3 = *(EIF_BOOLEAN *)(loc3 + RTVA(17605, "last_load_successful", loc3));
	*(EIF_BOOLEAN *)(Current + RTWA(16738, dtype)) = (EIF_BOOLEAN) tb3;
	RTHOOK(12);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16748, dtype))(Current);
	RTHOOK(13);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16684, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("caret_reset_if_successful", EX_POST);
		tb3 = '\01';
		tb4 = *(EIF_BOOLEAN *)(Current + RTWA(16738, dtype));
		if (tb4) {
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16678, dtype))(Current)).it_i4);
			tb3 = (EIF_BOOLEAN)(ti4_4 == ((EIF_INTEGER_32) 1L));
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("unselected_if_successful", EX_POST);
		tb3 = '\01';
		tb4 = *(EIF_BOOLEAN *)(Current + RTWA(16738, dtype));
		if (tb4) {
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16679, dtype))(Current)).it_b);
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("text_not_changed_if_failed", EX_POST);
		tb3 = '\01';
		tb4 = *(EIF_BOOLEAN *)(Current + RTWA(16738, dtype));
		if ((EIF_BOOLEAN) !tb4) {
			RTCO(tr1);
			tb3 = tb1;
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("caret_not_moved_if_failed", EX_POST);
		tb3 = '\01';
		tb4 = *(EIF_BOOLEAN *)(Current + RTWA(16738, dtype));
		if ((EIF_BOOLEAN) !tb4) {
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16678, dtype))(Current)).it_i4);
			RTCO(tr2);
			tb3 = (EIF_BOOLEAN)(ti4_4 == ti4_1);
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("selection_not_changed_if_failed", EX_POST);
		tb3 = '\01';
		tb4 = *(EIF_BOOLEAN *)(Current + RTWA(16738, dtype));
		if ((EIF_BOOLEAN) !tb4) {
			tb4 = '\01';
			tb5 = '\0';
			RTCO(tr3);
			tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16679, dtype))(Current)).it_b);
			if ((EIF_BOOLEAN)(tb2 == tb6)) {
				tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16679, dtype))(Current)).it_b);
				tb5 = tb6;
			}
			if (tb5) {
				tb5 = '\0';
				RTCO(tr4);
				ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16680, dtype))(Current)).it_i4);
				if ((EIF_BOOLEAN)(ti4_2 == ti4_4)) {
					RTCO(tr5);
					ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16681, dtype))(Current)).it_i4);
					tb5 = (EIF_BOOLEAN)(ti4_3 == ti4_4);
				}
				tb4 = tb5;
			}
			tb3 = tb4;
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_RICH_TEXT_I}.last_load_successful */
EIF_TYPED_VALUE F1791_20059 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(16738,Dtype(Current)));
	return r;
}


/* {EV_RICH_TEXT_I}.next_change_of_character */
EIF_TYPED_VALUE F1791_20060 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "next_change_of_character";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	
	RTEAA(l_feature_name, 1790, Current, 5, 2, 26229);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1790, Current, 26229);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < arg2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("maximum_pos_valid", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16673, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg1;
	RTHOOK(4);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16740, dtype))(Current)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16740, dtype))(Current)).it_i4);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(7);
		tb1 = '\01';
		ti4_1 = eif_abs_int32 ((EIF_INTEGER_32) (loc5 - loc2));
		if (!(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			tb1 = (EIF_BOOLEAN)(loc1 == arg2);
		}
		if (tb1) break;
		RTHOOK(8);
		tb2 = '\0';
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + loc3) <= arg2)) {
			ui4_1 = loc1;
			ui4_2 = (EIF_INTEGER_32) (loc1 + loc3);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16741, dtype))(Current, ui4_1x, ui4_2x)).it_b);
			tb2 = tb3;
		}
		if (tb2) {
			RTHOOK(9);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) loc3;
			RTHOOK(10);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16740, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN)(loc4 == ti4_1)) {
				RTHOOK(11);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16740, dtype))(Current)).it_i4);
				ui4_1 = arg2;
				ti4_2 = eif_min_int32 ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_1) - ((EIF_INTEGER_32) 1L)),ui4_1);
				loc1 = (EIF_INTEGER_32) ti4_2;
				RTHOOK(12);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16740, dtype))(Current)).it_i4);
				loc3 = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(13);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4 /= ((EIF_INTEGER_32) 2L);
				RTHOOK(14);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3 += loc4;
			}
		} else {
			RTHOOK(15);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) loc3;
			RTHOOK(16);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 /= ((EIF_INTEGER_32) 2L);
			RTHOOK(17);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3 -= loc4;
		}
	}
	RTHOOK(18);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ui4_1 = arg2;
	ti4_1 = eif_min_int32 ((EIF_INTEGER_32) (loc1 + loc5),ui4_1);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("result_valid", EX_POST);
		if ((EIF_BOOLEAN) (Result <= arg2)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {EV_RICH_TEXT_I}.default_step */
EIF_TYPED_VALUE F1791_20061 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {EV_RICH_TEXT_I}.interface */
static EIF_TYPED_VALUE F1791_20072_body (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1790, Current, 0, 0, 26232);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1790, Current, 26232);
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

EIF_TYPED_VALUE F1791_20072 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(15741,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(15741, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1791_20072_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(15741,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1791 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
