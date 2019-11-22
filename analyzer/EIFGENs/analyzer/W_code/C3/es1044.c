/*
 * Code for class ES_HTML_GEN_SUITE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1044_9045(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1044_9046(EIF_REFERENCE);
extern void F1044_9047(EIF_REFERENCE);
extern void F1044_9048(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1044_9049(EIF_REFERENCE);
extern void EIF_Minit1044(void);

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

/* {ES_HTML_GEN_SUITE}.make */
void F1044_9045 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
#define arg4 arg4x.it_b
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_b = * (EIF_BOOLEAN *) arg4x.it_r;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Current);
	RTLR(6,tr1);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_BOOL,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1043, Current, 0, 4, 15342);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1043, Current, 15342);
	RTCC(arg1, 1043, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTCC(arg2, 1043, l_feature_name, 2, eif_new_type(232, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1046,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg3, 1043, l_feature_name, 3, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ub1 = arg4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6792, dtype))(Current, ur1x, ur2x, ub1x);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6822, 0xF8000330, 0); /* test_classes */
	tr1 = RTCCL(arg3);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(6822, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6821, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef ur1
#undef ur2
#undef ub1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {ES_HTML_GEN_SUITE}.write_html_report */
void F1044_9046 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "write_html_report";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1043, Current, 0, 0, 15343);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1043, Current, 15343);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6812, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6794, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
}

/* {ES_HTML_GEN_SUITE}.get_statistics */
void F1044_9047 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "get_statistics";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1043, Current, 4, 0, 15344);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1043, Current, 15344);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTCT0("attached test_classes as tc", EX_CHECK);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6822, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6814, 0x10000000, 1); /* number_of_boolean */
	*(EIF_INTEGER_32 *)(Current + RTWA(6814, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 6815, 0x10000000, 1); /* number_passed_boolean */
	*(EIF_INTEGER_32 *)(Current + RTWA(6815, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 6816, 0x10000000, 1); /* number_of_violation */
	*(EIF_INTEGER_32 *)(Current + RTWA(6816, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 6817, 0x10000000, 1); /* number_passed_violation */
	*(EIF_INTEGER_32 *)(Current + RTWA(6817, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 6818, 0x10000000, 1); /* number_of_tests */
	*(EIF_INTEGER_32 *)(Current + RTWA(6818, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 6819, 0x10000000, 1); /* number_passed_tests */
	*(EIF_INTEGER_32 *)(Current + RTWA(6819, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2409, "start", loc2))(loc2);
	for (;;) {
		RTHOOK(9);
		tb1 = *(EIF_BOOLEAN *)(loc2 + RTVA(2891, "after", loc2));
		if (tb1) break;
		RTHOOK(10);
		RTDBGAL(1, 0xF8000416, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2375, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(11);
		RTCT0("attached one_test", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6867, "cases", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = RTCCL(tr1);
		if (EIF_TEST(loc3)) {
			RTHOOK(13);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2409, "start", loc3))(loc3);
			for (;;) {
				RTHOOK(14);
				tb2 = *(EIF_BOOLEAN *)(loc3 + RTVA(2891, "after", loc3));
				if (tb2) break;
				RTHOOK(15);
				RTCT0("attached cases1.item as item1", EX_CHECK);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2375, "item", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc4 = RTCCL(tr1);
				if (EIF_TEST(loc4)) {
					RTCK0;
				} else {
					RTCF0;
				}
				RTHOOK(16);
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7223, "is_violation_case", loc4))(loc4)).it_b);
				if (tb3) {
					RTHOOK(17);
					tb3 = *(EIF_BOOLEAN *)(loc4 + RTVA(7226, "passed", loc4));
					if (tb3) {
						RTHOOK(18);
						RTDBGAA(Current, dtype, 6817, 0x10000000, 1); /* number_passed_violation */
						(*(EIF_INTEGER_32 *)(Current + RTWA(6817, dtype)))++;
						RTHOOK(19);
						RTDBGAA(Current, dtype, 6819, 0x10000000, 1); /* number_passed_tests */
						(*(EIF_INTEGER_32 *)(Current + RTWA(6819, dtype)))++;
					}
					RTHOOK(20);
					RTDBGAA(Current, dtype, 6816, 0x10000000, 1); /* number_of_violation */
					(*(EIF_INTEGER_32 *)(Current + RTWA(6816, dtype)))++;
				} else {
					RTHOOK(21);
					tb3 = *(EIF_BOOLEAN *)(loc4 + RTVA(7226, "passed", loc4));
					if (tb3) {
						RTHOOK(22);
						RTDBGAA(Current, dtype, 6815, 0x10000000, 1); /* number_passed_boolean */
						(*(EIF_INTEGER_32 *)(Current + RTWA(6815, dtype)))++;
						RTHOOK(23);
						RTDBGAA(Current, dtype, 6819, 0x10000000, 1); /* number_passed_tests */
						(*(EIF_INTEGER_32 *)(Current + RTWA(6819, dtype)))++;
					}
					RTHOOK(24);
					RTDBGAA(Current, dtype, 6814, 0x10000000, 1); /* number_of_boolean */
					(*(EIF_INTEGER_32 *)(Current + RTWA(6814, dtype)))++;
				}
				RTHOOK(25);
				RTDBGAA(Current, dtype, 6818, 0x10000000, 1); /* number_of_tests */
				(*(EIF_INTEGER_32 *)(Current + RTWA(6818, dtype)))++;
				RTHOOK(26);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2425, "forth", loc3))(loc3);
			}
		}
		RTHOOK(27);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2425, "forth", loc2))(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
}

