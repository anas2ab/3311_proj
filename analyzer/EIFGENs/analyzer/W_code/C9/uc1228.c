/*
 * Code for class UC_UTF8_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1228_10515(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1228_10516(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1228_10517(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1228_10518(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1228_10519(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1228_10520(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1228_10521(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1228_10522(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1228_10523(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1228_10524(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1228_10525(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1228_10526(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1228_10527(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1228_10528(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1228_10529(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10530(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10531(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10532(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10533(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10534(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10535(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10536(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10537(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10538(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10539(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10540(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10541(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10542(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10543(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10544(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10545(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10546(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10547(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10548(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10549(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10550(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10551(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10552(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10553(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10554(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10555(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10556(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10557(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10558(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1228_10559(EIF_REFERENCE);
extern void EIF_Minit1228(void);

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

/* {UC_UTF8_ROUTINES}.valid_utf8 */
EIF_TYPED_VALUE F1228_10515 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_utf8";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc6 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc7 = (EIF_CHARACTER_8) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_TYPED_VALUE uc2x = {{0}, SK_CHAR8};
#define uc2 uc2x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_CHAR8, &loc6);
	RTLU(SK_CHAR8, &loc7);
	
	RTEAA(l_feature_name, 1227, Current, 7, 1, 17110);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1227, Current, 17110);
	RTCC(arg1, 1227, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_is_string", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7999, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ur1 = RTCCL(arg1);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5066, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(4);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(7);
		RTDBGAL(7, 0x08000000, 1, 0); /* loc7 */
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", arg1))(arg1, ui4_1x)).it_c1);
		loc7 = (EIF_CHARACTER_8) tc1;
		RTHOOK(8);
		uc1 = loc7;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8001, dtype))(Current, uc1x)).it_b);
		if (tb1) {
			RTHOOK(9);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			uc1 = loc7;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8008, dtype))(Current, uc1x)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 1L))) {
				RTHOOK(11);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
			} else {
				RTHOOK(12);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) - ((EIF_INTEGER_32) 1L));
				RTHOOK(13);
				if ((EIF_BOOLEAN) (loc3 > loc2)) {
					RTHOOK(14);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(15);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(16);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					uc1 = loc7;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8006, dtype))(Current, uc1x)).it_i4);
					loc5 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(17);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1++;
					RTHOOK(18);
					RTDBGAL(6, 0x08000000, 1, 0); /* loc6 */
					ui4_1 = loc1;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", arg1))(arg1, ui4_1x)).it_c1);
					loc6 = (EIF_CHARACTER_8) tc1;
					RTHOOK(19);
					uc1 = loc6;
					uc2 = loc7;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8003, dtype))(Current, uc1x, uc2x)).it_b);
					if ((EIF_BOOLEAN) !tb1) {
						RTHOOK(20);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(21);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(22);
						RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
						uc1 = loc6;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8007, dtype))(Current, uc1x)).it_i4);
						loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 * ((EIF_INTEGER_32) 64L)) + ti4_1);
						RTHOOK(23);
						switch (loc4) {
							case 2L:
								RTHOOK(24);
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8019, dtype))(Current)).it_i4);
								if ((EIF_BOOLEAN) (loc5 <= ti4_1)) {
									RTHOOK(25);
									RTDBGAL(0, 0x04000000, 1,0); /* Result */
									Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								}
								break;
							case 3L:
								RTHOOK(26);
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8017, dtype))(Current)).it_i4);
								if ((EIF_BOOLEAN) (loc5 <= ti4_1)) {
									RTHOOK(27);
									RTDBGAL(0, 0x04000000, 1,0); /* Result */
									Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								}
								break;
							case 4L:
								RTHOOK(28);
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8016, dtype))(Current)).it_i4);
								if ((EIF_BOOLEAN) (loc5 <= ti4_1)) {
									RTHOOK(29);
									RTDBGAL(0, 0x04000000, 1,0); /* Result */
									Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								}
								break;
							default:
								RTEC(EN_WHEN);
						}
						RTHOOK(30);
						if (Result) {
							RTHOOK(31);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1++;
							for (;;) {
								RTHOOK(32);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(33);
								ui4_1 = loc1;
								tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", arg1))(arg1, ui4_1x)).it_c1);
								uc1 = tc1;
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8002, dtype))(Current, uc1x)).it_b);
								if (tb1) {
									RTHOOK(34);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									loc1++;
								} else {
									RTHOOK(35);
									RTDBGAL(0, 0x04000000, 1,0); /* Result */
									Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(36);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
								}
							}
						}
					}
				}
			}
		} else {
			RTHOOK(37);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(38);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(39);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef uc1
#undef uc2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.is_encoded_first_byte */
EIF_TYPED_VALUE F1228_10516 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_encoded_first_byte";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 tc3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1227, Current, 0, 1, 17111);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1227, Current, 17111);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8018, dtype))(Current)).it_c1);
	tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8024, dtype))(Current)).it_c1);
	tc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8032, dtype))(Current)).it_c1);
	Result = (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 <= tc1) || (EIF_BOOLEAN) ((EIF_BOOLEAN) (tc2 <= arg1) && (EIF_BOOLEAN) (arg1 <= tc3))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {UC_UTF8_ROUTINES}.is_encoded_next_byte */
