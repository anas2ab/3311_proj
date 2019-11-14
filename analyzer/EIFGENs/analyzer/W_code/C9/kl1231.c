/*
 * Code for class KL_STDIN_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1231_10669(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1231_10670(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1231_10671(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1231_10672(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1231_10673(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1231_10674(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1231_10675(EIF_REFERENCE);
extern void F1231_10676(EIF_REFERENCE);
extern void F1231_10677(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1231_10678(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1231_10679(EIF_REFERENCE);
extern void F1231_10680(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1231_10681(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1231_10682(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1231_10683(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1231_10684(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1231_10685(EIF_REFERENCE);
extern void EIF_Minit1231(void);

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

/* {KL_STDIN_FILE}.make */
void F1231_10669 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 1230, Current, 0, 0, 17294);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1230, Current, 17294);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 8149, 0xF80000E8, 0); /* last_string */
	tr1 = RTLNSMART(RTWCT(8149, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4643, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(8149, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 8148, 0x04000000, 1); /* end_of_file */
	*(EIF_BOOLEAN *)(Current + RTWA(8148, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("name_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6943, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = RTMS_EX_H("stdin",5,1953620846);
		ur1 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTHOOK(5);
		RTCT("not_end_of_file", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8148, dtype));
		if ((EIF_BOOLEAN) !tb1) {
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
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
}

/* {KL_STDIN_FILE}.name */
RTOID (F1231_10670)


EIF_TYPED_VALUE F1231_10670 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1231_10670,17296,RTMS_EX_H("stdin",5,1953620846));
}

/* {KL_STDIN_FILE}.last_character */
EIF_TYPED_VALUE F1231_10671 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = *(EIF_CHARACTER_8 *)(Current + RTWA(8150,Dtype(Current)));
	return r;
}


/* {KL_STDIN_FILE}.last_string */
EIF_TYPED_VALUE F1231_10672 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(8149,Dtype(Current)));
	return r;
}


/* {KL_STDIN_FILE}.eol */
RTOID (F1231_10673)


EIF_TYPED_VALUE F1231_10673 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1231_10673,17299,RTMS_EX_H("\012",1,10));
}

/* {KL_STDIN_FILE}.is_open_read */
EIF_TYPED_VALUE F1231_10674 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_TRUE;
	return r;
}

/* {KL_STDIN_FILE}.end_of_file */
EIF_TYPED_VALUE F1231_10675 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(8148,Dtype(Current)));
	return r;
}


/* {KL_STDIN_FILE}.read_character */
void F1231_10676 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_character";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1230, Current, 1, 0, 17301);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1230, Current, 17301);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6939, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8148, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0xF8000671, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8145, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(5);
		RTDBGAA(Current, dtype, 8150, 0x08000000, 1); /* last_character */
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6612, "item", loc1))(loc1)).it_c1);
		*(EIF_CHARACTER_8 *)(Current + RTWA(8150, dtype)) = (EIF_CHARACTER_8) tc1;
		RTHOOK(6);
		RTDBGAA(Current, dtype, 8145, 0xF8000671, 0); /* character_buffer */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6616, "right", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(8145, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8147, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3550, "end_of_file", tr1))(tr1)).it_b);
		if (tb1) {
			RTHOOK(8);
			RTDBGAA(Current, dtype, 8148, 0x04000000, 1); /* end_of_file */
			*(EIF_BOOLEAN *)(Current + RTWA(8148, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8147, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3482, "read_character", tr1))(tr1);
			RTHOOK(10);
			RTDBGAA(Current, dtype, 8150, 0x08000000, 1); /* last_character */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8147, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			tc1 = *(EIF_CHARACTER_8 *)(tr1 + RTVA(3428, "last_character", tr1));
			*(EIF_CHARACTER_8 *)(Current + RTWA(8150, dtype)) = (EIF_CHARACTER_8) tc1;
			RTHOOK(11);
			RTDBGAA(Current, dtype, 8148, 0x04000000, 1); /* end_of_file */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8147, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3550, "end_of_file", tr1))(tr1)).it_b);
			*(EIF_BOOLEAN *)(Current + RTWA(8148, dtype)) = (EIF_BOOLEAN) tb1;
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
#undef up1
}

