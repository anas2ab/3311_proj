/*
 * Code for class YY_PARSER_TOKENS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1594_16079(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1594(void);

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

/* {YY_PARSER_TOKENS}.yy_character_token_name */
EIF_TYPED_VALUE F1594_16079 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_character_token_name";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
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
	RTLU(SK_CHAR8, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 1593, Current, 4, 1, 22076);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1593, Current, 22076);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6573, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6503, "minimum_character_code", tr1))(tr1)).it_i4);
	if ((EIF_BOOLEAN) (arg1 >= ti4_1)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6573, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,2);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6504, "maximum_character_code", tr1))(tr1)).it_i4);
		tb1 = (EIF_BOOLEAN) (arg1 <= ti4_1);
	}
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7792, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8085, "to_character", tr1))(tr1, ui4_1x)).it_c1);
		loc1 = (EIF_CHARACTER_8) tc1;
		RTHOOK(3);
		switch (loc1) {
			case (EIF_CHARACTER_8) '\010':
				RTHOOK(4);
				RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
				tr1 = RTMS_EX_H("\'\\b\'",4,660365863);
				Result = (EIF_REFERENCE) tr1;
				break;
			case (EIF_CHARACTER_8) '\014':
				RTHOOK(5);
				RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
				tr1 = RTMS_EX_H("\'\\f\'",4,660366887);
				Result = (EIF_REFERENCE) tr1;
				break;
			case (EIF_CHARACTER_8) '\012':
				RTHOOK(6);
				RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
				tr1 = RTMS_EX_H("\'\\n\'",4,660368935);
				Result = (EIF_REFERENCE) tr1;
				break;
			case (EIF_CHARACTER_8) '\015':
				RTHOOK(7);
				RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
				tr1 = RTMS_EX_H("\'\\r\'",4,660369959);
				Result = (EIF_REFERENCE) tr1;
				break;
			case (EIF_CHARACTER_8) '\011':
				RTHOOK(8);
				RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
				tr1 = RTMS_EX_H("\'\\t\'",4,660370471);
				Result = (EIF_REFERENCE) tr1;
				break;
			case (EIF_CHARACTER_8) '\'':
				RTHOOK(9);
				RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
				tr1 = RTMS_EX_H("\'\\\'\'",4,660350759);
				Result = (EIF_REFERENCE) tr1;
				break;
			case (EIF_CHARACTER_8) '\"':
				RTHOOK(10);
				RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
				tr1 = RTMS_EX_H("\'\\\"\'",4,660349479);
				Result = (EIF_REFERENCE) tr1;
				break;
			case (EIF_CHARACTER_8) ' ':
			case (EIF_CHARACTER_8) '!':
			case (EIF_CHARACTER_8) '#':
			case (EIF_CHARACTER_8) '$':
			case (EIF_CHARACTER_8) '&':
			case (EIF_CHARACTER_8) '(':
			case (EIF_CHARACTER_8) ')':
			case (EIF_CHARACTER_8) '*':
			case (EIF_CHARACTER_8) '+':
			case (EIF_CHARACTER_8) ',':
			case (EIF_CHARACTER_8) '-':
			case (EIF_CHARACTER_8) '.':
			case (EIF_CHARACTER_8) '/':
			case (EIF_CHARACTER_8) '0':
			case (EIF_CHARACTER_8) '1':
			case (EIF_CHARACTER_8) '2':
			case (EIF_CHARACTER_8) '3':
			case (EIF_CHARACTER_8) '4':
			case (EIF_CHARACTER_8) '5':
			case (EIF_CHARACTER_8) '6':
			case (EIF_CHARACTER_8) '7':
			case (EIF_CHARACTER_8) '8':
			case (EIF_CHARACTER_8) '9':
			case (EIF_CHARACTER_8) ':':
			case (EIF_CHARACTER_8) ';':
			case (EIF_CHARACTER_8) '<':
			case (EIF_CHARACTER_8) '=':
			case (EIF_CHARACTER_8) '>':
			case (EIF_CHARACTER_8) '\?':
			case (EIF_CHARACTER_8) '@':
			case (EIF_CHARACTER_8) 'A':
			case (EIF_CHARACTER_8) 'B':
			case (EIF_CHARACTER_8) 'C':
			case (EIF_CHARACTER_8) 'D':
			case (EIF_CHARACTER_8) 'E':
			case (EIF_CHARACTER_8) 'F':
			case (EIF_CHARACTER_8) 'G':
			case (EIF_CHARACTER_8) 'H':
			case (EIF_CHARACTER_8) 'I':
			case (EIF_CHARACTER_8) 'J':
			case (EIF_CHARACTER_8) 'K':
			case (EIF_CHARACTER_8) 'L':
			case (EIF_CHARACTER_8) 'M':
			case (EIF_CHARACTER_8) 'N':
			case (EIF_CHARACTER_8) 'O':
			case (EIF_CHARACTER_8) 'P':
			case (EIF_CHARACTER_8) 'Q':
			case (EIF_CHARACTER_8) 'R':
			case (EIF_CHARACTER_8) 'S':
			case (EIF_CHARACTER_8) 'T':
			case (EIF_CHARACTER_8) 'U':
			case (EIF_CHARACTER_8) 'V':
			case (EIF_CHARACTER_8) 'W':
			case (EIF_CHARACTER_8) 'X':
			case (EIF_CHARACTER_8) 'Y':
			case (EIF_CHARACTER_8) 'Z':
			case (EIF_CHARACTER_8) '[':
			case (EIF_CHARACTER_8) '\\':
			case (EIF_CHARACTER_8) ']':
			case (EIF_CHARACTER_8) '^':
			case (EIF_CHARACTER_8) '_':
			case (EIF_CHARACTER_8) '`':
			case (EIF_CHARACTER_8) 'a':
			case (EIF_CHARACTER_8) 'b':
			case (EIF_CHARACTER_8) 'c':
			case (EIF_CHARACTER_8) 'd':
			case (EIF_CHARACTER_8) 'e':
			case (EIF_CHARACTER_8) 'f':
			case (EIF_CHARACTER_8) 'g':
			case (EIF_CHARACTER_8) 'h':
			case (EIF_CHARACTER_8) 'i':
			case (EIF_CHARACTER_8) 'j':
			case (EIF_CHARACTER_8) 'k':
			case (EIF_CHARACTER_8) 'l':
			case (EIF_CHARACTER_8) 'm':
			case (EIF_CHARACTER_8) 'n':
			case (EIF_CHARACTER_8) 'o':
			case (EIF_CHARACTER_8) 'p':
			case (EIF_CHARACTER_8) 'q':
			case (EIF_CHARACTER_8) 'r':
			case (EIF_CHARACTER_8) 's':
			case (EIF_CHARACTER_8) 't':
			case (EIF_CHARACTER_8) 'u':
			case (EIF_CHARACTER_8) 'v':
			case (EIF_CHARACTER_8) 'w':
			case (EIF_CHARACTER_8) 'x':
			case (EIF_CHARACTER_8) 'y':
			case (EIF_CHARACTER_8) 'z':
			case (EIF_CHARACTER_8) '{':
			case (EIF_CHARACTER_8) '|':
			case (EIF_CHARACTER_8) '}':
			case (EIF_CHARACTER_8) '~':
				RTHOOK(11);
				RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
				tr1 = RTLN(eif_new_type(232, 0x01).id);
				ui4_1 = ((EIF_INTEGER_32) 3L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4642, Dtype(tr1)))(tr1, ui4_1x);
				RTNHOOK(11,1);
				Result = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(12);
				uc1 = (EIF_CHARACTER_8) '\'';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
				RTHOOK(13);
				uc1 = loc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
				RTHOOK(14);
				uc1 = (EIF_CHARACTER_8) '\'';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
				break;
			default:
				RTHOOK(15);
				RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
				tr1 = RTLN(eif_new_type(232, 0x01).id);
				ui4_1 = ((EIF_INTEGER_32) 6L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4642, Dtype(tr1)))(tr1, ui4_1x);
				RTNHOOK(15,1);
				Result = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(16);
				uc1 = (EIF_CHARACTER_8) '\'';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
				RTHOOK(17);
				uc1 = (EIF_CHARACTER_8) '\\';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
				RTHOOK(18);
				if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
					RTHOOK(19);
					uc1 = (EIF_CHARACTER_8) '0';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
				} else {
					RTHOOK(20);
					if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
						RTHOOK(21);
						uc1 = (EIF_CHARACTER_8) '-';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
						RTHOOK(22);
						RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) -arg1;
						RTHOOK(23);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
					} else {
						RTHOOK(24);
						RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
						loc4 = (EIF_INTEGER_32) arg1;
						RTHOOK(25);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					}
					for (;;) {
						RTHOOK(26);
						if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) break;
						RTHOOK(27);
						switch ((EIF_INTEGER_32) (loc4 % ((EIF_INTEGER_32) 8L))) {
							case 0L:
								RTHOOK(28);
								uc1 = (EIF_CHARACTER_8) '0';
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
								break;
							case 1L:
								RTHOOK(29);
								uc1 = (EIF_CHARACTER_8) '1';
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
								break;
							case 2L:
								RTHOOK(30);
								uc1 = (EIF_CHARACTER_8) '2';
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
								break;
							case 3L:
								RTHOOK(31);
								uc1 = (EIF_CHARACTER_8) '3';
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
								break;
							case 4L:
								RTHOOK(32);
								uc1 = (EIF_CHARACTER_8) '4';
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
								break;
							case 5L:
								RTHOOK(33);
								uc1 = (EIF_CHARACTER_8) '5';
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
								break;
							case 6L:
								RTHOOK(34);
								uc1 = (EIF_CHARACTER_8) '6';
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
								break;
							case 7L:
								RTHOOK(35);
								uc1 = (EIF_CHARACTER_8) '7';
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
								break;
							default:
								RTEC(EN_WHEN);
						}
						RTHOOK(36);
						RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
						loc4 /= ((EIF_INTEGER_32) 8L);
					}
					RTHOOK(37);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4768, "count", Result));
					loc3 = (EIF_INTEGER_32) ti4_1;
					for (;;) {
						RTHOOK(38);
						if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
						RTHOOK(39);
						RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
						ui4_1 = loc2;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", Result))(Result, ui4_1x)).it_c1);
						loc1 = (EIF_CHARACTER_8) tc1;
						RTHOOK(40);
						ui4_1 = loc3;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", Result))(Result, ui4_1x)).it_c1);
						uc1 = tc1;
						ui4_1 = loc2;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", Result))(Result, uc1x, ui4_1x);
						RTHOOK(41);
						uc1 = loc1;
						ui4_1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", Result))(Result, uc1x, ui4_1x);
						RTHOOK(42);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						loc2++;
						RTHOOK(43);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3--;
					}
				}
				RTHOOK(44);
				uc1 = (EIF_CHARACTER_8) '\'';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", Result))(Result, uc1x);
				break;
		}
	} else {
		RTHOOK(45);
		RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
		tr1 = RTMS_EX_H("Unknown token",13,1896573550);
		Result = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(46);
		RTCT("character_token_name_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(47);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef uc1
#undef arg1
}

void EIF_Minit1594 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