EIF_TYPED_VALUE F1228_10517 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_encoded_next_byte";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1227, Current, 0, 1, 17112);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1227, Current, 17112);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8018, dtype))(Current)).it_c1);
	tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8022, dtype))(Current)).it_c1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (tc1 < arg1) && (EIF_BOOLEAN) (arg1 <= tc2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {UC_UTF8_ROUTINES}.is_encoded_second_byte */
EIF_TYPED_VALUE F1228_10518 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "is_encoded_second_byte";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_c1
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
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
	
	RTEAA(l_feature_name, 1227, Current, 0, 2, 17113);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1227, Current, 17113);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_first_byte", EX_PRE);
		uc1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8001, dtype))(Current, uc1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8027, dtype))(Current)).it_c1);
	if ((EIF_BOOLEAN)(arg2 == tc1)) {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8021, dtype))(Current)).it_c1);
		tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8022, dtype))(Current)).it_c1);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (tc1 < arg1) && (EIF_BOOLEAN) (arg1 <= tc2));
	} else {
		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8028, dtype))(Current)).it_c1);
		if ((EIF_BOOLEAN)(arg2 == tc1)) {
			RTHOOK(5);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8018, dtype))(Current)).it_c1);
			tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8021, dtype))(Current)).it_c1);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (tc1 < arg1) && (EIF_BOOLEAN) (arg1 <= tc2));
		} else {
			RTHOOK(6);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8031, dtype))(Current)).it_c1);
			if ((EIF_BOOLEAN)(arg2 == tc1)) {
				RTHOOK(7);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8020, dtype))(Current)).it_c1);
				tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8022, dtype))(Current)).it_c1);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (tc1 < arg1) && (EIF_BOOLEAN) (arg1 <= tc2));
			} else {
				RTHOOK(8);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8032, dtype))(Current)).it_c1);
				if ((EIF_BOOLEAN)(arg2 == tc1)) {
					RTHOOK(9);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8018, dtype))(Current)).it_c1);
					tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8020, dtype))(Current)).it_c1);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (tc1 < arg1) && (EIF_BOOLEAN) (arg1 <= tc2));
				} else {
					RTHOOK(10);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8018, dtype))(Current)).it_c1);
					tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8022, dtype))(Current)).it_c1);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (tc1 < arg1) && (EIF_BOOLEAN) (arg1 <= tc2));
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef uc1
#undef arg2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.is_endian_detection_character */
EIF_TYPED_VALUE F1228_10519 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "is_endian_detection_character";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_c1
#define arg3 arg3x.it_c1
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_TYPED_VALUE uc2x = {{0}, SK_CHAR8};
#define uc2 uc2x.it_c1
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_c1 = * (EIF_CHARACTER_8 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_c1 = * (EIF_CHARACTER_8 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_CHAR8,&arg2);
	RTLU(SK_CHAR8,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1227, Current, 0, 3, 17114);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1227, Current, 17114);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	uc1 = arg1;
	uc2 = arg2;
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8005, dtype))(Current, uc1x, uc2x)).it_b);
	if (tb2) {
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8042, dtype))(Current)).it_c1);
		tb1 = (EIF_BOOLEAN)(arg3 == tc1);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_start", EX_POST);
		tb1 = '\01';
		if (Result) {
			uc1 = arg1;
			uc2 = arg2;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8005, dtype))(Current, uc1x, uc2x)).it_b);
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
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef uc1
#undef uc2
#undef arg3
#undef arg2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.is_endian_detection_character_start */
EIF_TYPED_VALUE F1228_10520 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "is_endian_detection_character_start";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_c1
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
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
	
	RTEAA(l_feature_name, 1227, Current, 0, 2, 17115);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1227, Current, 17115);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8040, dtype))(Current)).it_c1);
	tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8041, dtype))(Current)).it_c1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == tc1) && (EIF_BOOLEAN)(arg2 == tc2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.encoded_first_value */
EIF_TYPED_VALUE F1228_10521 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "encoded_first_value";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1227, Current, 0, 1, 17116);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1227, Current, 17116);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_encoded_first_byte", EX_PRE);
		uc1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8001, dtype))(Current, uc1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (EIF_INTEGER_32) (arg1);
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8018, dtype))(Current)).it_c1);
	if ((EIF_BOOLEAN) (arg1 <= tc1)) {
	} else {
		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8025, dtype))(Current)).it_c1);
		if ((EIF_BOOLEAN) (arg1 <= tc1)) {
			RTHOOK(5);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result %= ((EIF_INTEGER_32) 32L);
		} else {
			RTHOOK(6);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8029, dtype))(Current)).it_c1);
			if ((EIF_BOOLEAN) (arg1 <= tc1)) {
				RTHOOK(7);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result %= ((EIF_INTEGER_32) 16L);
			} else {
				RTHOOK(8);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8032, dtype))(Current)).it_c1);
				if ((EIF_BOOLEAN) (arg1 <= tc1)) {
					RTHOOK(9);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result %= ((EIF_INTEGER_32) 8L);
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("value_positive", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("value_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 128L))) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef uc1
#undef arg1
}

/* {UC_UTF8_ROUTINES}.encoded_next_value */
EIF_TYPED_VALUE F1228_10522 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "encoded_next_value";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1227, Current, 0, 1, 17117);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1227, Current, 17117);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_encoded_next_byte", EX_PRE);
		uc1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8002, dtype))(Current, uc1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (EIF_INTEGER_32) (arg1);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 64L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("value_positive", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("value_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 64L))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef uc1
#undef arg1
}

/* {UC_UTF8_ROUTINES}.encoded_byte_count */
EIF_TYPED_VALUE F1228_10523 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "encoded_byte_count";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1227, Current, 0, 1, 17118);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1227, Current, 17118);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_encoded_first_byte", EX_PRE);
		uc1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8001, dtype))(Current, uc1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8018, dtype))(Current)).it_c1);
	if ((EIF_BOOLEAN) (arg1 <= tc1)) {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8025, dtype))(Current)).it_c1);
		if ((EIF_BOOLEAN) (arg1 <= tc1)) {
			RTHOOK(5);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			RTHOOK(6);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8029, dtype))(Current)).it_c1);
			if ((EIF_BOOLEAN) (arg1 <= tc1)) {
				RTHOOK(7);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			} else {
				RTHOOK(8);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("encoded_byte_code_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("encoded_byte_code_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 4L))) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef uc1
