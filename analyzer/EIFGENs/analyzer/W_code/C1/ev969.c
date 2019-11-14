/*
 * Code for class EV_PIXEL_BUFFER_PIXEL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F969_7310(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7311(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7312(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7313(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7314(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7315(EIF_REFERENCE);
extern void F969_7316(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7317(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7318(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7319(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7320(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F969_7321(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7322(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F969_7323(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F969_7324(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7325(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7326(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7327(EIF_REFERENCE);
extern void F969_7328(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F969_7329(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7330(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7331(EIF_REFERENCE);
static EIF_TYPED_VALUE F969_7332_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7332(EIF_REFERENCE);
extern void EIF_Minit969(void);

#ifdef __cplusplus
}
#endif

#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PIXEL_BUFFER_PIXEL}.default_create */
void F969_7310 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 13627);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13627);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(eif_new_type(120, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1556, "is_windows", tr1))(tr1)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 5113, 0x30000000, 1); /* red_shift */
		*(EIF_NATURAL_8 *)(Current + RTWA(5113, dtype)) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 16L);
		RTHOOK(3);
		RTDBGAA(Current, dtype, 5114, 0x30000000, 1); /* green_shift */
		*(EIF_NATURAL_8 *)(Current + RTWA(5114, dtype)) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 8L);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 5115, 0x30000000, 1); /* blue_shift */
		*(EIF_NATURAL_8 *)(Current + RTWA(5115, dtype)) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		RTHOOK(5);
		RTDBGAA(Current, dtype, 5116, 0x30000000, 1); /* alpha_shift */
		*(EIF_NATURAL_8 *)(Current + RTWA(5116, dtype)) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 24L);
	} else {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 5113, 0x30000000, 1); /* red_shift */
		*(EIF_NATURAL_8 *)(Current + RTWA(5113, dtype)) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 24L);
		RTHOOK(7);
		RTDBGAA(Current, dtype, 5114, 0x30000000, 1); /* green_shift */
		*(EIF_NATURAL_8 *)(Current + RTWA(5114, dtype)) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 16L);
		RTHOOK(8);
		RTDBGAA(Current, dtype, 5115, 0x30000000, 1); /* blue_shift */
		*(EIF_NATURAL_8 *)(Current + RTWA(5115, dtype)) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 8L);
		RTHOOK(9);
		RTDBGAA(Current, dtype, 5116, 0x30000000, 1); /* alpha_shift */
		*(EIF_NATURAL_8 *)(Current + RTWA(5116, dtype)) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_PIXEL_BUFFER_PIXEL}.red */
EIF_TYPED_VALUE F969_7311 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "red";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 13628);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13628);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x30000000, 1,0); /* Result */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5120, dtype));
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(5113, dtype));
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	ui4_1 = ti4_1;
	tu4_2 = eif_bit_shift_right(tu4_1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) (tu4_2);
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef ui4_1
}

/* {EV_PIXEL_BUFFER_PIXEL}.green */
EIF_TYPED_VALUE F969_7312 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "green";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 13629);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13629);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x30000000, 1,0); /* Result */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5120, dtype));
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(5114, dtype));
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	ui4_1 = ti4_1;
	tu4_2 = eif_bit_shift_right(tu4_1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) (tu4_2);
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef ui4_1
}

/* {EV_PIXEL_BUFFER_PIXEL}.blue */
EIF_TYPED_VALUE F969_7313 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "blue";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 13630);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13630);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x30000000, 1,0); /* Result */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5120, dtype));
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(5115, dtype));
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	ui4_1 = ti4_1;
	tu4_2 = eif_bit_shift_right(tu4_1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) (tu4_2);
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef ui4_1
}

/* {EV_PIXEL_BUFFER_PIXEL}.alpha */
EIF_TYPED_VALUE F969_7314 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "alpha";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 13631);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13631);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x30000000, 1,0); /* Result */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5120, dtype));
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(5116, dtype));
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	ui4_1 = ti4_1;
	tu4_2 = eif_bit_shift_right(tu4_1,ui4_1);
	tu1_1 = (EIF_NATURAL_8) (tu4_2);
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef ui4_1
}

