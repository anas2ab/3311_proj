/*
 * Code for class ETF_CMD_LINE_ROOT_INTERFACE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1132_10021(EIF_REFERENCE);
extern void F1132_10022(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1132_10023(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1132_10024(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1132_10025(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1132_10026(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1132_10027(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1132_10028(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1132_10029(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1132_10030(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1132_10031(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1132_10032(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1132_10033(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1132_10034(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1132_10035(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1132_10036(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1132_10037(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1132_10038(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1132_10039(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1132_10040(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1132_10041(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1132_10042(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1132_10043(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1132_10044(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1132_10045(EIF_REFERENCE);
extern void F1132_10046(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1132_10047(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1132_10048(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1132_10049(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1132_10050(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1132_10051(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1132_10052(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1132_10053(EIF_REFERENCE);
extern void F1132_10054(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1132_10055(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1132_10056(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1132_10057(EIF_REFERENCE);
extern void EIF_Minit1132(void);
extern EIF_REFERENCE _A1106_35_2();

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

/* {ETF_CMD_LINE_ROOT_INTERFACE}.make */
void F1132_10021 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,loc1);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLR(8,loc4);
	RTLR(9,loc5);
	RTLR(10,loc6);
	RTLR(11,loc7);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 1131, Current, 7, 0, 16254);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16254);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(3, 0xF80000E8, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2283, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(2);
	RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7653, dtype))(Current);
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2299, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L))) {
		RTHOOK(5);
		RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2283, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(6);
		if (RTEQ(loc1, RTMS_EX_H("-help",5,1751822960))) {
			RTHOOK(7);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2299, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
				RTHOOK(8);
				RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
				ur1 = RTCCL(loc3);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7659, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc2 = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(9);
				RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
				ur1 = RTCCL(loc1);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7662, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				ur2 = RTCCL(loc3);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7656, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc2 = (EIF_REFERENCE) RTCCL(tr1);
			}
		} else {
			RTHOOK(10);
			if (RTEQ(loc1, RTMS_EX_H("-version",8,1408017262))) {
				RTHOOK(11);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2299, dtype))(Current)).it_i4);
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
					RTHOOK(12);
					RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7658, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc2 = (EIF_REFERENCE) RTCCL(tr1);
				} else {
					RTHOOK(13);
					RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
					ur1 = RTCCL(loc1);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7662, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					ur2 = RTCCL(loc3);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7656, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc2 = (EIF_REFERENCE) RTCCL(tr1);
				}
			} else {
				RTHOOK(14);
				if (RTEQ(loc1, RTMS_EX_H("-g",2,11623))) {
					RTHOOK(15);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2299, dtype))(Current)).it_i4);
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
						RTHOOK(16);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6803, dtype))(Current);
					} else {
						RTHOOK(17);
						RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
						ur1 = RTCCL(loc1);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7662, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						ur2 = RTCCL(loc3);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7656, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc2 = (EIF_REFERENCE) RTCCL(tr1);
					}
				} else {
					RTHOOK(18);
					if (RTEQ(loc1, RTMS_EX_H("-i",2,11625))) {
						RTHOOK(19);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2299, dtype))(Current)).it_i4);
						if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
							RTHOOK(20);
							RTDBGAA(Current, dtype, 7669, 0x04000000, 1); /* is_init */
							*(EIF_BOOLEAN *)(Current + RTWA(7669, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(21);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7677, dtype))(Current);
						} else {
							RTHOOK(22);
							RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
							ur1 = RTCCL(loc1);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7662, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							ur2 = RTCCL(loc3);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7656, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc2 = (EIF_REFERENCE) RTCCL(tr1);
						}
					} else {
						RTHOOK(23);
						if (RTEQ(loc1, RTMS_EX_H("-b",2,11618))) {
							RTHOOK(24);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2299, dtype))(Current)).it_i4);
							if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
								RTHOOK(25);
								RTDBGAL(4, 0xF80000E8, 0, 0); /* loc4 */
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2283, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ui4_1 = ((EIF_INTEGER_32) 2L);
								tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
								loc4 = (EIF_REFERENCE) RTCCL(tr2);
								RTHOOK(26);
								RTDBGAA(Current, dtype, 7669, 0x04000000, 1); /* is_init */
								*(EIF_BOOLEAN *)(Current + RTWA(7669, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
								RTHOOK(27);
								RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
								ur1 = RTCCL(loc4);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7678, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								loc2 = (EIF_REFERENCE) RTCCL(tr1);
							} else {
								RTHOOK(28);
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2299, dtype))(Current)).it_i4);
								if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
									RTHOOK(29);
									RTDBGAL(4, 0xF80000E8, 0, 0); /* loc4 */
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2283, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ui4_1 = ((EIF_INTEGER_32) 2L);
									tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
									loc4 = (EIF_REFERENCE) RTCCL(tr2);
									RTHOOK(30);
									RTDBGAL(5, 0xF80000E8, 0, 0); /* loc5 */
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2283, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ui4_1 = ((EIF_INTEGER_32) 3L);
									tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
									loc5 = (EIF_REFERENCE) RTCCL(tr2);
									RTHOOK(31);
									RTDBGAA(Current, dtype, 7669, 0x04000000, 1); /* is_init */
									*(EIF_BOOLEAN *)(Current + RTWA(7669, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
									RTHOOK(32);
									RTDBGAL(6, 0xF80003D7, 0, 0); /* loc6 */
									tr1 = RTLN(eif_new_type(983, 0x01).id);
									ur1 = RTCCL(loc4);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6314, Dtype(tr1)))(tr1, ur1x);
									RTNHOOK(32,1);
									loc6 = (EIF_REFERENCE) RTCCL(tr1);
									RTHOOK(33);
									tb1 = *(EIF_BOOLEAN *)(loc6 + RTVA(6310, "error", loc6));
									if ((EIF_BOOLEAN) !tb1) {
										RTHOOK(34);
										RTDBGAL(7, 0xF80000AF, 0, 0); /* loc7 */
										tr1 = RTLN(eif_new_type(175, 0x01).id);
										ur1 = RTCCL(loc5);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3525, Dtype(tr1)))(tr1, ur1x);
										RTNHOOK(34,1);
										loc7 = (EIF_REFERENCE) RTCCL(tr1);
										RTHOOK(35);
										tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3443, "exists", loc7))(loc7)).it_b);
										if ((EIF_BOOLEAN) !tb1) {
											RTHOOK(36);
											(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6315, "remove_comment_lines", loc6))(loc6);
											RTHOOK(37);
											ur1 = RTCCL(loc6);
											ur2 = RTCCL(loc7);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7679, dtype))(Current, ur1x, ur2x);
										} else {
											RTHOOK(38);
											RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
											tr1 = RTMS_EX_H("Error: output file ",19,1480130080);
											ur1 = RTCCL(loc5);
											tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											tr1 = RTMS_EX_H(" already exists!",16,322015009);
											ur1 = tr1;
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											loc2 = (EIF_REFERENCE) RTCCL(tr1);
										}
									} else {
										RTHOOK(39);
										RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6311, "error_string", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										loc2 = (EIF_REFERENCE) RTCCL(tr1);
									}
								} else {
									RTHOOK(40);
									RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
									ur1 = RTCCL(loc1);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7662, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur1 = RTCCL(tr1);
									ur2 = RTCCL(loc3);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7656, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									loc2 = (EIF_REFERENCE) RTCCL(tr1);
								}
							}
						} else {
							RTHOOK(41);
							tr1 = RTMS_EX_H("-l",2,11628);
							if ((EIF_BOOLEAN) (RTEQ(loc1, RTMS_EX_H("-w",2,11639)) || RTEQ(loc1, tr1))) {
								RTHOOK(42);
								tb1 = '\01';
								tb2 = '\0';
								if (RTEQ(loc1, RTMS_EX_H("-w",2,11639))) {
									tb3 = '\01';
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2299, dtype))(Current)).it_i4);
									if (!(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2299, dtype))(Current)).it_i4);
										tb3 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 5L));
									}
									tb2 = tb3;
								}
								if (!tb2) {
									tb2 = '\0';
									if (RTEQ(loc1, RTMS_EX_H("-l",2,11628))) {
										tb3 = '\01';
										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2299, dtype))(Current)).it_i4);
										if (!(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
											ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2299, dtype))(Current)).it_i4);
											tb3 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L));
										}
										tb2 = tb3;
									}
									tb1 = tb2;
								}
								if (tb1) {
									RTHOOK(43);
									if (RTEQ(loc1, RTMS_EX_H("-w",2,11639))) {
										RTHOOK(44);
										ur1 = RTCCL(loc3);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7681, dtype))(Current, ur1x);
										RTHOOK(45);
										RTDBGAL(4, 0xF80000E8, 0, 0); /* loc4 */
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2283, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ui4_1 = ((EIF_INTEGER_32) 4L);
										tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
										loc4 = (EIF_REFERENCE) RTCCL(tr2);
										RTHOOK(46);
										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2299, dtype))(Current)).it_i4);
										if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 5L))) {
											RTHOOK(47);
											RTDBGAL(5, 0xF80000E8, 0, 0); /* loc5 */
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2283, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ui4_1 = ((EIF_INTEGER_32) 5L);
											tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
											loc5 = (EIF_REFERENCE) RTCCL(tr2);
										} else {
											RTHOOK(48);
											RTDBGAL(5, 0xF80000E8, 0, 0); /* loc5 */
											tr1 = RTMS_EX_H("",0,0);
											loc5 = (EIF_REFERENCE) tr1;
										}
									} else {
										RTHOOK(49);
										RTDBGAA(Current, dtype, 7675, 0x04000000, 1); /* last_window_slice_specified */
										*(EIF_BOOLEAN *)(Current + RTWA(7675, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
										RTHOOK(50);
										RTDBGAL(4, 0xF80000E8, 0, 0); /* loc4 */
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2283, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										ui4_1 = ((EIF_INTEGER_32) 2L);
										tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
										loc4 = (EIF_REFERENCE) RTCCL(tr2);
										RTHOOK(51);
										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2299, dtype))(Current)).it_i4);
										if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
											RTHOOK(52);
											RTDBGAL(5, 0xF80000E8, 0, 0); /* loc5 */
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2283, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											ui4_1 = ((EIF_INTEGER_32) 3L);
											tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
											loc5 = (EIF_REFERENCE) RTCCL(tr2);
										} else {
											RTHOOK(53);
											RTDBGAL(5, 0xF80000E8, 0, 0); /* loc5 */
											tr1 = RTMS_EX_H("",0,0);
											loc5 = (EIF_REFERENCE) tr1;
										}
									}
									RTHOOK(54);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7668, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									RTNHOOK(54,1);
									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", tr1))(tr1)).it_b);
									if (tb1) {
										RTHOOK(55);
										RTDBGAL(6, 0xF80003D7, 0, 0); /* loc6 */
										tr1 = RTLN(eif_new_type(983, 0x01).id);
										ur1 = RTCCL(loc4);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6314, Dtype(tr1)))(tr1, ur1x);
										RTNHOOK(55,1);
										loc6 = (EIF_REFERENCE) RTCCL(tr1);
										RTHOOK(56);
										tb1 = *(EIF_BOOLEAN *)(loc6 + RTVA(6310, "error", loc6));
										if ((EIF_BOOLEAN) !tb1) {
											RTHOOK(57);
											tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", loc5))(loc5)).it_b);
											if ((EIF_BOOLEAN) !tb1) {
												RTHOOK(58);
												RTDBGAL(7, 0xF80000AF, 0, 0); /* loc7 */
												tr1 = RTLN(eif_new_type(175, 0x01).id);
												ur1 = RTCCL(loc5);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3525, Dtype(tr1)))(tr1, ur1x);
												RTNHOOK(58,1);
												loc7 = (EIF_REFERENCE) RTCCL(tr1);
												RTHOOK(59);
												tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3443, "exists", loc7))(loc7)).it_b);
												if ((EIF_BOOLEAN) !tb1) {
													RTHOOK(60);
													(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3577, "open_append", loc7))(loc7);
													RTHOOK(61);
													tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													RTNHOOK(61,1);
													ur1 = RTCCL(loc7);
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(145, "set_file_default", tr1))(tr1, ur1x);
													RTHOOK(62);
													RTDBGAA(Current, dtype, 7669, 0x04000000, 1); /* is_init */
													*(EIF_BOOLEAN *)(Current + RTWA(7669, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
													RTHOOK(63);
													(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6315, "remove_comment_lines", loc6))(loc6);
													RTHOOK(64);
													ur1 = RTCCL(loc6);
													(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7680, dtype))(Current, ur1x);
													RTHOOK(65);
													tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													RTNHOOK(65,1);
													(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(146, "set_output_default", tr1))(tr1);
												} else {
													RTHOOK(66);
													RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
													tr1 = RTMS_EX_H("Error: output file ",19,1480130080);
													ur1 = RTCCL(loc5);
													tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													tr1 = RTMS_EX_H(" already exists!",16,322015009);
													ur1 = tr1;
													tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
													loc2 = (EIF_REFERENCE) RTCCL(tr1);
												}
											} else {
												RTHOOK(67);
												RTDBGAA(Current, dtype, 7669, 0x04000000, 1); /* is_init */
												*(EIF_BOOLEAN *)(Current + RTWA(7669, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
												RTHOOK(68);
												(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6315, "remove_comment_lines", loc6))(loc6);
												RTHOOK(69);
												ur1 = RTCCL(loc6);
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7680, dtype))(Current, ur1x);
											}
										} else {
											RTHOOK(70);
											RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
											tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6311, "error_string", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
											loc2 = (EIF_REFERENCE) RTCCL(tr1);
										}
									} else {
										RTHOOK(71);
										RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7668, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										loc2 = (EIF_REFERENCE) RTCCL(tr1);
									}
								} else {
									RTHOOK(72);
									RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
									ur1 = RTCCL(loc1);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7662, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur1 = RTCCL(tr1);
									ur2 = RTCCL(loc3);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7656, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									loc2 = (EIF_REFERENCE) RTCCL(tr1);
								}
							} else {
								RTHOOK(73);
								RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
								ur1 = RTCCL(loc1);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7661, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr1);
								ur2 = RTCCL(loc3);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7656, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								loc2 = (EIF_REFERENCE) RTCCL(tr1);
							}
						}
					}
				}
			}
		}
	} else {
		RTHOOK(74);
		RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7660, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(loc3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7656, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(75);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", loc2))(loc2)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(76);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(76,1);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(30, "print", tr1))(tr1, ur1x);
		RTHOOK(77);
		ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(4768, "count", loc2));
		ui4_1 = ti4_1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc2))(loc2, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012')) {
			RTHOOK(78);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(78,1);
			tr2 = RTMS_EX_H("\012",1,10);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(30, "print", tr1))(tr1, ur1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(79);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.initialize_attributes */
void F1132_10022 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "initialize_attributes";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1131, Current, 0, 0, 16255);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16255);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7668, 0xF80000E8, 0); /* window_spec_error */
	tr1 = RTLNSMART(RTWCT(7668, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7668, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7670, 0xF80000E8, 0); /* exec_log */
	tr1 = RTLNSMART(RTWCT(7670, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7670, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 7676, 0xF80000E8, 0); /* context_state_from_exec_log */
	tr1 = RTLNSMART(RTWCT(7676, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7676, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.wrong_defns_file_chosen_msg */
RTOID (F1132_10023)


EIF_TYPED_VALUE F1132_10023 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1132_10023,16257,RTMS_EX_H("Application quit: please choose the right file with event declaratons",69,1542537587));
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.ref_msg */
EIF_TYPED_VALUE F1132_10024 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "ref_msg";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1131, Current, 0, 1, 16257);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16257);
	RTCC(arg1, 1131, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTMS_EX_H("Run \'",5,1970781223);
	ur1 = RTCCL(arg1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H(" -help\' to see more details",27,49958515);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.error */
EIF_TYPED_VALUE F1132_10025 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "error";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1131, Current, 0, 2, 16258);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16258);
	RTCC(arg1, 1131, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTCC(arg2, 1131, l_feature_name, 2, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTMS_EX_H("\012",1,10);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(arg2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7655, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", Result))(Result, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg2
#undef arg1
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.invalid_flag_msg_or_num_args */
EIF_TYPED_VALUE F1132_10026 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "invalid_flag_msg_or_num_args";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1131, Current, 0, 1, 16259);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16259);
	RTCC(arg1, 1131, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTMS_EX_H("Error: either ",14,1322009376);
	ur1 = RTCCL(arg1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H(" is not a valid option, or ",27,96445472);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(arg1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H(" is not specified with the correct number of arguments",54,1061485171);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.version_msg */
EIF_TYPED_VALUE F1132_10027 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "version_msg";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1131, Current, 0, 0, 16260);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16260);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTMS_EX_H("Eiffel Testing Framework (ETF) Version: ",40,1280104224);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7688, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.usage_msg */
EIF_TYPED_VALUE F1132_10028 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "usage_msg";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1131, Current, 0, 1, 16261);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16261);
	RTCC(arg1, 1131, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTMS_EX_H("The executable ",15,1532101408);
	ur1 = RTCCL(arg1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H(" may be invoked as: \012",21,1268642314);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("\011",1,9);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H(" -help \012",8,1058872074);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("\011",1,9);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(arg1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H(" -version \012",11,980604682);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("\011",1,9);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H(" -i \012",5,762109962);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("\011",1,9);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(arg1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H(" -b     input.txt [output.txt] \012",32,712034826);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("\011",1,9);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H(" -w m n input.txt [output.txt] \012",32,594754058);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("\011",1,9);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(arg1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H(" -l     input.txt [output.txt] \012",32,1385238282);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("where \012",7,1889704458);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H(" ====================================\012",38,1768257290);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("  Option \012",10,246873354);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("    -g  gui mode: run the ETF project as a GUI \012",48,1189626890);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("\012",1,10);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("    -i  interactive mode: read the event trace from console \012",61,1727018250);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("\012",1,10);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("    -b  batch mode: read the event trace from file \'input.txt\' \012",64,222490634);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("        Note. An output file is specified to log results of a large input file. \012",81,2082839562);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("\012",1,10);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("    -w  window mode: same as batch mode, except that only results of the \012",74,762492170);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("        m^th to (n-1)^th input commands, when m > 0 and n > 0, are logged into the output file. \012",97,2003548170);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("        Use negative numbers -1, -2, etc., to denote the last, 2nd last, etc, input commands. \012",95,1775393290);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("        Constraints: 1. if m <= 0, then n <= 0 \012",48,52780554);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("                     2. if m >  0, then n >  0 \012",48,1748364298);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("                     3. m <= n \012",32,1840712714);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("        Note. A window with valid start \'m\' and end \'n\' has the log: \012",70,19432714);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("              S_m C_m S_m+1 C_m+1 ... S_n Cn S_n+1 \012",52,994834186);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("              where S_i and S_i+1, m <= i <= n, denote the starting and resulting states of command C_i \012",105,1035250186);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("        Note. When m = n, only the starting state of the input command denoted by \'m\' is logged. \012",98,1849868042);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("        Examples. Use \'1   1\' as the window to log the initial state. \012",71,25638154);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("                  Use \'1   2\' as the window to log the 1st command and its starting and resulting states. \012",107,274818826);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("                  Use \'2   2\' as the window to log the starting state of the 2st command. \012",91,1428214794);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("                  Use \'-1 -1\' as the window to log the resulting state of the 2nd last command. \012",97,849895946);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("                  Use \'-1  0\' as the window to log the last command and its starting and resulting states. \012",108,1198890250);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("                  Use \'0   0\' as the window to log the final state. \012",69,960330250);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("                  Use \'m   _\' (m > 0) as the window to log the m^th to the last commands. \012",91,283412490);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("                  Use \'m   _\' (m < 0) as the window to log the m^th last to the last commands. \012",96,1863070218);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("\012",1,10);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("    -l last mode: a special case of the -w mode with the window specified as \'-1 0\' or \'-1 _\'. \012",96,1158132746);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H(" ====================================",37,325673789);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.flag_missing_msg */
EIF_TYPED_VALUE F1132_10029 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "flag_missing_msg";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1131, Current, 0, 0, 16262);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16262);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTMS_EX_H("Error: a mode is not specified",30,1950526820);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.invalid_flag_msg */
EIF_TYPED_VALUE F1132_10030 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "invalid_flag_msg";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1131, Current, 0, 1, 16263);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16263);
	RTCC(arg1, 1131, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTMS_EX_H("Error: \'",8,1553419047);
	ur1 = RTCCL(arg1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("\' is not a valid mode",21,747234149);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.wrong_arguments_for_mode */
EIF_TYPED_VALUE F1132_10031 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "wrong_arguments_for_mode";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1131, Current, 0, 1, 16264);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16264);
	RTCC(arg1, 1131, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTMS_EX_H("Error: wrong number of arguments for the \'",42,656967975);
	ur1 = RTCCL(arg1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("\' mode",6,1912939621);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.wrong_num_args_msg */
EIF_TYPED_VALUE F1132_10032 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "wrong_num_args_msg";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1131, Current, 0, 0, 16265);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16265);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTMS_EX_H("Error: wrong number of arguments",32,305460339);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.start_of_window_not_valid */
EIF_TYPED_VALUE F1132_10033 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "start_of_window_not_valid";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1131, Current, 0, 0, 16266);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16266);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTMS_EX_H("Error: the start of window is not a valid integer",49,413789554);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.neg_start_pos_end_window_msg */
EIF_TYPED_VALUE F1132_10034 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "neg_start_pos_end_window_msg";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1131, Current, 0, 0, 16267);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16267);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTMS_EX_H("Error: when the start of a window is non-positive, its end must be a non-positive number",88,1366194290);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.end_of_window_not_valid */
EIF_TYPED_VALUE F1132_10035 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "end_of_window_not_valid";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1131, Current, 0, 0, 16268);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16268);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTMS_EX_H("Error: the end of window is neither a valid integer nor \'_\'",59,305326119);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.invalid_window_msg */
EIF_TYPED_VALUE F1132_10036 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "invalid_window_msg";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1131, Current, 0, 0, 16269);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16269);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTMS_EX_H("Error: a window [start, end) should be such that start <= end",61,84240484);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.window_spec_error */
EIF_TYPED_VALUE F1132_10037 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7668,Dtype(Current)));
	return r;
}


