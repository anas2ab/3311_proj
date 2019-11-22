/*
 * Code for class KL_DIRECTORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1569_15576(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1569_15577(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1569_15578(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1569_15579(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1569_15580(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1569_15581(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1569_15582(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1569_15583(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1569_15584(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1569_15585(EIF_REFERENCE);
extern void F1569_15586(EIF_REFERENCE);
extern void F1569_15587(EIF_REFERENCE);
extern void F1569_15588(EIF_REFERENCE);
extern void F1569_15589(EIF_REFERENCE);
extern void F1569_15590(EIF_REFERENCE);
extern void F1569_15591(EIF_REFERENCE);
extern void F1569_15592(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1569_15593(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1569_15594(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1569_15595(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1569_15596(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1569_15597(EIF_REFERENCE);
extern void F1569_15598(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1569_15599(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1569_15600(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1569_15601(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1569_15602(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1569_15603(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1569_15604(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1569_15605(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1569_15606(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1569_15607(EIF_REFERENCE);
extern void F1569_16591(EIF_REFERENCE, int);
extern void EIF_Minit1569(void);

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

/* {KL_DIRECTORY}.make */
void F1569_15576 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1568, Current, 0, 1, 21643);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21643);
	RTCC(arg1, 1568, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11428, 0xF80000E8, 0); /* name */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11428, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 11427, 0xF80000E8, 0); /* last_entry */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11424, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11427, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7804, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ur1 = RTCCL(arg1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8134, "as_string", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3329, dtype))(Current, ur1x);
	} else {
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11425, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3329, dtype))(Current, ur1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("name_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(11428, dtype));
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("is_closed", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6883, dtype))(Current)).it_b);
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
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {KL_DIRECTORY}.name */
EIF_TYPED_VALUE F1569_15577 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11428,Dtype(Current)));
	return r;
}


/* {KL_DIRECTORY}.last_entry */
EIF_TYPED_VALUE F1569_15578 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11427,Dtype(Current)));
	return r;
}


/* {KL_DIRECTORY}.filenames */
EIF_TYPED_VALUE F1569_15579 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "filenames";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,loc1);
	RTLR(6,tr3);
	RTLR(7,ur2);
	RTLR(8,Result);
	RTLR(9,loc6);
	RTLIU(10);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 1568, Current, 6, 0, 21646);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21646);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6883, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6887, dtype))(Current);
		RTHOOK(3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6963, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(4);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
			RTHOOK(5);
			RTDBGAL(2, 0xF800014C, 0, 0); /* loc2 */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,332,0xFF01,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			tr2 = RTMS_EX_H("",0,0);
			ur1 = tr2;
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = loc5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2745, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
			RTNHOOK(5,1);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6959, dtype))(Current);
			for (;;) {
				RTHOOK(7);
				tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11426, dtype));
				if (tb1) break;
				RTHOOK(8);
				RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11427, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc1 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(9);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11421, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(9,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(9,2);
				tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11420, dtype))(Current)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
				ur1 = RTCCL(tr3);
				ur2 = RTCCL(loc1);
				tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11591, "pathname", tr2))(tr2, ur1x, ur2x)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
				ur1 = RTCCL(tr3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6880, "reset", tr1))(tr1, ur1x);
				RTHOOK(10);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11421, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(10,1);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6885, "is_readable", tr1))(tr1)).it_b);
				if (tb2) {
					RTHOOK(11);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					loc4++;
					RTHOOK(12);
					if ((EIF_BOOLEAN) (loc4 > loc5)) {
						RTHOOK(13);
						RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
						loc5 += ((EIF_INTEGER_32) 10L);
						RTHOOK(14);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7663, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(14,1);
						ur1 = RTCCL(loc2);
						tr2 = RTMS_EX_H("",0,0);
						ur2 = tr2;
						ui4_1 = ((EIF_INTEGER_32) 1L);
						ui4_2 = loc5;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8154, "resize_with_default", tr1))(tr1, ur1x, ur2x, ui4_1x, ui4_2x);
					}
					RTHOOK(15);
					ur1 = RTCCL(loc1);
					ui4_1 = loc4;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", loc2))(loc2, ur1x, ui4_1x);
				}
				RTHOOK(16);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6959, dtype))(Current);
			}
			RTHOOK(17);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6888, dtype))(Current);
			RTHOOK(18);
			RTDBGAL(0, 0xF800014C, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,332,0xFF01,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			tr2 = RTMS_EX_H("",0,0);
			ur1 = tr2;
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2745, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
			RTNHOOK(18,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(19);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(20);
				if ((EIF_BOOLEAN) (loc3 > loc4)) break;
				RTHOOK(21);
				ui4_1 = loc3;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				ui4_1 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", Result))(Result, ur1x, ui4_1x);
				RTHOOK(22);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3++;
			}
		}
	} else {
		RTHOOK(23);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(23,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11420, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6880, "reset", tr1))(tr1, ur1x);
		RTHOOK(24);
		RTDBGAL(0, 0xF800014C, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(24,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7667, "filenames", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr2);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(25);
		RTCT("no_void_filename", EX_POST);
		tb2 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7663, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(25,1);
			ur1 = RTCCL(Result);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8149, "has_void", tr1))(tr1, ur1x)).it_b);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(26);
		RTCT("no_empty_filename", EX_POST);
		tb2 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTHOOK(27);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc6 = (EIF_REFERENCE) RTCCL(tr1);
			tb3 = EIF_TRUE;
			for (;;) {
				if (!tb3) break;
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3711, "after", loc6))(loc6)).it_b);
				if (tb4) break;
				RTHOOK(28);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3710, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", tr1))(tr1)).it_b);
				tb3 = (EIF_BOOLEAN) !tb5;
				RTHOOK(29);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3712, "forth", loc6))(loc6);
			}
			tb2 = tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
}

