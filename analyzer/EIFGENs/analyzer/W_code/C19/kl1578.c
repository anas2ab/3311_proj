/*
 * Code for class KL_WINDOWS_INPUT_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1578_15689(EIF_REFERENCE);
extern void F1578_15690(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1578_15691(EIF_REFERENCE);
extern void EIF_Minit1578(void);

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

/* {KL_WINDOWS_INPUT_FILE}.read_line */
void F1578_15689 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_line";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,loc2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_CHAR8, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTLU(SK_BOOL, &loc5);
	
	RTEAA(l_feature_name, 1577, Current, 5, 0, 21731);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1577, Current, 21731);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6963, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6965, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7804, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8138, "wipe_out", tr1))(tr1, ur1x);
	RTHOOK(4);
	RTDBGAL(5, 0x04000000, 1, 0); /* loc5 */
	loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(5);
	RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		RTHOOK(6);
		if (loc1) break;
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6959, dtype))(Current);
		RTHOOK(8);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11464, dtype));
		if (tb1) {
			RTHOOK(9);
			if (loc4) {
				RTHOOK(10);
				uc1 = (EIF_CHARACTER_8) '\015';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", loc2))(loc2, uc1x);
			}
			RTHOOK(11);
			RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
			loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(12);
			RTDBGAL(5, 0x04000000, 1, 0); /* loc5 */
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(13);
			RTDBGAL(3, 0x08000000, 1, 0); /* loc3 */
			tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(11466, dtype));
			loc3 = (EIF_CHARACTER_8) tc1;
			RTHOOK(14);
			switch (loc3) {
				case (EIF_CHARACTER_8) '\012':
					RTHOOK(15);
					if (loc4) {
						RTHOOK(16);
						RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
						loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					} else {
						RTHOOK(17);
						uc1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", loc2))(loc2, uc1x);
					}
					break;
				case (EIF_CHARACTER_8) '\015':
					RTHOOK(18);
					if (loc4) {
						RTHOOK(19);
						uc1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", loc2))(loc2, uc1x);
					} else {
						RTHOOK(20);
						RTDBGAL(4, 0x04000000, 1, 0); /* loc4 */
						loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					}
					break;
				default:
					RTHOOK(21);
					if (loc4) {
						RTHOOK(22);
						uc1 = (EIF_CHARACTER_8) '\015';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", loc2))(loc2, uc1x);
						RTHOOK(23);
						RTDBGAL(4, 0x04000000, 1, 0); /* loc4 */
						loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					}
					RTHOOK(24);
					uc1 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", loc2))(loc2, uc1x);
					break;
			}
		}
	}
	RTHOOK(25);
	RTDBGAA(Current, dtype, 11464, 0x04000000, 1); /* end_of_file */
	*(EIF_BOOLEAN *)(Current + RTWA(11464, dtype)) = (EIF_BOOLEAN) loc5;
	if (RTAL & CK_ENSURE) {
		RTHOOK(26);
		RTCT("last_string_not_void", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6965, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(11465, dtype));
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef uc1
}

/* {KL_WINDOWS_INPUT_FILE}.read_new_line */
void F1578_15690 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_new_line";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
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
	
	RTEAA(l_feature_name, 1577, Current, 0, 0, 21732);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1577, Current, 21732);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6963, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6965, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7804, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8138, "wipe_out", tr1))(tr1, ur1x);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6959, dtype))(Current);
	RTHOOK(5);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11464, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(6);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(11466, dtype));
		if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\015')) {
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6959, dtype))(Current);
			RTHOOK(8);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(11464, dtype));
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(9);
				tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(11466, dtype));
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012')) {
					RTHOOK(10);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11465, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(10,1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8169, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					ur1 = RTCCL(tr2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4823, "append_string", tr1))(tr1, ur1x);
				} else {
					RTHOOK(11);
					tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(11466, dtype));
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6960, dtype))(Current, uc1x);
					RTHOOK(12);
					uc1 = (EIF_CHARACTER_8) '\015';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6960, dtype))(Current, uc1x);
				}
			} else {
				RTHOOK(13);
				uc1 = (EIF_CHARACTER_8) '\015';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6960, dtype))(Current, uc1x);
			}
		} else {
			RTHOOK(14);
			tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(11466, dtype));
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6960, dtype))(Current, uc1x);
		}
	}
	RTHOOK(15);
	RTDBGAA(Current, dtype, 11464, 0x04000000, 1); /* end_of_file */
	*(EIF_BOOLEAN *)(Current + RTWA(11464, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("not_end_of_input", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6965, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("last_string_not_void", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(11465, dtype));
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
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
	RTLO(2);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef uc1
}

/* {KL_WINDOWS_INPUT_FILE}.eol */
RTOID (F1578_15691)


EIF_TYPED_VALUE F1578_15691 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1578_15691,21734,RTMS_EX_H("\015\012",2,3338));
}

void EIF_Minit1578 (void)
{
	GTCX
	RTOTS (15691,F1578_15691)
}


#ifdef __cplusplus
}
#endif