/* {ETF_CMD_LINE_ROOT_INTERFACE}.is_init */
EIF_TYPED_VALUE F1132_10038 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7669,Dtype(Current)));
	return r;
}


/* {ETF_CMD_LINE_ROOT_INTERFACE}.exec_log */
EIF_TYPED_VALUE F1132_10039 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7670,Dtype(Current)));
	return r;
}


/* {ETF_CMD_LINE_ROOT_INTERFACE}.chunk_size_for_file_mode */
EIF_TYPED_VALUE F1132_10040 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
	return r;
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.start_of_window */
EIF_TYPED_VALUE F1132_10041 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7672,Dtype(Current)));
	return r;
}


/* {ETF_CMD_LINE_ROOT_INTERFACE}.end_of_window */
EIF_TYPED_VALUE F1132_10042 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7673,Dtype(Current)));
	return r;
}


/* {ETF_CMD_LINE_ROOT_INTERFACE}.end_of_window_unbounded */
EIF_TYPED_VALUE F1132_10043 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7674,Dtype(Current)));
	return r;
}


/* {ETF_CMD_LINE_ROOT_INTERFACE}.last_window_slice_specified */
EIF_TYPED_VALUE F1132_10044 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7675,Dtype(Current)));
	return r;
}


/* {ETF_CMD_LINE_ROOT_INTERFACE}.context_state_from_exec_log */
EIF_TYPED_VALUE F1132_10045 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7676,Dtype(Current)));
	return r;
}