/* {KL_STDIN_FILE}.unread_character */
void F1231_10677 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "unread_character";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1230, Current, 2, 1, 17302);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1230, Current, 17302);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6939, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("an_item_valid", EX_PRE);
		uc1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6942, dtype))(Current, uc1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0xF8000671, 0, 0); /* loc1 */
	tr1 = RTLNSMART(RTWCT(8145, dtype, Dftype(Current)).id);
	uc1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6614, Dtype(tr1)))(tr1, uc1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(2, 0xF8000671, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8145, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(6);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6617, "put_right", loc1))(loc1, ur1x);
	}
	RTHOOK(7);
	RTDBGAA(Current, dtype, 8145, 0xF8000671, 0); /* character_buffer */
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(8145, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 8150, 0x08000000, 1); /* last_character */
	*(EIF_CHARACTER_8 *)(Current + RTWA(8150, dtype)) = (EIF_CHARACTER_8) arg1;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 8148, 0x04000000, 1); /* end_of_file */
	*(EIF_BOOLEAN *)(Current + RTWA(8148, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("not_end_of_input", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8148, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("last_item_set", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(8150, dtype));
		if ((EIF_BOOLEAN)(tc1 == arg1)) {
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
#undef uc1
#undef arg1
}

/* {KL_STDIN_FILE}.read_string */
void F1231_10678 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "read_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
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
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1230, Current, 2, 1, 17303);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1230, Current, 17303);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6939, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8148, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("nb_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8149, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4682, "capacity", tr1))(tr1)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 < arg1)) {
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8149, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4802, "resize", tr1))(tr1, ui4_1x);
	}
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8145, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8147, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3550, "end_of_file", tr1))(tr1)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8149, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			ui4_1 = arg1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4769, "set_count", tr1))(tr1, ui4_1x);
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8147, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			ui4_1 = arg1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3495, "read_stream", tr1))(tr1, ui4_1x);
			RTHOOK(10);
			RTDBGAL(2, 0xF80000E8, 0, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8147, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3429, "last_string", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			loc2 = (EIF_REFERENCE) RTCCL(tr2);
			RTHOOK(11);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", loc2))(loc2)).it_b);
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(12);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8149, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(12,1);
				ur1 = RTCCL(loc2);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(4768, "count", loc2));
				ui4_2 = ti4_1;
				ui4_3 = ((EIF_INTEGER_32) 1L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4808, "subcopy", tr1))(tr1, ur1x, ui4_1x, ui4_2x, ui4_3x);
				RTHOOK(13);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(4768, "count", loc2));
				loc1 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(14);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8149, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(14,1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4771, "reset_hash_codes", tr1))(tr1);
				RTHOOK(15);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8149, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(15,1);
				ui4_1 = loc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4769, "set_count", tr1))(tr1, ui4_1x);
			}
		} else {
			RTHOOK(16);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8149, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(16,1);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4769, "set_count", tr1))(tr1, ui4_1x);
		}
	} else {
		RTHOOK(17);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8149, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(17,1);
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4769, "set_count", tr1))(tr1, ui4_1x);
		RTHOOK(18);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8149, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8133, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(19);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8149, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(19,1);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4769, "set_count", tr1))(tr1, ui4_1x);
	}
	RTHOOK(20);
	RTDBGAA(Current, dtype, 8148, 0x04000000, 1); /* end_of_file */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8149, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(20,1);
	ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
	*(EIF_BOOLEAN *)(Current + RTWA(8148, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("last_string_count_small_enough", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(8148, dtype));
		if ((EIF_BOOLEAN) !tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(8149, dtype));
			ti4_1 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4768, "count", tr1));
			tb1 = (EIF_BOOLEAN) (ti4_1 <= arg1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("character_read", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(8148, dtype));
		if ((EIF_BOOLEAN) !tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + RTWA(8149, dtype));
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
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg1
}

