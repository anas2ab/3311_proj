/*
 * Code for class EV_DYNAMIC_LIST_I [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1606_13052(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1606_13053(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1606_13054(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1606_13055(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1606_13056(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1606_13058(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1606_13059(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1606_13060(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1606_13061(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1606_13063(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1606_13064(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1606_13065(EIF_REFERENCE);
extern void F1606_13066(EIF_REFERENCE);
extern void F1606_13067(EIF_REFERENCE);
extern void F1606_13068(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1606_13069(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1606_13070(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1606_13071(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1606_13072(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1606_13073(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1606_13074(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1606_13075(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1606_13076(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1606_13077(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1606_13078(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1606_13079(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1606_13080(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1606_13081(EIF_REFERENCE);
extern void F1606_13082(EIF_REFERENCE);
extern void F1606_13083(EIF_REFERENCE);
extern void F1606_13084(EIF_REFERENCE);
static EIF_TYPED_VALUE F1606_13087_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1606_13087(EIF_REFERENCE);
extern void F1606_16572(EIF_REFERENCE, int);
extern void EIF_Minit1606(void);

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

/* {EV_DYNAMIC_LIST_I}.interface_item */
EIF_TYPED_VALUE F1606_13052 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "interface_item";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1605, Current, 0, 0, 19595);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19595);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("readable", EX_PRE);
		tb1 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN) (ti4_1 <= ti4_2);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000520, 0,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
	ui4_1 = ti4_1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9968, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
}

/* {EV_DYNAMIC_LIST_I}.item */
EIF_TYPED_VALUE F1606_13053 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "item";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1605, Current, 0, 0, 19596);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19596);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("readable", EX_PRE);
		tb1 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN) (ti4_1 <= ti4_2);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000520, 0,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
	ui4_1 = ti4_1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9968, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
}

/* {EV_DYNAMIC_LIST_I}.index */
EIF_TYPED_VALUE F1606_13054 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9965,Dtype(Current)));
	return r;
}


/* {EV_DYNAMIC_LIST_I}.cursor */
EIF_TYPED_VALUE F1606_13055 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cursor";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE ub2x = {{0}, SK_BOOL};
#define ub2 ub2x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 1605, Current, 2, 0, 19598);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19598);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	tb1 = '\0';
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN) (loc2 <= ti4_1);
	}
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(1, 0xF8000520, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9964, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(4);
	RTDBGAL(0, 0xF8000643, 0,0); /* Result */
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,1603,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(9998, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLN(typres0.id);
	}
	ur1 = RTCCL(loc1);
	ub1 = (EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 0L));
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
	ub2 = (EIF_BOOLEAN) (loc2 > ti4_1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7678, Dtype(tr1)))(tr1, ur1x, ub1x, ub2x);
	RTNHOOK(4,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ub1
#undef ub2
}

/* {EV_DYNAMIC_LIST_I}.interface_i_th */
EIF_TYPED_VALUE F1606_13056 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "interface_i_th";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1605, Current, 0, 1, 19599);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19599);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("readable", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN) (arg1 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000520, 0,0); /* Result */
	ui4_1 = arg1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9968, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
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
#undef ui4_1
#undef arg1
}

/* {EV_DYNAMIC_LIST_I}.off */
EIF_TYPED_VALUE F1606_13058 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "off";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 1605, Current, 0, 0, 19600);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19600);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
	if (!((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
	}
	Result = (EIF_BOOLEAN) tb1;
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

/* {EV_DYNAMIC_LIST_I}.index_of */
EIF_TYPED_VALUE F1606_13059 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "index_of";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1605, Current, 1, 2, 19601);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19601);
	RTCC(arg1, 1605, l_feature_name, 1, RTWCT(9964, dtype, Dftype(Current)), 0x02);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_occurrences", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(3);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(4);
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
				tb1 = (EIF_BOOLEAN) (loc1 > ti4_1);
			}
			if (tb1) break;
			RTHOOK(5);
			ui4_1 = loc1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9968, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if (RTCEQ(tr1, arg1)) {
				RTHOOK(6);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) loc1;
			}
			RTHOOK(7);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EV_DYNAMIC_LIST_I}.retrieve_item_by_data */
