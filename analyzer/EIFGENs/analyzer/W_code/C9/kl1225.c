/*
 * Code for class KL_INTEGER_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1225_10568(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1225_10569(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1225_10570(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1225_10571(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1225_10572(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1225_10573(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1225_10574(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1225_10575(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1225_10576(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1225_10577(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1225_10578(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1225_10579(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1225_10580(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1225_10581(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1225_10582(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1225_10583(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1225_10584(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1225_10585(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1225_10586(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1225(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_INTEGER_ROUTINES}.to_character */
EIF_TYPED_VALUE F1225_10568 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "to_character";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1224, Current, 0, 1, 17179);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1224, Current, 17179);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_int_large_enough", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6549, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6479, "minimum_character_code", tr1))(tr1)).it_i4);
		RTTE((EIF_BOOLEAN) (arg1 >= ti4_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("an_int_small_enough", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6549, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6480, "maximum_character_code", tr1))(tr1)).it_i4);
		RTTE((EIF_BOOLEAN) (arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tc1 = (EIF_CHARACTER_8) arg1;
	Result = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("valid_character_code", EX_POST);
		ti4_1 = (EIF_INTEGER_32) (Result);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef up1
#undef arg1
}

/* {KL_INTEGER_ROUTINES}.to_hexadecimal */
EIF_TYPED_VALUE F1225_10569 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "to_hexadecimal";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1224, Current, 0, 2, 17180);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1224, Current, 17180);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_int_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4642, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ui4_1 = arg1;
	ur1 = RTCCL(Result);
	ub1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8061, dtype))(Current, ui4_1x, ur1x, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("hexadecimal_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_string", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5066, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		if (tb1) {
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ub1
#undef arg2
#undef arg1
}

/* {KL_INTEGER_ROUTINES}.to_decimal */
EIF_TYPED_VALUE F1225_10570 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "to_decimal";
	RTEX;
#define arg1 arg1x.it_i4
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
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1224, Current, 0, 1, 17181);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1224, Current, 17181);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4642, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ui4_1 = arg1;
	ur1 = RTCCL(Result);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8059, dtype))(Current, ui4_1x, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("decimal_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("is_string", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5066, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		if (tb1) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {KL_INTEGER_ROUTINES}.to_octal */
EIF_TYPED_VALUE F1225_10571 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "to_octal";
	RTEX;
#define arg1 arg1x.it_i4
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
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1224, Current, 0, 1, 17163);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1224, Current, 17163);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_int_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF80000E8, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(232, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4642, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ui4_1 = arg1;
	ur1 = RTCCL(Result);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8060, dtype))(Current, ui4_1x, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("octal_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_string", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7967, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5066, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		if (tb1) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {KL_INTEGER_ROUTINES}.to_integer */
EIF_TYPED_VALUE F1225_10572 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "to_integer";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1224, Current, 0, 1, 17164);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1224, Current, 17164);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == arg1)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {KL_INTEGER_ROUTINES}.to_integer_8 */
EIF_TYPED_VALUE F1225_10573 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "to_integer_8";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT8, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1224, Current, 0, 1, 17165);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1224, Current, 17165);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_int_large_enouh", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) -128L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("an_int_small_enouh", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 127L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x0C000000, 1,0); /* Result */
	ti1_1 = (EIF_INTEGER_8) arg1;
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT8; r.it_i1 = Result; return r; }
#undef arg1
}

