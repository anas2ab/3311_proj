/*
 * Code for class EV_PND_ACTION_SEQUENCE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1138_10122(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1138_10123(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1138_10124(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1138_10125(EIF_REFERENCE);
extern void F1138_10126(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1138_10127(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1138(void);

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

/* {EV_PND_ACTION_SEQUENCE}.call */
void F1138_10122 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "call";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLR(6,loc1);
	RTLR(7,tr4);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1137, Current, 1, 1, 16673);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1137, Current, 16673);
	if (arg1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,186,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			RTCC(arg1, 1137, l_feature_name, 1, typres0, 0x00);
		}
	}
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3133, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3121, dtype));
		switch (ti4_1) {
			case 1L:
				RTHOOK(3);
				tr3 = eif_boxed_item(arg1,1);
				ur1 = RTCCL(tr3);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7741, dtype))(Current, ur1x)).it_b);
				if (tb1) {
					RTHOOK(4);
					RTDBGAL(1, 0xF8000153, 0, 0); /* loc1 */
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,339,0xFF01,275,0xFFF9,1,186,0xFF01,0,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
						tr3 = RTLN(typres0.id);
					}
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2386, dtype))(Current)).it_i4);
					ui4_1 = ti4_1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3081, Dtype(tr3)))(tr3, ui4_1x);
					RTNHOOK(4,1);
					loc1 = (EIF_REFERENCE) RTCCL(tr3);
					RTHOOK(5);
					ur1 = RTCCL(Current);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2340, "fill", loc1))(loc1, ur1x);
					RTHOOK(6);
					tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3133, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(6,1);
					ub1 = (EIF_BOOLEAN) 0;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", tr3))(tr3, ub1x);
					RTHOOK(7);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2409, "start", loc1))(loc1);
					if (RTAL & CK_LOOP) {
						RTHOOK(8);
						RTCT("snapshot.count + 1 - snapshot.index", EX_VAR);
						ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
						ti4_4 = *(EIF_INTEGER_32 *)(loc1 + RTVA(3095, "index", loc1));
						ti4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)) - ti4_4);
						if (ti4_2 >= 0) {
							RTCK;
						} else {
							RTCF;
						}
					}
					for (;;) {
						RTHOOK(9);
						tb1 = '\01';
						ti4_3 = *(EIF_INTEGER_32 *)(loc1 + RTVA(3095, "index", loc1));
						ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
						if (!(EIF_BOOLEAN) (ti4_3 > ti4_4)) {
							tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3133, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(9,1);
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2375, "item", tr3))(tr3)).it_b);
							tb1 = tb2;
						}
						if (tb1) break;
						RTHOOK(10);
						tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2375, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(10,1);
						ur1 = RTCCL(arg1);
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4605, "valid_operands", tr3))(tr3, ur1x)).it_b);
						if (tb2) {
							RTHOOK(11);
							tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2375, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(11,1);
							ur1 = RTCCL(arg1);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4613, "flexible_call", tr3))(tr3, ur1x);
						}
						RTHOOK(12);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2425, "forth", loc1))(loc1);
						if (RTAL & CK_LOOP) {
							RTHOOK(8);
							RTCT("snapshot.count + 1 - snapshot.index", EX_VAR);
							ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", loc1))(loc1)).it_i4);
							ti4_4 = *(EIF_INTEGER_32 *)(loc1 + RTVA(3095, "index", loc1));
							ti4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)) - ti4_4);
							if ((ti4_2 > ti4_1) && ti4_1 >= 0) {
								RTCK;
								ti4_2 = ti4_1;
							} else {
								RTCF;
							}
						}
					}
					RTHOOK(13);
					tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3133, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(13,1);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2380, "remove", tr3))(tr3);
				}
				break;
			case 2L:
				RTHOOK(14);
				tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3135, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(14,1);
				ur1 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", tr3))(tr3, ur1x);
				break;
			case 3L:
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("is_aborted_stack_unchanged", EX_POST);
		RTCO(tr2);
		tr3 = tr1;
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3133, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(tr3, tr4)) {
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
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ub1
#undef arg1
}

/* {EV_PND_ACTION_SEQUENCE}.set_veto_pebble_function */
void F1138_10123 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_veto_pebble_function";
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
	
	RTEAA(l_feature_name, 1137, Current, 0, 1, 16674);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1137, Current, 16674);
	if (arg1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {273,0xFF01,0xFFF9,1,186,0xFF01,0,203,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			RTCC(arg1, 1137, l_feature_name, 1, typres0, 0x00);
		}
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7739, 0xF8000111, 0); /* veto_pebble_function */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7739, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EV_PND_ACTION_SEQUENCE}.accepts_pebble */
EIF_TYPED_VALUE F1138_10124 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "accepts_pebble";
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
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,loc1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1137, Current, 2, 1, 16675);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1137, Current, 16675);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_pebble_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7741, dtype))(Current, ur1x)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(2, 0xF80000BA, 0, 0); /* loc2 */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = arg1;
		RTAR(tr1,arg1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		RTDBGAL(1, 0xF800008E, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2381, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2409, dtype))(Current);
		for (;;) {
			RTHOOK(6);
			tb1 = '\01';
			if (!Result) {
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2423, dtype))(Current)).it_b);
				tb1 = tb2;
			}
			if (tb1) break;
			RTHOOK(7);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2375, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			ur1 = RTCCL(loc2);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4605, "valid_operands", tr1))(tr1, ur1x)).it_b);
			Result = (EIF_BOOLEAN) tb2;
			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2425, dtype))(Current);
		}
		RTHOOK(9);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2383, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
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

/* {EV_PND_ACTION_SEQUENCE}.veto_pebble_function */
EIF_TYPED_VALUE F1138_10125 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7739,Dtype(Current)));
	return r;
}


/* {EV_PND_ACTION_SEQUENCE}.set_item_name */
void F1138_10126 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_item_name";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1137, Current, 0, 2, 16677);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1137, Current, 16677);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,275,0xFF01,0xFFF9,1,186,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1137, l_feature_name, 1, typres0, 0x01);
	}
	RTCC(arg2, 1137, l_feature_name, 2, eif_new_type(229, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {EV_PND_ACTION_SEQUENCE}.veto_pebble_function_result */
EIF_TYPED_VALUE F1138_10127 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "veto_pebble_function_result";
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
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,arg1);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1137, Current, 2, 1, 16678);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1137, Current, 16678);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7739, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTHOOK(2);
		RTDBGAL(1, 0xF80000BA, 0, 0); /* loc1 */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = arg1;
		RTAR(tr1,arg1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tb1 = '\0';
		ur1 = RTCCL(loc1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4605, "valid_operands", loc2))(loc2, ur1x)).it_b);
		if (tb2) {
			ur1 = RTCCL(loc1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4639, "flexible_item", loc2))(loc2, ur1x)).it_b);
			tb1 = tb2;
		}
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(4);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
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

void EIF_Minit1138 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
