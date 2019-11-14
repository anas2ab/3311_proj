/*
 * Code for class KL_STANDARD_FILES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F972_8387(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8388(EIF_REFERENCE);
extern EIF_TYPED_VALUE F972_8389(EIF_REFERENCE);
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

/* {KL_STANDARD_FILES}.input */
RTOID (F972_8387)
EIF_TYPED_VALUE F972_8387 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "input";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F972_8387);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 971, Current, 0, 0, 14687);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(971, Current, 14687);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80004CE, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1230, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(8144, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("file_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("file_open_read", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6939, "is_open_read", Result))(Result)).it_b);
		if (tb1) {
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

/* {KL_STANDARD_FILES}.output */
RTOID (F972_8388)
EIF_TYPED_VALUE F972_8388 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "output";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F972_8388);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 971, Current, 0, 0, 14688);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(971, Current, 14688);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800048E, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1166, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7798, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("file_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("file_open_write", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6358, "is_open_write", Result))(Result)).it_b);
		if (tb1) {
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

/* {KL_STANDARD_FILES}.error */
RTOID (F972_8389)
EIF_TYPED_VALUE F972_8389 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "error";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F972_8389);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 971, Current, 0, 0, 14689);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(971, Current, 14689);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800048D, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1165, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7796, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("file_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("file_open_write", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6358, "is_open_write", Result))(Result)).it_b);
		if (tb1) {
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

void EIF_Minit972 (void)
{
	GTCX
	RTOTS (8387,F972_8387)
	RTOTS (8388,F972_8388)
	RTOTS (8389,F972_8389)
}


#ifdef __cplusplus
}
#endif