/* {KL_INTEGER_ROUTINES}.append_decimal_integer */
void F1225_10574 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_decimal_integer";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 1224, Current, 2, 2, 17166);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1224, Current, 17166);
	RTCC(arg2, 1224, l_feature_name, 2, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		uc1 = (EIF_CHARACTER_8) '0';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			uc1 = (EIF_CHARACTER_8) '-';
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
			RTHOOK(6);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) -(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
			RTHOOK(7);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 / ((EIF_INTEGER_32) 10L));
			RTHOOK(8);
			switch ((EIF_INTEGER_32) (loc2 % ((EIF_INTEGER_32) 10L))) {
				case 0L:
					RTHOOK(9);
					if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(10);
						ui4_1 = loc1;
						ur1 = RTCCL(arg2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8059, dtype))(Current, ui4_1x, ur1x);
					}
					RTHOOK(11);
					uc1 = (EIF_CHARACTER_8) '1';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
					break;
				case 1L:
					RTHOOK(12);
					if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(13);
						ui4_1 = loc1;
						ur1 = RTCCL(arg2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8059, dtype))(Current, ui4_1x, ur1x);
					}
					RTHOOK(14);
					uc1 = (EIF_CHARACTER_8) '2';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
					break;
				case 2L:
					RTHOOK(15);
					if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(16);
						ui4_1 = loc1;
						ur1 = RTCCL(arg2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8059, dtype))(Current, ui4_1x, ur1x);
					}
					RTHOOK(17);
					uc1 = (EIF_CHARACTER_8) '3';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
					break;
				case 3L:
					RTHOOK(18);
					if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(19);
						ui4_1 = loc1;
						ur1 = RTCCL(arg2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8059, dtype))(Current, ui4_1x, ur1x);
					}
					RTHOOK(20);
					uc1 = (EIF_CHARACTER_8) '4';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
					break;
				case 4L:
					RTHOOK(21);
					if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(22);
						ui4_1 = loc1;
						ur1 = RTCCL(arg2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8059, dtype))(Current, ui4_1x, ur1x);
					}
					RTHOOK(23);
					uc1 = (EIF_CHARACTER_8) '5';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
					break;
				case 5L:
					RTHOOK(24);
					if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(25);
						ui4_1 = loc1;
						ur1 = RTCCL(arg2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8059, dtype))(Current, ui4_1x, ur1x);
					}
					RTHOOK(26);
					uc1 = (EIF_CHARACTER_8) '6';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
					break;
				case 6L:
					RTHOOK(27);
					if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(28);
						ui4_1 = loc1;
						ur1 = RTCCL(arg2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8059, dtype))(Current, ui4_1x, ur1x);
					}
					RTHOOK(29);
					uc1 = (EIF_CHARACTER_8) '7';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
					break;
				case 7L:
					RTHOOK(30);
					if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(31);
						ui4_1 = loc1;
						ur1 = RTCCL(arg2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8059, dtype))(Current, ui4_1x, ur1x);
					}
					RTHOOK(32);
					uc1 = (EIF_CHARACTER_8) '8';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
					break;
				case 8L:
					RTHOOK(33);
					if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(34);
						ui4_1 = loc1;
						ur1 = RTCCL(arg2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8059, dtype))(Current, ui4_1x, ur1x);
					}
					RTHOOK(35);
					uc1 = (EIF_CHARACTER_8) '9';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
					break;
				case 9L:
					RTHOOK(36);
					ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
					ur1 = RTCCL(arg2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8059, dtype))(Current, ui4_1x, ur1x);
					RTHOOK(37);
					uc1 = (EIF_CHARACTER_8) '0';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
					break;
				default:
					RTEC(EN_WHEN);
			}
		} else {
			RTHOOK(38);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) arg1;
			RTHOOK(39);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 / ((EIF_INTEGER_32) 10L));
			RTHOOK(40);
			if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(41);
				ui4_1 = loc1;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8059, dtype))(Current, ui4_1x, ur1x);
			}
			RTHOOK(42);
			switch ((EIF_INTEGER_32) (loc2 % ((EIF_INTEGER_32) 10L))) {
				case 0L:
					RTHOOK(43);
					uc1 = (EIF_CHARACTER_8) '0';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
					break;
				case 1L:
					RTHOOK(44);
					uc1 = (EIF_CHARACTER_8) '1';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
					break;
				case 2L:
					RTHOOK(45);
					uc1 = (EIF_CHARACTER_8) '2';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
					break;
				case 3L:
					RTHOOK(46);
					uc1 = (EIF_CHARACTER_8) '3';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
					break;
				case 4L:
					RTHOOK(47);
					uc1 = (EIF_CHARACTER_8) '4';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
					break;
				case 5L:
					RTHOOK(48);
					uc1 = (EIF_CHARACTER_8) '5';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
					break;
				case 6L:
					RTHOOK(49);
					uc1 = (EIF_CHARACTER_8) '6';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
					break;
				case 7L:
					RTHOOK(50);
					uc1 = (EIF_CHARACTER_8) '7';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
					break;
				case 8L:
					RTHOOK(51);
					uc1 = (EIF_CHARACTER_8) '8';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
					break;
				case 9L:
					RTHOOK(52);
					uc1 = (EIF_CHARACTER_8) '9';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
					break;
				default:
					RTEC(EN_WHEN);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(53);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef ur1
#undef ui4_1
#undef uc1
#undef arg2
#undef arg1
}

