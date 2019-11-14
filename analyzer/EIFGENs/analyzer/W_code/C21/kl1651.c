/*
 * Code for class KL_TYPE [CHARACTER_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1651_15276(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1651_15277(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit1651(void);

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

/* {KL_TYPE}.same_objects */
EIF_TYPED_VALUE F1651_15276 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "same_objects";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_c1
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_TYPED_VALUE uc2x = {{0}, SK_CHAR8};
#define uc2 uc2x.it_c1
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_c1 = * (EIF_CHARACTER_8 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_CHAR8,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1650, Current, 0, 2, 21379);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1650, Current, 21379);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	uc1 = arg1;
	uc2 = arg2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11145, dtype))(Current, uc1x, uc2x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef uc1
#undef uc2
#undef arg2
#undef arg1
}

/* {KL_TYPE}.same_detachable_objects */
EIF_TYPED_VALUE F1651_15277 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "same_detachable_objects";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_c1 = * (EIF_CHARACTER_8 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_CHAR8,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1650, Current, 4, 2, 21380);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1650, Current, 21380);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == arg2)) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == arg1) || (EIF_BOOLEAN)(arg2 == arg2))) {
			RTHOOK(4);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(5);
			tb1 = '\0';
			tr1 = RTLN(eif_new_type(197, 0x00).id);
			*(EIF_CHARACTER_8 *)tr1 = arg1;
			loc1 = RTRV(eif_new_type(205, 0x01),tr1);
			if (EIF_TEST(loc1)) {
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4252, "is_nan", loc1))(loc1)).it_b);
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(6);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				tb1 = '\0';
				tr1 = RTLN(eif_new_type(197, 0x00).id);
				*(EIF_CHARACTER_8 *)tr1 = arg2;
				loc2 = RTRV(eif_new_type(205, 0x01),tr1);
				if (EIF_TEST(loc2)) {
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4252, "is_nan", loc2))(loc2)).it_b);
					tb1 = tb2;
				}
				Result = (EIF_BOOLEAN) tb1;
			} else {
				RTHOOK(7);
				tb1 = '\0';
				tr1 = RTLN(eif_new_type(197, 0x00).id);
				*(EIF_CHARACTER_8 *)tr1 = arg1;
				loc3 = RTRV(eif_new_type(190, 0x01),tr1);
				if (EIF_TEST(loc3)) {
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4082, "is_nan", loc3))(loc3)).it_b);
					tb1 = tb2;
				}
				if (tb1) {
					RTHOOK(8);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					tb1 = '\0';
					tr1 = RTLN(eif_new_type(197, 0x00).id);
					*(EIF_CHARACTER_8 *)tr1 = arg2;
					loc4 = RTRV(eif_new_type(190, 0x01),tr1);
					if (EIF_TEST(loc4)) {
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4082, "is_nan", loc4))(loc4)).it_b);
						tb1 = tb2;
					}
					Result = (EIF_BOOLEAN) tb1;
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg2
#undef arg1
}

void EIF_Minit1651 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
