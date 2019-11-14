/*
 * Code for class KL_ARRAY_ROUTINES [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1634_10629(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1634_10630(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1634_10631(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1634_10632(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1634_10633(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1634_10634(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1634_10635(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1634_10636(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1634_10637(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit1634(void);

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

/* {KL_ARRAY_ROUTINES}.make_from_array */
EIF_TYPED_VALUE F1634_10629 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_from_array";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc1);
	RTLR(6,tr2);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1633, Current, 1, 2, 17256);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1633, Current, 17256);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,593,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(8123, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg1, 1633, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000251, 0,0); /* Result */
	ur1 = RTCCL(arg1);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2781, "lower", arg1));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2780, "upper", arg1));
	ui4_2 = ti4_2;
	ui4_3 = arg2;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8118, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("array_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("lower_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2781, "lower", Result));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("count_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", Result))(Result)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("same_items", EX_POST);
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2781, "lower", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Result + RTVA(2780, "upper", Result));
		ui4_1 = ti4_2;
		tr1 = RTLN(eif_new_type(218, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = ti4_1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4435, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3711, "after", loc1))(loc1)).it_b);
			if (tb2) break;
			RTHOOK(8);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3710, "item", loc1))(loc1)).it_i4);
			ui4_1 = ti4_1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", Result))(Result, ui4_1x)).it_i4);
			ui4_1 = ti4_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3710, "item", loc1))(loc1)).it_i4);
			ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2781, "lower", arg1));
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + ti4_3) - arg2);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", arg1))(arg1, ui4_2x)).it_i4);
			ui4_2 = ti4_2;
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,1635,0,0,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = RTWCT(8123, dtype, Dftype(Current));
					typarr0[2] = l_type.annotations | 0xFF00;
					typarr0[3] = l_type.id;
				}
				
				typres0 = eif_compound_id(Dftype(Current), typarr0);
				tr1 = RTLN(typres0.id);
			}
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11144, Dtype(tr1)))(tr1, ui4_1x, ui4_2x)).it_b);
			tb1 = tb3;
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3712, "forth", loc1))(loc1);
		}
		if (tb1) {
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
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {KL_ARRAY_ROUTINES}.make_empty_with_lower */
EIF_TYPED_VALUE F1634_10630 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_empty_with_lower";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1633, Current, 1, 1, 17257);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1633, Current, 17257);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		RTDBGAL(0, 0xF8000251, 0,0); /* Result */
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,593,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(8123, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2744, Dtype(tr1)))(tr1);
		RTNHOOK(2,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(3);
		RTDBGAL(1, 0xF8000662, 0, 0); /* loc1 */
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,1634,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(8123, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2744, Dtype(tr1)))(tr1);
		RTNHOOK(3,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7719, "new_rebase", loc1))(loc1, ui4_1x);
		RTHOOK(5);
		RTDBGAL(0, 0xF8000251, 0,0); /* Result */
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,593,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(8123, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2747, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(5,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("array_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("lower_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2781, "lower", Result));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("is_empty", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2327, "is_empty", Result))(Result)).it_b);
		if (tb1) {
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef arg1
}

/* {KL_ARRAY_ROUTINES}.has */
EIF_TYPED_VALUE F1634_10631 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "has";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 1633, Current, 2, 2, 17258);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1633, Current, 17258);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,593,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(8123, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg1, 1633, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2781, "lower", arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2780, "upper", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", arg1))(arg1, ui4_1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTHOOK(6);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(7);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(8);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg2
#undef arg1
}