/* {KL_DIRECTORY}.directory_names */
EIF_TYPED_VALUE F1569_15580 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "directory_names";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,loc1);
	RTLR(6,tr3);
	RTLR(7,ur2);
	RTLR(8,Result);
	RTLR(9,loc6);
	RTLIU(10);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 1568, Current, 6, 0, 21647);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21647);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6883, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6887, dtype))(Current);
		RTHOOK(3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6963, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(4);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
			RTHOOK(5);
			RTDBGAL(2, 0xF800014C, 0, 0); /* loc2 */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,332,0xFF01,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			tr2 = RTMS_EX_H("",0,0);
			ur1 = tr2;
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = loc5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2745, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
			RTNHOOK(5,1);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6959, dtype))(Current);
			for (;;) {
				RTHOOK(7);
				tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11426, dtype));
				if (tb1) break;
				RTHOOK(8);
				RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11427, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc1 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(9);
				tb2 = '\0';
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7804, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(9,1);
				ur1 = RTCCL(loc1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(9,2);
				tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11595, "relative_current_directory", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
				ur2 = RTCCL(tr3);
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8120, "same_string", tr1))(tr1, ur1x, ur2x)).it_b);
				if ((EIF_BOOLEAN) !tb3) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7804, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(9,3);
					ur1 = RTCCL(loc1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(9,4);
					tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11596, "relative_parent_directory", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
					ur2 = RTCCL(tr3);
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8120, "same_string", tr1))(tr1, ur1x, ur2x)).it_b);
					tb2 = (EIF_BOOLEAN) !tb3;
				}
				if (tb2) {
					RTHOOK(10);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(10,1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(10,2);
					tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11420, dtype))(Current)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
					ur1 = RTCCL(tr3);
					ur2 = RTCCL(loc1);
					tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11591, "pathname", tr2))(tr2, ur1x, ur2x)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
					ur1 = RTCCL(tr3);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6880, "reset", tr1))(tr1, ur1x);
					RTHOOK(11);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(11,1);
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6885, "is_readable", tr1))(tr1)).it_b);
					if (tb2) {
						RTHOOK(12);
						RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
						loc4++;
						RTHOOK(13);
						if ((EIF_BOOLEAN) (loc4 > loc5)) {
							RTHOOK(14);
							RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
							loc5 += ((EIF_INTEGER_32) 10L);
							RTHOOK(15);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7663, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(15,1);
							ur1 = RTCCL(loc2);
							tr2 = RTMS_EX_H("",0,0);
							ur2 = tr2;
							ui4_1 = ((EIF_INTEGER_32) 1L);
							ui4_2 = loc5;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8154, "resize_with_default", tr1))(tr1, ur1x, ur2x, ui4_1x, ui4_2x);
						}
						RTHOOK(16);
						ur1 = RTCCL(loc1);
						ui4_1 = loc4;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", loc2))(loc2, ur1x, ui4_1x);
					}
				}
				RTHOOK(17);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6959, dtype))(Current);
			}
			RTHOOK(18);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6888, dtype))(Current);
			RTHOOK(19);
			RTDBGAL(0, 0xF800014C, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,332,0xFF01,232,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLN(typres0.id);
			}
			tr2 = RTMS_EX_H("",0,0);
			ur1 = tr2;
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2745, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
			RTNHOOK(19,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(20);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(21);
				if ((EIF_BOOLEAN) (loc3 > loc4)) break;
				RTHOOK(22);
				ui4_1 = loc3;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", loc2))(loc2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				ui4_1 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", Result))(Result, ur1x, ui4_1x);
				RTHOOK(23);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3++;
			}
		}
	} else {
		RTHOOK(24);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(24,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11420, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6880, "reset", tr1))(tr1, ur1x);
		RTHOOK(25);
		RTDBGAL(0, 0xF800014C, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(25,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7668, "directory_names", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr2);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(26);
		RTCT("no_void_directory_names", EX_POST);
		tb2 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7663, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(26,1);
			ur1 = RTCCL(Result);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8149, "has_void", tr1))(tr1, ur1x)).it_b);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("no_empty_directory_names", EX_POST);
		tb2 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTHOOK(28);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc6 = (EIF_REFERENCE) RTCCL(tr1);
			tb3 = EIF_TRUE;
			for (;;) {
				if (!tb3) break;
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3711, "after", loc6))(loc6)).it_b);
				if (tb4) break;
				RTHOOK(29);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3710, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", tr1))(tr1)).it_b);
				tb3 = (EIF_BOOLEAN) !tb5;
				RTHOOK(30);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3712, "forth", loc6))(loc6);
			}
			tb2 = tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
}