/* {KL_INTEGER_ROUTINES}.append_octal_integer */
void F1225_10575 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_octal_integer";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1224, Current, 1, 2, 17167);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1224, Current, 17167);
	RTCC(arg2, 1224, l_feature_name, 2, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_int_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		uc1 = (EIF_CHARACTER_8) '0';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
	} else {
		RTHOOK(5);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 / ((EIF_INTEGER_32) 8L));
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(7);
			ui4_1 = loc1;
			ur1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8060, dtype))(Current, ui4_1x, ur1x);
		}
		RTHOOK(8);
		switch ((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 8L))) {
			case 0L:
				RTHOOK(9);
				uc1 = (EIF_CHARACTER_8) '0';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				break;
			case 1L:
				RTHOOK(10);
				uc1 = (EIF_CHARACTER_8) '1';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				break;
			case 2L:
				RTHOOK(11);
				uc1 = (EIF_CHARACTER_8) '2';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				break;
			case 3L:
				RTHOOK(12);
				uc1 = (EIF_CHARACTER_8) '3';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				break;
			case 4L:
				RTHOOK(13);
				uc1 = (EIF_CHARACTER_8) '4';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				break;
			case 5L:
				RTHOOK(14);
				uc1 = (EIF_CHARACTER_8) '5';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				break;
			case 6L:
				RTHOOK(15);
				uc1 = (EIF_CHARACTER_8) '6';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				break;
			case 7L:
				RTHOOK(16);
				uc1 = (EIF_CHARACTER_8) '7';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ur1
#undef ui4_1
#undef uc1
#undef arg2
#undef arg1
}

