/*
 * Code for class WEL_TVI_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1302_13352(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1302_13353(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1302_13354(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1302_13355(EIF_REFERENCE);
extern void EIF_Minit1302(void);

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

/* {WEL_TVI_CONSTANTS}.tvi_root */
EIF_TYPED_VALUE F1302_13352 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tvi_root";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1301, Current, 0, 0, 19581);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1301, Current, 19581);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) TVI_ROOT;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {WEL_TVI_CONSTANTS}.tvi_first */
EIF_TYPED_VALUE F1302_13353 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tvi_first";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1301, Current, 0, 0, 19582);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1301, Current, 19582);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) TVI_FIRST;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {WEL_TVI_CONSTANTS}.tvi_last */
EIF_TYPED_VALUE F1302_13354 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tvi_last";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1301, Current, 0, 0, 19583);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1301, Current, 19583);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) TVI_LAST;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {WEL_TVI_CONSTANTS}.tvi_sort */
EIF_TYPED_VALUE F1302_13355 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tvi_sort";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1301, Current, 0, 0, 19584);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1301, Current, 19584);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) TVI_SORT;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

void EIF_Minit1302 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