#undef arg1
}

/* {UC_UTF8_ROUTINES}.substring_byte_count */
EIF_TYPED_VALUE F1228_10524 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "substring_byte_count";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
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
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,loc6);
	RTLR(7,loc7);
	RTLR(8,loc8);
	RTLIU(9);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_CHAR8, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 1227, Current, 8, 3, 17119);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1227, Current, 17119);
	RTCC(arg1, 1227, l_feature_name, 1, eif_new_type(229, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_end_index", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4681, "count", arg1))(arg1)).it_i4);
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	if ((EIF_BOOLEAN) (arg2 <= arg3)) {
		RTHOOK(6);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7999, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ur1 = RTCCL(arg1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8043, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur2 = RTCCL(tr2);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5066, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		if (tb2) {
			loc6 = RTCCL(arg1);
			loc6 = RTRV(eif_new_type(232, 0x01),loc6);
			tb1 = EIF_TEST(loc6);
		}
		if (tb1) {
			RTHOOK(7);
			if ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg3 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(8);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4 = (EIF_INTEGER_32) arg3;
			} else {
				RTHOOK(9);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 1L));
			}
			RTHOOK(10);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (EIF_INTEGER_32) arg2;
			for (;;) {
				RTHOOK(11);
				if ((EIF_BOOLEAN) (loc3 > loc4)) break;
				RTHOOK(12);
				RTDBGAL(5, 0x08000000, 1, 0); /* loc5 */
				ui4_1 = loc3;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc6))(loc6, ui4_1x)).it_c1);
				loc5 = (EIF_CHARACTER_8) tc1;
				RTHOOK(13);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8018, dtype))(Current)).it_c1);
				if ((EIF_BOOLEAN) (loc5 <= tc1)) {
					RTHOOK(14);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result++;
				} else {
					RTHOOK(15);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					uc1 = loc5;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8011, dtype))(Current, uc1x)).it_i4);
					Result += ti4_1;
				}
				RTHOOK(16);
				RTDBGAL(5, 0x08000000, 1, 0); /* loc5 */
				ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc6))(loc6, ui4_1x)).it_c1);
				loc5 = (EIF_CHARACTER_8) tc1;
				RTHOOK(17);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8018, dtype))(Current)).it_c1);
				if ((EIF_BOOLEAN) (loc5 <= tc1)) {
					RTHOOK(18);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result++;
				} else {
					RTHOOK(19);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					uc1 = loc5;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8011, dtype))(Current, uc1x)).it_i4);
					Result += ti4_1;
				}
				RTHOOK(20);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3 += ((EIF_INTEGER_32) 2L);
			}
			RTHOOK(21);
			if ((EIF_BOOLEAN) (loc4 < arg3)) {
				RTHOOK(22);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				ui4_1 = arg3;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc6))(loc6, ui4_1x)).it_c1);
				uc1 = tc1;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8011, dtype))(Current, uc1x)).it_i4);
				Result += ti4_1;
			}
		} else {
			RTHOOK(23);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7999, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(23,1);
			ur1 = RTCCL(arg1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8044, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur2 = RTCCL(tr2);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5066, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
			if (tb2) {
				loc7 = RTCCL(arg1);
				loc7 = RTRV(eif_new_type(1600, 0x01),loc7);
				tb1 = EIF_TEST(loc7);
			}
			if (tb1) {
				RTHOOK(24);
				tb1 = '\0';
				if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
					ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(4768, "count", loc7));
					tb1 = (EIF_BOOLEAN)(arg3 == ti4_1);
				}
				if (tb1) {
					RTHOOK(25);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(11988, "byte_count", loc7));
					Result = (EIF_INTEGER_32) ti4_1;
				} else {
					RTHOOK(26);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					ui4_1 = arg2;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12022, "byte_index", loc7))(loc7, ui4_1x)).it_i4);
					loc1 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(27);
					ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(4768, "count", loc7));
					if ((EIF_BOOLEAN)(arg3 == ti4_1)) {
						RTHOOK(28);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(11988, "byte_count", loc7));
						Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc1) + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(29);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						ui4_1 = loc1;
						ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12021, "shifted_byte_index", loc7))(loc7, ui4_1x, ui4_2x)).it_i4);
						loc2 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(30);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
					}
				}
			} else {
				RTHOOK(31);
				loc8 = RTCCL(arg1);
				loc8 = RTRV(eif_new_type(1601, 0x01),loc8);
				if (EIF_TEST(loc8)) {
					RTHOOK(32);
					tb1 = '\0';
					if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
						ti4_1 = *(EIF_INTEGER_32 *)(loc8 + RTVA(4768, "count", loc8));
						tb1 = (EIF_BOOLEAN)(arg3 == ti4_1);
					}
					if (tb1) {
						RTHOOK(33);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						ti4_1 = *(EIF_INTEGER_32 *)(loc8 + RTVA(11988, "byte_count", loc8));
						Result = (EIF_INTEGER_32) ti4_1;
					} else {
						RTHOOK(34);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						ui4_1 = arg2;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12022, "byte_index", loc8))(loc8, ui4_1x)).it_i4);
						loc1 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(35);
						ti4_1 = *(EIF_INTEGER_32 *)(loc8 + RTVA(4768, "count", loc8));
						if ((EIF_BOOLEAN)(arg3 == ti4_1)) {
							RTHOOK(36);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							ti4_1 = *(EIF_INTEGER_32 *)(loc8 + RTVA(11988, "byte_count", loc8));
							Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc1) + ((EIF_INTEGER_32) 1L));
						} else {
							RTHOOK(37);
							RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
							ui4_1 = loc1;
							ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12021, "shifted_byte_index", loc8))(loc8, ui4_1x, ui4_2x)).it_i4);
							loc2 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(38);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
						}
					}
				} else {
					RTHOOK(39);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3 = (EIF_INTEGER_32) arg2;
					for (;;) {
						RTHOOK(40);
						if ((EIF_BOOLEAN) (loc3 > arg3)) break;
						RTHOOK(41);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						ui4_1 = loc3;
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4644, "code", arg1))(arg1, ui4_1x)).it_n4);
						RTNHOOK(41,1);
						ti4_1 = (EIF_INTEGER_32) tu4_1;
						ui4_1 = ti4_1;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8010, dtype))(Current, ui4_1x)).it_i4);
						Result += ti4_1;
						RTHOOK(42);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3++;
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(43);
		RTCT("substring_byte_count_positive", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(44);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(13);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg3
#undef arg2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.code_byte_count */
EIF_TYPED_VALUE F1228_10525 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "code_byte_count";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1227, Current, 0, 1, 17120);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1227, Current, 17120);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7619, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11745, "valid_non_surrogate_code", tr1))(tr1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 128L))) {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 2048L))) {
			RTHOOK(5);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 65536L))) {
				RTHOOK(7);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			} else {
				RTHOOK(8);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("code_byte_count_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("code_byte_count_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 4L))) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {UC_UTF8_ROUTINES}.character_byte_count */
