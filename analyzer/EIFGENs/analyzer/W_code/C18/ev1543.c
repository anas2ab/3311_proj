/*
 * Code for class EV_DRAWING_AREA_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1543_14995(EIF_REFERENCE);
extern void F1543_14996(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1543_14997(EIF_REFERENCE);
static EIF_TYPED_VALUE F1543_14998_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1543_14998(EIF_REFERENCE);
extern void EIF_Minit1543(void);

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

/* {EV_DRAWING_AREA_I}.enable_focus_on_press */
void F1543_14995 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_focus_on_press";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1542, Current, 0, 0, 21117);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1542, Current, 21117);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 11022, 0x04000000, 1); /* focus_on_press_disabled */
	*(EIF_BOOLEAN *)(Current + RTWA(11022, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_DRAWING_AREA_I}.disable_focus_on_press */
void F1543_14996 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_focus_on_press";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1542, Current, 0, 0, 21118);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1542, Current, 21118);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 11022, 0x04000000, 1); /* focus_on_press_disabled */
	*(EIF_BOOLEAN *)(Current + RTWA(11022, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_DRAWING_AREA_I}.focus_on_press_disabled */
EIF_TYPED_VALUE F1543_14997 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(11022,Dtype(Current)));
	return r;
}


/* {EV_DRAWING_AREA_I}.interface */
static EIF_TYPED_VALUE F1543_14998_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "interface";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1542, Current, 0, 0, 21120);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1542, Current, 21120);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

EIF_TYPED_VALUE F1543_14998 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9374,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(9374, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1543_14998_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(9374,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1543 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