/* {KL_INTEGER_ROUTINES}.append_hexadecimal_integer */
void F1225_10576 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "append_hexadecimal_integer";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
#define arg3 arg3x.it_b
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_b = * (EIF_BOOLEAN *) arg3x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_BOOL,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1224, Current, 1, 3, 17168);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1224, Current, 17168);
	RTCC(arg2, 1224, l_feature_name, 2, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_int_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		uc1 = (EIF_CHARACTER_8) '0';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
	} else {
		RTHOOK(5);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 / ((EIF_INTEGER_32) 16L));
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(7);
			ui4_1 = loc1;
			ur1 = RTCCL(arg2);
			ub1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8061, dtype))(Current, ui4_1x, ur1x, ub1x);
		}
		RTHOOK(8);
		switch ((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 16L))) {
			case 0L:
				RTHOOK(9);
				uc1 = (EIF_CHARACTER_8) '0';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				break;
			case 1L:
				RTHOOK(10);
				uc1 = (EIF_CHARACTER_8) '1';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				break;
			case 2L:
				RTHOOK(11);
				uc1 = (EIF_CHARACTER_8) '2';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				break;
			case 3L:
				RTHOOK(12);
				uc1 = (EIF_CHARACTER_8) '3';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				break;
			case 4L:
				RTHOOK(13);
				uc1 = (EIF_CHARACTER_8) '4';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				break;
			case 5L:
				RTHOOK(14);
				uc1 = (EIF_CHARACTER_8) '5';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				break;
			case 6L:
				RTHOOK(15);
				uc1 = (EIF_CHARACTER_8) '6';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				break;
			case 7L:
				RTHOOK(16);
				uc1 = (EIF_CHARACTER_8) '7';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				break;
			case 8L:
				RTHOOK(17);
				uc1 = (EIF_CHARACTER_8) '8';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				break;
			case 9L:
				RTHOOK(18);
				uc1 = (EIF_CHARACTER_8) '9';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				break;
			case 10L:
				RTHOOK(19);
				if (arg3) {
					RTHOOK(20);
					uc1 = (EIF_CHARACTER_8) 'A';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				} else {
					RTHOOK(21);
					uc1 = (EIF_CHARACTER_8) 'a';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				}
				break;
			case 11L:
				RTHOOK(22);
				if (arg3) {
					RTHOOK(23);
					uc1 = (EIF_CHARACTER_8) 'B';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				} else {
					RTHOOK(24);
					uc1 = (EIF_CHARACTER_8) 'b';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				}
				break;
			case 12L:
				RTHOOK(25);
				if (arg3) {
					RTHOOK(26);
					uc1 = (EIF_CHARACTER_8) 'C';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				} else {
					RTHOOK(27);
					uc1 = (EIF_CHARACTER_8) 'c';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				}
				break;
			case 13L:
				RTHOOK(28);
				if (arg3) {
					RTHOOK(29);
					uc1 = (EIF_CHARACTER_8) 'D';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				} else {
					RTHOOK(30);
					uc1 = (EIF_CHARACTER_8) 'd';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				}
				break;
			case 14L:
				RTHOOK(31);
				if (arg3) {
					RTHOOK(32);
					uc1 = (EIF_CHARACTER_8) 'E';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				} else {
					RTHOOK(33);
					uc1 = (EIF_CHARACTER_8) 'e';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				}
				break;
			case 15L:
				RTHOOK(34);
				if (arg3) {
					RTHOOK(35);
					uc1 = (EIF_CHARACTER_8) 'F';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				} else {
					RTHOOK(36);
					uc1 = (EIF_CHARACTER_8) 'f';
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4825, "append_character", arg2))(arg2, uc1x);
				}
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(37);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef ur1
#undef ui4_1
#undef ub1
#undef uc1
#undef arg3
#undef arg2
#undef arg1
}

/* {KL_INTEGER_ROUTINES}.div */
EIF_TYPED_VALUE F1225_10577 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "div";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1224, Current, 0, 2, 17169);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1224, Current, 17169);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("divisible", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("overflow", EX_PRE);
		tb1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6549, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6481, "minimum_integer", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
			tb1 = (EIF_BOOLEAN)(arg2 != ((EIF_INTEGER_32) -1L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 / arg2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definition", EX_POST);
		ui4_1 = arg1;
		ui4_2 = arg2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8063, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) ((EIF_INTEGER_32) (Result * arg2) + ti4_1) == arg1)) {
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {KL_INTEGER_ROUTINES}.mod */
EIF_TYPED_VALUE F1225_10578 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "mod";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1224, Current, 0, 2, 17170);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1224, Current, 17170);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("divisible", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 % arg2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition1", EX_POST);
		tb1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6549, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6481, "minimum_integer", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN)(arg2 != ti4_1)) {
			ti4_1 = eif_abs_int32 (Result);
			ti4_2 = eif_abs_int32 (arg2);
			tb1 = (EIF_BOOLEAN) (ti4_1 < ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("definition2", EX_POST);
		tb1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6549, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6481, "minimum_integer", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN)(arg2 == ti4_1)) {
			ti4_1 = eif_abs_int32 (Result);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6549, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,2);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6482, "maximum_integer", tr1))(tr1)).it_i4);
			tb1 = (EIF_BOOLEAN) (ti4_1 <= ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("iso_c99", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != ((EIF_INTEGER_32) 0L))) {
			tr1 = RTLN(eif_new_type(218, 0x00).id);
			*(EIF_INTEGER_32 *)tr1 = Result;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4423, "sign", tr1))(tr1)).it_i4);
			tr1 = RTLN(eif_new_type(218, 0x00).id);
			*(EIF_INTEGER_32 *)tr1 = arg1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4423, "sign", tr1))(tr1)).it_i4);
			tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
		if (tb1) {
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef arg2
#undef arg1
}

