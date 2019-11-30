/*
 * Code for class WEL_GDIP_IMAGE_ENCODER_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F972_8855(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8856(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8857(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8858(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8859(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8860(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8861(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8862(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8863(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8864(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8865(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8866(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8867(EIF_REFERENCE);
extern void EIF_Minit972(void);

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

/* {WEL_GDIP_IMAGE_ENCODER_CONSTANTS}.all_formats */
EIF_TYPED_VALUE F972_8855 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "all_formats";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 971, Current, 0, 0, 15158);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(971, Current, 15158);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800010E, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,270,0xFF01,973,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3081, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6646, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", Result))(Result, ur1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6647, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", Result))(Result, ur1x);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6648, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", Result))(Result, ur1x);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6649, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", Result))(Result, ur1x);
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6650, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", Result))(Result, ur1x);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6651, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", Result))(Result, ur1x);
	RTHOOK(8);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6652, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", Result))(Result, ur1x);
	RTHOOK(9);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6653, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", Result))(Result, ur1x);
	RTHOOK(10);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6654, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", Result))(Result, ur1x);
	RTHOOK(11);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6655, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", Result))(Result, ur1x);
	RTHOOK(12);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6656, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", Result))(Result, ur1x);
	RTHOOK(13);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6657, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2222, "extend", Result))(Result, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {WEL_GDIP_IMAGE_ENCODER_CONSTANTS}.memorybmp */
RTOID (F972_8856)
EIF_TYPED_VALUE F972_8856 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "memorybmp";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F972_8856);
	dtype = Dtype(Current);

	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 971, Current, 1, 0, 15159);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(971, Current, 15159);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(1, 0xF80003E0, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(992, 0x01).id);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3110812842));
	uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 1832L);
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 4563L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 157L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 123L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 248L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 30L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 243L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 46L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6851, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(0, 0xF80003CD, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(973, 0x01).id);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6661, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER_CONSTANTS}.bmp */
RTOID (F972_8857)
EIF_TYPED_VALUE F972_8857 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bmp";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F972_8857);
	dtype = Dtype(Current);

	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 971, Current, 1, 0, 15160);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(971, Current, 15160);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(1, 0xF80003E0, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(992, 0x01).id);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3110812843));
	uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 1832L);
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 4563L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 157L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 123L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 248L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 30L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 243L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 46L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6851, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(0, 0xF80003CD, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(973, 0x01).id);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6661, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER_CONSTANTS}.emf */
RTOID (F972_8858)
EIF_TYPED_VALUE F972_8858 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "emf";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F972_8858);
	dtype = Dtype(Current);

	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 971, Current, 1, 0, 15161);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(971, Current, 15161);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(1, 0xF80003E0, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(992, 0x01).id);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3110812844));
	uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 1832L);
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 4563L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 157L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 123L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 248L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 30L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 243L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 46L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6851, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(0, 0xF80003CD, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(973, 0x01).id);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6661, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER_CONSTANTS}.wmf */
RTOID (F972_8859)
EIF_TYPED_VALUE F972_8859 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "wmf";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F972_8859);
	dtype = Dtype(Current);

	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 971, Current, 1, 0, 15162);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(971, Current, 15162);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(1, 0xF80003E0, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(992, 0x01).id);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3110812845));
	uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 1832L);
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 4563L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 157L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 123L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 248L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 30L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 243L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 46L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6851, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(0, 0xF80003CD, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(973, 0x01).id);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6661, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER_CONSTANTS}.jpeg */
RTOID (F972_8860)
EIF_TYPED_VALUE F972_8860 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "jpeg";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F972_8860);
	dtype = Dtype(Current);

	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 971, Current, 1, 0, 15163);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(971, Current, 15163);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(1, 0xF80003E0, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(992, 0x01).id);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3110812846));
	uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 1832L);
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 4563L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 157L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 123L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 248L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 30L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 243L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 46L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6851, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(0, 0xF80003CD, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(973, 0x01).id);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6661, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER_CONSTANTS}.png */
RTOID (F972_8861)
EIF_TYPED_VALUE F972_8861 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "png";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F972_8861);
	dtype = Dtype(Current);

	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 971, Current, 1, 0, 15164);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(971, Current, 15164);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(1, 0xF80003E0, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(992, 0x01).id);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3110812847));
	uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 1832L);
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 4563L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 157L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 123L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 248L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 30L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 243L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 46L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6851, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(0, 0xF80003CD, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(973, 0x01).id);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6661, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER_CONSTANTS}.gif */
RTOID (F972_8862)
EIF_TYPED_VALUE F972_8862 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "gif";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F972_8862);
	dtype = Dtype(Current);

	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 971, Current, 1, 0, 15165);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(971, Current, 15165);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(1, 0xF80003E0, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(992, 0x01).id);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3110812848));
	uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 1832L);
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 4563L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 157L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 123L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 248L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 30L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 243L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 46L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6851, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(0, 0xF80003CD, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(973, 0x01).id);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6661, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER_CONSTANTS}.tiff */
RTOID (F972_8863)
EIF_TYPED_VALUE F972_8863 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tiff";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F972_8863);
	dtype = Dtype(Current);

	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 971, Current, 1, 0, 15166);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(971, Current, 15166);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(1, 0xF80003E0, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(992, 0x01).id);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3110812849));
	uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 1832L);
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 4563L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 157L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 123L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 248L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 30L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 243L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 46L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6851, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(0, 0xF80003CD, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(973, 0x01).id);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6661, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER_CONSTANTS}.exif */
RTOID (F972_8864)
EIF_TYPED_VALUE F972_8864 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "exif";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F972_8864);
	dtype = Dtype(Current);

	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 971, Current, 1, 0, 15167);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(971, Current, 15167);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(1, 0xF80003E0, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(992, 0x01).id);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3110812850));
	uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 1832L);
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 4563L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 157L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 123L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 248L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 30L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 243L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 46L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6851, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(0, 0xF80003CD, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(973, 0x01).id);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6661, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER_CONSTANTS}.photocd */
RTOID (F972_8865)
EIF_TYPED_VALUE F972_8865 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "photocd";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F972_8865);
	dtype = Dtype(Current);

	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 971, Current, 1, 0, 15168);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(971, Current, 15168);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(1, 0xF80003E0, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(992, 0x01).id);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3110812851));
	uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 1832L);
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 4563L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 157L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 123L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 248L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 30L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 243L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 46L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6851, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(0, 0xF80003CD, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(973, 0x01).id);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6661, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER_CONSTANTS}.flashpix */
RTOID (F972_8866)
EIF_TYPED_VALUE F972_8866 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "flashpix";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F972_8866);
	dtype = Dtype(Current);

	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 971, Current, 1, 0, 15156);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(971, Current, 15156);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(1, 0xF80003E0, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(992, 0x01).id);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3110812852));
	uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 1832L);
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 4563L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 157L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 123L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 248L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 30L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 243L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 46L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6851, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(0, 0xF80003CD, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(973, 0x01).id);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6661, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

