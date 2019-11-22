/*
 * Code for class EV_MONITOR_DPI_DETECTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1002_8680(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1002(void);

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

/* {EV_MONITOR_DPI_DETECTOR}.scaled_size */
EIF_TYPED_VALUE F1002_8680 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "scaled_size";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	
	RTEAA(l_feature_name, 1001, Current, 1, 1, 15020);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1001, Current, 15020);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) arg1;
	RTHOOK(2);
	RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6467, dtype))(Current)).it_n4);
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc1 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		tr8_1 = (EIF_REAL_64) (Result);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6467, dtype))(Current)).it_n4);
		tr1 = RTLN(eif_new_type(206, 0x00).id);
		*(EIF_REAL_64 *)tr1 = ((EIF_REAL_64) (tr8_1 * ((EIF_REAL_64) ((EIF_REAL_64) (tu4_1) /  (EIF_REAL_64) ((EIF_NATURAL_32) ((EIF_INTEGER_32) 96L))))));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4262, "rounded", tr1))(tr1)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

void EIF_Minit1002 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
