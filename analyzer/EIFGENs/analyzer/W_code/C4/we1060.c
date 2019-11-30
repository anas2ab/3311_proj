/*
 * Code for class WEL_TTN_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1060_10184(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10185(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1060_10186(EIF_REFERENCE);
extern void EIF_Minit1060(void);

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

/* {WEL_TTN_CONSTANTS}.ttn_needtext */
EIF_TYPED_VALUE F1060_10184 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ttn_needtext";
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
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16530);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16530);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TTN_NEEDTEXT;
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

/* {WEL_TTN_CONSTANTS}.ttn_pop */
EIF_TYPED_VALUE F1060_10185 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ttn_pop";
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
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16531);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16531);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TTN_POP;
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

/* {WEL_TTN_CONSTANTS}.ttn_show */
EIF_TYPED_VALUE F1060_10186 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ttn_show";
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
	
	RTEAA(l_feature_name, 1059, Current, 0, 0, 16532);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1059, Current, 16532);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TTN_SHOW;
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

void EIF_Minit1060 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
