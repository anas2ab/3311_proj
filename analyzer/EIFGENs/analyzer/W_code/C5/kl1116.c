/*
 * Code for class KL_STRING_EQUALITY_TESTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1116_9538(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit1116(void);

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

/* {KL_STRING_EQUALITY_TESTER}.test */
EIF_TYPED_VALUE F1116_9538 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "test";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 1115, Current, 2, 2, 15789);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1115, Current, 15789);
	if (arg1) {
		RTCC(arg1, 1115, l_feature_name, 1, eif_new_type(232, 0x00), 0x00);
	}
	if (arg2) {
		RTCC(arg2, 1115, l_feature_name, 2, eif_new_type(232, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (RTCEQ(arg1, arg2)) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(arg1 == NULL)) {
			RTHOOK(4);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(5);
			if ((EIF_BOOLEAN)(arg2 == NULL)) {
				RTHOOK(6);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			} else {
				RTHOOK(7);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
				loc2 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(8);
				ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(4768, "count", arg2));
				if ((EIF_BOOLEAN)(ti4_1 == loc2)) {
					RTHOOK(9);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(10);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					for (;;) {
						RTHOOK(11);
						if ((EIF_BOOLEAN) (loc1 > loc2)) break;
						RTHOOK(12);
						ui4_1 = loc1;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4745, "item_code", arg1))(arg1, ui4_1x)).it_i4);
						ui4_1 = loc1;
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4745, "item_code", arg2))(arg2, ui4_1x)).it_i4);
						if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
							RTHOOK(13);
							RTDBGAL(0, 0x04000000, 1,0); /* Result */
							Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							RTHOOK(14);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						} else {
							RTHOOK(15);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1++;
						}
					}
				}
			}
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
#undef ui4_1
#undef arg2
#undef arg1
}

void EIF_Minit1116 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