/* {KL_DIRECTORY}.is_open_read */
EIF_TYPED_VALUE F1569_15581 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_open_read";
	RTEX;
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
	
	RTEAA(l_feature_name, 1568, Current, 0, 0, 21648);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21648);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6883, dtype))(Current)).it_b);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
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

/* {KL_DIRECTORY}.end_of_input */
EIF_TYPED_VALUE F1569_15582 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(11426,Dtype(Current)));
	return r;
}


/* {KL_DIRECTORY}.exists */
EIF_TYPED_VALUE F1569_15583 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "exists";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1568, Current, 0, 0, 21650);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21650);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11428, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3354, dtype))(Current)).it_b);
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {KL_DIRECTORY}.is_readable */
EIF_TYPED_VALUE F1569_15584 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_readable";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1568, Current, 0, 0, 21651);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21651);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11428, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tb1 = '\0';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3354, dtype))(Current)).it_b);
		if (tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3355, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		Result = (EIF_BOOLEAN) tb1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("exists", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6884, dtype))(Current)).it_b);
			tb1 = tb2;
		}
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {KL_DIRECTORY}.is_empty */
EIF_TYPED_VALUE F1569_15585 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_empty";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1568, Current, 1, 0, 21652);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21652);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6883, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6887, dtype))(Current);
		RTHOOK(3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6963, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(4);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(5);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6959, dtype))(Current);
			for (;;) {
				RTHOOK(6);
				tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11426, dtype));
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !Result || tb1)) break;
				RTHOOK(7);
				RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11427, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc1 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(8);
				tb2 = '\0';
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7804, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(8,1);
				ur1 = RTCCL(loc1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(8,2);
				tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11595, "relative_current_directory", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
				ur2 = RTCCL(tr3);
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8120, "same_string", tr1))(tr1, ur1x, ur2x)).it_b);
				if ((EIF_BOOLEAN) !tb3) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7804, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(8,3);
					ur1 = RTCCL(loc1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(8,4);
					tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11596, "relative_parent_directory", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
					ur2 = RTCCL(tr3);
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8120, "same_string", tr1))(tr1, ur1x, ur2x)).it_b);
					tb2 = (EIF_BOOLEAN) !tb3;
				}
				if (tb2) {
					RTHOOK(9);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				} else {
					RTHOOK(10);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6959, dtype))(Current);
				}
			}
			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6888, dtype))(Current);
		}
	} else {
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11420, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6880, "reset", tr1))(tr1, ur1x);
		RTHOOK(13);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7669, "is_empty", tr1))(tr1)).it_b);
		Result = (EIF_BOOLEAN) tb2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ur2
}