/* {ES_HTML_GEN_SUITE}.write_summary_details */
void F1044_9048 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "write_summary_details";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,ur1);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLR(9,loc7);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 1043, Current, 7, 0, 15345);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1043, Current, 15345);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6822, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = RTCCL(tr1);
	if (EIF_TEST(loc3)) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(3);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3711, "after", loc4))(loc4)).it_b);
			if (tb1) break;
			RTHOOK(4);
			RTDBGAL(1, 0xF8000416, 0, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3710, "item", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(5);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6810, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			tr2 = RTMS_EX_H("<tr><td bgcolor=\"#008080\" align=\"center\"><font color=\"#FFCC00\"><b>Test",70,1820928116);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3457, "putstring", tr1))(tr1, ur1x);
			RTHOOK(7);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6810, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3463, "putint", tr1))(tr1, ui4_1x);
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6810, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			tr2 = RTMS_EX_H("</b></font></td>\012<td bgcolor=\"#008080\" align=\"center\" colspan=\"2\"><font color=\"#FFCC00\">",88,814849086);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3457, "putstring", tr1))(tr1, ur1x);
			RTHOOK(9);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTHOOK(10);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6868, "name", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc5 = RTCCL(tr1);
				if (EIF_TEST(loc5)) {
					RTHOOK(11);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6810, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(11,1);
					ur1 = RTCCL(loc5);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3457, "putstring", tr1))(tr1, ur1x);
				}
				RTHOOK(12);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6810, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(12,1);
				tr2 = RTMS_EX_H("</font></td></tr>",17,624609342);
				ur1 = tr2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3457, "putstring", tr1))(tr1, ur1x);
				RTHOOK(13);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6867, "cases", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc6 = RTCCL(tr1);
				if (EIF_TEST(loc6)) {
					RTHOOK(14);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc7 = (EIF_REFERENCE) RTCCL(tr1);
					for (;;) {
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3711, "after", loc7))(loc7)).it_b);
						if (tb2) break;
						RTHOOK(15);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3710, "item", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6807, dtype))(Current, ur1x);
						RTHOOK(16);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3712, "forth", loc7))(loc7);
					}
				}
			}
			RTHOOK(17);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3712, "forth", loc4))(loc4);
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
#undef up1
#undef ur1
#undef ui4_1
}

/* {ES_HTML_GEN_SUITE}.test_classes */
EIF_TYPED_VALUE F1044_9049 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6822,Dtype(Current)));
	return r;
}


void EIF_Minit1044 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