/* {EV_PIXEL_BUFFER_PIXEL}.rgba_value */
EIF_TYPED_VALUE F969_7315 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "rgba_value";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	
	RTEAA(l_feature_name, 968, Current, 2, 0, 13632);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13632);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5120, dtype));
	Result = (EIF_NATURAL_32) tu4_1;
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1556, 120))(Current)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = ((EIF_INTEGER_32) 8L);
		tu4_1 = eif_bit_shift_left(Result,ui4_1);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(4);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = ((EIF_INTEGER_32) 24L);
		tu4_1 = eif_bit_shift_right(Result,ui4_1);
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(5);
		RTDBGAL(0, 0x38000000, 1,0); /* Result */
		uu4_1 = loc2;
		tu4_1 = eif_bit_or(loc1,uu4_1);
		Result = (EIF_NATURAL_32) tu4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ui4_1
#undef uu4_1
}

/* {EV_PIXEL_BUFFER_PIXEL}.set_red */
void F969_7316 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_red";
	RTEX;
#define arg1 arg1x.it_n1
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE uu1_2x = {{0}, SK_UINT8};
#define uu1_2 uu1_2x.it_n1
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13610);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13610);
	RTIV(Current, RTAL);
	RTHOOK(1);
	uu1_1 = arg1;
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(5113, dtype));
	uu1_2 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5117, dtype))(Current, uu1_1x, uu1_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("red_set", EX_POST);
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5100, dtype))(Current)).it_n1);
		if ((EIF_BOOLEAN)(tu1_1 == arg1)) {
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
#undef uu1_1
#undef uu1_2
#undef arg1
}

/* {EV_PIXEL_BUFFER_PIXEL}.set_green */
void F969_7317 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_green";
	RTEX;
#define arg1 arg1x.it_n1
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE uu1_2x = {{0}, SK_UINT8};
#define uu1_2 uu1_2x.it_n1
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13611);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13611);
	RTIV(Current, RTAL);
	RTHOOK(1);
	uu1_1 = arg1;
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(5114, dtype));
	uu1_2 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5117, dtype))(Current, uu1_1x, uu1_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("green_set", EX_POST);
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5101, dtype))(Current)).it_n1);
		if ((EIF_BOOLEAN)(tu1_1 == arg1)) {
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
#undef uu1_1
#undef uu1_2
#undef arg1
}

/* {EV_PIXEL_BUFFER_PIXEL}.set_blue */
void F969_7318 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_blue";
	RTEX;
#define arg1 arg1x.it_n1
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE uu1_2x = {{0}, SK_UINT8};
#define uu1_2 uu1_2x.it_n1
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13612);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13612);
	RTIV(Current, RTAL);
	RTHOOK(1);
	uu1_1 = arg1;
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(5115, dtype));
	uu1_2 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5117, dtype))(Current, uu1_1x, uu1_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("blue_set", EX_POST);
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5102, dtype))(Current)).it_n1);
		if ((EIF_BOOLEAN)(tu1_1 == arg1)) {
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
#undef uu1_1
#undef uu1_2
#undef arg1
}

/* {EV_PIXEL_BUFFER_PIXEL}.set_alpha */
void F969_7319 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_alpha";
	RTEX;
#define arg1 arg1x.it_n1
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_TYPED_VALUE uu1_2x = {{0}, SK_UINT8};
#define uu1_2 uu1_2x.it_n1
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13613);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13613);
	RTIV(Current, RTAL);
	RTHOOK(1);
	uu1_1 = arg1;
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(5116, dtype));
	uu1_2 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5117, dtype))(Current, uu1_1x, uu1_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("alpha_set", EX_POST);
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5103, dtype))(Current)).it_n1);
		if ((EIF_BOOLEAN)(tu1_1 == arg1)) {
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
#undef uu1_1
#undef uu1_2
#undef arg1
}

/* {EV_PIXEL_BUFFER_PIXEL}.set_values */
void F969_7320 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "set_values";
	RTEX;
