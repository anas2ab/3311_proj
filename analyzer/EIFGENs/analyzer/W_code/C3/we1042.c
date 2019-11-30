/*
 * Code for class WEL_IDB_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1042_10006(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1042_10007(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1042_10008(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1042_10009(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1042_10010(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1042(void);

#ifdef __cplusplus
}
#endif

#include "cctrl.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_IDB_CONSTANTS}.idb_std_large_color */
EIF_TYPED_VALUE F1042_10006 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "idb_std_large_color";
	RTEX;
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
	
	RTEAA(l_feature_name, 1041, Current, 0, 0, 16355);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1041, Current, 16355);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) IDB_STD_LARGE_COLOR;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_IDB_CONSTANTS}.idb_std_small_color */
EIF_TYPED_VALUE F1042_10007 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "idb_std_small_color";
	RTEX;
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
	
	RTEAA(l_feature_name, 1041, Current, 0, 0, 16356);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1041, Current, 16356);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) IDB_STD_SMALL_COLOR;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_IDB_CONSTANTS}.idb_view_large_color */
EIF_TYPED_VALUE F1042_10008 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "idb_view_large_color";
	RTEX;
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
	
	RTEAA(l_feature_name, 1041, Current, 0, 0, 16357);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1041, Current, 16357);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) IDB_VIEW_LARGE_COLOR;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_IDB_CONSTANTS}.idb_view_small_color */
EIF_TYPED_VALUE F1042_10009 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "idb_view_small_color";
	RTEX;
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
	
	RTEAA(l_feature_name, 1041, Current, 0, 0, 16358);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1041, Current, 16358);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) IDB_VIEW_SMALL_COLOR;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_IDB_CONSTANTS}.valid_tool_bar_bitmap_constant */
EIF_TYPED_VALUE F1042_10010 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_tool_bar_bitmap_constant";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1041, Current, 0, 1, 16359);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1041, Current, 16359);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7790, dtype))(Current)).it_i4);
	if (!(EIF_BOOLEAN)(arg1 == ti4_1)) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7791, dtype))(Current)).it_i4);
		tb3 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb3) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7792, dtype))(Current)).it_i4);
		tb2 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb2) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7793, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	Result = (EIF_BOOLEAN) tb1;
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

void EIF_Minit1042 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
