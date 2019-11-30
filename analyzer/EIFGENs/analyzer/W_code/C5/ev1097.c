/*
 * Code for class EV_MONITOR_DPI_DETECTOR_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1097_10629(EIF_REFERENCE);
extern void EIF_Minit1097(void);

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

/* {EV_MONITOR_DPI_DETECTOR_IMP}.dpi */
EIF_TYPED_VALUE F1097_10629 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dpi";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 1096, Current, 3, 0, 16974);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1096, Current, 16974);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80007A4, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1956, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(15736, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16831, "vertical_resolution", loc1))(loc1)).it_i4);
	RTNHOOK(2,1);
	tu4_1 = (EIF_NATURAL_32) ti4_1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTHOOK(3);
	RTDBGAL(2, 0xF80003ED, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1005, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7010, "is_scaling_installed", loc2))(loc2)).it_b);
	if (tb1) {
		RTHOOK(5);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(19373, "dc", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		tp1 = *(EIF_POINTER *)(tr1 + RTVA(12376, "item", tr1));
		up1 = tp1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7013, "dpi_for_monitor", loc2))(loc2, up1x)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(7);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			tu4_1 = (EIF_NATURAL_32) loc3;
			Result = (EIF_NATURAL_32) tu4_1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef up1
}

void EIF_Minit1097 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
