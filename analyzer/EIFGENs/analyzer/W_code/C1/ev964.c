/*
 * Code for class EV_CHARACTER_FORMAT_EFFECTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F964_7263(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_7264(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_7265(EIF_REFERENCE);
extern EIF_TYPED_VALUE F964_7266(EIF_REFERENCE);
extern void F964_7267(EIF_REFERENCE);
extern void F964_7268(EIF_REFERENCE);
extern void F964_7269(EIF_REFERENCE);
extern void F964_7270(EIF_REFERENCE);
extern void F964_7271(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit964(void);

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

/* {EV_CHARACTER_FORMAT_EFFECTS}.is_striked_out */
EIF_TYPED_VALUE F964_7263 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5053,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_EFFECTS}.is_underlined */
EIF_TYPED_VALUE F964_7264 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5054,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_EFFECTS}.vertical_offset */
EIF_TYPED_VALUE F964_7265 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5055,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_EFFECTS}.is_in_default_state */
EIF_TYPED_VALUE F964_7266 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_in_default_state";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13566);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13566);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5053, dtype));
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(5054, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5055, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) !tb1 && (EIF_BOOLEAN) !tb2) && (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {EV_CHARACTER_FORMAT_EFFECTS}.enable_striked_out */
void F964_7267 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_striked_out";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13567);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13567);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5053, 0x04000000, 1); /* is_striked_out */
	*(EIF_BOOLEAN *)(Current + RTWA(5053, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_striked_out", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5053, dtype));
		if (tb1) {
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
}

/* {EV_CHARACTER_FORMAT_EFFECTS}.disable_striked_out */
void F964_7268 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_striked_out";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13568);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13568);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5053, 0x04000000, 1); /* is_striked_out */
	*(EIF_BOOLEAN *)(Current + RTWA(5053, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_striked_out", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5053, dtype));
		if ((EIF_BOOLEAN) !tb1) {
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
}

/* {EV_CHARACTER_FORMAT_EFFECTS}.enable_underlined */
void F964_7269 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_underlined";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13569);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13569);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5054, 0x04000000, 1); /* is_underlined */
	*(EIF_BOOLEAN *)(Current + RTWA(5054, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_underlined", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5054, dtype));
		if (tb1) {
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
}

/* {EV_CHARACTER_FORMAT_EFFECTS}.disable_underlined */
void F964_7270 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_underlined";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 0, 13570);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13570);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5054, 0x04000000, 1); /* is_underlined */
	*(EIF_BOOLEAN *)(Current + RTWA(5054, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_underlined", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5054, dtype));
		if ((EIF_BOOLEAN) !tb1) {
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
}

/* {EV_CHARACTER_FORMAT_EFFECTS}.set_vertical_offset */
void F964_7271 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_vertical_offset";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 963, Current, 0, 1, 13571);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(963, Current, 13571);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5055, 0x10000000, 1); /* vertical_offset */
	*(EIF_INTEGER_32 *)(Current + RTWA(5055, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("vertical_offset_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5055, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef arg1
}

void EIF_Minit964 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