/* {ETF_CMD_LINE_ROOT_INTERFACE}.handle_interactive_mode */
void F1132_10046 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "handle_interactive_mode";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,loc1);
	RTLR(6,tr3);
	RTLR(7,loc6);
	RTLR(8,loc4);
	RTLR(9,ur2);
	RTLR(10,loc5);
	RTLR(11,tr4);
	RTLR(12,tr5);
	RTLIU(13);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 1131, Current, 6, 0, 16279);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16279);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(3, 0xF800040E, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1038, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6754, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7670, 0xF80000E8, 0); /* exec_log */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6758, "output", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7188, "model_state", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7670, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7670, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(30, "print", tr1))(tr1, ur1x);
	RTHOOK(4);
	RTDBGAL(2, 0x04000000, 1, 0); /* loc2 */
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		RTHOOK(5);
		if (loc2) break;
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		tr2 = RTMS_EX_H("->",2,11582);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(30, "print", tr1))(tr1, ur1x);
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(185, "read_line", tr1))(tr1);
		RTHOOK(8);
		RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(140, "last_string", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(9);
		if (RTEQ(loc1, RTMS_EX_H("quit",4,1903520116))) {
			RTHOOK(10);
			RTDBGAL(2, 0x04000000, 1, 0); /* loc2 */
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(11);
			if (RTEQ(loc1, RTMS_EX_H("man",3,7168366))) {
				RTHOOK(12);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(12,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7687, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				tr3 = RTMS_EX_H("\012",1,10);
				ur1 = tr3;
				tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
				ur1 = RTCCL(tr3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(30, "print", tr1))(tr1, ur1x);
			} else {
				RTHOOK(13);
				RTDBGAL(6, 0xF8000410, 0, 0); /* loc6 */
				tr1 = RTLN(eif_new_type(1040, 0x01).id);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6763, Dtype(tr1)))(tr1);
				RTNHOOK(13,1);
				loc6 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(14);
				RTDBGAL(4, 0xF8000441, 0, 0); /* loc4 */
				tr1 = RTLN(eif_new_type(1089, 0x01).id);
				ur1 = RTCCL(loc1);
				ur2 = RTCCL(loc6);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7136, Dtype(tr1)))(tr1, ur1x, ur2x);
				RTNHOOK(14,1);
				loc4 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(15);
				RTDBGAL(5, 0xF8000451, 0, 0); /* loc5 */
				tr1 = RTLN(eif_new_type(1105, 0x01).id);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(7178, Dtype(tr1)))(tr1);
				RTNHOOK(15,1);
				loc5 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(16);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7142, "on_error", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(16,1);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,186,0xFF01,1105,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr2 = RTLNTS(typres0.id, 2, 0);
				}
				((EIF_TYPED_VALUE *)tr2+1)->it_r = loc5;
				RTAR(tr2,loc5);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				{
					static EIF_TYPE_INDEX typarr0[] = {595,218,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr4 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
					RT_SPECIAL_COUNT(tr4) = 1L;
					memset(tr4, 0, RT_SPECIAL_VISIBLE_SIZE(tr4));
				}
				*((EIF_INTEGER_32 *)tr4+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				tr3 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr4)))(tr4).it_r;
				
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,275,0xFF01,0xFFF9,1,186,0xFF01,232,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					tr5= RTLNRW(typres0.id, 0, (EIF_POINTER) _A1106_35_2, (EIF_POINTER)(0),7184, tr3, 0, 1, -1, tr2, 1);
				}
				ur1 = RTCCL(tr5);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6296, "attach", tr1))(tr1, ur1x);
				RTHOOK(17);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7145, "parse_and_validate_input_string", loc4))(loc4);
				RTHOOK(18);
				tb1 = *(EIF_BOOLEAN *)(loc4 + RTVA(7139, "etf_error", loc4));
				if (tb1) {
					RTHOOK(19);
					RTDBGAA(Current, dtype, 7670, 0xF80000E8, 0); /* exec_log */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7180, "error_message", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr2 = RTMS_EX_H("\012",1,10);
					ur1 = tr2;
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr1 = RTCCL(tr2);
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + RTWA(7670, dtype)) = (EIF_REFERENCE) tr1;
				} else {
					RTHOOK(20);
					ur1 = RTCCL(loc1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6762, "execute_without_log", loc3))(loc3, ur1x);
					RTHOOK(21);
					RTDBGAA(Current, dtype, 7670, 0xF80000E8, 0); /* exec_log */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6758, "output", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(21,1);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7188, "model_state", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tr1 = RTCCL(tr2);
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current + RTWA(7670, dtype)) = (EIF_REFERENCE) tr1;
				}
				RTHOOK(22);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(22,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7670, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(30, "print", tr1))(tr1, ur1x);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ur2
