/*
 * Code for class EV_GDI_PEN
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1581_17507(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1581_17508(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1581_17509(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1581_17510(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1581_17511(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1581_17512(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1581_17513(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1581_17514(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1581_17515(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1581_17516(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit1581(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_GDI_PEN}.make_with_values */
void F1581_17507 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make_with_values";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,arg3);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1580, Current, 0, 3, 24158);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1580, Current, 24158);
	RTCC(arg3, 1580, l_feature_name, 3, eif_new_type(1532, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = arg1;
	ui4_2 = arg2;
	ur1 = RTCCL(arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(14744, dtype))(Current, ui4_1x, ui4_2x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_GDI_PEN}.hash_code */
EIF_TYPED_VALUE F1581_17508 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "hash_code";
	RTEX;
	EIF_REAL_32 loc1 = (EIF_REAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_REAL_32 tr4_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REAL32, &loc1);
	
	RTEAA(l_feature_name, 1580, Current, 1, 0, 24159);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1580, Current, 24159);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(14723, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		RTDBGAL(1, 0x18000000, 1, 0); /* loc1 */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(14741, dtype));
		tr4_1 = (EIF_REAL_32) (ti4_1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(14743, dtype));
		tr4_2 = (EIF_REAL_32) (ti4_1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(14742, dtype));
		tr4_3 = (EIF_REAL_32) (ti4_1);
		loc1 = (EIF_REAL_32) (EIF_REAL_32) ((EIF_REAL_32) ((EIF_REAL_32) ((EIF_REAL_32) 262144.0 * tr4_1) + (EIF_REAL_32) ((EIF_REAL_32) 4096.0 * tr4_2)) + (EIF_REAL_32) ((EIF_REAL_32) 64.0 * tr4_3));
		RTHOOK(3);
		RTDBGAA(Current, dtype, 14723, 0x10000000, 1); /* computed_hash_code */
		tr4_1 = eif_abs_real32 (loc1);
		RTNHOOK(3,1);
		tr1 = RTLN(eif_new_type(191, 0x00).id);
		*(EIF_REAL_32 *)tr1 = tr4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4091, "floor", tr1))(tr1)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(14740, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(14739, dtype));
		ti4_4 = eif_abs_int32 ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (ti4_2 * ((EIF_INTEGER_32) 2L))) + ti4_3));
		*(EIF_INTEGER_32 *)(Current + RTWA(14723, dtype)) = (EIF_INTEGER_32) ti4_4;
	}
	RTHOOK(4);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(14723, dtype));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {EV_GDI_PEN}.style */
EIF_TYPED_VALUE F1581_17509 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(14739,Dtype(Current)));
	return r;
}


/* {EV_GDI_PEN}.line_width */
EIF_TYPED_VALUE F1581_17510 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(14740,Dtype(Current)));
	return r;
}


/* {EV_GDI_PEN}.color_red */
EIF_TYPED_VALUE F1581_17511 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(14741,Dtype(Current)));
	return r;
}


/* {EV_GDI_PEN}.color_blue */
EIF_TYPED_VALUE F1581_17512 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(14742,Dtype(Current)));
	return r;
}


/* {EV_GDI_PEN}.color_green */
EIF_TYPED_VALUE F1581_17513 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(14743,Dtype(Current)));
	return r;
}


/* {EV_GDI_PEN}.item */
EIF_TYPED_VALUE F1581_17514 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(14726,Dtype(Current)));
	return r;
}


/* {EV_GDI_PEN}.is_equal */
EIF_TYPED_VALUE F1581_17515 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_equal";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1580, Current, 0, 1, 24156);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1580, Current, 24156);
	RTCC(arg1, 1580, l_feature_name, 1, eif_new_type(1580, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(14739, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(14739, "style", arg1));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(14740, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(14740, "line_width", arg1));
		tb4 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	if (tb4) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(14741, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(14741, "color_red", arg1));
		tb3 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	if (tb3) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(14743, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(14743, "color_green", arg1));
		tb2 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	if (tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(14742, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(14742, "color_blue", arg1));
		tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12, dtype))(Current, ur1x)).it_b);
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {EV_GDI_PEN}.set_values */
void F1581_17516 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "set_values";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1580, Current, 1, 3, 24157);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1580, Current, 24157);
	RTCC(arg3, 1580, l_feature_name, 3, eif_new_type(1532, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 14739, 0x10000000, 1); /* style */
	*(EIF_INTEGER_32 *)(Current + RTWA(14739, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 14740, 0x10000000, 1); /* line_width */
	*(EIF_INTEGER_32 *)(Current + RTWA(14740, dtype)) = (EIF_INTEGER_32) arg2;
	RTHOOK(3);
	RTDBGAL(1, 0xF8000727, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13665, "color", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 14741, 0x10000000, 1); /* color_red */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17004, "red", loc1))(loc1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(14741, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 14742, 0x10000000, 1); /* color_blue */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17006, "blue", loc1))(loc1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(14742, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 14743, 0x10000000, 1); /* color_green */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17005, "green", loc1))(loc1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(14743, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 14723, 0x10000000, 1); /* computed_hash_code */
	*(EIF_INTEGER_32 *)(Current + RTWA(14723, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit1581 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