EIF_TYPED_VALUE F1228_10526 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "character_byte_count";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1227, Current, 1, 1, 17121);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1227, Current, 17121);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8018, dtype))(Current)).it_c1);
	if ((EIF_BOOLEAN) (arg1 <= tc1)) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(3);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8039, dtype))(Current)).it_c1);
		if ((EIF_BOOLEAN) (arg1 <= tc1)) {
			RTHOOK(4);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			RTHOOK(5);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			ti4_1 = (EIF_INTEGER_32) (arg1);
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 2048L))) {
				RTHOOK(7);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			} else {
				RTHOOK(8);
				if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 65536L))) {
					RTHOOK(9);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				} else {
					RTHOOK(10);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("character_byte_count_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("character_byte_count_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 4L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {UC_UTF8_ROUTINES}.to_utf8 */
EIF_TYPED_VALUE F1228_10527 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "to_utf8";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLR(6,tr2);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1227, Current, 3, 1, 17122);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1227, Current, 17122);
	RTCC(arg1, 1227, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc3 = RTCCL(arg1);
	loc3 = RTRV(eif_new_type(1600, 0x01),loc3);
	if (EIF_TEST(loc3)) {
		RTHOOK(3);
		RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12012, "to_utf8", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(4);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(232, 0x01).id);
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4642, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(5,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(8);
			ur1 = RTCCL(Result);
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4745, "item_code", arg1))(arg1, ui4_1x)).it_i4);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8013, dtype))(Current, ur1x, ui4_1x);
			RTHOOK(9);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("to_utf8_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("string_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7999, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5066, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("valid_utf8", EX_POST);
		ur1 = RTCCL(Result);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8000, dtype))(Current, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {UC_UTF8_ROUTINES}.append_code_to_utf8 */
void F1228_10528 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_code_to_utf8";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	RTLU(SK_CHAR8, &loc2);
	RTLU(SK_CHAR8, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 1227, Current, 4, 2, 17123);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1227, Current, 17123);
	RTCC(arg1, 1227, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_utf8_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_utf8_is_string", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7999, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ur1 = RTCCL(arg1);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5066, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_utf8_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8000, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_code", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7619, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11745, "valid_non_surrogate_code", tr1))(tr1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	ui4_1 = arg2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8010, dtype))(Current, ui4_1x)).it_i4);
	switch (ti4_1) {
		case 1L:
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7792, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			ui4_1 = arg2;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8085, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg1))(arg1, uc1x);
			break;
		case 2L:
			RTHOOK(7);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) arg2;
			RTHOOK(8);
			RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7792, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 % ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 128L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8085, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			loc1 = (EIF_CHARACTER_8) tc1;
			RTHOOK(9);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 /= ((EIF_INTEGER_32) 64L);
			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7792, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			ui4_1 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 192L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8085, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg1))(arg1, uc1x);
			RTHOOK(11);
			uc1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg1))(arg1, uc1x);
			break;
		case 3L:
			RTHOOK(12);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) arg2;
			RTHOOK(13);
			RTDBGAL(2, 0x08000000, 1, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7792, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(13,1);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 % ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 128L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8085, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			loc2 = (EIF_CHARACTER_8) tc1;
			RTHOOK(14);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 /= ((EIF_INTEGER_32) 64L);
			RTHOOK(15);
			RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7792, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(15,1);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 % ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 128L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8085, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			loc1 = (EIF_CHARACTER_8) tc1;
			RTHOOK(16);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 /= ((EIF_INTEGER_32) 64L);
			RTHOOK(17);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7792, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(17,1);
			ui4_1 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 224L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8085, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg1))(arg1, uc1x);
			RTHOOK(18);
			uc1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg1))(arg1, uc1x);
			RTHOOK(19);
			uc1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg1))(arg1, uc1x);
			break;
		case 4L:
			RTHOOK(20);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) arg2;
			RTHOOK(21);
			RTDBGAL(3, 0x08000000, 1, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7792, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(21,1);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 % ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 128L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8085, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			loc3 = (EIF_CHARACTER_8) tc1;
			RTHOOK(22);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 /= ((EIF_INTEGER_32) 64L);
			RTHOOK(23);
			RTDBGAL(2, 0x08000000, 1, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7792, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(23,1);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 % ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 128L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8085, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			loc2 = (EIF_CHARACTER_8) tc1;
			RTHOOK(24);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 /= ((EIF_INTEGER_32) 64L);
			RTHOOK(25);
			RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7792, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(25,1);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 % ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 128L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8085, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			loc1 = (EIF_CHARACTER_8) tc1;
			RTHOOK(26);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 /= ((EIF_INTEGER_32) 64L);
			RTHOOK(27);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7792, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(27,1);
			ui4_1 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 240L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8085, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg1))(arg1, uc1x);
			RTHOOK(28);
			uc1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg1))(arg1, uc1x);
			RTHOOK(29);
			uc1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg1))(arg1, uc1x);
			RTHOOK(30);
			uc1 = loc3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg1))(arg1, uc1x);
			break;
		default:
			RTEC(EN_WHEN);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(31);
		RTCT("a_utf8_valid", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8000, dtype))(Current, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef uc1
#undef arg2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.code_3 */
EIF_TYPED_VALUE F1228_10529 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {UC_UTF8_ROUTINES}.code_7 */
EIF_TYPED_VALUE F1228_10530 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	return r;
}