/* {KL_STDIN_FILE}.read_line */
void F1231_10679 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_line";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
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
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_CHAR8, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLU(SK_BOOL, &loc4);
	
	RTEAA(l_feature_name, 1230, Current, 4, 0, 17304);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1230, Current, 17304);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6939, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8148, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7772, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8149, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8106, "wipe_out", tr1))(tr1, ur1x);
	RTHOOK(4);
	RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	for (;;) {
		RTHOOK(5);
		if (loc1) break;
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6935, dtype))(Current);
		RTHOOK(7);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8148, dtype));
		if (tb1) {
			RTHOOK(8);
			RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
			loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(9);
			RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(10);
			RTDBGAL(2, 0x08000000, 1, 0); /* loc2 */
			tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(8150, dtype));
			loc2 = (EIF_CHARACTER_8) tc1;
			RTHOOK(11);
			switch (loc2) {
				case (EIF_CHARACTER_8) '\012':
					RTHOOK(12);
					RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
					loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				case (EIF_CHARACTER_8) '\015':
					RTHOOK(13);
					RTDBGAL(4, 0x04000000, 1, 0); /* loc4 */
					loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					break;
				default:
					RTHOOK(14);
					if (loc4) {
						RTHOOK(15);
						uc1 = loc2;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6936, dtype))(Current, uc1x);
						RTHOOK(16);
						RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
						loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					} else {
						RTHOOK(17);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8149, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(17,1);
						uc1 = loc2;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", tr1))(tr1, uc1x);
					}
					break;
			}
		}
	}
	RTHOOK(18);
	RTDBGAA(Current, dtype, 8148, 0x04000000, 1); /* end_of_file */
	*(EIF_BOOLEAN *)(Current + RTWA(8148, dtype)) = (EIF_BOOLEAN) loc3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("last_string_not_void", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8148, dtype));
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(8149, dtype));
		if ((!((EIF_BOOLEAN) !tb1) || ((EIF_BOOLEAN)(tr1 != NULL)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef uc1
}

/* {KL_STDIN_FILE}.read_new_line */
void F1231_10680 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1230, Current, 0, 0, 17305);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1230, Current, 17305);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6939, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8148, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7772, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8149, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8106, "wipe_out", tr1))(tr1, ur1x);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6935, dtype))(Current);
	RTHOOK(5);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8148, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(6);
		tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(8150, dtype));
		switch (tc1) {
			case (EIF_CHARACTER_8) '\012':
				RTHOOK(7);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8149, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(7,1);
				uc1 = (EIF_CHARACTER_8) '\012';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", tr1))(tr1, uc1x);
				break;
			case (EIF_CHARACTER_8) '\015':
				RTHOOK(8);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8149, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(8,1);
				uc1 = (EIF_CHARACTER_8) '\015';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", tr1))(tr1, uc1x);
				RTHOOK(9);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6935, dtype))(Current);
				RTHOOK(10);
				tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8148, dtype));
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(11);
					tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(8150, dtype));
					if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\012')) {
						RTHOOK(12);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8149, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(12,1);
						uc1 = (EIF_CHARACTER_8) '\012';
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", tr1))(tr1, uc1x);
					} else {
						RTHOOK(13);
						tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(8150, dtype));
						uc1 = tc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6936, dtype))(Current, uc1x);
					}
				}
				break;
			default:
				RTHOOK(14);
				tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(8150, dtype));
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6936, dtype))(Current, uc1x);
				break;
		}
	}
	RTHOOK(15);
	RTDBGAA(Current, dtype, 8148, 0x04000000, 1); /* end_of_file */
	*(EIF_BOOLEAN *)(Current + RTWA(8148, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("not_end_of_input", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8148, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("last_string_not_void", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + RTWA(8149, dtype));
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

/* {KL_STDIN_FILE}.read_to_string */
EIF_TYPED_VALUE F1231_10681 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "read_to_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
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
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
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
	RTLR(2,loc7);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLR(6,ur2);
	RTLR(7,loc5);
	RTLR(8,loc6);
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
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 1230, Current, 7, 3, 17306);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1230, Current, 17306);
	RTCC(arg1, 1230, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6939, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8148, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_position", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2677, "valid_index", arg1))(arg1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("nb_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("nb_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4768, "count", arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - arg2) + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) arg2;
	RTHOOK(8);
	RTDBGAL(7, 0xF8000671, 0, 0); /* loc7 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8145, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		RTHOOK(9);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == arg3) || (EIF_BOOLEAN)(loc7 == NULL))) break;
		RTHOOK(10);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
		RTHOOK(11);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6612, "item", loc7))(loc7)).it_c1);
		uc1 = tc1;
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", arg1))(arg1, uc1x, ui4_1x);
		RTHOOK(12);
		RTDBGAL(7, 0xF8000671, 0, 0); /* loc7 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6616, "right", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc7 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(13);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(14);
	RTDBGAA(Current, dtype, 8145, 0xF8000671, 0); /* character_buffer */
	tr1 = RTCCL(loc7);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(8145, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(15);
	if ((EIF_BOOLEAN) (loc1 < arg3)) {
		RTHOOK(16);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8147, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(16,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3550, "end_of_file", tr1))(tr1)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(17);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(17,1);
			ur1 = RTCCL(arg1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8146, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur2 = RTCCL(tr2);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5066, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
			if (tb1) {
				RTHOOK(18);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8147, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(18,1);
				ui4_1 = (EIF_INTEGER_32) (arg3 - loc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3495, "read_stream", tr1))(tr1, ui4_1x);
				RTHOOK(19);
				RTDBGAL(5, 0xF80000E8, 0, 0); /* loc5 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8147, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(19,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3429, "last_string", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				loc5 = (EIF_REFERENCE) RTCCL(tr2);
				RTHOOK(20);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", loc5))(loc5)).it_b);
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(21);
					ur1 = RTCCL(loc5);
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ti4_1 = *(EIF_INTEGER_32 *)(loc5 + RTVA(4768, "count", loc5));
					ui4_2 = ti4_1;
					ui4_3 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4808, "subcopy", arg1))(arg1, ur1x, ui4_1x, ui4_2x, ui4_3x);
					RTHOOK(22);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4771, "reset_hash_codes", arg1))(arg1);
				}
				RTHOOK(23);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				ti4_1 = *(EIF_INTEGER_32 *)(loc5 + RTVA(4768, "count", loc5));
				Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ti4_1);
			} else {
				RTHOOK(24);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 - loc1);
				RTHOOK(25);
				RTDBGAL(6, 0xF80000E8, 0, 0); /* loc6 */
				tr1 = RTLN(eif_new_type(232, 0x01).id);
				ui4_1 = loc4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4642, Dtype(tr1)))(tr1, ui4_1x);
				RTNHOOK(25,1);
				loc6 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(26);
				ui4_1 = loc4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4769, "set_count", loc6))(loc6, ui4_1x);
				RTHOOK(27);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8147, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(27,1);
				ui4_1 = loc4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3495, "read_stream", tr1))(tr1, ui4_1x);
				RTHOOK(28);
				RTDBGAL(5, 0xF80000E8, 0, 0); /* loc5 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8147, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(28,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3429, "last_string", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				loc5 = (EIF_REFERENCE) RTCCL(tr2);
				RTHOOK(29);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", loc5))(loc5)).it_b);
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(30);
					ur1 = RTCCL(loc5);
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ti4_1 = *(EIF_INTEGER_32 *)(loc5 + RTVA(4768, "count", loc5));
					ui4_2 = ti4_1;
					ui4_3 = ((EIF_INTEGER_32) 1L);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4808, "subcopy", loc6))(loc6, ur1x, ui4_1x, ui4_2x, ui4_3x);
					RTHOOK(31);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4771, "reset_hash_codes", loc6))(loc6);
				}
				RTHOOK(32);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				ti4_1 = *(EIF_INTEGER_32 *)(loc5 + RTVA(4768, "count", loc5));
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(33);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					RTHOOK(34);
					if ((EIF_BOOLEAN) (loc3 > loc4)) break;
					RTHOOK(35);
					ui4_1 = loc3;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc6))(loc6, ui4_1x)).it_c1);
					uc1 = tc1;
					ui4_1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", arg1))(arg1, uc1x, ui4_1x);
					RTHOOK(36);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2++;
					RTHOOK(37);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3++;
				}
				RTHOOK(38);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + loc4);
			}
		} else {
			RTHOOK(39);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) loc1;
		}
		RTHOOK(40);
		RTDBGAA(Current, dtype, 8148, 0x04000000, 1); /* end_of_file */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8147, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(40,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3550, "end_of_file", tr1))(tr1)).it_b);
		*(EIF_BOOLEAN *)(Current + RTWA(8148, dtype)) = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(41);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) loc1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(42);
		RTCT("nb_char_read_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(43);
		RTCT("nb_char_read_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(44);
		RTCT("character_read", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8148, dtype));
		if ((!((EIF_BOOLEAN) !tb1) || ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(45);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uc1
#undef arg3
#undef arg2
#undef arg1
}

/* {KL_STDIN_FILE}.read_to_buffer */
EIF_TYPED_VALUE F1231_10682 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "read_to_buffer";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1230, Current, 1, 3, 17307);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1230, Current, 17307);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1644,197,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1230, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6939, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_input", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8148, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_buffer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("pos_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("nb_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("enough_space", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6646, "count", arg1))(arg1)).it_i4);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + arg3) - ((EIF_INTEGER_32) 1L)) <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(1234, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(8);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ur1 = RTCCL(Current);
		ui4_1 = arg2;
		ui4_2 = arg3;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6648, "fill_from_stream", loc1))(loc1, ur1x, ui4_1x, ui4_2x)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(9);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ur1 = RTCCL(arg1);
		ui4_1 = arg2;
		ui4_2 = arg3;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6937, 1228))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("nb_item_read_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("nb_item_read_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("not_end_of_input", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(8148, dtype));
		if ((!((EIF_BOOLEAN) !tb1) || ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {KL_STDIN_FILE}.character_buffer */
EIF_TYPED_VALUE F1231_10683 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(8145,Dtype(Current)));
	return r;
}


/* {KL_STDIN_FILE}.dummy_string */
RTOID (F1231_10684)


EIF_TYPED_VALUE F1231_10684 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F1231_10684,17310,RTMS_EX_H("",0,0));
}

/* {KL_STDIN_FILE}.console */
RTOID (F1231_10685)
EIF_TYPED_VALUE F1231_10685 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "console";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1231_10685);
	dtype = Dtype(Current);

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1230, Current, 0, 0, 17310);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1230, Current, 17310);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80000AF, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(120, "input", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("console_not_void", EX_POST);
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
#undef up1
#undef up2
#undef Result
}

void EIF_Minit1231 (void)
{
	GTCX
	RTOTS (10670,F1231_10670)
	RTOTS (10673,F1231_10673)
	RTOTS (10684,F1231_10684)
	RTOTS (10685,F1231_10685)
}


#ifdef __cplusplus
}
#endif