EIF_TYPED_VALUE F1606_13060 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "retrieve_item_by_data";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 1605, Current, 3, 2, 19602);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19602);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 == (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L))) || (EIF_BOOLEAN)(Result != NULL))) break;
		RTHOOK(4);
		RTDBGAL(1, 0xF8000520, 0, 0); /* loc1 */
		ui4_1 = loc3;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9968, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		tb1 = '\01';
		tb2 = '\0';
		if (arg2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8441, "data", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb2 = RTEQ(arg1, tr1);
		}
		if (!(tb2)) {
			tb2 = '\0';
			if ((EIF_BOOLEAN) !arg2) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8441, "data", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tb2 = RTCEQ(arg1, tr1);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(6);
			RTDBGAL(0, 0xF8000520, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc1);
		}
		RTHOOK(7);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EV_DYNAMIC_LIST_I}.retrieve_items_by_data */
EIF_TYPED_VALUE F1606_13061 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "retrieve_items_by_data";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,arg1);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 1605, Current, 3, 2, 19603);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19603);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000153, 0,0); /* Result */
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,339,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(9998, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3081, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc2 == (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)))) break;
		RTHOOK(5);
		RTDBGAL(1, 0xF8000520, 0, 0); /* loc1 */
		ui4_1 = loc2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9968, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		if (RTAL & CK_CHECK) {
			RTHOOK(6);
			RTCT("l_item /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(7);
		tb1 = '\01';
		tb2 = '\0';
		if (arg2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8441, "data", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb2 = RTEQ(arg1, tr1);
		}
		if (!(tb2)) {
			tb2 = '\0';
			if ((EIF_BOOLEAN) !arg2) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8441, "data", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tb2 = RTCEQ(arg1, tr1);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(8);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", Result))(Result, ur1x);
		}
		RTHOOK(9);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EV_DYNAMIC_LIST_I}.valid_cursor */
EIF_TYPED_VALUE F1606_13063 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_cursor";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1605, Current, 2, 1, 19604);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19604);
	RTCC(arg1, 1605, l_feature_name, 1, eif_new_type(142, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	loc1 = RTCCL(arg1);
	loc1 = RTRV(RTWCT(9966, dtype, Dftype(Current)),loc1);
	if (EIF_TEST(loc1)) {
		tb2 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7680, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (!(EIF_BOOLEAN)(tr1 == NULL)) {
			tb3 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7680, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = RTCCL(tr1);
			if (EIF_TEST(loc2)) {
				ur1 = RTCCL(loc2);
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9975, dtype))(Current, ur1x)).it_b);
				tb3 = tb4;
			}
			tb2 = tb3;
		}
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {EV_DYNAMIC_LIST_I}.has */
EIF_TYPED_VALUE F1606_13064 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "has";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1605, Current, 1, 1, 19572);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19572);
	RTCC(arg1, 1605, l_feature_name, 1, RTWCT(9964, dtype, Dftype(Current)), 0x02);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(2);
		tb1 = '\01';
		if (!Result) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN) (loc1 > ti4_1);
		}
		if (tb1) break;
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		ui4_1 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9968, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_BOOLEAN) RTCEQ(tr1, arg1);
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {EV_DYNAMIC_LIST_I}.start */
void F1606_13065 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "start";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1605, Current, 0, 0, 19573);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19573);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9965, 0x10000000, 1); /* index */
	*(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("index_on_first", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
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

/* {EV_DYNAMIC_LIST_I}.back */
void F1606_13066 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "back";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1605, Current, 0, 0, 19574);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19574);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_before", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		RTTE((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 9965, 0x10000000, 1); /* index */
	(*(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype)))--;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_DYNAMIC_LIST_I}.forth */
void F1606_13067 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "forth";
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
	
	RTEAA(l_feature_name, 1605, Current, 0, 0, 19575);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19575);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_after", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 9965, 0x10000000, 1); /* index */
	(*(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype)))++;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_DYNAMIC_LIST_I}.go_i_th */