/* {UC_UTF8_ROUTINES}.code_15 */
EIF_TYPED_VALUE F1228_10531 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	return r;
}

/* {UC_UTF8_ROUTINES}.code_31 */
EIF_TYPED_VALUE F1228_10532 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_127 */
EIF_TYPED_VALUE F1228_10533 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '';
	return r;
}

/* {UC_UTF8_ROUTINES}.code_127 */
EIF_TYPED_VALUE F1228_10534 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 127L);
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_143 */
EIF_TYPED_VALUE F1228_10535 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\217';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_159 */
EIF_TYPED_VALUE F1228_10536 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\237';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_191 */
EIF_TYPED_VALUE F1228_10537 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\277';
	return r;
}

/* {UC_UTF8_ROUTINES}.code_191 */
EIF_TYPED_VALUE F1228_10538 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 191L);
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_194 */
EIF_TYPED_VALUE F1228_10539 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\302';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_223 */
EIF_TYPED_VALUE F1228_10540 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\337';
	return r;
}

/* {UC_UTF8_ROUTINES}.code_223 */
EIF_TYPED_VALUE F1228_10541 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 223L);
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_224 */
EIF_TYPED_VALUE F1228_10542 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\340';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_237 */
EIF_TYPED_VALUE F1228_10543 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\355';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_239 */
EIF_TYPED_VALUE F1228_10544 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\357';
	return r;
}