/* {KL_DIRECTORY}.open_read */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1569_15586 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "open_read";
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,saved_except);
	RTLIU(3);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLXL;
	
	RTEAA(l_feature_name, 1568, Current, 1, 0, 21653);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21653);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_closed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6883, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(2);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11428, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(4);
			RTDBGAA(Current, dtype, 11417, 0xF800067D, 0); /* entry_buffer */
			*(EIF_REFERENCE *)(Current + RTWA(11417, dtype)) = (EIF_REFERENCE) NULL;
			RTHOOK(5);
			RTDBGAA(Current, dtype, 11426, 0x04000000, 1); /* end_of_input */
			*(EIF_BOOLEAN *)(Current + RTWA(11426, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(6);
			tb1 = '\0';
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3354, dtype))(Current)).it_b);
			if (tb2) {
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3355, dtype))(Current)).it_b);
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(7);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3339, dtype))(Current);
				RTHOOK(8);
				RTDBGAA(Current, dtype, 11419, 0x04000000, 1); /* old_end_of_input */
				*(EIF_BOOLEAN *)(Current + RTWA(11419, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		}
	} else {
		RTHOOK(9);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6883, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(10);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6888, dtype))(Current);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("not_end_of_input", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6963, dtype))(Current)).it_b);
		if (tb2) {
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(11426, dtype));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(12);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(13);
		RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(14);
		RTTS;
		RTPS;
		RTER;
	}
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(3);
#undef up1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {KL_DIRECTORY}.close */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1569_15587 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "close";
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,saved_except);
	RTLIU(3);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLXL;
	
	RTEAA(l_feature_name, 1568, Current, 1, 0, 21654);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21654);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_closable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6886, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("is_closable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6962, dtype))(Current)).it_b);
		RTTE(tb1, label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(3);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3340, dtype))(Current);
		RTHOOK(5);
		RTDBGAA(Current, dtype, 11419, 0x04000000, 1); /* old_end_of_input */
		*(EIF_BOOLEAN *)(Current + RTWA(11419, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(6);
		RTDBGAA(Current, dtype, 11417, 0xF800067D, 0); /* entry_buffer */
		*(EIF_REFERENCE *)(Current + RTWA(11417, dtype)) = (EIF_REFERENCE) NULL;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 11427, 0xF80000E8, 0); /* last_entry */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11424, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(11427, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(8);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(9);
		RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(10);
		RTTS;
		RTPS;
		RTER;
	}
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(3);
#undef up1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {KL_DIRECTORY}.create_directory */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1569_15588 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "create_directory";
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,saved_except);
	RTLIU(3);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLXL;
	
	RTEAA(l_feature_name, 1568, Current, 1, 0, 21655);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21655);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_closed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6883, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(2);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11428, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(4);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3354, dtype))(Current)).it_b);
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(5);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3333, dtype))(Current);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(6);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(7);
		RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(8);
		RTTS;
		RTPS;
		RTER;
	}
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(3);
#undef up1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {KL_DIRECTORY}.recursive_create_directory */
void F1569_15589 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "recursive_create_directory";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,loc1);
	RTLR(6,ur2);
	RTLR(7,loc3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1568, Current, 3, 0, 21656);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21656);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_closed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6883, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7670, dtype))(Current);
	RTHOOK(3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6884, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(4);
		RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11420, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11594, "canonical_pathname", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(5);
		RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ur1 = RTCCL(loc2);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11590, "dirname", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7804, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ur1 = RTCCL(loc1);
		ur2 = RTCCL(loc2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8120, "same_string", tr1))(tr1, ur1x, ur2x)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(7);
			RTDBGAL(3, 0xF8000620, 0, 0); /* loc3 */
			tr1 = RTLN(eif_new_type(1568, 0x01).id);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6879, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(7,1);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(8);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6884, "exists", loc3))(loc3)).it_b);
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(9);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7671, "recursive_create_directory", loc3))(loc3);
				RTHOOK(10);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6884, "exists", loc3))(loc3)).it_b);
				if (tb1) {
					RTHOOK(11);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7670, dtype))(Current);
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
}

