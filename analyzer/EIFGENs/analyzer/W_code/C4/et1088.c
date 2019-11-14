/*
 * Code for class ETF_TYPE_CONSTRAINTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1088_9410(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1088_9411(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1088_9412(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1088_9413(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1088_9414(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1088(void);

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

/* {ETF_TYPE_CONSTRAINTS}.enum_items */
EIF_TYPED_VALUE F1088_9410 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enum_items";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
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
	
	RTEAA(l_feature_name, 1087, Current, 0, 0, 15665);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1087, Current, 15665);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800039E, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,926,218,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
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
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.enum_items_inverse */
EIF_TYPED_VALUE F1088_9411 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enum_items_inverse";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
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
	
	RTEAA(l_feature_name, 1087, Current, 0, 0, 15666);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1087, Current, 15666);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800027F, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,639,0xFF01,232,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
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
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.evt_param_types_table */
EIF_TYPED_VALUE F1088_9412 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "evt_param_types_table";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_REFERENCE tr10 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(37);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLR(8,tr2);
	RTLR(9,tr3);
	RTLR(10,loc4);
	RTLR(11,loc5);
	RTLR(12,tr4);
	RTLR(13,tr5);
	RTLR(14,tr6);
	RTLR(15,tr7);
	RTLR(16,tr8);
	RTLR(17,tr9);
	RTLR(18,tr10);
	RTLR(19,ur3);
	RTLR(20,loc6);
	RTLR(21,loc7);
	RTLR(22,loc8);
	RTLR(23,loc9);
	RTLR(24,loc10);
	RTLR(25,loc11);
	RTLR(26,loc12);
	RTLR(27,loc13);
	RTLR(28,loc14);
	RTLR(29,loc15);
	RTLR(30,loc16);
	RTLR(31,loc17);
	RTLR(32,loc18);
	RTLR(33,loc19);
	RTLR(34,loc20);
	RTLR(35,loc21);
	RTLR(36,loc22);
	RTLIU(37);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_REF, &loc20);
	RTLU(SK_REF, &loc21);
	RTLU(SK_REF, &loc22);
	
	RTEAA(l_feature_name, 1087, Current, 22, 0, 15667);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1087, Current, 15667);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800027A, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,634,0xFF01,1072,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", Result))(Result);
	RTHOOK(3);
	RTDBGAL(1, 0xF800027A, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc1))(loc1);
	RTHOOK(5);
	ur1 = RTCCL(loc1);
	tr1 = RTMS_EX_H("type_check",10,1152524907);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(6);
	RTDBGAL(2, 0xF800027A, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(6,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc2))(loc2);
	RTHOOK(8);
	ur1 = RTCCL(loc2);
	tr1 = RTMS_EX_H("generate_java_code",18,221662309);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(9);
	RTDBGAL(3, 0xF800027A, 0, 0); /* loc3 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(9,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc3))(loc3);
	RTHOOK(11);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("CLASS_NAME",10,708302405);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(11,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(11,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("cn",2,25454);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc3))(loc3, ur1x, ur2x);
	RTHOOK(12);
	ur1 = RTCCL(loc3);
	tr1 = RTMS_EX_H("add_class",9,99889779);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(13);
	RTDBGAL(4, 0xF800027A, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(13,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(14);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc4))(loc4);
	RTHOOK(15);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("CLASS_NAME",10,708302405);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(15,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(15,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("cn",2,25454);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc4))(loc4, ur1x, ur2x);
	RTHOOK(16);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("FEATURE_NAME",12,305795653);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(16,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(16,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("fn",2,26222);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc4))(loc4, ur1x, ur2x);
	RTHOOK(17);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("CLASS_NAME",10,708302405);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(17,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(17,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("ft",2,26228);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc4))(loc4, ur1x, ur2x);
	RTHOOK(18);
	ur1 = RTCCL(loc4);
	tr1 = RTMS_EX_H("add_attribute",13,862525541);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(19);
	RTDBGAL(5, 0xF800027A, 0, 0); /* loc5 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(19,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(20);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc5))(loc5);
	RTHOOK(21);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("CLASS_NAME",10,708302405);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(21,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(21,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("cn",2,25454);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc5))(loc5, ur1x, ur2x);
	RTHOOK(22);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("FEATURE_NAME",12,305795653);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(22,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(22,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("fn",2,26222);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc5))(loc5, ur1x, ur2x);
	RTHOOK(23);
	tr1 = RTLN(eif_new_type(1074, 0x01).id);
	tr2 = RTLN(eif_new_type(1081, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {334,0xFF01,977,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr4) = 2L;
		memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
	}
	tr6 = RTLN(eif_new_type(977, 0x01).id);
	tr7 = RTMS_EX_H("pn",2,28782);
	ur1 = tr7;
	tr8 = RTLN(eif_new_type(1086, 0x01).id);
	tr9 = RTMS_EX_H("VAR_NAME",8,1998039109);
	ur2 = tr9;
	tr10 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr10)))(tr10);
	RTNHOOK(23,1);
	ur3 = RTCCL(tr10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr8)))(tr8, ur2x, ur3x);
	RTNHOOK(23,2);
	ur2 = RTCCL(tr8);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6254, Dtype(tr6)))(tr6, ur1x, ur2x);
	RTNHOOK(23,3);
	tr5 = RTCCL(tr6);
	*((EIF_REFERENCE *)tr4+0) = (EIF_REFERENCE) tr5;
	RTAR(tr4,tr5);
	tr6 = RTLN(eif_new_type(977, 0x01).id);
	tr7 = RTMS_EX_H("ft",2,26228);
	ur1 = tr7;
	tr8 = RTLN(eif_new_type(1086, 0x01).id);
	tr9 = RTMS_EX_H("CLASS_NAME",10,708302405);
	ur2 = tr9;
	tr10 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr10)))(tr10);
	RTNHOOK(23,4);
	ur3 = RTCCL(tr10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr8)))(tr8, ur2x, ur3x);
	RTNHOOK(23,5);
	ur2 = RTCCL(tr8);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6254, Dtype(tr6)))(tr6, ur1x, ur2x);
	RTNHOOK(23,6);
	tr5 = RTCCL(tr6);
	*((EIF_REFERENCE *)tr4+1) = (EIF_REFERENCE) tr5;
	RTAR(tr4,tr5);
	tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr4)))(tr4).it_r;
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7124, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(23,7);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7119, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(23,8);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("ps",2,28787);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc5))(loc5, ur1x, ur2x);
	RTHOOK(24);
	ur1 = RTCCL(loc5);
	tr1 = RTMS_EX_H("add_command",11,762277476);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(25);
	RTDBGAL(6, 0xF800027A, 0, 0); /* loc6 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(25,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(26);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc6))(loc6);
	RTHOOK(27);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("CLASS_NAME",10,708302405);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(27,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(27,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("cn",2,25454);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc6))(loc6, ur1x, ur2x);
	RTHOOK(28);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("FEATURE_NAME",12,305795653);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(28,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(28,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("fn",2,26222);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc6))(loc6, ur1x, ur2x);
	RTHOOK(29);
	tr1 = RTLN(eif_new_type(1074, 0x01).id);
	tr2 = RTLN(eif_new_type(1081, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {334,0xFF01,977,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr4) = 2L;
		memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
	}
	tr6 = RTLN(eif_new_type(977, 0x01).id);
	tr7 = RTMS_EX_H("pn",2,28782);
	ur1 = tr7;
	tr8 = RTLN(eif_new_type(1086, 0x01).id);
	tr9 = RTMS_EX_H("VAR_NAME",8,1998039109);
	ur2 = tr9;
	tr10 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr10)))(tr10);
	RTNHOOK(29,1);
	ur3 = RTCCL(tr10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr8)))(tr8, ur2x, ur3x);
	RTNHOOK(29,2);
	ur2 = RTCCL(tr8);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6254, Dtype(tr6)))(tr6, ur1x, ur2x);
	RTNHOOK(29,3);
	tr5 = RTCCL(tr6);
	*((EIF_REFERENCE *)tr4+0) = (EIF_REFERENCE) tr5;
	RTAR(tr4,tr5);
	tr6 = RTLN(eif_new_type(977, 0x01).id);
	tr7 = RTMS_EX_H("pt",2,28788);
	ur1 = tr7;
	tr8 = RTLN(eif_new_type(1086, 0x01).id);
	tr9 = RTMS_EX_H("CLASS_NAME",10,708302405);
	ur2 = tr9;
	tr10 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr10)))(tr10);
	RTNHOOK(29,4);
	ur3 = RTCCL(tr10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr8)))(tr8, ur2x, ur3x);
	RTNHOOK(29,5);
	ur2 = RTCCL(tr8);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6254, Dtype(tr6)))(tr6, ur1x, ur2x);
	RTNHOOK(29,6);
	tr5 = RTCCL(tr6);
	*((EIF_REFERENCE *)tr4+1) = (EIF_REFERENCE) tr5;
	RTAR(tr4,tr5);
	tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr4)))(tr4).it_r;
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7124, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(29,7);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7119, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(29,8);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("ps",2,28787);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc6))(loc6, ur1x, ur2x);
	RTHOOK(30);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("CLASS_NAME",10,708302405);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(30,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(30,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("rt",2,29300);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc6))(loc6, ur1x, ur2x);
	RTHOOK(31);
	ur1 = RTCCL(loc6);
	tr1 = RTMS_EX_H("add_query",9,251254137);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(32);
	RTDBGAL(7, 0xF800027A, 0, 0); /* loc7 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(32,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(33);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc7))(loc7);
	RTHOOK(34);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("CLASS_NAME",10,708302405);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(34,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(34,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("cn",2,25454);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc7))(loc7, ur1x, ur2x);
	RTHOOK(35);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("FEATURE_NAME",12,305795653);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(35,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(35,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("fn",2,26222);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc7))(loc7, ur1x, ur2x);
	RTHOOK(36);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("VAR_NAME",8,1998039109);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(36,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(36,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("n",1,110);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc7))(loc7, ur1x, ur2x);
	RTHOOK(37);
	ur1 = RTCCL(loc7);
	tr1 = RTMS_EX_H("add_assignment_instruction",26,752714606);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(38);
	RTDBGAL(8, 0xF800027A, 0, 0); /* loc8 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(38,1);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(39);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc8))(loc8);
	RTHOOK(40);
	tr1 = RTLN(eif_new_type(1074, 0x01).id);
	tr2 = RTLN(eif_new_type(1086, 0x01).id);
	tr3 = RTMS_EX_H("VAR_NAME",8,1998039109);
	ur1 = tr3;
	tr4 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr4)))(tr4);
	RTNHOOK(40,1);
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr2)))(tr2, ur1x, ur2x);
	RTNHOOK(40,2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7119, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(40,3);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("chain",5,1751974766);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc8))(loc8, ur1x, ur2x);
	RTHOOK(41);
	ur1 = RTCCL(loc8);
	tr1 = RTMS_EX_H("add_call_chain",14,1811420526);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(42);
	RTDBGAL(9, 0xF800027A, 0, 0); /* loc9 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(42,1);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(43);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc9))(loc9);
	RTHOOK(44);
	tr1 = RTLN(eif_new_type(1080, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(44,1);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("c",1,99);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc9))(loc9, ur1x, ur2x);
	RTHOOK(45);
	ur1 = RTCCL(loc9);
	tr1 = RTMS_EX_H("bool_value",10,612931429);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(46);
	RTDBGAL(10, 0xF800027A, 0, 0); /* loc10 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(46,1);
	loc10 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(47);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc10))(loc10);
	RTHOOK(48);
	tr1 = RTLN(eif_new_type(1079, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(48,1);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("c",1,99);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", loc10))(loc10, ur1x, ur2x);
	RTHOOK(49);
	ur1 = RTCCL(loc10);
	tr1 = RTMS_EX_H("int_value",9,2000995173);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(50);
	RTDBGAL(11, 0xF800027A, 0, 0); /* loc11 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(50,1);
	loc11 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(51);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc11))(loc11);
	RTHOOK(52);
	ur1 = RTCCL(loc11);
	tr1 = RTMS_EX_H("addition",8,964962670);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(53);
	RTDBGAL(12, 0xF800027A, 0, 0); /* loc12 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(53,1);
	loc12 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(54);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc12))(loc12);
	RTHOOK(55);
	ur1 = RTCCL(loc12);
	tr1 = RTMS_EX_H("subtraction",11,965065838);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(56);
	RTDBGAL(13, 0xF800027A, 0, 0); /* loc13 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(56,1);
	loc13 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(57);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc13))(loc13);
	RTHOOK(58);
	ur1 = RTCCL(loc13);
	tr1 = RTMS_EX_H("multiplication",14,1287684974);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(59);
	RTDBGAL(14, 0xF800027A, 0, 0); /* loc14 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(59,1);
	loc14 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(60);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc14))(loc14);
	RTHOOK(61);
	ur1 = RTCCL(loc14);
	tr1 = RTMS_EX_H("quotient",8,772009588);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(62);
	RTDBGAL(15, 0xF800027A, 0, 0); /* loc15 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(62,1);
	loc15 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(63);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc15))(loc15);
	RTHOOK(64);
	ur1 = RTCCL(loc15);
	tr1 = RTMS_EX_H("modulo",6,1900572271);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(65);
	RTDBGAL(16, 0xF800027A, 0, 0); /* loc16 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(65,1);
	loc16 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(66);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc16))(loc16);
	RTHOOK(67);
	ur1 = RTCCL(loc16);
	tr1 = RTMS_EX_H("conjunction",11,545172846);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(68);
	RTDBGAL(17, 0xF800027A, 0, 0); /* loc17 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(68,1);
	loc17 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(69);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc17))(loc17);
	RTHOOK(70);
	ur1 = RTCCL(loc17);
	tr1 = RTMS_EX_H("disjunction",11,444182382);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(71);
	RTDBGAL(18, 0xF800027A, 0, 0); /* loc18 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(71,1);
	loc18 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(72);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc18))(loc18);
	RTHOOK(73);
	ur1 = RTCCL(loc18);
	tr1 = RTMS_EX_H("equals",6,21281139);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(74);
	RTDBGAL(19, 0xF800027A, 0, 0); /* loc19 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(74,1);
	loc19 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(75);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc19))(loc19);
	RTHOOK(76);
	ur1 = RTCCL(loc19);
	tr1 = RTMS_EX_H("greater_than",12,1624960366);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(77);
	RTDBGAL(20, 0xF800027A, 0, 0); /* loc20 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(77,1);
	loc20 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(78);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc20))(loc20);
	RTHOOK(79);
	ur1 = RTCCL(loc20);
	tr1 = RTMS_EX_H("less_than",9,2030197102);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(80);
	RTDBGAL(21, 0xF800027A, 0, 0); /* loc21 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(80,1);
	loc21 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(81);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc21))(loc21);
	RTHOOK(82);
	ur1 = RTCCL(loc21);
	tr1 = RTMS_EX_H("numerical_negation",18,229484910);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(83);
	RTDBGAL(22, 0xF800027A, 0, 0); /* loc22 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(83,1);
	loc22 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(84);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc22))(loc22);
	RTHOOK(85);
	ur1 = RTCCL(loc22);
	tr1 = RTMS_EX_H("logical_negation",16,1169269870);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(86);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(24);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.evt_param_types_list */