void F1606_13068 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "go_i_th";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 1605, Current, 0, 1, 19576);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19576);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9965, 0x10000000, 1); /* index */
	*(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
	if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 9965, 0x10000000, 1); /* index */
		*(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 > (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(5);
			RTDBGAA(Current, dtype, 9965, 0x10000000, 1); /* index */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
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
#undef arg1
}

/* {EV_DYNAMIC_LIST_I}.go_to */
void F1606_13069 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "go_to";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1605, Current, 2, 1, 19577);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19577);
	RTCC(arg1, 1605, l_feature_name, 1, eif_new_type(142, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000643, 0, 0); /* loc1 */
	{
		EIF_TYPE_INDEX typarr0[] = {1603,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(9998, dtype, dftype);
			typarr0[1] = l_type.annotations | 0xFF00;
			typarr0[2] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc1 = RTCCL(arg1);
		loc1 = RTRV(typres0, loc1);
	}
	RTHOOK(2);
	RTCT0("dlc_not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(7681, "after", loc1));
	if (tb1) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 9965, 0x10000000, 1); /* index */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	} else {
		RTHOOK(5);
		tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(7682, "before", loc1));
		if (tb1) {
			RTHOOK(6);
			RTDBGAA(Current, dtype, 9965, 0x10000000, 1); /* index */
			*(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		} else {
			RTHOOK(7);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7680, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = RTCCL(tr1);
			if (EIF_TEST(loc2)) {
				RTHOOK(8);
				RTDBGAA(Current, dtype, 9965, 0x10000000, 1); /* index */
				ur1 = RTCCL(loc2);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9970, dtype))(Current, ur1x, ui4_1x)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype)) = (EIF_INTEGER_32) ti4_1;
			} else {
				if (RTAL & CK_CHECK) {
					RTHOOK(9);
					RTCT("False", EX_CHECK);
						RTCF;
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_DYNAMIC_LIST_I}.move */
void F1606_13070 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "move";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 1605, Current, 0, 1, 19578);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19578);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9965, 0x10000000, 1); /* index */
	(*(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype))) += arg1;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
	if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 9965, 0x10000000, 1); /* index */
		*(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 > (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(5);
			RTDBGAA(Current, dtype, 9965, 0x10000000, 1); /* index */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
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
#undef arg1
}

/* {EV_DYNAMIC_LIST_I}.append */
void F1606_13071 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1605, Current, 0, 1, 19579);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19579);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,281,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(9998, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg1, 1605, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("sequence_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2409, "start", arg1))(arg1);
	for (;;) {
		RTHOOK(3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2408, "off", arg1))(arg1)).it_b);
		if (tb1) break;
		RTHOOK(4);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2375, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9983, dtype))(Current, ur1x);
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2425, "forth", arg1))(arg1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("count_increased", EX_POST);
		RTCO(tr1);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", arg1))(arg1)).it_i4);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 + ti4_2) == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EV_DYNAMIC_LIST_I}.extend */
void F1606_13072 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "extend";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1605, Current, 0, 1, 19580);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19580);
	RTCC(arg1, 1605, l_feature_name, 1, RTWCT(9964, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9996, dtype))(Current, ur1x, ui4_1x);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 9965, 0x10000000, 1); /* index */
		(*(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype)))++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("has_v", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9975, dtype))(Current, ur1x)).it_b);
		if (tb1) {
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
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_DYNAMIC_LIST_I}.replace */
void F1606_13073 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "replace";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1605, Current, 0, 1, 19581);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19581);
	RTCC(arg1, 1605, l_feature_name, 1, RTWCT(9964, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("writable", EX_PRE);
		tb1 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN) (ti4_1 <= ti4_2);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9997, dtype))(Current, ui4_1x);
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9996, dtype))(Current, ur1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("has_v", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9975, dtype))(Current, ur1x)).it_b);
		if (tb1) {
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
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_DYNAMIC_LIST_I}.put_front */
void F1606_13074 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "put_front";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1605, Current, 0, 1, 19582);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19582);
	RTCC(arg1, 1605, l_feature_name, 1, RTWCT(9964, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9996, dtype))(Current, ur1x, ui4_1x);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 9965, 0x10000000, 1); /* index */
		(*(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype)))++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("has_v", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9975, dtype))(Current, ur1x)).it_b);
		if (tb1) {
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
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_DYNAMIC_LIST_I}.put_right */
void F1606_13075 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "put_right";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1605, Current, 0, 1, 19583);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19583);
	RTCC(arg1, 1605, l_feature_name, 1, RTWCT(9964, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9996, dtype))(Current, ur1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("has_v", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9975, dtype))(Current, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_DYNAMIC_LIST_I}.put_left */