/* {KL_ARRAY_ROUTINES}.has_void */
EIF_TYPED_VALUE F1634_10632 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "has_void";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1633, Current, 3, 1, 17259);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1633, Current, 17259);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,593,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(8123, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		RTCC(arg1, 1633, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc3 = RTCCL(arg1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,593,0xFF02,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(8123, dtype, dftype);
			typarr0[3] = l_type.annotations | 0xFF00;
			typarr0[4] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc3 = RTRV(typres0,loc3);
	}
	if (EIF_TEST(loc3)) {
		RTHOOK(3);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(2781, "lower", loc3));
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = *(EIF_INTEGER_32 *)(loc3 + RTVA(2780, "upper", loc3));
		loc2 = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(6);
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc3))(loc3, ui4_1x)).it_i4);
			if (EIF_FALSE) {
				RTHOOK(7);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(8);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(9);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {KL_ARRAY_ROUTINES}.subarray */
EIF_TYPED_VALUE F1634_10633 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "subarray";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,loc1);
	RTLR(7,tr2);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1633, Current, 1, 4, 17251);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1633, Current, 17251);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,593,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(8123, dtype, dftype);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		RTCC(arg1, 1633, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_pos_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2781, "lower", arg1));
		RTTE((EIF_BOOLEAN) (arg2 >= ti4_1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2780, "upper", arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	if ((EIF_BOOLEAN) (arg3 < arg2)) {
		RTHOOK(6);
		RTDBGAL(0, 0xF8000251, 0,0); /* Result */
		ui4_1 = arg4;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8115, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(7);
		RTDBGAL(0, 0xF8000251, 0,0); /* Result */
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,593,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(8123, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		ui4_1 = arg2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", arg1))(arg1, ui4_1x)).it_i4);
		ui4_1 = ti4_1;
		ui4_2 = arg4;
		ui4_3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg3) - arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2745, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
		RTNHOOK(7,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(8);
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg1);
		ui4_1 = arg2;
		ui4_2 = arg3;
		ui4_3 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8120, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x, ui4_3x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("array_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("lower_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2781, "lower", Result));
		if ((EIF_BOOLEAN)(ti4_1 == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("count_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", Result))(Result)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("same_items", EX_POST);
		RTHOOK(13);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(2781, "lower", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Result + RTVA(2780, "upper", Result));
		ui4_1 = ti4_2;
		tr1 = RTLN(eif_new_type(218, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = ti4_1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4435, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3711, "after", loc1))(loc1)).it_b);
			if (tb2) break;
			RTHOOK(14);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3710, "item", loc1))(loc1)).it_i4);
			ui4_1 = ti4_1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", Result))(Result, ui4_1x)).it_i4);
			ui4_1 = ti4_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3710, "item", loc1))(loc1)).it_i4);
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + arg2) - arg4);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", arg1))(arg1, ui4_2x)).it_i4);
			ui4_2 = ti4_2;
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,1635,0,0,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = RTWCT(8123, dtype, dftype);
					typarr0[2] = l_type.annotations | 0xFF00;
					typarr0[3] = l_type.id;
				}
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLN(typres0.id);
			}
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11144, Dtype(tr1)))(tr1, ui4_1x, ui4_2x)).it_b);
			tb1 = tb3;
			RTHOOK(15);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3712, "forth", loc1))(loc1);
		}
		if (tb1) {
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
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {KL_ARRAY_ROUTINES}.cloned_array */
EIF_TYPED_VALUE F1634_10634 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cloned_array";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1633, Current, 0, 1, 17252);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1633, Current, 17252);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,593,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(8123, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg1, 1633, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000251, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("cloned_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("same_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5066, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_equal", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", Result))(Result, ur1x)).it_b);
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef arg1
}

/* {KL_ARRAY_ROUTINES}.subcopy */
void F1634_10635 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "subcopy";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1633, Current, 1, 5, 17253);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1633, Current, 17253);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,593,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(8123, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg1, 1633, l_feature_name, 1, typres0, 0x01);
	}
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,593,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(8123, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg2, 1633, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_same", EX_PRE);
		RTTE(!RTCEQ(arg1, arg2), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("start_pos_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(2781, "lower", arg2));
		RTTE((EIF_BOOLEAN) (arg3 >= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(2780, "upper", arg2));
		RTTE((EIF_BOOLEAN) (arg4 <= ti4_1), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("valid_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(7);
		RTCT("index_pos_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2781, "lower", arg1));
		RTTE((EIF_BOOLEAN) (arg5 >= ti4_1), label_1);
		RTCK;
		RTHOOK(8);
		RTCT("enough_space", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2780, "upper", arg1));
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 - arg5) >= (EIF_INTEGER_32) (arg4 - arg3)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(9);
	if ((EIF_BOOLEAN) (arg3 <= arg4)) {
		RTHOOK(10);
		ur1 = RTCCL(arg2);
		ui4_1 = arg3;
		ui4_2 = arg4;
		ui4_3 = arg5;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2758, "subcopy", arg1))(arg1, ur1x, ui4_1x, ui4_2x, ui4_3x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("copied", EX_POST);
		RTHOOK(12);
		ui4_1 = (EIF_INTEGER_32) (arg4 - arg3);
		tr1 = RTLN(eif_new_type(218, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 0L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4435, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3711, "after", loc1))(loc1)).it_b);
			if (tb2) break;
			RTHOOK(13);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3710, "item", loc1))(loc1)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (arg5 + ti4_1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", arg1))(arg1, ui4_1x)).it_i4);
			ui4_1 = ti4_1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3710, "item", loc1))(loc1)).it_i4);
			ui4_2 = (EIF_INTEGER_32) (arg3 + ti4_2);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", arg2))(arg2, ui4_2x)).it_i4);
			ui4_2 = ti4_2;
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,1635,0,0,0xFFFF};
				EIF_TYPE typres0;
				{
					EIF_TYPE l_type;
					l_type = RTWCT(8123, dtype, Dftype(Current));
					typarr0[2] = l_type.annotations | 0xFF00;
					typarr0[3] = l_type.id;
				}
				
				typres0 = eif_compound_id(Dftype(Current), typarr0);
				tr1 = RTLN(typres0.id);
			}
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11144, Dtype(tr1)))(tr1, ui4_1x, ui4_2x)).it_b);
			tb1 = tb3;
			RTHOOK(14);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3712, "forth", loc1))(loc1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {KL_ARRAY_ROUTINES}.resize */
void F1634_10636 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "resize";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1633, Current, 0, 3, 17254);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1633, Current, 17254);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,593,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(8123, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg1, 1633, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_min_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2781, "lower", arg1));
		RTTE((EIF_BOOLEAN) (arg2 <= ti4_1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_max_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2780, "upper", arg1));
		RTTE((EIF_BOOLEAN) (arg3 >= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("has_default", EX_PRE);
		tr1 = RTLNTY2(RTWCT(8123, dtype, Dftype(Current)), 0x00);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3879, "has_default", tr1))(tr1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	tr1 = RTLNTY2(RTWCT(8123, dtype, Dftype(Current)), 0x00);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3887, "default", tr1))(tr1)).it_i4);
	ui4_1 = ti4_1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8122, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("lower_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2781, "lower", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("upper_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2780, "upper", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == arg3)) {
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
	RTLO(5);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg3
#undef arg2
#undef arg1
}

/* {KL_ARRAY_ROUTINES}.resize_with_default */
void F1634_10637 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "resize_with_default";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1633, Current, 0, 4, 17255);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1633, Current, 17255);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,593,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(8123, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg1, 1633, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_min_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2781, "lower", arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_max_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2780, "upper", arg1));
		RTTE((EIF_BOOLEAN) (arg4 >= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	if ((EIF_BOOLEAN) (arg3 <= arg4)) {
		RTHOOK(5);
		ui4_1 = arg2;
		ui4_2 = arg3;
		ui4_3 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2772, "conservative_resize_with_default", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("lower_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2781, "lower", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("upper_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(2780, "upper", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == arg4)) {
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
	RTLO(6);
	RTEE;
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit1634 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