EIF_TYPED_VALUE F1088_9413 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "evt_param_types_list";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_REFERENCE tr10 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(37);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLR(8,tr2);
	RTLR(9,tr3);
	RTLR(10,loc4);
	RTLR(11,loc5);
	RTLR(12,tr4);
	RTLR(13,tr5);
	RTLR(14,tr6);
	RTLR(15,tr7);
	RTLR(16,tr8);
	RTLR(17,tr9);
	RTLR(18,tr10);
	RTLR(19,ur3);
	RTLR(20,loc6);
	RTLR(21,loc7);
	RTLR(22,loc8);
	RTLR(23,loc9);
	RTLR(24,loc10);
	RTLR(25,loc11);
	RTLR(26,loc12);
	RTLR(27,loc13);
	RTLR(28,loc14);
	RTLR(29,loc15);
	RTLR(30,loc16);
	RTLR(31,loc17);
	RTLR(32,loc18);
	RTLR(33,loc19);
	RTLR(34,loc20);
	RTLR(35,loc21);
	RTLR(36,loc22);
	RTLIU(37);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_REF, &loc20);
	RTLU(SK_REF, &loc21);
	RTLU(SK_REF, &loc22);
	
	RTEAA(l_feature_name, 1087, Current, 22, 0, 15668);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1087, Current, 15668);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800027A, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,634,0xFF01,816,0xFF01,1072,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", Result))(Result);
	RTHOOK(3);
	RTDBGAL(1, 0xF8000330, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc1))(loc1);
	RTHOOK(5);
	ur1 = RTCCL(loc1);
	tr1 = RTMS_EX_H("type_check",10,1152524907);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(6);
	RTDBGAL(2, 0xF8000330, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(6,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc2))(loc2);
	RTHOOK(8);
	ur1 = RTCCL(loc2);
	tr1 = RTMS_EX_H("generate_java_code",18,221662309);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(9);
	RTDBGAL(3, 0xF8000330, 0, 0); /* loc3 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(9,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc3))(loc3);
	RTHOOK(11);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("CLASS_NAME",10,708302405);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(11,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(11,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc3))(loc3, ur1x);
	RTHOOK(12);
	ur1 = RTCCL(loc3);
	tr1 = RTMS_EX_H("add_class",9,99889779);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(13);
	RTDBGAL(4, 0xF8000330, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(13,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(14);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc4))(loc4);
	RTHOOK(15);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("CLASS_NAME",10,708302405);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(15,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(15,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc4))(loc4, ur1x);
	RTHOOK(16);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("FEATURE_NAME",12,305795653);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(16,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(16,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc4))(loc4, ur1x);
	RTHOOK(17);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("CLASS_NAME",10,708302405);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(17,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(17,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc4))(loc4, ur1x);
	RTHOOK(18);
	ur1 = RTCCL(loc4);
	tr1 = RTMS_EX_H("add_attribute",13,862525541);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(19);
	RTDBGAL(5, 0xF8000330, 0, 0); /* loc5 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(19,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(20);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc5))(loc5);
	RTHOOK(21);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("CLASS_NAME",10,708302405);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(21,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(21,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc5))(loc5, ur1x);
	RTHOOK(22);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("FEATURE_NAME",12,305795653);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(22,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(22,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc5))(loc5, ur1x);
	RTHOOK(23);
	tr1 = RTLN(eif_new_type(1074, 0x01).id);
	tr2 = RTLN(eif_new_type(1081, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {334,0xFF01,977,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr4) = 2L;
		memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
	}
	tr6 = RTLN(eif_new_type(977, 0x01).id);
	tr7 = RTMS_EX_H("pn",2,28782);
	ur1 = tr7;
	tr8 = RTLN(eif_new_type(1086, 0x01).id);
	tr9 = RTMS_EX_H("VAR_NAME",8,1998039109);
	ur2 = tr9;
	tr10 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr10)))(tr10);
	RTNHOOK(23,1);
	ur3 = RTCCL(tr10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr8)))(tr8, ur2x, ur3x);
	RTNHOOK(23,2);
	ur2 = RTCCL(tr8);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6254, Dtype(tr6)))(tr6, ur1x, ur2x);
	RTNHOOK(23,3);
	tr5 = RTCCL(tr6);
	*((EIF_REFERENCE *)tr4+0) = (EIF_REFERENCE) tr5;
	RTAR(tr4,tr5);
	tr6 = RTLN(eif_new_type(977, 0x01).id);
	tr7 = RTMS_EX_H("ft",2,26228);
	ur1 = tr7;
	tr8 = RTLN(eif_new_type(1086, 0x01).id);
	tr9 = RTMS_EX_H("CLASS_NAME",10,708302405);
	ur2 = tr9;
	tr10 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr10)))(tr10);
	RTNHOOK(23,4);
	ur3 = RTCCL(tr10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr8)))(tr8, ur2x, ur3x);
	RTNHOOK(23,5);
	ur2 = RTCCL(tr8);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6254, Dtype(tr6)))(tr6, ur1x, ur2x);
	RTNHOOK(23,6);
	tr5 = RTCCL(tr6);
	*((EIF_REFERENCE *)tr4+1) = (EIF_REFERENCE) tr5;
	RTAR(tr4,tr5);
	tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr4)))(tr4).it_r;
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7124, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(23,7);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7119, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(23,8);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc5))(loc5, ur1x);
	RTHOOK(24);
	ur1 = RTCCL(loc5);
	tr1 = RTMS_EX_H("add_command",11,762277476);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(25);
	RTDBGAL(6, 0xF8000330, 0, 0); /* loc6 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(25,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(26);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc6))(loc6);
	RTHOOK(27);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("CLASS_NAME",10,708302405);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(27,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(27,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc6))(loc6, ur1x);
	RTHOOK(28);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("FEATURE_NAME",12,305795653);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(28,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(28,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc6))(loc6, ur1x);
	RTHOOK(29);
	tr1 = RTLN(eif_new_type(1074, 0x01).id);
	tr2 = RTLN(eif_new_type(1081, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {334,0xFF01,977,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr4) = 2L;
		memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
	}
	tr6 = RTLN(eif_new_type(977, 0x01).id);
	tr7 = RTMS_EX_H("pn",2,28782);
	ur1 = tr7;
	tr8 = RTLN(eif_new_type(1086, 0x01).id);
	tr9 = RTMS_EX_H("VAR_NAME",8,1998039109);
	ur2 = tr9;
	tr10 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr10)))(tr10);
	RTNHOOK(29,1);
	ur3 = RTCCL(tr10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr8)))(tr8, ur2x, ur3x);
	RTNHOOK(29,2);
	ur2 = RTCCL(tr8);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6254, Dtype(tr6)))(tr6, ur1x, ur2x);
	RTNHOOK(29,3);
	tr5 = RTCCL(tr6);
	*((EIF_REFERENCE *)tr4+0) = (EIF_REFERENCE) tr5;
	RTAR(tr4,tr5);
	tr6 = RTLN(eif_new_type(977, 0x01).id);
	tr7 = RTMS_EX_H("pt",2,28788);
	ur1 = tr7;
	tr8 = RTLN(eif_new_type(1086, 0x01).id);
	tr9 = RTMS_EX_H("CLASS_NAME",10,708302405);
	ur2 = tr9;
	tr10 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr10)))(tr10);
	RTNHOOK(29,4);
	ur3 = RTCCL(tr10);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr8)))(tr8, ur2x, ur3x);
	RTNHOOK(29,5);
	ur2 = RTCCL(tr8);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6254, Dtype(tr6)))(tr6, ur1x, ur2x);
	RTNHOOK(29,6);
	tr5 = RTCCL(tr6);
	*((EIF_REFERENCE *)tr4+1) = (EIF_REFERENCE) tr5;
	RTAR(tr4,tr5);
	tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr4)))(tr4).it_r;
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7124, Dtype(tr2)))(tr2, ur1x);
	RTNHOOK(29,7);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7119, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(29,8);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc6))(loc6, ur1x);
	RTHOOK(30);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("CLASS_NAME",10,708302405);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(30,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(30,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc6))(loc6, ur1x);
	RTHOOK(31);
	ur1 = RTCCL(loc6);
	tr1 = RTMS_EX_H("add_query",9,251254137);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(32);
	RTDBGAL(7, 0xF8000330, 0, 0); /* loc7 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(32,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(33);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc7))(loc7);
	RTHOOK(34);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("CLASS_NAME",10,708302405);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(34,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(34,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc7))(loc7, ur1x);
	RTHOOK(35);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("FEATURE_NAME",12,305795653);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(35,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(35,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc7))(loc7, ur1x);
	RTHOOK(36);
	tr1 = RTLN(eif_new_type(1086, 0x01).id);
	tr2 = RTMS_EX_H("VAR_NAME",8,1998039109);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr3)))(tr3);
	RTNHOOK(36,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(36,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc7))(loc7, ur1x);
	RTHOOK(37);
	ur1 = RTCCL(loc7);
	tr1 = RTMS_EX_H("add_assignment_instruction",26,752714606);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(38);
	RTDBGAL(8, 0xF8000330, 0, 0); /* loc8 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(38,1);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(39);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc8))(loc8);
	RTHOOK(40);
	tr1 = RTLN(eif_new_type(1074, 0x01).id);
	tr2 = RTLN(eif_new_type(1086, 0x01).id);
	tr3 = RTMS_EX_H("VAR_NAME",8,1998039109);
	ur1 = tr3;
	tr4 = RTLN(eif_new_type(1083, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr4)))(tr4);
	RTNHOOK(40,1);
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7128, Dtype(tr2)))(tr2, ur1x, ur2x);
	RTNHOOK(40,2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7119, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(40,3);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc8))(loc8, ur1x);
	RTHOOK(41);
	ur1 = RTCCL(loc8);
	tr1 = RTMS_EX_H("add_call_chain",14,1811420526);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(42);
	RTDBGAL(9, 0xF8000330, 0, 0); /* loc9 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(42,1);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(43);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc9))(loc9);
	RTHOOK(44);
	tr1 = RTLN(eif_new_type(1080, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(44,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc9))(loc9, ur1x);
	RTHOOK(45);
	ur1 = RTCCL(loc9);
	tr1 = RTMS_EX_H("bool_value",10,612931429);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(46);
	RTDBGAL(10, 0xF8000330, 0, 0); /* loc10 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(46,1);
	loc10 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(47);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc10))(loc10);
	RTHOOK(48);
	tr1 = RTLN(eif_new_type(1079, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(48,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", loc10))(loc10, ur1x);
	RTHOOK(49);
	ur1 = RTCCL(loc10);
	tr1 = RTMS_EX_H("int_value",9,2000995173);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(50);
	RTDBGAL(11, 0xF8000330, 0, 0); /* loc11 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(50,1);
	loc11 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(51);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc11))(loc11);
	RTHOOK(52);
	ur1 = RTCCL(loc11);
	tr1 = RTMS_EX_H("addition",8,964962670);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(53);
	RTDBGAL(12, 0xF8000330, 0, 0); /* loc12 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(53,1);
	loc12 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(54);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc12))(loc12);
	RTHOOK(55);
	ur1 = RTCCL(loc12);
	tr1 = RTMS_EX_H("subtraction",11,965065838);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(56);
	RTDBGAL(13, 0xF8000330, 0, 0); /* loc13 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(56,1);
	loc13 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(57);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc13))(loc13);
	RTHOOK(58);
	ur1 = RTCCL(loc13);
	tr1 = RTMS_EX_H("multiplication",14,1287684974);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(59);
	RTDBGAL(14, 0xF8000330, 0, 0); /* loc14 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(59,1);
	loc14 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(60);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc14))(loc14);
	RTHOOK(61);
	ur1 = RTCCL(loc14);
	tr1 = RTMS_EX_H("quotient",8,772009588);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(62);
	RTDBGAL(15, 0xF8000330, 0, 0); /* loc15 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(62,1);
	loc15 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(63);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc15))(loc15);
	RTHOOK(64);
	ur1 = RTCCL(loc15);
	tr1 = RTMS_EX_H("modulo",6,1900572271);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(65);
	RTDBGAL(16, 0xF8000330, 0, 0); /* loc16 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(65,1);
	loc16 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(66);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc16))(loc16);
	RTHOOK(67);
	ur1 = RTCCL(loc16);
	tr1 = RTMS_EX_H("conjunction",11,545172846);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(68);
	RTDBGAL(17, 0xF8000330, 0, 0); /* loc17 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(68,1);
	loc17 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(69);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc17))(loc17);
	RTHOOK(70);
	ur1 = RTCCL(loc17);
	tr1 = RTMS_EX_H("disjunction",11,444182382);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(71);
	RTDBGAL(18, 0xF8000330, 0, 0); /* loc18 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(71,1);
	loc18 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(72);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc18))(loc18);
	RTHOOK(73);
	ur1 = RTCCL(loc18);
	tr1 = RTMS_EX_H("equals",6,21281139);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(74);
	RTDBGAL(19, 0xF8000330, 0, 0); /* loc19 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(74,1);
	loc19 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(75);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc19))(loc19);
	RTHOOK(76);
	ur1 = RTCCL(loc19);
	tr1 = RTMS_EX_H("greater_than",12,1624960366);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(77);
	RTDBGAL(20, 0xF8000330, 0, 0); /* loc20 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(77,1);
	loc20 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(78);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc20))(loc20);
	RTHOOK(79);
	ur1 = RTCCL(loc20);
	tr1 = RTMS_EX_H("less_than",9,2030197102);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(80);
	RTDBGAL(21, 0xF8000330, 0, 0); /* loc21 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(80,1);
	loc21 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(81);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc21))(loc21);
	RTHOOK(82);
	ur1 = RTCCL(loc21);
	tr1 = RTMS_EX_H("numerical_negation",18,229484910);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(83);
	RTDBGAL(22, 0xF8000330, 0, 0); /* loc22 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,1072,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(83,1);
	loc22 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(84);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", loc22))(loc22);
	RTHOOK(85);
	ur1 = RTCCL(loc22);
	tr1 = RTMS_EX_H("logical_negation",16,1169269870);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3002, "extend", Result))(Result, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(86);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(24);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.comment */
EIF_TYPED_VALUE F1088_9414 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "comment";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1087, Current, 0, 1, 15669);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1087, Current, 15669);
	RTCC(arg1, 1087, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

void EIF_Minit1088 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