/* {KL_INTEGER_ROUTINES}.power */
EIF_TYPED_VALUE F1225_10579 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "power";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
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
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1224, Current, 0, 2, 17171);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1224, Current, 17171);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_n", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(5);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) arg1;
		} else {
			RTHOOK(6);
			if ((EIF_BOOLEAN)(arg1 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(7);
				ui4_1 = arg2;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8071, dtype))(Current, ui4_1x)).it_b);
				if (tb1) {
					RTHOOK(8);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					ui4_1 = arg1;
					ui4_2 = (EIF_INTEGER_32) (arg2 / ((EIF_INTEGER_32) 2L));
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8064, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
					Result = (EIF_INTEGER_32) ti4_1;
					RTHOOK(9);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result *= Result;
				} else {
					RTHOOK(10);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					ui4_1 = arg1;
					ui4_2 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8064, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
					Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 * arg1);
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("zero_power_n", EX_POST);
		if ((!((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(arg2 != ((EIF_INTEGER_32) 0L)))) || ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("x_power_0", EX_POST);
		if ((!((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 1L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("recursive_definition", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = arg1;
			ui4_2 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8064, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
			tb1 = (EIF_BOOLEAN)(Result == (EIF_INTEGER_32) (arg1 * ti4_1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {KL_INTEGER_ROUTINES}.bit_and */
EIF_TYPED_VALUE F1225_10580 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "bit_and";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1224, Current, 0, 2, 17172);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1224, Current, 17172);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ui4_1 = arg2;
	ti4_1 = eif_bit_and(arg1,ui4_1);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef arg2
#undef arg1
}

/* {KL_INTEGER_ROUTINES}.bit_or */
EIF_TYPED_VALUE F1225_10581 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "bit_or";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1224, Current, 0, 2, 17173);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1224, Current, 17173);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ui4_1 = arg2;
	ti4_1 = eif_bit_or(arg1,ui4_1);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef arg2
#undef arg1
}

/* {KL_INTEGER_ROUTINES}.bit_xor */
EIF_TYPED_VALUE F1225_10582 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "bit_xor";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1224, Current, 0, 2, 17174);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1224, Current, 17174);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ui4_1 = arg2;
	ti4_1 = eif_bit_xor(arg1,ui4_1);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef arg2
#undef arg1
}

/* {KL_INTEGER_ROUTINES}.bit_not */
EIF_TYPED_VALUE F1225_10583 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "bit_not";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1224, Current, 0, 1, 17175);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1224, Current, 17175);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = eif_bit_not(arg1);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {KL_INTEGER_ROUTINES}.bit_shift_left */
EIF_TYPED_VALUE F1225_10584 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "bit_shift_left";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1224, Current, 0, 2, 17176);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1224, Current, 17176);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("thirty_two_bit_shift", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= arg2) && (EIF_BOOLEAN) (arg2 < ((EIF_INTEGER_32) 32L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ui4_1 = arg2;
	ti4_1 = eif_bit_shift_left(arg1,ui4_1);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef arg2
#undef arg1
}

/* {KL_INTEGER_ROUTINES}.bit_shift_right */
EIF_TYPED_VALUE F1225_10585 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "bit_shift_right";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1224, Current, 0, 2, 17177);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1224, Current, 17177);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("thirty_two_bit_shift", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= arg2) && (EIF_BOOLEAN) (arg2 < ((EIF_INTEGER_32) 32L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ui4_1 = arg2;
	ti4_1 = eif_bit_shift_right(arg1,ui4_1);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef arg2
#undef arg1
}

/* {KL_INTEGER_ROUTINES}.is_even */
EIF_TYPED_VALUE F1225_10586 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_even";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1224, Current, 0, 1, 17178);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1224, Current, 17178);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L)))) {
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
#undef arg1
}

void EIF_Minit1225 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
