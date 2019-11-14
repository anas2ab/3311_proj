/*
 * Code for class EV_PARAGRAPH_FORMAT_RANGE_INFORMATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1548_15248(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1548_15249(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1548_15250(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1548_15251(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1548_15252(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1548_15253(EIF_REFERENCE);
extern void EIF_Minit1548(void);

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

/* {EV_PARAGRAPH_FORMAT_RANGE_INFORMATION}.make_with_flags */
void F1548_15248 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 1547, Current, 0, 1, 21344);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1547, Current, 21344);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_paragraph_flag", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6892, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11119, 0x04000000, 1); /* alignment */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6886, 1053))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(arg1,ui4_1);
	*(EIF_BOOLEAN *)(Current + RTWA(11119, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 11120, 0x04000000, 1); /* left_margin */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6887, 1053))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(arg1,ui4_1);
	*(EIF_BOOLEAN *)(Current + RTWA(11120, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 11121, 0x04000000, 1); /* right_margin */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6888, 1053))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(arg1,ui4_1);
	*(EIF_BOOLEAN *)(Current + RTWA(11121, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 11122, 0x04000000, 1); /* top_spacing */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6889, 1053))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(arg1,ui4_1);
	*(EIF_BOOLEAN *)(Current + RTWA(11122, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 11123, 0x04000000, 1); /* bottom_spacing */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6890, 1053))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(arg1,ui4_1);
	*(EIF_BOOLEAN *)(Current + RTWA(11123, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("attributes_set", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		tb5 = *(EIF_BOOLEAN *)(Current + RTWA(11119, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6886, 1053))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_1 = eif_bit_or(arg1,ui4_1);
		if ((EIF_BOOLEAN)(tb5 == (EIF_BOOLEAN)(ti4_1 == arg1))) {
			tb5 = *(EIF_BOOLEAN *)(Current + RTWA(11120, dtype));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6887, 1053))(Current)).it_i4);
			ui4_1 = ti4_1;
			ti4_1 = eif_bit_or(arg1,ui4_1);
			tb4 = (EIF_BOOLEAN)(tb5 == (EIF_BOOLEAN)(ti4_1 == arg1));
		}
		if (tb4) {
			tb4 = *(EIF_BOOLEAN *)(Current + RTWA(11121, dtype));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6888, 1053))(Current)).it_i4);
			ui4_1 = ti4_1;
			ti4_1 = eif_bit_or(arg1,ui4_1);
			tb3 = (EIF_BOOLEAN)(tb4 == (EIF_BOOLEAN)(ti4_1 == arg1));
		}
		if (tb3) {
			tb3 = *(EIF_BOOLEAN *)(Current + RTWA(11122, dtype));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6889, 1053))(Current)).it_i4);
			ui4_1 = ti4_1;
			ti4_1 = eif_bit_or(arg1,ui4_1);
			tb2 = (EIF_BOOLEAN)(tb3 == (EIF_BOOLEAN)(ti4_1 == arg1));
		}
		if (tb2) {
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(11123, dtype));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6890, 1053))(Current)).it_i4);
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
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {EV_PARAGRAPH_FORMAT_RANGE_INFORMATION}.alignment */
EIF_TYPED_VALUE F1548_15249 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(11119,Dtype(Current)));
	return r;
}


/* {EV_PARAGRAPH_FORMAT_RANGE_INFORMATION}.left_margin */
EIF_TYPED_VALUE F1548_15250 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(11120,Dtype(Current)));
	return r;
}


/* {EV_PARAGRAPH_FORMAT_RANGE_INFORMATION}.right_margin */
EIF_TYPED_VALUE F1548_15251 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(11121,Dtype(Current)));
	return r;
}


/* {EV_PARAGRAPH_FORMAT_RANGE_INFORMATION}.top_spacing */
EIF_TYPED_VALUE F1548_15252 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(11122,Dtype(Current)));
	return r;
}


/* {EV_PARAGRAPH_FORMAT_RANGE_INFORMATION}.bottom_spacing */
EIF_TYPED_VALUE F1548_15253 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(11123,Dtype(Current)));
	return r;
}


void EIF_Minit1548 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
