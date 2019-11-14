/*
 * Code for class ETF_REAL_ARG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1099_9452(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1099_9453(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1099_9454(EIF_REFERENCE);
extern void EIF_Minit1099(void);

#ifdef __cplusplus
}
#endif

#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_REAL_ARG}.make */
void F1099_9452 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1098, Current, 0, 1, 15707);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1098, Current, 15707);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7148, 0xF80000E8, 0); /* src_out */
	tr1 = RTLNSMART(RTWCT(7148, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7148, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7169, 0x20000000, 1); /* value */
	*(EIF_REAL_64 *)(Current + RTWA(7169, dtype)) = (EIF_REAL_64) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {ETF_REAL_ARG}.value */
EIF_TYPED_VALUE F1099_9453 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(7169,Dtype(Current)));
	return r;
}


/* {ETF_REAL_ARG}.out */
EIF_TYPED_VALUE F1099_9454 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "out";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
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
	
	RTEAA(l_feature_name, 1098, Current, 0, 0, 15709);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1098, Current, 15709);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(7169, dtype));
	tr1 = c_outr64(tr8_1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

void EIF_Minit1099 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