/* {KL_DIRECTORY}.delete */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1569_15590 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "delete";
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,saved_except);
	RTLIU(3);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLXL;
	
	RTEAA(l_feature_name, 1568, Current, 1, 0, 21657);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21657);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_closed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6883, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(2);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11428, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(4);
			tb1 = '\0';
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3354, dtype))(Current)).it_b);
			if (tb2) {
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7669, dtype))(Current)).it_b);
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(5);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3358, dtype))(Current);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(6);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(7);
		RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(8);
		RTTS;
		RTPS;
		RTER;
	}
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(3);
#undef up1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {KL_DIRECTORY}.recursive_delete */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1569_15591 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "recursive_delete";
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,saved_except);
	RTLIU(3);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLXL;
	
	RTEAA(l_feature_name, 1568, Current, 1, 0, 21658);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21658);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_closed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6883, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(2);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11428, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(4);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3354, dtype))(Current)).it_b);
			if (tb1) {
				RTHOOK(5);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3360, dtype))(Current);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(6);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(7);
		RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(8);
		RTTS;
		RTPS;
		RTER;
	}
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(3);
#undef up1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {KL_DIRECTORY}.recursive_copy_directory */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1569_15592 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "recursive_copy_directory";
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	EIF_BOOLEAN  EIF_VOLATILE tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,ur1);
	RTLR(5,loc2);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLR(8,ur2);
	RTLR(9,loc5);
	RTLR(10,loc6);
	RTLR(11,loc3);
	RTLR(12,saved_except);
	RTLIU(13);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLXL;
	
	RTEAA(l_feature_name, 1568, Current, 6, 1, 21659);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21659);
	RTCC(arg1, 1568, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("new_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_closed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6883, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(3);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11428, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			RTDBGAL(4, 0xF8000620, 0, 0); /* loc4 */
			tr1 = RTLN(eif_new_type(1568, 0x01).id);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6879, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(5,1);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(6);
			tb1 = '\0';
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6884, "exists", loc4))(loc4)).it_b);
			if ((EIF_BOOLEAN) !tb2) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(6,1);
				ur1 = RTCCL(arg1);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11555, "file_exists", tr1))(tr1, ur1x)).it_b);
				tb1 = (EIF_BOOLEAN) !tb2;
			}
			if (tb1) {
				RTHOOK(7);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7671, "recursive_create_directory", loc4))(loc4);
				RTHOOK(8);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6887, dtype))(Current);
				RTHOOK(9);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6963, dtype))(Current)).it_b);
				if (tb1) {
					RTHOOK(10);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6959, dtype))(Current);
					for (;;) {
						RTHOOK(11);
						tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11426, dtype));
						if (tb1) break;
						RTHOOK(12);
						RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11427, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc2 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(13);
						tb2 = '\0';
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7804, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(13,1);
						ur1 = RTCCL(loc2);
						tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
						RTNHOOK(13,2);
						tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11595, "relative_current_directory", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
						ur2 = RTCCL(tr3);
						tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8120, "same_string", tr1))(tr1, ur1x, ur2x)).it_b);
						if ((EIF_BOOLEAN) !tb3) {
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7804, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(13,3);
							ur1 = RTCCL(loc2);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
							RTNHOOK(13,4);
							tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11596, "relative_parent_directory", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
							ur2 = RTCCL(tr3);
							tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8120, "same_string", tr1))(tr1, ur1x, ur2x)).it_b);
							tb2 = (EIF_BOOLEAN) !tb3;
						}
						if (tb2) {
							RTHOOK(14);
							RTDBGAL(5, 0xF80000E8, 0, 0); /* loc5 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(14,1);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11420, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
							ur1 = RTCCL(tr2);
							ur2 = RTCCL(loc2);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11591, "pathname", tr1))(tr1, ur1x, ur2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
							loc5 = (EIF_REFERENCE) RTCCL(tr2);
							RTHOOK(15);
							RTDBGAL(6, 0xF80000E8, 0, 0); /* loc6 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(15,1);
							ur1 = RTCCL(arg1);
							ur2 = RTCCL(loc2);
							tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11591, "pathname", tr1))(tr1, ur1x, ur2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
							loc6 = (EIF_REFERENCE) RTCCL(tr2);
							RTHOOK(16);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(16,1);
							ur1 = RTCCL(loc5);
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11554, "is_file_readable", tr1))(tr1, ur1x)).it_b);
							if (tb2) {
								RTHOOK(17);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(17,1);
								ur1 = RTCCL(loc5);
								ur2 = RTCCL(loc6);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(11562, "copy_file", tr1))(tr1, ur1x, ur2x);
							} else {
								RTHOOK(18);
								RTDBGAL(3, 0xF8000620, 0, 0); /* loc3 */
								tr1 = RTLN(eif_new_type(1568, 0x01).id);
								ur1 = RTCCL(loc5);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6879, Dtype(tr1)))(tr1, ur1x);
								RTNHOOK(18,1);
								loc3 = (EIF_REFERENCE) RTCCL(tr1);
								RTHOOK(19);
								ur1 = RTCCL(loc6);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7673, "recursive_copy_directory", loc3))(loc3, ur1x);
							}
						}
						RTHOOK(20);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6959, dtype))(Current);
					}
					RTHOOK(21);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6888, dtype))(Current);
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(22);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(23);
		RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(24);
		RTTS;
		RTPS;
		RTER;
	}
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(25);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(9);
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ur2
#undef arg1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {KL_DIRECTORY}.do_all */
void F1569_15593 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "do_all";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1568, Current, 1, 1, 21660);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21660);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,275,0xFF01,0xFFF9,1,186,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1568, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_action_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6883, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6887, dtype))(Current);
		RTHOOK(4);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6963, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(5);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6959, dtype))(Current);
			for (;;) {
				RTHOOK(6);
				tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11426, dtype));
				if (tb1) break;
				RTHOOK(7);
				RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11427, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc1 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(8);
				tb2 = '\0';
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7804, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(8,1);
				ur1 = RTCCL(loc1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(8,2);
				tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11595, "relative_current_directory", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
				ur2 = RTCCL(tr3);
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8120, "same_string", tr1))(tr1, ur1x, ur2x)).it_b);
				if ((EIF_BOOLEAN) !tb3) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7804, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(8,3);
					ur1 = RTCCL(loc1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(8,4);
					tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11596, "relative_parent_directory", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
					ur2 = RTCCL(tr3);
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8120, "same_string", tr1))(tr1, ur1x, ur2x)).it_b);
					tb2 = (EIF_BOOLEAN) !tb3;
				}
				if (tb2) {
					RTHOOK(9);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,0xFF01,232,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
						tr1 = RTLNTS(typres0.id, 2, 0);
					}
					((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
					RTAR(tr1,loc1);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4611, "call", arg1))(arg1, ur1x);
				}
				RTHOOK(10);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6959, dtype))(Current);
			}
			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6888, dtype))(Current);
		}
	} else {
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11420, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6880, "reset", tr1))(tr1, ur1x);
		RTHOOK(13);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7674, "do_all", tr1))(tr1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ur2
#undef arg1
}