#define arg1 arg1x.it_n1
#define arg2 arg2x.it_n1
#define arg3 arg3x.it_n1
#define arg4 arg4x.it_n1
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n1 = * (EIF_NATURAL_8 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n1 = * (EIF_NATURAL_8 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n1 = * (EIF_NATURAL_8 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT8,&arg1);
	RTLU(SK_UINT8,&arg2);
	RTLU(SK_UINT8,&arg3);
	RTLU(SK_UINT8,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 4, 13614);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13614);
	RTIV(Current, RTAL);
	RTHOOK(1);
	uu1_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5105, dtype))(Current, uu1_1x);
	RTHOOK(2);
	uu1_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5106, dtype))(Current, uu1_1x);
	RTHOOK(3);
	uu1_1 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5107, dtype))(Current, uu1_1x);
	RTHOOK(4);
	uu1_1 = arg4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5108, dtype))(Current, uu1_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef uu1_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_PIXEL}.set_rgba_value */
void F969_7321 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_rgba_value";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 968, Current, 3, 1, 13615);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13615);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1556, 120))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = ((EIF_INTEGER_32) 8L);
		tu4_1 = eif_bit_shift_right(arg1,ui4_1);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(3);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = ((EIF_INTEGER_32) 24L);
		tu4_1 = eif_bit_shift_left(arg1,ui4_1);
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(4);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		uu4_1 = loc2;
		tu4_1 = eif_bit_or(loc1,uu4_1);
		loc1 = (EIF_NATURAL_32) tu4_1;
	} else {
		RTHOOK(5);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		loc1 = (EIF_NATURAL_32) arg1;
	}
	RTHOOK(6);
	RTDBGAL(3, 0xF8000564, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5121, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		tb2 = *(EIF_BOOLEAN *)(loc3 + RTVA(9475, "is_locked", loc3));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(8);
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5118, dtype));
		uu4_1 = tu4_1;
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5119, dtype));
		uu4_2 = tu4_2;
		uu4_3 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9474, "set_pixel", loc3))(loc3, uu4_1x, uu4_2x, uu4_3x);
	}
	RTHOOK(9);
	RTDBGAA(Current, dtype, 5120, 0x38000000, 1); /* internal_color_value */
	*(EIF_NATURAL_32 *)(Current + RTWA(5120, dtype)) = (EIF_NATURAL_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("rgba_value_set", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5121, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5121, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			tb3 = *(EIF_BOOLEAN *)(tr1 + RTVA(9475, "is_locked", tr1));
			tb2 = tb3;
		}
		if (tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5121, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,2);
			tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5118, dtype));
			uu4_1 = tu4_1;
			tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5119, dtype));
			uu4_2 = tu4_2;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9473, "get_pixel", tr1))(tr1, uu4_1x, uu4_2x)).it_n4);
			tb1 = (EIF_BOOLEAN)(tu4_1 == arg1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
#undef arg1
}

/* {EV_PIXEL_BUFFER_PIXEL}.set_pixel_buffer */
void F969_7322 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_pixel_buffer";
	RTEX;
#define arg1 arg1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 1, 13616);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13616);
	RTCC(arg1, 968, l_feature_name, 1, eif_new_type(1380, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_pixel_buffer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5121, 0xF8000564, 0); /* internal_pixel_buffer */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5121, dtype)) = (EIF_REFERENCE) tr1;
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

/* {EV_PIXEL_BUFFER_PIXEL}.sync_with_pixel_buffer_value */
void F969_7323 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "sync_with_pixel_buffer_value";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 2, 13617);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13617);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5118, 0x38000000, 1); /* current_column_value */
	*(EIF_NATURAL_32 *)(Current + RTWA(5118, dtype)) = (EIF_NATURAL_32) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5119, 0x38000000, 1); /* current_row_value */
	*(EIF_NATURAL_32 *)(Current + RTWA(5119, dtype)) = (EIF_NATURAL_32) arg2;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5121, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 5120, 0x38000000, 1); /* internal_color_value */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5121, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		uu4_1 = arg1;
		uu4_2 = arg2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9473, "get_pixel", tr1))(tr1, uu4_1x, uu4_2x)).it_n4);
		*(EIF_NATURAL_32 *)(Current + RTWA(5120, dtype)) = (EIF_NATURAL_32) tu4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef uu4_1