#undef ui4_1
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.handle_batch_mode */
EIF_TYPED_VALUE F1132_10047 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "handle_batch_mode";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
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
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1131, Current, 1, 1, 16280);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16280);
	RTCC(arg1, 1131, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0xF80003D7, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(983, 0x01).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6314, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(6310, "error", loc1));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6315, "remove_comment_lines", loc1))(loc1);
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6313, "item", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7685, dtype))(Current, ur1x);
		RTHOOK(6);
		RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7670, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(7);
		RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6311, "error_string", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.handle_batch_file_mode */
void F1132_10048 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "handle_batch_file_mode";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLR(4,loc4);
	RTLR(5,tr2);
	RTLR(6,Current);
	RTLR(7,ur1);
	RTLR(8,ur2);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1131, Current, 4, 2, 16281);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16281);
	RTCC(arg1, 1131, l_feature_name, 1, eif_new_type(983, 0x01), 0x01);
	RTCC(arg2, 1131, l_feature_name, 2, eif_new_type(175, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(3, 0xF80000E8, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6312, "items", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr2);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3711, "after", loc4))(loc4)).it_b);
		if (tb1) break;
		RTHOOK(5);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
		RTHOOK(6);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7671, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			RTHOOK(7);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3710, "item", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTMS_EX_H("\012",1,10);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", loc3))(loc3, ur1x);
			RTHOOK(8);
			ur1 = RTCCL(loc3);
			ur2 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7682, dtype))(Current, ur1x, ur2x);
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4643, "make_empty", loc3))(loc3);
			RTHOOK(10);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
			RTHOOK(11);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		} else {
			RTHOOK(12);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3710, "item", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTMS_EX_H("\012",1,10);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", loc3))(loc3, ur1x);
		}
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3712, "forth", loc4))(loc4);
	}
	RTHOOK(14);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7671, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (loc1 <= ti4_1)) {
		RTHOOK(15);
		ur1 = RTCCL(loc3);
		ur2 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7682, dtype))(Current, ur1x, ur2x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.handle_window_mode */
void F1132_10049 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "handle_window_mode";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
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
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,loc4);
	RTLR(5,tr2);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1131, Current, 4, 1, 16282);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16282);
	RTCC(arg1, 1131, l_feature_name, 1, eif_new_type(983, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6312, "items", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", tr1))(tr1)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7675, dtype));
	if (tb1) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 7672, 0x10000000, 1); /* start_of_window */
		*(EIF_INTEGER_32 *)(Current + RTWA(7672, dtype)) = (EIF_INTEGER_32) loc3;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 7673, 0x10000000, 1); /* end_of_window */
		*(EIF_INTEGER_32 *)(Current + RTWA(7673, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
	} else {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7672, dtype));
		if ((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(6);
			RTDBGAA(Current, dtype, 7672, 0x10000000, 1); /* start_of_window */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7672, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(7672, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + ti4_1) + ((EIF_INTEGER_32) 1L));
		}
		RTHOOK(7);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7674, dtype));
		if (tb1) {
			RTHOOK(8);
			RTDBGAA(Current, dtype, 7673, 0x10000000, 1); /* end_of_window */
			*(EIF_INTEGER_32 *)(Current + RTWA(7673, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(9);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7673, dtype));
			if ((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(10);
				RTDBGAA(Current, dtype, 7673, 0x10000000, 1); /* end_of_window */
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7673, dtype));
				*(EIF_INTEGER_32 *)(Current + RTWA(7673, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + ti4_1) + ((EIF_INTEGER_32) 1L));
			}
		}
	}
	RTHOOK(11);
	RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
	RTNHOOK(11,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(12);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(13);
	RTDBGAA(Current, dtype, 7676, 0xF80000E8, 0); /* context_state_from_exec_log */
	tr1 = RTLNSMART(RTWCT(7676, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
	RTNHOOK(13,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7676, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(14);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6312, "items", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr2);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3711, "after", loc4))(loc4)).it_b);
		if (tb1) break;
		RTHOOK(15);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
		RTHOOK(16);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7673, dtype));
		if ((EIF_BOOLEAN) (loc1 <= ti4_1)) {
			RTHOOK(17);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3710, "item", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = RTMS_EX_H("\012",1,10);
			ur1 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4821, "append", loc2))(loc2, ur1x);
			RTHOOK(18);
			ui4_1 = loc1;
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7683, dtype))(Current, ui4_1x, ur1x);
		}
		RTHOOK(19);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4643, "make_empty", loc2))(loc2);
		RTHOOK(20);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3712, "forth", loc4))(loc4);
	}
	RTHOOK(21);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7672, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7673, dtype));
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L))) && (EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L))))) {
		RTHOOK(22);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(22,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7676, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(149, "put_string", tr1))(tr1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.validate_window_spec */
void F1132_10050 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "validate_window_spec";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1131, Current, 1, 1, 16283);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16283);
	RTCC(arg1, 1131, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_array[1] ~ \"-w\" and then (argument_count = 4 OR argument_count = 5)", EX_PRE);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2283, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		if (RTEQ(tr2, RTMS_EX_H("-w",2,11639))) {
			tb2 = '\01';
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2299, dtype))(Current)).it_i4);
			if (!(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2299, dtype))(Current)).it_i4);
				tb2 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 5L));
			}
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2283, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4673, "is_integer", tr2))(tr2)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 7672, 0x10000000, 1); /* start_of_window */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2283, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4707, "to_integer", tr2))(tr2)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(7672, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		tb1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2283, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = ((EIF_INTEGER_32) 3L);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4673, "is_integer", tr2))(tr2)).it_b);
		if (!tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2283, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = ((EIF_INTEGER_32) 3L);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tb1 = RTEQ(tr2, RTMS_EX_H("_",1,95));
		}
		if (tb1) {
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2283, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = ((EIF_INTEGER_32) 3L);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4673, "is_integer", tr2))(tr2)).it_b);
			if (tb1) {
				RTHOOK(7);
				RTDBGAA(Current, dtype, 7673, 0x10000000, 1); /* end_of_window */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2283, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ui4_1 = ((EIF_INTEGER_32) 3L);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4707, "to_integer", tr2))(tr2)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(7673, dtype)) = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(8);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2283, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ui4_1 = ((EIF_INTEGER_32) 3L);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2369, "item", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				if (RTEQ(tr2, RTMS_EX_H("_",1,95))) {
					RTHOOK(9);
					RTDBGAA(Current, dtype, 7674, 0x04000000, 1); /* end_of_window_unbounded */
					*(EIF_BOOLEAN *)(Current + RTWA(7674, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			}
			RTHOOK(10);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7674, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7672, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7673, dtype));
			if ((EIF_BOOLEAN) (tb1 || (EIF_BOOLEAN) (ti4_1 <= ti4_2))) {
				RTHOOK(11);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7672, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7673, dtype));
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L)))) {
					RTHOOK(12);
					RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7665, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					ur2 = RTCCL(arg1);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7656, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc1 = (EIF_REFERENCE) RTCCL(tr1);
				}
			} else {
				RTHOOK(13);
				RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7667, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				ur2 = RTCCL(arg1);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7656, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc1 = (EIF_REFERENCE) RTCCL(tr1);
			}
		} else {
			RTHOOK(14);
			RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7666, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			ur2 = RTCCL(arg1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7656, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
		}
	} else {
		RTHOOK(15);
		RTDBGAL(1, 0xF80000E8, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7664, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7656, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(16);
	RTDBGAA(Current, dtype, 7668, 0xF80000E8, 0); /* window_spec_error */
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7668, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.batch_file_mode_make_a_step */
void F1132_10051 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "batch_file_mode_make_a_step";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1131, Current, 0, 2, 16284);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16284);
	RTCC(arg1, 1131, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTCC(arg2, 1131, l_feature_name, 2, eif_new_type(175, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7685, dtype))(Current, ur1x);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3577, "open_append", arg2))(arg2);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7670, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3456, "put_string", arg2))(arg2, ur1x);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3453, "close", arg2))(arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef arg2
#undef arg1
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.window_mode_make_a_step */
void F1132_10052 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "window_mode_make_a_step";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,tr3);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1131, Current, 1, 2, 16285);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16285);
	RTCC(arg2, 1131, l_feature_name, 2, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7672, dtype));
	if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(2);
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7685, dtype))(Current, ur1x);
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7684, dtype))(Current);
	} else {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7672, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7673, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == arg1) && (EIF_BOOLEAN)(arg1 == ti4_2))) {
			RTHOOK(5);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7672, dtype));
			if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1L))) {
				RTHOOK(6);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(6,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7676, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(149, "put_string", tr1))(tr1, ur1x);
			} else {
				RTHOOK(7);
				RTDBGAL(1, 0xF800040E, 0, 0); /* loc1 */
				tr1 = RTLN(eif_new_type(1038, 0x01).id);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6754, Dtype(tr1)))(tr1);
				RTNHOOK(7,1);
				loc1 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(8);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(8,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6758, "output", loc1))(loc1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(8,2);
				tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7188, "model_state", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				ur1 = RTCCL(tr3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(149, "put_string", tr1))(tr1, ur1x);
			}
		} else {
			RTHOOK(9);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7672, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7673, dtype));
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 <= arg1) && (EIF_BOOLEAN) (arg1 < ti4_2))) {
				RTHOOK(10);
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7685, dtype))(Current, ur1x);
				RTHOOK(11);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7672, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7672, dtype));
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ti4_1) && (EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 1L)))) {
					RTHOOK(12);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(12,1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7676, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					ur1 = RTCCL(tr2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(149, "put_string", tr1))(tr1, ur1x);
				}
				RTHOOK(13);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(13,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7670, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(149, "put_string", tr1))(tr1, ur1x);
			} else {
				RTHOOK(14);
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7686, dtype))(Current, ur1x);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef arg2
#undef arg1
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.retrieve_context_state_from_exec_log */
void F1132_10053 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "retrieve_context_state_from_exec_log";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 1131, Current, 2, 0, 16286);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16286);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7670, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = RTMS_EX_H("->",2,11582);
	ur1 = tr2;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4692, "substring_index", tr1))(tr1, ur1x, ui4_1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7670, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	uc1 = (EIF_CHARACTER_8) '\012';
	ui4_1 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4747, "index_of", tr1))(tr1, uc1x, ui4_1x)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 7676, 0xF80000E8, 0); /* context_state_from_exec_log */
	tr1 = RTLNSMART(RTWCT(7676, dtype, Dftype(Current)).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7670, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7670, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(3,2);
	ti4_1 = *(EIF_INTEGER_32 *)(tr3 + RTVA(4768, "count", tr3));
	ui4_2 = ti4_1;
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4722, "substring", tr2))(tr2, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4738, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,3);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7676, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uc1
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.exec */
void F1132_10054 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "exec";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1131, Current, 1, 1, 16287);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16287);
	RTCC(arg1, 1131, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800040E, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1038, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6754, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7670, 0xF80000E8, 0); /* exec_log */
	tr1 = RTLNSMART(RTWCT(7670, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7670, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7669, dtype));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6761, "execute", loc1))(loc1, ur1x, ub1x);
	RTHOOK(4);
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(6760, "error", loc1));
	if (tb1) {
		RTHOOK(5);
		RTDBGAA(Current, dtype, 7670, 0xF80000E8, 0); /* exec_log */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6758, "output", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7180, "error_message", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4721, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(7670, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 7670, 0xF80000E8, 0); /* exec_log */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6758, "output", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7179, "output", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(7670, dtype)) = (EIF_REFERENCE) tr1;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 7669, 0x04000000, 1); /* is_init */
		*(EIF_BOOLEAN *)(Current + RTWA(7669, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
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
#undef ub1
#undef arg1
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.exec_without_log */
void F1132_10055 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "exec_without_log";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1131, Current, 1, 1, 16288);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1131, Current, 16288);
	RTCC(arg1, 1131, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800040E, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1038, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6754, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7670, 0xF80000E8, 0); /* exec_log */
	tr1 = RTLNSMART(RTWCT(7670, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7670, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6762, "execute_without_log", loc1))(loc1, ur1x);
	RTHOOK(4);
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(6760, "error", loc1));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(5);
		RTDBGAA(Current, dtype, 7669, 0x04000000, 1); /* is_init */
		*(EIF_BOOLEAN *)(Current + RTWA(7669, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
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
#undef arg1
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.man_page */
RTOID (F1132_10056)


EIF_TYPED_VALUE F1132_10056 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1132_10056,16290,RTMS_EX_H(
		"type_check\012generate_java_code\012add_class(\012    cn: CLASS_NAME = STRING\012)\012add_attribute(\012    cn: CLASS_NAME = STRING ; \012    fn: FEATURE_NAME = STRING ; \012    ft: CLASS_NAME = STRING\012)\012add_command(\012    cn: CLASS_NAME = STRING ; \012    fn: FEATURE_NAME = STRING ; \012    ps: ARRAY[TUPLE[pn: VAR_NAME = STRING; ft: CLASS_NAME = STRING]]\012)\012add_query(\012    cn: CLASS_NAME = STRING ; \012    fn: FEATURE_NAME = STRING ; \012    ps: ARRAY[TUPLE[pn: VAR_NAME = STRING; pt: CLASS_NAME = STRING]] ; \012    rt: CLASS_NAME = STRING\012)\012add_ass"
		"ignment_instruction(\012    cn: CLASS_NAME = STRING ; \012    fn: FEATURE_NAME = STRING ; \012    n: VAR_NAME = STRING\012)\012add_call_chain(\012    chain: ARRAY[VAR_NAME = STRING]\012)\012bool_value(\012    c: BOOLEAN\012)\012int_value(\012    c: INTEGER_32\012)\012addition\012subtraction\012multiplication\012quotient\012modulo\012conjunction\012disjunction\012equals\012greater_than\012less_than\012numerical_negation\012logical_negation",879,216375662));
}

/* {ETF_CMD_LINE_ROOT_INTERFACE}.etf_version */
RTOID (F1132_10057)


EIF_TYPED_VALUE F1132_10057 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1132_10057,16291,RTMS_EX_H("1.14 (2019-10-12)",17,877892905));
}

void EIF_Minit1132 (void)
{
	GTCX
	RTOTS (10023,F1132_10023)
	RTOTS (10056,F1132_10056)
	RTOTS (10057,F1132_10057)
}


#ifdef __cplusplus
}
#endif