/* {KL_DIRECTORY}.do_if */
void F1569_15594 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "do_if";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLR(8,ur2);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1568, Current, 1, 2, 21661);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21661);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,275,0xFF01,0xFFF9,1,186,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg1, 1568, l_feature_name, 1, typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,273,0xFF01,0xFFF9,1,186,0xFF01,232,203,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		RTCC(arg2, 1568, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_action_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_test_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6883, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6887, dtype))(Current);
		RTHOOK(5);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6963, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6959, dtype))(Current);
			for (;;) {
				RTHOOK(7);
				tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11426, dtype));
				if (tb1) break;
				RTHOOK(8);
				RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11427, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc1 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(9);
				tb2 = '\0';
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7804, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(9,1);
				ur1 = RTCCL(loc1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(9,2);
				tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11595, "relative_current_directory", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
				ur2 = RTCCL(tr3);
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8120, "same_string", tr1))(tr1, ur1x, ur2x)).it_b);
				if ((EIF_BOOLEAN) !tb3) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7804, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(9,3);
					ur1 = RTCCL(loc1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(9,4);
					tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11596, "relative_parent_directory", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
					ur2 = RTCCL(tr3);
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8120, "same_string", tr1))(tr1, ur1x, ur2x)).it_b);
					tb2 = (EIF_BOOLEAN) !tb3;
				}
				if (tb2) {
					RTHOOK(10);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,0xFF01,232,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr1 = RTLNTS(typres0.id, 2, 0);
					}
					((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
					RTAR(tr1,loc1);
					ur1 = RTCCL(tr1);
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4636, "item", arg2))(arg2, ur1x)).it_b);
					if (tb2) {
						RTHOOK(11);
						{
							static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,0xFF01,232,0xFFFF};
							EIF_TYPE typres0;
							static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
							
							typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
							tr1 = RTLNTS(typres0.id, 2, 0);
						}
						((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
						RTAR(tr1,loc1);
						ur1 = RTCCL(tr1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4611, "call", arg1))(arg1, ur1x);
					}
				}
				RTHOOK(12);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6959, dtype))(Current);
			}
			RTHOOK(13);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6888, dtype))(Current);
		}
	} else {
		RTHOOK(14);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(14,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11420, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6880, "reset", tr1))(tr1, ur1x);
		RTHOOK(15);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(15,1);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7675, "do_if", tr1))(tr1, ur1x, ur2x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {KL_DIRECTORY}.there_exists */
EIF_TYPED_VALUE F1569_15595 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "there_exists";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1568, Current, 1, 1, 21662);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21662);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,273,0xFF01,0xFFF9,1,186,0xFF01,232,203,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1568, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_test_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6883, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6887, dtype))(Current);
		RTHOOK(4);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6963, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(5);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6959, dtype))(Current);
			for (;;) {
				RTHOOK(6);
				tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11426, dtype));
				if ((EIF_BOOLEAN) (Result || tb1)) break;
				RTHOOK(7);
				RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11427, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc1 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(8);
				tb2 = '\0';
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7804, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(8,1);
				ur1 = RTCCL(loc1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(8,2);
				tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11595, "relative_current_directory", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
				ur2 = RTCCL(tr3);
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8120, "same_string", tr1))(tr1, ur1x, ur2x)).it_b);
				if ((EIF_BOOLEAN) !tb3) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7804, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(8,3);
					ur1 = RTCCL(loc1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(8,4);
					tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11596, "relative_parent_directory", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
					ur2 = RTCCL(tr3);
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8120, "same_string", tr1))(tr1, ur1x, ur2x)).it_b);
					tb2 = (EIF_BOOLEAN) !tb3;
				}
				if (tb2) {
					RTHOOK(9);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,0xFF01,232,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
						tr1 = RTLNTS(typres0.id, 2, 0);
					}
					((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
					RTAR(tr1,loc1);
					ur1 = RTCCL(tr1);
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4636, "item", arg1))(arg1, ur1x)).it_b);
					if (tb2) {
						RTHOOK(10);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					}
				}
				RTHOOK(11);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6959, dtype))(Current);
			}
			RTHOOK(12);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6888, dtype))(Current);
		}
	} else {
		RTHOOK(13);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11420, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6880, "reset", tr1))(tr1, ur1x);
		RTHOOK(14);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(14,1);
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7676, "there_exists", tr1))(tr1, ur1x)).it_b);
		Result = (EIF_BOOLEAN) tb2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ur2