void F1606_13076 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "put_left";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1605, Current, 0, 1, 19584);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19584);
	RTCC(arg1, 1605, l_feature_name, 1, RTWCT(9964, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9996, dtype))(Current, ur1x, ui4_1x);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 9965, 0x10000000, 1); /* index */
	(*(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype)))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("has_v", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9975, dtype))(Current, ur1x)).it_b);
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
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_DYNAMIC_LIST_I}.put_i_th */
void F1606_13077 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "put_i_th";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1605, Current, 0, 2, 19585);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19585);
	RTCC(arg1, 1605, l_feature_name, 1, RTWCT(9964, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN) (arg2 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9996, dtype))(Current, ur1x, ui4_1x);
	RTHOOK(4);
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9997, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("has_v", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9975, dtype))(Current, ur1x)).it_b);
		if (tb1) {
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
	RTLO(4);
	RTEE;
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EV_DYNAMIC_LIST_I}.merge_left */
void F1606_13078 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "merge_left";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1605, Current, 1, 1, 19586);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19586);
	RTCC(arg1, 1605, l_feature_name, 1, RTWCT(9373, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2409, "start", arg1))(arg1);
	for (;;) {
		RTHOOK(2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2327, "is_empty", arg1))(arg1)).it_b);
		if (tb1) break;
		RTHOOK(3);
		RTDBGAL(1, 0xF8000520, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2375, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		if (RTAL & CK_CHECK) {
			RTHOOK(4);
			RTCT("v /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2380, "remove", arg1))(arg1);
		RTHOOK(6);
		ur1 = RTCCL(loc1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9996, dtype))(Current, ur1x, ui4_1x);
		RTHOOK(7);
		RTDBGAA(Current, dtype, 9965, 0x10000000, 1); /* index */
		(*(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype)))++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_DYNAMIC_LIST_I}.merge_right */
void F1606_13079 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "merge_right";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1605, Current, 1, 1, 19587);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19587);
	RTCC(arg1, 1605, l_feature_name, 1, RTWCT(9373, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	for (;;) {
		RTHOOK(1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2327, "is_empty", arg1))(arg1)).it_b);
		if (tb1) break;
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2424, "finish", arg1))(arg1);
		RTHOOK(3);
		RTDBGAL(1, 0xF8000520, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2375, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		if (RTAL & CK_CHECK) {
			RTHOOK(4);
			RTCT("v /= Void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2380, "remove", arg1))(arg1);
		RTHOOK(6);
		ur1 = RTCCL(loc1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9996, dtype))(Current, ur1x, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_DYNAMIC_LIST_I}.prune */
void F1606_13080 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "prune";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,tr5);
	RTLR(8,tr6);
	RTLR(9,tr7);
	RTLR(10,tr8);
	RTLR(11,tr9);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1605, Current, 1, 1, 19588);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19588);
	RTCC(arg1, 1605, l_feature_name, 1, RTWCT(9964, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9975, dtype))(Current, ur1x)).it_b);
		tb1 = tb2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9373, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2419, "index", tr2))(tr2)).it_i4);
		ti4_1 = ti4_2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ur1 = RTCCL(arg1);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9975, dtype))(Current, ur1x)).it_b);
		tb2 = tb3;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9373, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2419, "index", tr4))(tr4)).it_i4);
		ti4_2 = ti4_3;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		RTE_OT
		ur1 = RTCCL(arg1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9970, dtype))(Current, ur1x, ui4_1x)).it_i4);
		ti4_3 = ti4_4;
		tr5 = NULL;
		RTE_O
		tr5 = RTLA;
		RTE_OE
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		ti4_4 = ti4_5;
		RTE_OT
		ur1 = RTCCL(arg1);
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9975, dtype))(Current, ur1x)).it_b);
		tb3 = tb4;
		tr6 = NULL;
		RTE_O
		tr6 = RTLA;
		RTE_OE
		RTE_OT
		tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9373, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2419, "index", tr7))(tr7)).it_i4);
		ti4_5 = ti4_6;
		tr7 = NULL;
		RTE_O
		tr7 = RTLA;
		RTE_OE
		RTE_OT
		ur1 = RTCCL(arg1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9970, dtype))(Current, ur1x, ui4_1x)).it_i4);
		ti4_6 = ti4_7;
		tr8 = NULL;
		RTE_O
		tr8 = RTLA;
		RTE_OE
		ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		ti4_7 = ti4_8;
		in_assertion = 0;
	}
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9970, dtype))(Current, ur1x, ui4_1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_8;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		if ((EIF_BOOLEAN) (loc1 <= ti4_8)) {
			RTHOOK(4);
			RTDBGAA(Current, dtype, 9965, 0x10000000, 1); /* index */
			(*(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype)))--;
		}
		RTHOOK(5);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9997, dtype))(Current, ui4_1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("cursor_not_moved", EX_POST);
		tb4 = '\01';
		RTCO(tr1);
		if ((EIF_BOOLEAN) !tb1) {
			RTCO(tr2);
			tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9373, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			ti4_8 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2419, "index", tr9))(tr9)).it_i4);
			tb4 = (EIF_BOOLEAN)(ti4_1 == ti4_8);
		}
		if (tb4) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("cursor_not_moved", EX_POST);
		tb4 = '\01';
		tb5 = '\0';
		RTCO(tr3);
		if (tb2) {
			RTCO(tr4);
			RTCO(tr5);
			tb5 = (EIF_BOOLEAN) (ti4_2 < ti4_3);
		}
		if (tb5) {
			ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
			tb4 = (EIF_BOOLEAN)(ti4_8 == ti4_4);
		}
		if (tb4) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("cursor_not_moved", EX_POST);
		tb4 = '\01';
		tb5 = '\0';
		RTCO(tr6);
		if (tb3) {
			RTCO(tr7);
			RTCO(tr8);
			tb5 = (EIF_BOOLEAN) (ti4_5 >= ti4_6);
		}
		if (tb5) {
			ti4_8 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
			tb4 = (EIF_BOOLEAN)(ti4_8 == (EIF_INTEGER_32) (ti4_7 - ((EIF_INTEGER_32) 1L)));
		}
		if (tb4) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("not_has_v", EX_POST);
		ur1 = RTCCL(arg1);
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9975, dtype))(Current, ur1x)).it_b);
		if ((EIF_BOOLEAN) !tb4) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {EV_DYNAMIC_LIST_I}.remove */
