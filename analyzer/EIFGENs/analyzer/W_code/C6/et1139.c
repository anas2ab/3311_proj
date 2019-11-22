/*
 * Code for class ETF_ROOT_INTERFACE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1139_10090(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1139_10091(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1139_10092(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1139_10093(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1139_10094(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1139_10095(EIF_REFERENCE);
extern void F1139_10097(EIF_REFERENCE);
extern void EIF_Minit1139(void);

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

/* {ETF_ROOT_INTERFACE}.unit_test */
EIF_TYPED_VALUE F1139_10090 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {ETF_ROOT_INTERFACE}.etf_gui_show_history */
EIF_TYPED_VALUE F1139_10091 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {ETF_ROOT_INTERFACE}.etf_gui_hide_history */
EIF_TYPED_VALUE F1139_10092 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {ETF_ROOT_INTERFACE}.etf_cl_show_history */
EIF_TYPED_VALUE F1139_10093 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {ETF_ROOT_INTERFACE}.etf_cl_hide_history */
EIF_TYPED_VALUE F1139_10094 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	return r;
}

/* {ETF_ROOT_INTERFACE}.switch */
EIF_TYPED_VALUE F1139_10095 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "switch";
	RTEX;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 1138, Current, 0, 0, 16328);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1138, Current, 16328);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7722, dtype))(Current)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {ETF_ROOT_INTERFACE}.make */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1139_10097 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_INTEGER_32  EIF_VOLATILE ti4_2;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,loc2);
	RTLR(5,saved_except);
	RTLIU(6);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_REF, &loc2);
	RTLXL;
	
	RTEAA(l_feature_name, 1138, Current, 2, 0, 16329);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1138, Current, 16329);
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7685, dtype))(Current);
	RTHOOK(2);
	if (loc1) {
	} else {
		RTHOOK(3);
		tb1 = '\01';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7726, dtype))(Current)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7722, dtype))(Current)).it_i4);
		if (!(EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7726, dtype))(Current)).it_i4);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7724, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
		if (tb1) {
			RTHOOK(4);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6823, dtype))(Current);
		} else {
			RTHOOK(5);
			tb1 = '\01';
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7726, dtype))(Current)).it_i4);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7723, dtype))(Current)).it_i4);
			if (!(EIF_BOOLEAN)(ti4_1 == ti4_2)) {
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7726, dtype))(Current)).it_i4);
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7725, dtype))(Current)).it_i4);
				tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
			}
			if (tb1) {
				RTHOOK(6);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6824, dtype))(Current);
			}
		}
		RTHOOK(7);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7726, dtype))(Current)).it_i4);
		switch (ti4_1) {
			case 1L:
				RTHOOK(8);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2299, dtype))(Current)).it_i4);
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
					RTHOOK(9);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7727, dtype))(Current);
					RTHOOK(10);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6830, dtype))(Current);
					RTHOOK(11);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6828, dtype))(Current);
				} else {
					RTHOOK(12);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(12,1);
					tr2 = RTMS_EX_H("Error: current mode is ESpec test (no command line arguments).",62,1104404782);
					ur1 = tr2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(149, "put_string", tr1))(tr1, ur1x);
				}
				break;
			case 2L:
			case 3L:
				RTHOOK(13);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2299, dtype))(Current)).it_i4);
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
					RTHOOK(14);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6827, dtype))(Current);
				} else {
					RTHOOK(15);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(15,1);
					tr2 = RTMS_EX_H("Error: current mode is ETF GUI (no command line arguments).",59,595118382);
					ur1 = tr2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(149, "put_string", tr1))(tr1, ur1x);
				}
				break;
			case 4L:
			case 5L:
				RTHOOK(16);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7684, dtype))(Current);
				break;
			default:
				if (RTAL & CK_CHECK) {
					RTHOOK(17);
					RTCT("FALSE", EX_CHECK);
						RTCF;
				}
				break;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(18);
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1277, dtype))(Current)).it_b);
	if (tb2) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1282, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1272, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTHOOK(19);
		tr1 = RTMS_EX_H("\012You quit the session. Bye ...\012",31,1878088714);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(20);
		RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(21);
		RTTS;
		RTPS;
		RTER;
	}
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(22);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(4);
#undef up1
#undef ur1
#undef ui4_1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

void EIF_Minit1139 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
