/*
 * Code for class EV_MENU_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1530_14793(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1530_14796(EIF_REFERENCE);
static EIF_TYPED_VALUE F1530_14797_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1530_14797(EIF_REFERENCE);
extern void EIF_Minit1530(void);

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

/* {EV_MENU_I}.parent */
EIF_TYPED_VALUE F1530_14793 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parent";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1529, Current, 1, 0, 20975);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1529, Current, 20975);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10893, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		RTDBGAL(0, 0xF800055D, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9374, "interface", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = RTCCL(tr1);
		Result = RTRV(eif_new_type(1373, 0x00), Result);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {EV_MENU_I}.one_radio_item_selected_per_separator */
EIF_TYPED_VALUE F1530_14796 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "one_radio_item_selected_per_separator";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1529, Current, 4, 0, 20976);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1529, Current, 20976);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	RTDBGAL(4, 0xF800008E, 0, 0); /* loc4 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9966, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9976, dtype))(Current);
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
		if (!(EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)))) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) break;
		RTHOOK(5);
		RTDBGAL(1, 0xF800054E, 0, 0); /* loc1 */
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9964, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTRV(eif_new_type(1358, 0x00), loc1);
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(7);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
		RTHOOK(8);
		RTDBGAL(3, 0xF800054D, 0, 0); /* loc3 */
		loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9964, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = RTRV(eif_new_type(1357, 0x00), loc3);
		RTHOOK(9);
		tb2 = '\0';
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8702, "is_selected", loc3))(loc3)).it_b);
			tb2 = tb3;
		}
		if (tb2) {
			RTHOOK(10);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
			RTHOOK(11);
			if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 1L))) {
				RTHOOK(12);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		}
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9978, dtype))(Current);
	}
	RTHOOK(14);
	ur1 = RTCCL(loc4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9980, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("index_not_changed", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
}

/* {EV_MENU_I}.interface */
static EIF_TYPED_VALUE F1530_14797_body (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1529, Current, 0, 0, 20977);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1529, Current, 20977);
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

EIF_TYPED_VALUE F1530_14797 (EIF_REFERENCE Current)
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
			r.it_r = (F1530_14797_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(9374,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1530 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