/* {UC_UTF8_ROUTINES}.code_239 */
EIF_TYPED_VALUE F1228_10545 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 239L);
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_240 */
EIF_TYPED_VALUE F1228_10546 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\360';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_244 */
EIF_TYPED_VALUE F1228_10547 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\364';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_247 */
EIF_TYPED_VALUE F1228_10548 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\367';
	return r;
}

/* {UC_UTF8_ROUTINES}.code_247 */
EIF_TYPED_VALUE F1228_10549 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 247L);
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_251 */
EIF_TYPED_VALUE F1228_10550 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\373';
	return r;
}

/* {UC_UTF8_ROUTINES}.code_251 */
EIF_TYPED_VALUE F1228_10551 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 251L);
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_253 */
EIF_TYPED_VALUE F1228_10552 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\375';
	return r;
}

/* {UC_UTF8_ROUTINES}.code_253 */
EIF_TYPED_VALUE F1228_10553 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 253L);
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_255 */
EIF_TYPED_VALUE F1228_10554 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\377';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_ef */
EIF_TYPED_VALUE F1228_10555 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\357';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_bb */
EIF_TYPED_VALUE F1228_10556 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\273';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_bf */
EIF_TYPED_VALUE F1228_10557 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\277';
	return r;
}

/* {UC_UTF8_ROUTINES}.dummy_string */
RTOID (F1228_10558)


EIF_TYPED_VALUE F1228_10558 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1228_10558,17154,RTMS_EX_H("",0,0));
}

/* {UC_UTF8_ROUTINES}.dummy_uc_string */
RTOID (F1228_10559)
EIF_TYPED_VALUE F1228_10559 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dummy_uc_string";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1228_10559);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1227, Current, 0, 0, 17154);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1227, Current, 17154);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000640, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1600, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("dummy_uc_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

void EIF_Minit1228 (void)
{
	GTCX
	RTOTS (10558,F1228_10558)
	RTOTS (10559,F1228_10559)
}


#ifdef __cplusplus
}
#endif