#undef uu4_2
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_PIXEL}.red_shift */
EIF_TYPED_VALUE F969_7324 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = *(EIF_NATURAL_8 *)(Current + RTWA(5113,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_PIXEL}.green_shift */
EIF_TYPED_VALUE F969_7325 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = *(EIF_NATURAL_8 *)(Current + RTWA(5114,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_PIXEL}.blue_shift */
EIF_TYPED_VALUE F969_7326 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = *(EIF_NATURAL_8 *)(Current + RTWA(5115,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_PIXEL}.alpha_shift */
EIF_TYPED_VALUE F969_7327 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = *(EIF_NATURAL_8 *)(Current + RTWA(5116,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_PIXEL}.set_component_value */
void F969_7328 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_component_value";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_n1
#define arg2 arg2x.it_n1
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n1 = * (EIF_NATURAL_8 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT8,&arg1);
	RTLU(SK_UINT8,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	
	RTEAA(l_feature_name, 968, Current, 2, 2, 13622);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13622);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg2) {
		case 24U:
			RTHOOK(2);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 16777215L);
			break;
		case 16U:
			RTHOOK(3);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4278255615));
			break;
		case 8U:
			RTHOOK(4);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4294902015));
			break;
		default:
			RTHOOK(5);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4294967040));
			break;
	}
	RTHOOK(6);
	RTDBGAA(Current, dtype, 5120, 0x38000000, 1); /* internal_color_value */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5120, dtype));
	uu4_1 = loc1;
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	*(EIF_NATURAL_32 *)(Current + RTWA(5120, dtype)) = (EIF_NATURAL_32) tu4_2;
	RTHOOK(7);
	RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
	tu4_1 = (EIF_NATURAL_32) arg1;
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(8);
	RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
	ti4_1 = (EIF_INTEGER_32) arg2;
	ui4_1 = ti4_1;
	tu4_1 = eif_bit_shift_left(loc2,ui4_1);
	loc2 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 5120, 0x38000000, 1); /* internal_color_value */
	tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5120, dtype));
	uu4_1 = loc2;
	tu4_2 = eif_bit_or(tu4_1,uu4_1);
	*(EIF_NATURAL_32 *)(Current + RTWA(5120, dtype)) = (EIF_NATURAL_32) tu4_2;
	RTHOOK(10);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5121, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5121, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,1);
		tb2 = *(EIF_BOOLEAN *)(tr1 + RTVA(9475, "is_locked", tr1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(11);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5121, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5118, dtype));
		uu4_1 = tu4_1;
		tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5119, dtype));
		uu4_2 = tu4_2;
		tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5120, dtype));
		uu4_3 = tu4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9474, "set_pixel", tr1))(tr1, uu4_1x, uu4_2x, uu4_3x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("pixel_set", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5121, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5121, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,1);
			tb3 = *(EIF_BOOLEAN *)(tr1 + RTVA(9475, "is_locked", tr1));
			tb2 = tb3;
		}
		if (tb2) {
			tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(5120, dtype));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5121, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,2);
			tu4_2 = *(EIF_NATURAL_32 *)(Current + RTWA(5118, dtype));
			uu4_1 = tu4_2;
			tu4_3 = *(EIF_NATURAL_32 *)(Current + RTWA(5119, dtype));
			uu4_2 = tu4_3;
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9473, "get_pixel", tr1))(tr1, uu4_1x, uu4_2x)).it_n4);
			tb1 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_PIXEL}.current_column_value */
EIF_TYPED_VALUE F969_7329 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5118,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_PIXEL}.current_row_value */
EIF_TYPED_VALUE F969_7330 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5119,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_PIXEL}.internal_color_value */
EIF_TYPED_VALUE F969_7331 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(5120,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_PIXEL}.internal_pixel_buffer */
static EIF_TYPED_VALUE F969_7332_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "internal_pixel_buffer";
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
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 13626);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13626);
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

EIF_TYPED_VALUE F969_7332 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5121,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(5121, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F969_7332_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(5121,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit969 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