void F1606_13081 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "remove";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1605, Current, 0, 0, 19589);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19589);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("writable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9969, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9964, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9997, dtype))(Current, ui4_1x);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 > (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 9965, 0x10000000, 1); /* index */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("not_has_v", EX_POST);
		RTCO(tr2);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9975, dtype))(Current, ur1x)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
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
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
}

/* {EV_DYNAMIC_LIST_I}.remove_left */
void F1606_13082 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "remove_left";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1605, Current, 0, 0, 19590);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19590);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("left_exists", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		RTTE((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_before", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		RTTE((EIF_BOOLEAN) !(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		ui4_1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9968, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	RTDBGAA(Current, dtype, 9965, 0x10000000, 1); /* index */
	(*(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype)))--;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9997, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("left_neighbor_removed", EX_POST);
		RTCO(tr2);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9975, dtype))(Current, ur1x)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
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
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
}

/* {EV_DYNAMIC_LIST_I}.remove_right */
void F1606_13083 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "remove_right";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1605, Current, 0, 0, 19591);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19591);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("right_exists", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (ti4_1 < ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9968, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9997, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("right_neighbor_removed", EX_POST);
		RTCO(tr2);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9975, dtype))(Current, ur1x)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
}

/* {EV_DYNAMIC_LIST_I}.wipe_out */
void F1606_13084 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "wipe_out";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1605, Current, 1, 0, 19592);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19592);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(2);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(3);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9979, dtype))(Current, ui4_1x);
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(9992, dtype))(Current);
		RTHOOK(5);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1--;
	}
	RTHOOK(6);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9979, dtype))(Current, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
}

/* {EV_DYNAMIC_LIST_I}.interface */
static EIF_TYPED_VALUE F1606_13087_body (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1605, Current, 0, 0, 19593);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1605, Current, 19593);
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

EIF_TYPED_VALUE F1606_13087 (EIF_REFERENCE Current)
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
			r.it_r = (F1606_13087_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(9374,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


/* {EV_DYNAMIC_LIST_I}._invariant */
void F1606_16572 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 1605, Current, 0, 16571);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("index_within_bounds", Current);
	tb1 = '\01';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9393, dtype))(Current)).it_b);
	if (tb2) {
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
		if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(9965, dtype));
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9973, dtype))(Current)).it_i4);
			tb2 = (EIF_BOOLEAN) (ti4_1 <= (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit1606 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