#undef arg1
}

/* {KL_DIRECTORY}.for_all */
EIF_TYPED_VALUE F1569_15596 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "for_all";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1568, Current, 1, 1, 21663);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21663);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,273,0xFF01,0xFFF9,1,186,0xFF01,232,203,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1568, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_test_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6883, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6887, dtype))(Current);
		RTHOOK(4);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6963, dtype))(Current)).it_b);
		if (tb1) {
			RTHOOK(5);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6959, dtype))(Current);
			for (;;) {
				RTHOOK(7);
				tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11426, dtype));
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !Result || tb1)) break;
				RTHOOK(8);
				RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11427, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc1 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(9);
				tb2 = '\0';
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7804, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(9,1);
				ur1 = RTCCL(loc1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(9,2);
				tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11595, "relative_current_directory", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
				ur2 = RTCCL(tr3);
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8120, "same_string", tr1))(tr1, ur1x, ur2x)).it_b);
				if ((EIF_BOOLEAN) !tb3) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7804, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(9,3);
					ur1 = RTCCL(loc1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11413, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					RTNHOOK(9,4);
					tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11596, "relative_parent_directory", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
					ur2 = RTCCL(tr3);
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8120, "same_string", tr1))(tr1, ur1x, ur2x)).it_b);
					tb2 = (EIF_BOOLEAN) !tb3;
				}
				if (tb2) {
					RTHOOK(10);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,0xFF01,232,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
						tr1 = RTLNTS(typres0.id, 2, 0);
					}
					((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
					RTAR(tr1,loc1);
					ur1 = RTCCL(tr1);
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4636, "item", arg1))(arg1, ur1x)).it_b);
					if ((EIF_BOOLEAN) !tb2) {
						RTHOOK(11);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					}
				}
				RTHOOK(12);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6959, dtype))(Current);
			}
			RTHOOK(13);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6888, dtype))(Current);
		}
	} else {
		RTHOOK(14);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(14,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11420, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6880, "reset", tr1))(tr1, ur1x);
		RTHOOK(15);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11422, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(15,1);
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7677, "for_all", tr1))(tr1, ur1x)).it_b);
		Result = (EIF_BOOLEAN) tb2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ur2
#undef arg1
}

