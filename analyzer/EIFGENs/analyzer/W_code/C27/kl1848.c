/*
 * Code for class KL_TEXT_INPUT_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1848_20773(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1848_20774(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1848_20775(EIF_REFERENCE);
extern void F1848_20776(EIF_REFERENCE);
extern void F1848_20777(EIF_REFERENCE);
extern void F1848_20778(EIF_REFERENCE);
extern void EIF_Minit1848(void);

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

/* {KL_TEXT_INPUT_FILE}.last_character */
EIF_TYPED_VALUE F1848_20773 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = *(EIF_CHARACTER_8 *)(Current + RTWA(17289,Dtype(Current)));
	return r;
}


/* {KL_TEXT_INPUT_FILE}.last_string */
EIF_TYPED_VALUE F1848_20774 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(17288,Dtype(Current)));
	return r;
}


/* {KL_TEXT_INPUT_FILE}.eol */
RTOID (F1848_20775)


EIF_TYPED_VALUE F1848_20775 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1848_20775,26798,RTMS_EX_H("\012",1,10));
}

/* {KL_TEXT_INPUT_FILE}.read_line */
void F1848_20776 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1847, Current, 5, 0, 26798);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1847, Current, 26798);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10391, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10393, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11914, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17288, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12266, "wipe_out", tr1))(tr1, ur1x);
	RTHOOK(4);
	RTDBGAL(4, 0x04000000, 1, 0); /* loc4 */
	loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(5);
	RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17288, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		RTHOOK(6);
		if (loc1) break;
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10387, dtype))(Current);
		RTHOOK(8);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(17287, dtype));
		if (tb1) {
			RTHOOK(9);
			RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
			loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(10);
			RTDBGAL(4, 0x04000000, 1, 0); /* loc4 */
			loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(11);
			RTDBGAL(3, 0x08000000, 1, 0); /* loc3 */
			tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(17289, dtype));
			loc3 = (EIF_CHARACTER_8) tc1;
			RTHOOK(12);
			switch (loc3) {
				case (EIF_CHARACTER_8) '\012':
					RTHOOK(13);
					RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
					loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case (EIF_CHARACTER_8) '\015':
					RTHOOK(14);
					RTDBGAL(5, 0x04000000, 1, 0); /* loc5 */
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				default:
					RTHOOK(15);
					if (loc5) {
						RTHOOK(16);
						uc1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10388, dtype))(Current, uc1x);
						RTHOOK(17);
						RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
						loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					} else {
						RTHOOK(18);
						uc1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", loc2))(loc2, uc1x);
					}
					break;
			}
		}
	}
	RTHOOK(19);
	RTDBGAA(Current, dtype, 17287, 0x04000000, 1); /* end_of_file */
	*(EIF_BOOLEAN *)(Current + RTWA(17287, dtype)) = (EIF_BOOLEAN) loc4;
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("last_string_not_void", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10393, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(17288, dtype));
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
	RTHOOK(21);
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

/* {KL_TEXT_INPUT_FILE}.read_new_line */
void F1848_20777 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1847, Current, 0, 0, 26799);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1847, Current, 26799);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10391, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10393, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11914, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17288, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12266, "wipe_out", tr1))(tr1, ur1x);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10387, dtype))(Current);
	RTHOOK(5);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(17287, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(6);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(17289, dtype));
		switch (tc1) {
			case (EIF_CHARACTER_8) '\012':
				RTHOOK(7);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17288, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(7,1);
				uc1 = (EIF_CHARACTER_8) '\012';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", tr1))(tr1, uc1x);
				break;
			case (EIF_CHARACTER_8) '\015':
				RTHOOK(8);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17288, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(8,1);
				uc1 = (EIF_CHARACTER_8) '\015';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", tr1))(tr1, uc1x);
				RTHOOK(9);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10387, dtype))(Current);
				RTHOOK(10);
				tb1 = *(EIF_BOOLEAN *)(Current + RTWA(17287, dtype));
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(11);
					tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(17289, dtype));
					if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012')) {
						RTHOOK(12);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17288, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(12,1);
						uc1 = (EIF_CHARACTER_8) '\012';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", tr1))(tr1, uc1x);
					} else {
						RTHOOK(13);
						tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(17289, dtype));
						uc1 = tc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10388, dtype))(Current, uc1x);
					}
				}
				break;
			default:
				RTHOOK(14);
				tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(17289, dtype));
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10388, dtype))(Current, uc1x);
				break;
		}
	}
	RTHOOK(15);
	RTDBGAA(Current, dtype, 17287, 0x04000000, 1); /* end_of_file */
	*(EIF_BOOLEAN *)(Current + RTWA(17287, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("not_end_of_input", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10393, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("last_string_not_void", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(17288, dtype));
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

/* {KL_TEXT_INPUT_FILE}.old_open_read */
void F1848_20778 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "old_open_read";
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1847, Current, 0, 0, 26800);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1847, Current, 26800);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_closed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17261, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("is_closed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3557, dtype))(Current)).it_b);
		RTTE(tb1, label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3681, 183))(Current);
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(Current + RTWA(3644, dtype));
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(tp1 == tp2)) {
		RTHOOK(5);
		RTDBGAA(Current, dtype, 3783, 0x10000000, 1); /* mode */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3784, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(3783, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		RTDBGAA(Current, dtype, 3792, 0x04000000, 1); /* descriptor_available */
		*(EIF_BOOLEAN *)(Current + RTWA(3792, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("exists", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17267, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("open_read", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17284, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("exists", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3549, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("open_read", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3550, dtype))(Current)).it_b);
		if (tb1) {
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
	RTLO(2);
	RTEE;
}

void EIF_Minit1848 (void)
{
	GTCX
	RTOTS (20775,F1848_20775)
}


#ifdef __cplusplus
}
#endif
