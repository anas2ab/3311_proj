/*
 * Code for class WEL_RETURN_VALUE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1137_11230(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1137_11231(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1137_11232(EIF_REFERENCE);
extern void F1137_11233(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1137_11234(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1137_11235(EIF_REFERENCE);
extern void F1137_11236(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1137_11237(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1137_11238(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1137_11239(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1137_11240(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1137_11241(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1137_11242(EIF_REFERENCE);
extern void EIF_Minit1137(void);

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

/* {WEL_RETURN_VALUE}.has_return_value */
EIF_TYPED_VALUE F1137_11230 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "has_return_value";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1136, Current, 1, 0, 17549);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1136, Current, 17549);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800030E, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9014, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", loc1))(loc1)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
		if ((EIF_BOOLEAN) (ti4_1 >= ti4_2)) {
			if (RTAL & CK_CHECK) {
				RTHOOK(5);
				RTCT("valid_level_count", EX_CHECK);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
				if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(6);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2556, "item", loc1))(loc1, ui4_1x)).it_b);
			Result = (EIF_BOOLEAN) tb1;
		} else {
			RTHOOK(7);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
}

/* {WEL_RETURN_VALUE}.message_return_value */
EIF_TYPED_VALUE F1137_11231 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "message_return_value";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1136, Current, 1, 0, 17550);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1136, Current, 17550);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("has_return_value", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9006, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000177, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9015, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	if (RTAL & CK_CHECK) {
		RTHOOK(3);
		RTCT("not_void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("good_area", EX_CHECK);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", loc1))(loc1)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
		if ((EIF_BOOLEAN) (ti4_1 >= ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("valid_level_count", EX_CHECK);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(7);
		RTDBGAL(0, 0x40000000, 1,0); /* Result */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
		ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2556, "item", loc1))(loc1, ui4_1x)).it_p);
		Result = (EIF_POINTER) tp1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef up1
#undef ui4_1
}

/* {WEL_RETURN_VALUE}.default_processing */
EIF_TYPED_VALUE F1137_11232 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_processing";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1136, Current, 1, 0, 17551);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1136, Current, 17551);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800030E, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9016, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", loc1))(loc1)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
		if ((EIF_BOOLEAN) (ti4_1 >= ti4_2)) {
			if (RTAL & CK_CHECK) {
				RTHOOK(5);
				RTCT("valid_level_count", EX_CHECK);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
				if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(6);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2556, "item", loc1))(loc1, ui4_1x)).it_b);
			Result = (EIF_BOOLEAN) tb1;
		} else {
			RTHOOK(7);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
}