/* {KL_DIRECTORY}.read_entry */
void F1569_15597 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_entry";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1568, Current, 2, 0, 21664);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21664);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6963, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11426, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(2, 0xF800067D, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11417, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(5);
		RTDBGAA(Current, dtype, 11427, 0xF80000E8, 0); /* last_entry */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6636, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(11427, dtype)) = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		RTDBGAA(Current, dtype, 11417, 0xF800067D, 0); /* entry_buffer */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6640, "right", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(11417, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(7);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11419, dtype));
		if (tb1) {
			RTHOOK(8);
			RTDBGAA(Current, dtype, 11426, 0x04000000, 1); /* end_of_input */
			*(EIF_BOOLEAN *)(Current + RTWA(11426, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3336, dtype))(Current);
			RTHOOK(10);
			RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3350, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(11);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTHOOK(12);
				RTDBGAA(Current, dtype, 11419, 0x04000000, 1); /* old_end_of_input */
				*(EIF_BOOLEAN *)(Current + RTWA(11419, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(13);
				RTDBGAA(Current, dtype, 11427, 0xF80000E8, 0); /* last_entry */
				tr1 = RTCCL(loc1);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(11427, dtype)) = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(14);
				RTDBGAA(Current, dtype, 11419, 0x04000000, 1); /* old_end_of_input */
				*(EIF_BOOLEAN *)(Current + RTWA(11419, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(15);
				RTDBGAA(Current, dtype, 11427, 0xF80000E8, 0); /* last_entry */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11424, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr1 = RTCCL(tr1);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(11427, dtype)) = (EIF_REFERENCE) tr1;
			}
			RTHOOK(16);
			RTDBGAA(Current, dtype, 11426, 0x04000000, 1); /* end_of_input */
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11419, dtype));
			*(EIF_BOOLEAN *)(Current + RTWA(11426, dtype)) = (EIF_BOOLEAN) tb1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("last_entry_not_empty", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(11426, dtype));
		if ((EIF_BOOLEAN) !tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(11427, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
			tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
}

/* {KL_DIRECTORY}.unread_entry */
void F1569_15598 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "unread_entry";
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1568, Current, 2, 1, 21665);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21665);
	RTCC(arg1, 1568, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6963, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("an_item_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6966, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0xF800067D, 0, 0); /* loc1 */
	tr1 = RTLNSMART(RTWCT(11417, dtype, Dftype(Current)).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6638, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(2, 0xF800067D, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11417, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(6);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6641, "put_right", loc1))(loc1, ur1x);
	}
	RTHOOK(7);
	RTDBGAA(Current, dtype, 11417, 0xF800067D, 0); /* entry_buffer */
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11417, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 11427, 0xF80000E8, 0); /* last_entry */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11427, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 11426, 0x04000000, 1); /* end_of_input */
	*(EIF_BOOLEAN *)(Current + RTWA(11426, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("not_end_of_input", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11426, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("last_item_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(11427, dtype));
		if (RTCEQ(tr1, arg1)) {
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
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {KL_DIRECTORY}.entry_buffer */
EIF_TYPED_VALUE F1569_15599 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11417,Dtype(Current)));
	return r;
}


/* {KL_DIRECTORY}.valid_entry_buffer */
EIF_TYPED_VALUE F1569_15600 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_entry_buffer";
	RTEX;
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
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1568, Current, 0, 1, 21667);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21667);
	RTCC(arg1, 1568, l_feature_name, 1, RTWCT(11417, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6636, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6966, dtype))(Current, ur1x)).it_b);
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6636, "item", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6966, dtype))(Current, ur1x)).it_b);
			tb1 = tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {KL_DIRECTORY}.old_end_of_input */
EIF_TYPED_VALUE F1569_15601 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(11419,Dtype(Current)));
	return r;
}


/* {KL_DIRECTORY}.string_name */
EIF_TYPED_VALUE F1569_15602 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "string_name";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1568, Current, 0, 0, 21669);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21669);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3366, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4698, "as_string_8", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("string_name_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("string_name_not_empty", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", Result))(Result)).it_b);
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
}

/* {KL_DIRECTORY}.tmp_file */
RTOID (F1569_15603)
EIF_TYPED_VALUE F1569_15603 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tmp_file";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1569_15603);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1568, Current, 0, 0, 21670);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21670);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000627, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1575, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11423, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6879, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("file_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("file_closed", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6883, "is_closed", Result))(Result)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef Result
}

/* {KL_DIRECTORY}.tmp_directory */
RTOID (F1569_15604)
EIF_TYPED_VALUE F1569_15604 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tmp_directory";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1569_15604);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1568, Current, 0, 0, 21671);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1568, Current, 21671);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000620, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1568, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11423, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6879, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("directory_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("directory_closed", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6883, "is_closed", Result))(Result)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef Result
}

/* {KL_DIRECTORY}.dummy_name */
RTOID (F1569_15605)


EIF_TYPED_VALUE F1569_15605 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1569_15605,21673,RTMS_EX_H("dummy",5,1970873721));
}

/* {KL_DIRECTORY}.dummy_entry */
RTOID (F1569_15606)


EIF_TYPED_VALUE F1569_15606 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1569_15606,21674,RTMS_EX_H("",0,0));
}

/* {KL_DIRECTORY}.empty_name */
RTOID (F1569_15607)


EIF_TYPED_VALUE F1569_15607 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1569_15607,21675,RTMS_EX_H("empty_name",10,696498789));
}

/* {KL_DIRECTORY}._invariant */
void F1569_16591 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 1568, Current, 0, 16590);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("string_name_is_string", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7999, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11420, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	tr3 = RTMS_EX_H("",0,0);
	ur2 = tr3;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5066, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_entry_buffer", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11417, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11418, dtype))(Current, ur1x)).it_b);
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
}

void EIF_Minit1569 (void)
{
	GTCX
	RTOTS (15603,F1569_15603)
	RTOTS (15604,F1569_15604)
	RTOTS (15605,F1569_15605)
	RTOTS (15606,F1569_15606)
	RTOTS (15607,F1569_15607)
}


#ifdef __cplusplus
}
#endif