/* {WEL_GDIP_IMAGE_ENCODER_CONSTANTS}.icon */
RTOID (F972_8867)
EIF_TYPED_VALUE F972_8867 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "icon";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu2_1x = {{0}, SK_UINT16};
#define uu2_1 uu2_1x.it_n2
	EIF_TYPED_VALUE uu2_2x = {{0}, SK_UINT16};
#define uu2_2 uu2_2x.it_n2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F972_8867);
	dtype = Dtype(Current);

	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 971, Current, 1, 0, 15157);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(971, Current, 15157);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(1, 0xF80003E0, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(992, 0x01).id);
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3110812853));
	uu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 1832L);
	uu2_2 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 4563L);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	{
		static EIF_TYPE_INDEX typarr0[] = {473,209,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 8L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_NATURAL_8 *)tr3+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 157L);
	*((EIF_NATURAL_8 *)tr3+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 123L);
	*((EIF_NATURAL_8 *)tr3+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr3+4) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 248L);
	*((EIF_NATURAL_8 *)tr3+5) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 30L);
	*((EIF_NATURAL_8 *)tr3+6) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 243L);
	*((EIF_NATURAL_8 *)tr3+7) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 46L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2569, Dtype(tr3)))(tr3).it_r;
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6851, Dtype(tr1)))(tr1, uu4_1x, uu2_1x, uu2_2x, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(0, 0xF80003CD, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(973, 0x01).id);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6661, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu2_1
#undef uu2_2
#undef Result
}

void EIF_Minit972 (void)
{
	GTCX
	RTOTS (8856,F972_8856)
	RTOTS (8857,F972_8857)
	RTOTS (8858,F972_8858)
	RTOTS (8859,F972_8859)
	RTOTS (8860,F972_8860)
	RTOTS (8861,F972_8861)
	RTOTS (8862,F972_8862)
	RTOTS (8863,F972_8863)
	RTOTS (8864,F972_8864)
	RTOTS (8865,F972_8865)
	RTOTS (8866,F972_8866)
	RTOTS (8867,F972_8867)
}


#ifdef __cplusplus
}
#endif
