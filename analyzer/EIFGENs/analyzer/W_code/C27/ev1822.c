/*
 * Code for class EV_CHARACTER_FORMAT_RANGE_INFORMATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1822_20257(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1822_20258(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1822_20259(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1822_20260(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1822_20261(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1822_20262(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1822_20263(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1822_20264(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1822_20265(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1822_20266(EIF_REFERENCE);
extern void EIF_Minit1822(void);

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

/* {EV_CHARACTER_FORMAT_RANGE_INFORMATION}.make_with_flags */
void F1822_20257 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_with_flags";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
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
	
	RTEAA(l_feature_name, 1821, Current, 0, 1, 26330);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1821, Current, 26330);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_flags", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8547, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 16880, 0x04000000, 1); /* font_family */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8538, 1115))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(arg1,ui4_1);
	*(EIF_BOOLEAN *)(Current + RTWA(16880, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 16881, 0x04000000, 1); /* font_weight */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8539, 1115))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(arg1,ui4_1);
	*(EIF_BOOLEAN *)(Current + RTWA(16881, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 16882, 0x04000000, 1); /* font_shape */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8540, 1115))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(arg1,ui4_1);
	*(EIF_BOOLEAN *)(Current + RTWA(16882, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 16883, 0x04000000, 1); /* font_height */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8541, 1115))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(arg1,ui4_1);
	*(EIF_BOOLEAN *)(Current + RTWA(16883, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 16884, 0x04000000, 1); /* color */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8542, 1115))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(arg1,ui4_1);
	*(EIF_BOOLEAN *)(Current + RTWA(16884, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 16885, 0x04000000, 1); /* background_color */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8543, 1115))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(arg1,ui4_1);
	*(EIF_BOOLEAN *)(Current + RTWA(16885, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 16886, 0x04000000, 1); /* effects_striked_out */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8544, 1115))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(arg1,ui4_1);
	*(EIF_BOOLEAN *)(Current + RTWA(16886, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 16887, 0x04000000, 1); /* effects_underlined */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8545, 1115))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(arg1,ui4_1);
	*(EIF_BOOLEAN *)(Current + RTWA(16887, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	RTHOOK(10);
	RTDBGAA(Current, dtype, 16888, 0x04000000, 1); /* effects_vertical_offset */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8546, 1115))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(arg1,ui4_1);
	*(EIF_BOOLEAN *)(Current + RTWA(16888, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("attributes_set", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		tb5 = '\0';
		tb6 = '\0';
		tb7 = '\0';
		tb8 = '\0';
		tb9 = *(EIF_BOOLEAN *)(Current + RTWA(16880, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8538, 1115))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_1 = eif_bit_or(arg1,ui4_1);
		if ((EIF_BOOLEAN)(tb9 == (EIF_BOOLEAN)(ti4_1 == arg1))) {
			tb9 = *(EIF_BOOLEAN *)(Current + RTWA(16881, dtype));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8539, 1115))(Current)).it_i4);
			ui4_1 = ti4_1;
			ti4_1 = eif_bit_or(arg1,ui4_1);
			tb8 = (EIF_BOOLEAN)(tb9 == (EIF_BOOLEAN)(ti4_1 == arg1));
		}
		if (tb8) {
			tb8 = *(EIF_BOOLEAN *)(Current + RTWA(16882, dtype));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8540, 1115))(Current)).it_i4);
			ui4_1 = ti4_1;
			ti4_1 = eif_bit_or(arg1,ui4_1);
			tb7 = (EIF_BOOLEAN)(tb8 == (EIF_BOOLEAN)(ti4_1 == arg1));
		}
		if (tb7) {
			tb7 = *(EIF_BOOLEAN *)(Current + RTWA(16883, dtype));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8541, 1115))(Current)).it_i4);
			ui4_1 = ti4_1;
			ti4_1 = eif_bit_or(arg1,ui4_1);
			tb6 = (EIF_BOOLEAN)(tb7 == (EIF_BOOLEAN)(ti4_1 == arg1));
		}
		if (tb6) {
			tb6 = *(EIF_BOOLEAN *)(Current + RTWA(16884, dtype));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8542, 1115))(Current)).it_i4);
			ui4_1 = ti4_1;
			ti4_1 = eif_bit_or(arg1,ui4_1);
			tb5 = (EIF_BOOLEAN)(tb6 == (EIF_BOOLEAN)(ti4_1 == arg1));
		}
		if (tb5) {
			tb5 = *(EIF_BOOLEAN *)(Current + RTWA(16885, dtype));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8543, 1115))(Current)).it_i4);
			ui4_1 = ti4_1;
			ti4_1 = eif_bit_or(arg1,ui4_1);
			tb4 = (EIF_BOOLEAN)(tb5 == (EIF_BOOLEAN)(ti4_1 == arg1));
		}
		if (tb4) {
			tb4 = *(EIF_BOOLEAN *)(Current + RTWA(16886, dtype));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8544, 1115))(Current)).it_i4);
			ui4_1 = ti4_1;
			ti4_1 = eif_bit_or(arg1,ui4_1);
			tb3 = (EIF_BOOLEAN)(tb4 == (EIF_BOOLEAN)(ti4_1 == arg1));
		}
		if (tb3) {
			tb3 = *(EIF_BOOLEAN *)(Current + RTWA(16887, dtype));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8545, 1115))(Current)).it_i4);
			ui4_1 = ti4_1;
			ti4_1 = eif_bit_or(arg1,ui4_1);
			tb2 = (EIF_BOOLEAN)(tb3 == (EIF_BOOLEAN)(ti4_1 == arg1));
		}
		if (tb2) {
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(16888, dtype));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8546, 1115))(Current)).it_i4);
			ui4_1 = ti4_1;
			ti4_1 = eif_bit_or(arg1,ui4_1);
			tb1 = (EIF_BOOLEAN)(tb2 == (EIF_BOOLEAN)(ti4_1 == arg1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {EV_CHARACTER_FORMAT_RANGE_INFORMATION}.font_family */
EIF_TYPED_VALUE F1822_20258 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(16880,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_RANGE_INFORMATION}.font_weight */
EIF_TYPED_VALUE F1822_20259 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(16881,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_RANGE_INFORMATION}.font_shape */
EIF_TYPED_VALUE F1822_20260 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(16882,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_RANGE_INFORMATION}.font_height */
EIF_TYPED_VALUE F1822_20261 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(16883,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_RANGE_INFORMATION}.color */
EIF_TYPED_VALUE F1822_20262 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(16884,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_RANGE_INFORMATION}.background_color */
EIF_TYPED_VALUE F1822_20263 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(16885,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_RANGE_INFORMATION}.effects_striked_out */
EIF_TYPED_VALUE F1822_20264 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(16886,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_RANGE_INFORMATION}.effects_underlined */
EIF_TYPED_VALUE F1822_20265 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(16887,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_RANGE_INFORMATION}.effects_vertical_offset */
EIF_TYPED_VALUE F1822_20266 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(16888,Dtype(Current)));
	return r;
}


void EIF_Minit1822 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
