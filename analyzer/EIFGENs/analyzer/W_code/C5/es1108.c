/*
 * Code for class ES_VIOLATION_CASE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1108_9496(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1108_9497(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1108_9498(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1108_9499(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1108_9500(EIF_REFERENCE);
extern void EIF_Minit1108(void);

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

/* {ES_VIOLATION_CASE}.make */
void F1108_9496 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1107, Current, 0, 2, 15747);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1107, Current, 15747);
	RTCC(arg1, 1107, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,274,0xFF01,0xFFF9,0,186,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 1107, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
body:;
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7200, 0xF8000112, 0); /* case */
	tr1 = RTCCL(arg2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7200, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7196, 0xF80000E8, 0); /* case_name */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7196, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 7198, 0xF80000E8, 0); /* violation_tag */
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7198, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 7202, 0xF80000E8, 0); /* expected_tag_name */
	tr1 = RTMS_EX_H("NONE",4,1313820229);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7202, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 7197, 0xF80000E8, 0); /* bookmark_name */
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7197, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("make_post_case", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7200, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("make_post_case_name", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7196, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
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
#undef arg2
#undef arg1
}

/* {ES_VIOLATION_CASE}.make_with_tag */
void F1108_9497 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make_with_tag";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1107, Current, 0, 3, 15748);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1107, Current, 15748);
	RTCC(arg1, 1107, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,274,0xFF01,0xFFF9,0,186,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 1107, l_feature_name, 2, typres0, 0x01);
	}
	RTCC(arg3, 1107, l_feature_name, 3, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("make_pre_c", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("make_pre_name", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 7200, 0xF8000112, 0); /* case */
	tr1 = RTCCL(arg2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7200, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 7196, 0xF80000E8, 0); /* case_name */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7196, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 7198, 0xF80000E8, 0); /* violation_tag */
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7198, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 7202, 0xF80000E8, 0); /* expected_tag_name */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7202, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 7197, 0xF80000E8, 0); /* bookmark_name */
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7197, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef arg3
#undef arg2
#undef arg1
}

/* {ES_VIOLATION_CASE}.run */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1108_9498 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "run";
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	RTLI(8);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,loc3);
	RTLR(7,saved_except);
	RTLIU(8);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLXL;
	
	RTEAA(l_feature_name, 1107, Current, 3, 0, 15749);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1107, Current, 15749);
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(2);
		RTCT0("attached case as c", EX_CHECK);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7200, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4612, "apply", loc2))(loc2);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 7194, 0x04000000, 1); /* passed */
		*(EIF_BOOLEAN *)(Current + RTWA(7194, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(5);
	tb1 = '\01';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1279, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7202, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr2);
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13, dtype))(Current, ur1x, ur2x)).it_b);
	if (!tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7202, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tr2 = RTMS_EX_H("NONE",4,1313820229);
		ur2 = tr2;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13, dtype))(Current, ur1x, ur2x)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 7194, 0x04000000, 1); /* passed */
		*(EIF_BOOLEAN *)(Current + RTWA(7194, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(7);
		RTDBGAA(Current, dtype, 7195, 0x04000000, 1); /* contract_violated */
		*(EIF_BOOLEAN *)(Current + RTWA(7195, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(8);
		RTCT0("attached exception_trace as et", EX_CHECK);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1283, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = RTCCL(tr1);
		if (EIF_TEST(loc3)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(9);
		RTDBGAA(Current, dtype, 7198, 0xF80000E8, 0); /* violation_tag */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(7198, dtype)) = (EIF_REFERENCE) tr1;
		RTHOOK(10);
		RTDBGAA(Current, dtype, 7199, 0x10000000, 1); /* violation_type */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1282, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(7199, dtype)) = (EIF_INTEGER_32) ti4_1;
	}
	RTHOOK(11);
	RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(12);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(5);
#undef up1
#undef up2
#undef ur1
#undef ur2
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {ES_VIOLATION_CASE}.is_violation_case */
EIF_TYPED_VALUE F1108_9499 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_violation_case";
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
	
	RTEAA(l_feature_name, 1107, Current, 0, 0, 15750);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1107, Current, 15750);
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

/* {ES_VIOLATION_CASE}.expected_tag_name */
EIF_TYPED_VALUE F1108_9500 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7202,Dtype(Current)));
	return r;
}


void EIF_Minit1108 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