/* {WEL_RETURN_VALUE}.set_message_return_value */
void F1137_11233 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_message_return_value";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1136, Current, 2, 1, 17552);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1136, Current, 17552);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800030E, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9014, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(2, 0xF8000177, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9015, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(4);
		RTDBGAL(1, 0xF800030E, 0, 0); /* loc1 */
		ub1 = (EIF_BOOLEAN) 0;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9017, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(RTWCT(9014, dtype, Dftype(Current)).id,0,ui4_1,sizeof(EIF_BOOLEAN), EIF_TRUE);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2562, Dtype(tr1)))(tr1, ub1x, ui4_1x);
		RTNHOOK(4,1);
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		RTDBGAA(Current, dtype, 9014, 0xF800030E, 0); /* has_return_value_area */
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(9014, dtype)) = (EIF_REFERENCE) loc1;
	}
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		RTHOOK(7);
		RTDBGAL(2, 0xF8000177, 0, 0); /* loc2 */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		up1 = tp1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9017, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(RTWCT(9015, dtype, Dftype(Current)).id,0,ui4_1,sizeof(EIF_POINTER), EIF_TRUE);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2562, Dtype(tr1)))(tr1, up1x, ui4_1x);
		RTNHOOK(7,1);
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(8);
		RTDBGAA(Current, dtype, 9015, 0xF8000177, 0); /* message_return_value_area */
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current + RTWA(9015, dtype)) = (EIF_REFERENCE) loc2;
	}
	RTHOOK(9);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", loc1))(loc1)).it_i4);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
	if ((EIF_BOOLEAN) (ti4_1 < ti4_2)) {
		RTHOOK(10);
		RTDBGAL(1, 0xF800030E, 0, 0); /* loc1 */
		ub1 = (EIF_BOOLEAN) 0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9018, dtype))(Current)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ti4_2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2590, "aliased_resized_area_with_default", loc1))(loc1, ub1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(11);
		RTDBGAL(2, 0xF8000177, 0, 0); /* loc2 */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		up1 = tp1;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9018, dtype))(Current)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ti4_2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2590, "aliased_resized_area_with_default", loc2))(loc2, up1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(12);
		RTDBGAA(Current, dtype, 9014, 0xF800030E, 0); /* has_return_value_area */
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(9014, dtype)) = (EIF_REFERENCE) loc1;
		RTHOOK(13);
		RTDBGAA(Current, dtype, 9015, 0xF8000177, 0); /* message_return_value_area */
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current + RTWA(9015, dtype)) = (EIF_REFERENCE) loc2;
	}
	if (RTAL & CK_CHECK) {
		RTHOOK(14);
		RTCT("valid_level_count", EX_CHECK);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(15);
	up1 = arg1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
	ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2572, "put", loc2))(loc2, up1x, ui4_1x);
	RTHOOK(16);
	ub1 = (EIF_BOOLEAN) 1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
	ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2572, "put", loc1))(loc1, ub1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("has_return_value", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9006, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("value_set", EX_POST);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9007, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(tp1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ui4_1
#undef ub1
#undef arg1
}

/* {WEL_RETURN_VALUE}.set_default_processing */
void F1137_11234 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_default_processing";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1136, Current, 1, 1, 17553);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1136, Current, 17553);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800030E, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9016, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(3);
		RTDBGAL(1, 0xF800030E, 0, 0); /* loc1 */
		ub1 = (EIF_BOOLEAN) 0;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9017, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(RTWCT(9016, dtype, Dftype(Current)).id,0,ui4_1,sizeof(EIF_BOOLEAN), EIF_TRUE);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2562, Dtype(tr1)))(tr1, ub1x, ui4_1x);
		RTNHOOK(3,1);
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 9016, 0xF800030E, 0); /* default_processing_area */
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(9016, dtype)) = (EIF_REFERENCE) loc1;
	}
	RTHOOK(5);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", loc1))(loc1)).it_i4);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
	if ((EIF_BOOLEAN) (ti4_1 < ti4_2)) {
		RTHOOK(6);
		RTDBGAL(1, 0xF800030E, 0, 0); /* loc1 */
		ub1 = (EIF_BOOLEAN) 0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9018, dtype))(Current)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ti4_2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2590, "aliased_resized_area_with_default", loc1))(loc1, ub1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 9016, 0xF800030E, 0); /* default_processing_area */
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(9016, dtype)) = (EIF_REFERENCE) loc1;
	}
	if (RTAL & CK_CHECK) {
		RTHOOK(8);
		RTCT("valid_level_count", EX_CHECK);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(9);
	ub1 = arg1;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
	ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2572, "put", loc1))(loc1, ub1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("value_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9008, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN)(tb1 == arg1)) {
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
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef ub1
#undef arg1
}

/* {WEL_RETURN_VALUE}.increment_level */
void F1137_11235 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "increment_level";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1136, Current, 1, 0, 17554);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1136, Current, 17554);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9013, 0x10000000, 1); /* level_count */
	(*(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype)))++;
	RTHOOK(2);
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9006, dtype))(Current)).it_b);
	if (tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9014, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = tr1;
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		RTHOOK(3);
		ub1 = (EIF_BOOLEAN) 0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
		ui4_1 = (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2572, "put", loc1))(loc1, ub1x, ui4_1x);
	}
	RTHOOK(4);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9008, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(5);
		ub1 = (EIF_BOOLEAN) 1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9010, dtype))(Current, ub1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("level_count_increased", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("default_processing_true", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9008, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("has_return_value_false", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9006, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 0)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
#undef ub1
}

/* {WEL_RETURN_VALUE}.decrement_level */
void F1137_11236 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "decrement_level";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1136, Current, 0, 0, 17555);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1136, Current, 17555);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("level_count_greater_than_one", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
		RTTE((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	RTDBGAA(Current, dtype, 9013, 0x10000000, 1); /* level_count */
	(*(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype)))--;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("level_count_equal_or_greater_than_zero", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
		if ((EIF_BOOLEAN) (ti4_2 >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("level_count_decreased", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9013, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
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
	RTLO(2);
	RTEE;
}

/* {WEL_RETURN_VALUE}.level_count */
EIF_TYPED_VALUE F1137_11237 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9013,Dtype(Current)));
	return r;
}


/* {WEL_RETURN_VALUE}.has_return_value_area */
EIF_TYPED_VALUE F1137_11238 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9014,Dtype(Current)));
	return r;
}


/* {WEL_RETURN_VALUE}.message_return_value_area */
EIF_TYPED_VALUE F1137_11239 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9015,Dtype(Current)));
	return r;
}


/* {WEL_RETURN_VALUE}.default_processing_area */
EIF_TYPED_VALUE F1137_11240 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9016,Dtype(Current)));
	return r;
}


/* {WEL_RETURN_VALUE}.initial_area_size */
EIF_TYPED_VALUE F1137_11241 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {WEL_RETURN_VALUE}.area_resize_increment */
EIF_TYPED_VALUE F1137_11242 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

void EIF_Minit1137 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
