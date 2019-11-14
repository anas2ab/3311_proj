/*
 * Code for class HASH_TABLE [INTEGER_32, NATURAL_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1626_3924(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1626_3925(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1626_3926(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_3927(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3928(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_3929(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_3930(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_3931(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_3932(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_3933(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_3934(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3935(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3936(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3937(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3938(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3939(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_3940(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_3941(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3942(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3943(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_3944(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3945(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3946(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_3947(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_3948(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_3949(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3950(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3951(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3952(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3953(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3954(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3955(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3956(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3957(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3958(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3959(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3960(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_3961(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_3962(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1626_3963(EIF_REFERENCE);
extern void F1626_3964(EIF_REFERENCE);
extern void F1626_3965(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1626_3966(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_3967(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3968(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_3969(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1626_3970(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1626_3971(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1626_3972(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1626_3973(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1626_3974(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1626_3975(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1626_3976(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1626_3977(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1626_3978(EIF_REFERENCE);
extern void F1626_3979(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3980(EIF_REFERENCE);
extern void F1626_3981(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_3982(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1626_3983(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3984(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3985(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3986(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3987(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3988(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3989(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3990(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3991(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3992(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3993(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3994(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3995(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3996(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3997(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3998(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_3999(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_4000(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_4001(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_4002(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_4003(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_4004(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_4005(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1626_4006(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_4007(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1626_4008(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1626_4009(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1626_4010(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_4011(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_4012(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_4013(EIF_REFERENCE);
extern void F1626_4014(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1626_4015(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_4016(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_4017(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_4018(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1626_4019(EIF_REFERENCE);
extern void F1626_4020(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_4021(EIF_REFERENCE);
extern void F1626_4022(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_4023(EIF_REFERENCE);
extern void F1626_4024(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_4025(EIF_REFERENCE);
extern void F1626_4026(EIF_REFERENCE);
extern void F1626_4027(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_4028(EIF_REFERENCE);
extern void F1626_4029(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_4030(EIF_REFERENCE);
extern void F1626_4031(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_4032(EIF_REFERENCE);
extern void F1626_4033(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1626_4034(EIF_REFERENCE);
extern void F1626_4035(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1626_7179(EIF_REFERENCE, int);
extern void EIF_Minit1626(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HASH_TABLE}.make */
void F1626_3924 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 1625, Current, 4, 1, 16504);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16504);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF80000B3, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(179, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3059, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_max_int32 (arg1,ui4_1);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + (EIF_INTEGER_32) (loc4 / ((EIF_INTEGER_32) 2L))) + ((EIF_INTEGER_32) 1L));
	RTHOOK(5);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ui4_1 = loc4;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3747, "higher_prime", loc1))(loc1, ui4_1x)).it_i4);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 2982, 0x10000000, 1); /* capacity */
	*(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype)) = (EIF_INTEGER_32) loc4;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 3010, 0xF8000253, 0); /* content */
	ui4_1 = (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	if (ui4_1< 0) {
		eraise ("non_negative_argument", EN_RT_CHECK);
	}
	tr1 = RTLNSP2(RTWCT(3010, dtype, Dftype(Current)).id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3010, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 3011, 0xF80001F3, 0); /* keys */
	ui4_2 = (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	if (ui4_2< 0) {
		eraise ("non_negative_argument", EN_RT_CHECK);
	}
	tr1 = RTLNSP2(RTWCT(3011, dtype, Dftype(Current)).id,0,ui4_2,sizeof(EIF_NATURAL_32), EIF_TRUE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3011, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 3013, 0xF800022F, 0); /* deleted_marks */
	ub1 = (EIF_BOOLEAN) 0;
	ui4_3 = (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	if (ui4_3< 0) {
		eraise ("non_negative_argument", EN_RT_CHECK);
	}
	tr1 = RTLNSP2(RTWCT(3013, dtype, Dftype(Current)).id,0,ui4_3,sizeof(EIF_BOOLEAN), EIF_TRUE);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2679, Dtype(tr1)))(tr1, ub1x, ui4_3x);
	RTNHOOK(9,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3013, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 3012, 0xF8000253, 0); /* indexes_map */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
	ui4_3 = ti4_1;
	ui4_4 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
	if (ui4_4< 0) {
		eraise ("non_negative_argument", EN_RT_CHECK);
	}
	tr1 = RTLNSP2(RTWCT(3012, dtype, Dftype(Current)).id,0,ui4_4,sizeof(EIF_INTEGER_32), EIF_TRUE);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2679, Dtype(tr1)))(tr1, ui4_3x, ui4_4x);
	RTNHOOK(10,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3012, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(11);
	RTDBGAA(Current, dtype, 3016, 0x10000000, 1); /* iteration_position */
	*(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(12);
	RTDBGAA(Current, dtype, 3060, 0x10000000, 1); /* count */
	*(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(13);
	RTDBGAA(Current, dtype, 3020, 0x10000000, 1); /* deleted_item_position */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(3020, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(14);
	RTDBGAA(Current, dtype, 3019, 0x10000000, 1); /* control */
	*(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(15);
	RTDBGAA(Current, dtype, 2973, 0x10000000, 0); /* found_item */
	*(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype)) = (EIF_INTEGER_32) loc2;
	RTHOOK(16);
	RTDBGAA(Current, dtype, 3015, 0x04000000, 1); /* has_default */
	*(EIF_BOOLEAN *)(Current + RTWA(3015, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(17);
	RTDBGAA(Current, dtype, 3014, 0x10000000, 1); /* item_position */
	*(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(18);
	RTDBGAA(Current, dtype, 3024, 0x10000000, 1); /* ht_lowest_deleted_position */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3021, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(3024, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(19);
	RTDBGAA(Current, dtype, 3025, 0x10000000, 0); /* ht_deleted_item */
	*(EIF_INTEGER_32 *)(Current + RTWA(3025, dtype)) = (EIF_INTEGER_32) loc2;
	RTHOOK(20);
	RTDBGAA(Current, dtype, 3026, 0x38000000, 0); /* ht_deleted_key */
	*(EIF_NATURAL_32 *)(Current + RTWA(3026, dtype)) = (EIF_NATURAL_32) loc3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("breathing_space", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
		if ((EIF_BOOLEAN) (arg1 < ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("more_than_minimum", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3059, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("no_status", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3057, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ub1
#undef arg1
}

/* {HASH_TABLE}.make_equal */
void F1626_3925 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_equal";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16505);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16505);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2970, dtype))(Current, ui4_1x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2331, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("breathing_space", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
		if ((EIF_BOOLEAN) (arg1 < ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("more_than_minimum", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3059, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("no_status", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3057, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("compare_objects", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2329, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {HASH_TABLE}.accommodate */
void F1626_3926 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "accommodate";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc5);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1625, Current, 5, 1, 16506);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16506);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n >= 0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	RTDBGAL(3, 0xF8000659, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
	RTNHOOK(2,2);
	ui4_1 = arg1;
	ti4_3 = eif_max_int32 (ti4_2,ui4_1);
	ui4_1 = ti4_3;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3008, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(4, 0xF8000253, 0, 0); /* loc4 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAL(5, 0xF80001F3, 0, 0); /* loc5 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", loc5))(loc5)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_2;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(7);
		ui4_1 = loc1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3028, dtype))(Current, ui4_1x)).it_b);
		if (tb1) {
			RTHOOK(8);
			ui4_1 = loc1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc4))(loc4, ui4_1x)).it_i4);
			ui4_1 = ti4_2;
			ui4_2 = loc1;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc5))(loc5, ui4_2x)).it_n4);
			uu4_1 = tu4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", loc3))(loc3, ui4_1x, uu4_1x);
		}
		RTHOOK(9);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTHOOK(10);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
	if (tb1) {
		RTHOOK(11);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
		ui4_1 = ti4_2;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(12);
		ui4_1 = loc1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc4))(loc4, ui4_1x)).it_i4);
		ui4_1 = ti4_2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		ui4_2 = loc1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_2x)).it_n4);
		uu4_1 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", loc3))(loc3, ui4_1x, uu4_1x);
	}
	RTHOOK(13);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3010, "content", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3031, dtype))(Current, ur1x);
	RTHOOK(14);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3011, "keys", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3033, dtype))(Current, ur1x);
	RTHOOK(15);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3013, "deleted_marks", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3034, dtype))(Current, ur1x);
	RTHOOK(16);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3012, "indexes_map", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3035, dtype))(Current, ur1x);
	RTHOOK(17);
	RTDBGAA(Current, dtype, 2982, 0x10000000, 1); /* capacity */
	ti4_2 = *(EIF_INTEGER_32 *)(loc3 + RTVA(2982, "capacity", loc3));
	*(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype)) = (EIF_INTEGER_32) ti4_2;
	RTHOOK(18);
	RTDBGAA(Current, dtype, 3016, 0x10000000, 1); /* iteration_position */
	ti4_2 = *(EIF_INTEGER_32 *)(loc3 + RTVA(3016, "iteration_position", loc3));
	*(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype)) = (EIF_INTEGER_32) ti4_2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("count_not_changed", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("breathing_space", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
		if ((EIF_BOOLEAN) (ti4_2 < ti4_3)) {
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
	RTLO(8);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef arg1
}

/* {HASH_TABLE}.found_item */
EIF_TYPED_VALUE F1626_3927 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(2973,Dtype(Current)));
	return r;
}


/* {HASH_TABLE}.definite_item */
EIF_TYPED_VALUE F1626_3928 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "definite_item";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 1625, Current, 2, 1, 16508);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16508);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		uu4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2371, dtype))(Current, uu4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("valid_key", EX_PRE);
		uu4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2371, dtype))(Current, uu4_1x)).it_b);
		RTTE(tb1, label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	uu4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3039, dtype))(Current, uu4_1x);
	RTHOOK(6);
	RTDBGAL(0, 0x10000000, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3017, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 3019, 0x10000000, 1); /* control */
	*(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype)) = (EIF_INTEGER_32) loc2;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 3014, 0x10000000, 1); /* item_position */
	*(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype)) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef uu4_1
#undef arg1
}

/* {HASH_TABLE}.item */
EIF_TYPED_VALUE F1626_3929 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "item";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc12 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,loc11);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_INT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_UINT32, &loc12);
	
	RTEAA(l_feature_name, 1625, Current, 12, 1, 16509);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16509);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
	loc7 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		RTHOOK(3);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		if (tb1) {
			RTHOOK(4);
			RTDBGAL(0, 0x10000000, 0,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(4,2);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
			ui4_1 = ti4_1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr2))(tr2, ui4_1x)).it_i4);
			ui4_1 = ti4_1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_i4);
			Result = (EIF_INTEGER_32) ti4_1;
		}
	} else {
		RTHOOK(5);
		RTDBGAL(9, 0xF80001F3, 0, 0); /* loc9 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc9 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		RTDBGAL(10, 0xF8000253, 0, 0); /* loc10 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc10 = (EIF_REFERENCE) tr1;
		RTHOOK(7);
		RTDBGAL(11, 0xF800022F, 0, 0); /* loc11 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc11 = (EIF_REFERENCE) tr1;
		RTHOOK(8);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		loc8 = (EIF_INTEGER_32) loc6;
		RTHOOK(10);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		uu4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2981, dtype))(Current, uu4_1x)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(11);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(12);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(14);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			RTHOOK(15);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ui4_1 = loc5;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc10))(loc10, ui4_1x)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(16);
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(17);
				RTDBGAL(12, 0x38000000, 0, 0); /* loc12 */
				ui4_1 = loc4;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc9))(loc9, ui4_1x)).it_n4);
				loc12 = (EIF_NATURAL_32) tu4_1;
				if (
					WDBG(1625,"detect_hash_table_catcall")
				) {
					if (RTAL & CK_CHECK) {
						RTHOOK(18);
						RTCT("catcall_detected", EX_CHECK);
						tb1 = '\0';
						if (EIF_TRUE) {
							ur1 = RTLN(eif_new_type(212, 0x00).id);
							*(EIF_NATURAL_32 *)ur1 = arg1;
							tr1 = RTLN(eif_new_type(212, 0x00).id);
							*(EIF_NATURAL_32 *)tr1 = loc12;
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", tr1))(tr1, ur1x)).it_b);
							tb1 = tb2;
						}
						if (tb1) {
							RTCK;
						} else {
							RTCF;
						}
					}
				}
				RTHOOK(19);
				uu4_1 = loc12;
				uu4_2 = arg1;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2983, dtype))(Current, uu4_1x, uu4_2x)).it_b);
				if (tb1) {
					RTHOOK(20);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(21);
					RTDBGAL(0, 0x10000000, 0,0); /* Result */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(21,1);
					ui4_1 = loc4;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_i4);
					Result = (EIF_INTEGER_32) ti4_1;
				}
			} else {
				RTHOOK(22);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
				if ((EIF_BOOLEAN)(loc4 == ti4_1)) {
					RTHOOK(23);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(24);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
					if ((EIF_BOOLEAN)(loc7 == ti4_1)) {
						RTHOOK(25);
						RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3023, dtype))(Current)).it_i4);
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ti4_1);
						if (RTAL & CK_CHECK) {
							RTHOOK(26);
							RTCT("l_pos_valid", EX_CHECK);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", loc11))(loc11)).it_i4);
							if ((EIF_BOOLEAN) (loc4 < ti4_1)) {
								RTCK;
							} else {
								RTCF;
							}
						}
						RTHOOK(27);
						ui4_1 = loc4;
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc11))(loc11, ui4_1x)).it_b);
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(28);
							RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							RTHOOK(29);
							RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			RTHOOK(30);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			loc8--;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(31);
		RTCT("default_value_if_not_present", EX_POST);
		tb1 = '\01';
		uu4_1 = arg1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2371, dtype))(Current, uu4_1x)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3038, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN)(Result == ti4_1);
		}
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
	RTLO(15);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef arg1
}

/* {HASH_TABLE}.at */
EIF_TYPED_VALUE F1626_3930 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "at";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc12 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,loc11);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_INT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_UINT32, &loc12);
	
	RTEAA(l_feature_name, 1625, Current, 12, 1, 16510);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16510);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
	loc7 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		RTHOOK(3);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		if (tb1) {
			RTHOOK(4);
			RTDBGAL(0, 0x10000000, 0,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(4,2);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
			ui4_1 = ti4_1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr2))(tr2, ui4_1x)).it_i4);
			ui4_1 = ti4_1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_i4);
			Result = (EIF_INTEGER_32) ti4_1;
		}
	} else {
		RTHOOK(5);
		RTDBGAL(9, 0xF80001F3, 0, 0); /* loc9 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc9 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		RTDBGAL(10, 0xF8000253, 0, 0); /* loc10 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc10 = (EIF_REFERENCE) tr1;
		RTHOOK(7);
		RTDBGAL(11, 0xF800022F, 0, 0); /* loc11 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc11 = (EIF_REFERENCE) tr1;
		RTHOOK(8);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		loc8 = (EIF_INTEGER_32) loc6;
		RTHOOK(10);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		uu4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2981, dtype))(Current, uu4_1x)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(11);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(12);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(14);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			RTHOOK(15);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ui4_1 = loc5;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc10))(loc10, ui4_1x)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(16);
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(17);
				RTDBGAL(12, 0x38000000, 0, 0); /* loc12 */
				ui4_1 = loc4;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc9))(loc9, ui4_1x)).it_n4);
				loc12 = (EIF_NATURAL_32) tu4_1;
				if (
					WDBG(1625,"detect_hash_table_catcall")
				) {
					if (RTAL & CK_CHECK) {
						RTHOOK(18);
						RTCT("catcall_detected", EX_CHECK);
						tb1 = '\0';
						if (EIF_TRUE) {
							ur1 = RTLN(eif_new_type(212, 0x00).id);
							*(EIF_NATURAL_32 *)ur1 = arg1;
							tr1 = RTLN(eif_new_type(212, 0x00).id);
							*(EIF_NATURAL_32 *)tr1 = loc12;
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", tr1))(tr1, ur1x)).it_b);
							tb1 = tb2;
						}
						if (tb1) {
							RTCK;
						} else {
							RTCF;
						}
					}
				}
				RTHOOK(19);
				uu4_1 = loc12;
				uu4_2 = arg1;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2983, dtype))(Current, uu4_1x, uu4_2x)).it_b);
				if (tb1) {
					RTHOOK(20);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(21);
					RTDBGAL(0, 0x10000000, 0,0); /* Result */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(21,1);
					ui4_1 = loc4;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_i4);
					Result = (EIF_INTEGER_32) ti4_1;
				}
			} else {
				RTHOOK(22);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
				if ((EIF_BOOLEAN)(loc4 == ti4_1)) {
					RTHOOK(23);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(24);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
					if ((EIF_BOOLEAN)(loc7 == ti4_1)) {
						RTHOOK(25);
						RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3023, dtype))(Current)).it_i4);
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ti4_1);
						if (RTAL & CK_CHECK) {
							RTHOOK(26);
							RTCT("l_pos_valid", EX_CHECK);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", loc11))(loc11)).it_i4);
							if ((EIF_BOOLEAN) (loc4 < ti4_1)) {
								RTCK;
							} else {
								RTCF;
							}
						}
						RTHOOK(27);
						ui4_1 = loc4;
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc11))(loc11, ui4_1x)).it_b);
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(28);
							RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							RTHOOK(29);
							RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			RTHOOK(30);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			loc8--;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(31);
		RTCT("default_value_if_not_present", EX_POST);
		tb1 = '\01';
		uu4_1 = arg1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2371, dtype))(Current, uu4_1x)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3038, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN)(Result == ti4_1);
		}
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
	RTLO(15);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef arg1
}

/* {HASH_TABLE}.has */
EIF_TYPED_VALUE F1626_3931 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "has";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc12 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,tr1);
	RTLR(3,loc10);
	RTLR(4,loc11);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_UINT32, &loc12);
	
	RTEAA(l_feature_name, 1625, Current, 12, 1, 16511);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16511);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
	loc7 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		RTHOOK(3);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		if (tb1) {
			RTHOOK(4);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		RTHOOK(5);
		RTDBGAL(9, 0xF80001F3, 0, 0); /* loc9 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc9 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		RTDBGAL(10, 0xF8000253, 0, 0); /* loc10 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc10 = (EIF_REFERENCE) tr1;
		RTHOOK(7);
		RTDBGAL(11, 0xF800022F, 0, 0); /* loc11 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc11 = (EIF_REFERENCE) tr1;
		RTHOOK(8);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		loc8 = (EIF_INTEGER_32) loc6;
		RTHOOK(10);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		uu4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2981, dtype))(Current, uu4_1x)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(11);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(12);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(14);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			RTHOOK(15);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ui4_1 = loc5;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc10))(loc10, ui4_1x)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(16);
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(17);
				RTDBGAL(12, 0x38000000, 0, 0); /* loc12 */
				ui4_1 = loc4;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc9))(loc9, ui4_1x)).it_n4);
				loc12 = (EIF_NATURAL_32) tu4_1;
				if (
					WDBG(1625,"detect_hash_table_catcall")
				) {
					if (RTAL & CK_CHECK) {
						RTHOOK(18);
						RTCT("catcall_detected", EX_CHECK);
						tb1 = '\0';
						if (EIF_TRUE) {
							ur1 = RTLN(eif_new_type(212, 0x00).id);
							*(EIF_NATURAL_32 *)ur1 = arg1;
							tr1 = RTLN(eif_new_type(212, 0x00).id);
							*(EIF_NATURAL_32 *)tr1 = loc12;
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", tr1))(tr1, ur1x)).it_b);
							tb1 = tb2;
						}
						if (tb1) {
							RTCK;
						} else {
							RTCF;
						}
					}
				}
				RTHOOK(19);
				uu4_1 = loc12;
				uu4_2 = arg1;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2983, dtype))(Current, uu4_1x, uu4_2x)).it_b);
				if (tb1) {
					RTHOOK(20);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(21);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			} else {
				RTHOOK(22);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
				if ((EIF_BOOLEAN)(loc4 == ti4_1)) {
					RTHOOK(23);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(24);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
					if ((EIF_BOOLEAN)(loc7 == ti4_1)) {
						RTHOOK(25);
						RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3023, dtype))(Current)).it_i4);
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ti4_1);
						if (RTAL & CK_CHECK) {
							RTHOOK(26);
							RTCT("l_pos_valid", EX_CHECK);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", loc11))(loc11)).it_i4);
							if ((EIF_BOOLEAN) (loc4 < ti4_1)) {
								RTCK;
							} else {
								RTCF;
							}
						}
						RTHOOK(27);
						ui4_1 = loc4;
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc11))(loc11, ui4_1x)).it_b);
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(28);
							RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							RTHOOK(29);
							RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			RTHOOK(30);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			loc8--;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(31);
		RTCT("default_case", EX_POST);
		tb1 = '\01';
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3037, dtype))(Current)).it_n4);
		if ((EIF_BOOLEAN)(arg1 == tu4_1)) {
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
			tb1 = (EIF_BOOLEAN)(Result == tb2);
		}
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
	RTLO(15);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef arg1
}

/* {HASH_TABLE}.has_key */
EIF_TYPED_VALUE F1626_3932 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "has_key";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 1625, Current, 2, 1, 16512);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16512);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	uu4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3039, dtype))(Current, uu4_1x);
	RTHOOK(3);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2989, dtype))(Current)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTHOOK(4);
	if (Result) {
		RTHOOK(5);
		RTDBGAA(Current, dtype, 2973, 0x10000000, 0); /* found_item */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3017, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype)) = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 2973, 0x10000000, 0); /* found_item */
		*(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype)) = (EIF_INTEGER_32) loc2;
	}
	RTHOOK(7);
	RTDBGAA(Current, dtype, 3014, 0x10000000, 1); /* item_position */
	*(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype)) = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("default_case", EX_POST);
		tb1 = '\01';
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3037, dtype))(Current)).it_n4);
		if ((EIF_BOOLEAN)(arg1 == tu4_1)) {
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
			tb1 = (EIF_BOOLEAN)(Result == tb2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("found", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2989, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("item_if_found", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2989, dtype))(Current)).it_b);
		if (tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype));
			uu4_1 = arg1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, uu4_1x)).it_i4);
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
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef uu4_1
#undef arg1
}

/* {HASH_TABLE}.has_item */
EIF_TYPED_VALUE F1626_3933 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "has_item";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc3);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1625, Current, 3, 1, 16513);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16513);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(2,2);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
		ui4_1 = ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr2))(tr2, ui4_1x)).it_i4);
		ui4_1 = ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_i4);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	RTHOOK(3);
	if ((EIF_BOOLEAN) !Result) {
		RTHOOK(4);
		RTDBGAL(3, 0xF8000253, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", loc3))(loc3)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2329, dtype));
		if (tb1) {
			for (;;) {
				RTHOOK(7);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || Result)) break;
				RTHOOK(8);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				tb1 = '\0';
				ui4_1 = loc1;
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3028, dtype))(Current, ui4_1x)).it_b);
				if (tb2) {
					ui4_1 = loc1;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc3))(loc3, ui4_1x)).it_i4);
					tb1 = (arg1 == ti4_1);
				}
				Result = (EIF_BOOLEAN) tb1;
				RTHOOK(9);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
			}
		} else {
			for (;;) {
				RTHOOK(10);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || Result)) break;
				RTHOOK(11);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				tb1 = '\0';
				ui4_1 = loc1;
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3028, dtype))(Current, ui4_1x)).it_b);
				if (tb2) {
					ui4_1 = loc1;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc3))(loc3, ui4_1x)).it_i4);
					tb1 = (EIF_BOOLEAN)(arg1 == ti4_1);
				}
				Result = (EIF_BOOLEAN) tb1;
				RTHOOK(12);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("not_found_in_empty", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2327, dtype))(Current)).it_b);
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
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ui4_1
#undef arg1
}

/* {HASH_TABLE}.current_keys */
EIF_TYPED_VALUE F1626_3934 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "current_keys";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 1625, Current, 2, 0, 16514);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16514);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2327, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0xF80001F5, 0,0); /* Result */
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,501,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(2374, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2744, Dtype(tr1)))(tr1);
		RTNHOOK(2,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(3);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2995, dtype))(Current);
		RTHOOK(5);
		RTDBGAL(0, 0xF80001F5, 0,0); /* Result */
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,501,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(2374, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLN(typres0.id);
		}
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2979, dtype))(Current)).it_n4);
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		ui4_2 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2745, Dtype(tr1)))(tr1, uu4_1x, ui4_1x, ui4_2x);
		RTNHOOK(5,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2996, dtype))(Current);
		for (;;) {
			RTHOOK(8);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2992, dtype))(Current)).it_b);
			if (tb1) break;
			RTHOOK(9);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
			RTHOOK(10);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2979, dtype))(Current)).it_n4);
			uu4_1 = tu4_1;
			ui4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", Result))(Result, uu4_1x, ui4_1x);
			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2996, dtype))(Current);
		}
		RTHOOK(12);
		RTDBGAA(Current, dtype, 3016, 0x10000000, 1); /* iteration_position */
		*(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype)) = (EIF_INTEGER_32) loc2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("good_count", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", Result))(Result)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef uu4_1
}

/* {HASH_TABLE}.item_for_iteration */
EIF_TYPED_VALUE F1626_3935 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "item_for_iteration";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16515);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16515);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2992, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype));
	ui4_1 = ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
}

/* {HASH_TABLE}.key_for_iteration */
EIF_TYPED_VALUE F1626_3936 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "key_for_iteration";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16516);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16516);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2992, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x38000000, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype));
	ui4_1 = ti4_1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_n4);
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef up1
#undef ui4_1
}

/* {HASH_TABLE}.cursor */
EIF_TYPED_VALUE F1626_3937 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cursor";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16517);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16517);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800008E, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(144, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2138, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("cursor_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
}

/* {HASH_TABLE}.new_cursor */
EIF_TYPED_VALUE F1626_3938 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "new_cursor";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16518);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16518);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800065D, 0,0); /* Result */
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,1629,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(2281, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(2374, dtype, Dftype(Current));
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLN(typres0.id);
	}
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3786, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3783, "start", Result))(Result);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
#undef ur1
}

/* {HASH_TABLE}.iteration_item */
EIF_TYPED_VALUE F1626_3939 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "iteration_item";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16519);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16519);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2677, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ui4_1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
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

/* {HASH_TABLE}.hash_code_of */
EIF_TYPED_VALUE F1626_3940 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "hash_code_of";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16520);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16520);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (arg1)));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {HASH_TABLE}.count */
EIF_TYPED_VALUE F1626_3941 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3060,Dtype(Current)));
	return r;
}


/* {HASH_TABLE}.capacity */
EIF_TYPED_VALUE F1626_3942 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(2982,Dtype(Current)));
	return r;
}


/* {HASH_TABLE}.occurrences */
EIF_TYPED_VALUE F1626_3943 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "occurrences";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1625, Current, 1, 1, 16523);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16523);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2329, dtype));
	if (tb1) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2995, dtype))(Current);
		for (;;) {
			RTHOOK(4);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2992, dtype))(Current)).it_b);
			if (tb1) break;
			RTHOOK(5);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2978, dtype))(Current)).it_i4);
			if ((ti4_1 == arg1)) {
				RTHOOK(6);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result++;
			}
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2996, dtype))(Current);
		}
	} else {
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2995, dtype))(Current);
		for (;;) {
			RTHOOK(9);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2992, dtype))(Current)).it_b);
			if (tb2) break;
			RTHOOK(10);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2978, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
				RTHOOK(11);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result++;
			}
			RTHOOK(12);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2996, dtype))(Current);
		}
	}
	RTHOOK(13);
	RTDBGAA(Current, dtype, 3016, 0x10000000, 1); /* iteration_position */
	*(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype)) = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("non_negative_occurrences", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {HASH_TABLE}.iteration_lower */
EIF_TYPED_VALUE F1626_3944 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "iteration_lower";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16524);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16524);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ui4_1 = ((EIF_INTEGER_32) -1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3000, dtype))(Current, ui4_1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
}

/* {HASH_TABLE}.iteration_upper */
EIF_TYPED_VALUE F1626_3945 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "iteration_upper";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16525);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16525);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3001, dtype))(Current, ui4_1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
}

/* {HASH_TABLE}.is_equal */
EIF_TYPED_VALUE F1626_3946 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_equal";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1625, Current, 1, 1, 16526);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16526);
	RTCC(arg1, 1625, l_feature_name, 1, eif_new_type(Dftype(Current), 1), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3060, "count", arg1));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(2329, dtype));
		tb4 = *(EIF_BOOLEAN *)(arg1 + RTVA(2329, "object_comparison", arg1));
		tb2 = (EIF_BOOLEAN)(tb3 == tb4);
	}
	if (tb2) {
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		tb3 = *(EIF_BOOLEAN *)(arg1 + RTVA(3015, "has_default", arg1));
		tb1 = (EIF_BOOLEAN)(tb2 == tb3);
	}
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		for (;;) {
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3711, "after", loc1))(loc1)).it_b);
			if (tb1) break;
			RTHOOK(5);
			if ((EIF_BOOLEAN) !Result) break;
			RTHOOK(6);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3768, "key", loc1))(loc1)).it_n4);
			uu4_1 = tu4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2998, "search", arg1))(arg1, uu4_1x);
			RTHOOK(7);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2989, "found", arg1))(arg1)).it_b);
			if (tb2) {
				RTHOOK(8);
				tb2 = *(EIF_BOOLEAN *)(Current + RTWA(2329, dtype));
				if (tb2) {
					RTHOOK(9);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3710, "item", loc1))(loc1)).it_i4);
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2973, "found_item", arg1))(arg1)).it_i4);
					Result = (EIF_BOOLEAN) (ti4_1 == ti4_2);
				} else {
					RTHOOK(10);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3710, "item", loc1))(loc1)).it_i4);
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2973, "found_item", arg1))(arg1)).it_i4);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
				}
			} else {
				RTHOOK(11);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			RTHOOK(12);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3712, "forth", loc1))(loc1);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("consistent", EX_POST);
		tb2 = '\01';
		ur1 = RTCCL(arg1);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12, dtype))(Current, ur1x)).it_b);
		if (tb3) {
			tb2 = Result;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
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
#undef ur1
#undef uu4_1
#undef arg1
}

/* {HASH_TABLE}.same_keys */
EIF_TYPED_VALUE F1626_3947 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "same_keys";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_n4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 2, 16527);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16527);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (arg1 == arg2);
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

/* {HASH_TABLE}.disjoint */
EIF_TYPED_VALUE F1626_3948 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "disjoint";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1625, Current, 1, 1, 16528);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16528);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,1625,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(2281, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(2374, dtype, Dftype(Current));
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg1, 1625, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2327, dtype))(Current)).it_b);
	if (!tb3) {
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2327, "is_empty", arg1))(arg1)).it_b);
		tb2 = tb3;
	}
	if (!tb2) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		tb2 = EIF_FALSE;
		for (;;) {
			if (tb2) break;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3711, "after", loc1))(loc1)).it_b);
			if (tb3) break;
			RTHOOK(3);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3768, "key", loc1))(loc1)).it_n4);
			uu4_1 = tu4_1;
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2371, dtype))(Current, uu4_1x)).it_b);
			tb2 = tb4;
			RTHOOK(4);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3712, "forth", loc1))(loc1);
		}
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef uu4_1
#undef arg1
}

/* {HASH_TABLE}.full */
EIF_TYPED_VALUE F1626_3949 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {HASH_TABLE}.extendible */
EIF_TYPED_VALUE F1626_3950 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {HASH_TABLE}.prunable */
EIF_TYPED_VALUE F1626_3951 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "prunable";
	RTEX;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16531);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16531);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
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

/* {HASH_TABLE}.conflict */
EIF_TYPED_VALUE F1626_3952 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "conflict";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16532);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16532);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3044, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
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

/* {HASH_TABLE}.inserted */
EIF_TYPED_VALUE F1626_3953 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "inserted";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16533);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16533);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3048, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
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

/* {HASH_TABLE}.replaced */
EIF_TYPED_VALUE F1626_3954 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "replaced";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16534);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16534);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3055, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
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

/* {HASH_TABLE}.removed */
EIF_TYPED_VALUE F1626_3955 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "removed";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16535);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16535);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3053, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
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

/* {HASH_TABLE}.found */
EIF_TYPED_VALUE F1626_3956 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "found";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16536);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16536);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3046, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
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

/* {HASH_TABLE}.not_found */
EIF_TYPED_VALUE F1626_3957 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "not_found";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16537);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16537);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3050, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
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

/* {HASH_TABLE}.after */
EIF_TYPED_VALUE F1626_3958 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "after";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16538);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16538);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype));
	ui4_1 = ti4_1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3030, dtype))(Current, ui4_1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
}

/* {HASH_TABLE}.off */
EIF_TYPED_VALUE F1626_3959 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "off";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16539);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16539);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype));
	ui4_1 = ti4_1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3030, dtype))(Current, ui4_1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
}

/* {HASH_TABLE}.valid_cursor */
EIF_TYPED_VALUE F1626_3960 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_cursor";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1625, Current, 2, 1, 16540);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16540);
	RTCC(arg1, 1625, l_feature_name, 1, eif_new_type(142, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = RTCCL(arg1);
	loc2 = RTRV(eif_new_type(144, 0x01),loc2);
	if (EIF_TEST(loc2)) {
		RTHOOK(3);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(2139, "position", loc2));
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tb1 = '\01';
		ui4_1 = loc1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3030, dtype))(Current, ui4_1x)).it_b);
		if (!tb2) {
			ui4_1 = loc1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3029, dtype))(Current, ui4_1x)).it_b);
			tb1 = tb2;
		}
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {HASH_TABLE}.valid_key */
EIF_TYPED_VALUE F1626_3961 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_key";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16541);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16541);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (
		WDBG(1625,"prevent_hash_table_catcall")
	) {
		RTHOOK(2);
		tb1 = '\0';
		tr1 = RTLNTY2(RTWCT(2374, dtype, Dftype(Current)), 0x00);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3881, "is_expanded", tr1))(tr1)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			tb1 = EIF_TRUE;
		}
		if (tb1) {
			RTHOOK(3);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			tr1 = RTLN(eif_new_type(212, 0x00).id);
			*(EIF_NATURAL_32 *)tr1 = arg1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8, "generating_type", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTLNTY2(RTWCT(2374, dtype, Dftype(Current)), 0x02);
			Result = (EIF_BOOLEAN) RTEQ(tr2, tr1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef arg1
}

/* {HASH_TABLE}.valid_iteration_index */
EIF_TYPED_VALUE F1626_3962 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_iteration_index";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16542);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16542);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ui4_1 = arg1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3029, dtype))(Current, ui4_1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("only_if_in_index_set", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = '\0';
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2674, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN) (ti4_1 <= arg1)) {
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2675, dtype))(Current)).it_i4);
				tb2 = (EIF_BOOLEAN) (arg1 <= ti4_1);
			}
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {HASH_TABLE}.start */
void F1626_3963 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "start";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16543);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16543);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3016, 0x10000000, 1); /* iteration_position */
	ui4_1 = ((EIF_INTEGER_32) -1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3000, dtype))(Current, ui4_1x)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
}

/* {HASH_TABLE}.forth */
void F1626_3964 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "forth";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16544);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16544);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2992, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3016, 0x10000000, 1); /* iteration_position */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype));
	ui4_1 = ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3000, dtype))(Current, ui4_1x)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
}

/* {HASH_TABLE}.go_to */
void F1626_3965 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "go_to";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1625, Current, 1, 1, 16545);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16545);
	RTCC(arg1, 1625, l_feature_name, 1, eif_new_type(142, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_cursor", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2993, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(144, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 3016, 0x10000000, 1); /* iteration_position */
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(2139, "position", loc1));
		*(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype)) = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef arg1
}

/* {HASH_TABLE}.search */
void F1626_3966 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "search";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 1625, Current, 2, 1, 16546);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16546);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	uu4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3039, dtype))(Current, uu4_1x);
	RTHOOK(3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2989, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 2973, 0x10000000, 0); /* found_item */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3017, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype)) = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(5);
		RTDBGAA(Current, dtype, 2973, 0x10000000, 0); /* found_item */
		*(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype)) = (EIF_INTEGER_32) loc2;
	}
	RTHOOK(6);
	RTDBGAA(Current, dtype, 3014, 0x10000000, 1); /* item_position */
	*(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype)) = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("found_or_not_found", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2989, dtype))(Current)).it_b);
		if (!tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2990, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("item_if_found", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2989, dtype))(Current)).it_b);
		if (tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype));
			uu4_1 = arg1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, uu4_1x)).it_i4);
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
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef arg1
}

/* {HASH_TABLE}.search_item */
EIF_TYPED_VALUE F1626_3967 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "search_item";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16547);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16547);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 0,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {HASH_TABLE}.next_iteration_position */
EIF_TYPED_VALUE F1626_3968 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "next_iteration_position";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 1625, Current, 2, 1, 16548);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16548);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) -1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_position_small_enough", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
		RTTE((EIF_BOOLEAN) (arg1 < ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0xF800022F, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(6);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (Result >= loc2)) {
			ui4_1 = Result;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc1))(loc1, ui4_1x)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(7);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("is_increased", EX_POST);
		if ((EIF_BOOLEAN) (Result > arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("is_below_upper_bound", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN) (Result <= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {HASH_TABLE}.previous_iteration_position */
EIF_TYPED_VALUE F1626_3969 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "previous_iteration_position";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1625, Current, 1, 1, 16549);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16549);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_position_small_enough", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
		RTTE((EIF_BOOLEAN) (arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0xF800022F, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(5);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) -1L))) {
			ui4_1 = Result;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc1))(loc1, ui4_1x)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(6);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("is_decreased", EX_POST);
		if ((EIF_BOOLEAN) (Result < arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("is_above_lower_bound", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) -1L))) {
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {HASH_TABLE}.put */
void F1626_3970 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "put";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 1625, Current, 3, 2, 16550);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16550);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		uu4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2371, dtype))(Current, uu4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTJB;
label_2:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		ti4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		ti4_2 = ti4_3;
		RTE_OT
		uu4_1 = arg2;
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, uu4_1x)).it_i4);
		ti4_3 = ti4_4;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		uu4_1 = arg2;
		ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, uu4_1x)).it_i4);
		ti4_4 = ti4_5;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		tb1 = tb2;
		in_assertion = 0;
	}
	RTHOOK(3);
	uu4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3039, dtype))(Current, uu4_1x);
	RTHOOK(4);
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2989, dtype))(Current)).it_b);
	if (tb2) {
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3045, dtype))(Current);
		RTHOOK(6);
		RTDBGAA(Current, dtype, 2973, 0x10000000, 0); /* found_item */
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3017, dtype))(Current)).it_i4);
		ui4_1 = ti4_5;
		ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr3))(tr3, ui4_1x)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype)) = (EIF_INTEGER_32) ti4_5;
	} else {
		RTHOOK(7);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3018, dtype))(Current)).it_b);
		if (tb2) {
			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3058, dtype))(Current);
			RTHOOK(9);
			uu4_1 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3039, dtype))(Current, uu4_1x);
			if (RTAL & CK_CHECK) {
				RTHOOK(10);
				RTCT("not_present", EX_CHECK);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2989, dtype))(Current)).it_b);
				if ((EIF_BOOLEAN) !tb2) {
					RTCK;
				} else {
					RTCF;
				}
			}
		}
		RTHOOK(11);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(3020, dtype));
		ti4_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_5 == ti4_6)) {
			RTHOOK(12);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,1);
			ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr3))(tr3)).it_i4);
			loc2 = (EIF_INTEGER_32) ti4_5;
			RTHOOK(13);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype));
			loc3 = (EIF_INTEGER_32) ti4_5;
		} else {
			RTHOOK(14);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(3020, dtype));
			ui4_1 = ti4_5;
			ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3027, dtype))(Current, ui4_1x)).it_i4);
			loc2 = (EIF_INTEGER_32) ti4_5;
			RTHOOK(15);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(3020, dtype));
			loc3 = (EIF_INTEGER_32) ti4_5;
			RTHOOK(16);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(16,1);
			ub1 = (EIF_BOOLEAN) 0;
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2690, "force", tr3))(tr3, ub1x, ui4_1x);
		}
		RTHOOK(17);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(17,1);
		ui4_1 = loc2;
		ui4_2 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2689, "put", tr3))(tr3, ui4_1x, ui4_2x);
		RTHOOK(18);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(18,1);
		ui4_1 = arg1;
		ui4_2 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2690, "force", tr3))(tr3, ui4_1x, ui4_2x);
		RTHOOK(19);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(19,1);
		uu4_1 = arg2;
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2690, "force", tr3))(tr3, uu4_1x, ui4_1x);
		RTHOOK(20);
		if ((EIF_BOOLEAN)(arg2 == loc1)) {
			RTHOOK(21);
			RTDBGAA(Current, dtype, 3015, 0x04000000, 1); /* has_default */
			*(EIF_BOOLEAN *)(Current + RTWA(3015, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTHOOK(22);
		RTDBGAA(Current, dtype, 3060, 0x10000000, 1); /* count */
		(*(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype)))++;
		RTHOOK(23);
		RTDBGAA(Current, dtype, 2973, 0x10000000, 0); /* found_item */
		*(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype)) = (EIF_INTEGER_32) arg1;
		RTHOOK(24);
		RTDBGAA(Current, dtype, 3019, 0x10000000, 1); /* control */
		ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3048, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype)) = (EIF_INTEGER_32) ti4_5;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(25);
		RTCT("conflict_or_inserted", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2985, dtype))(Current)).it_b);
		if (!tb3) {
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2986, dtype))(Current)).it_b);
			tb2 = tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(26);
		RTCT("insertion_done", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2986, dtype))(Current)).it_b);
		if (tb3) {
			uu4_1 = arg2;
			ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, uu4_1x)).it_i4);
			tb2 = (EIF_BOOLEAN)(ti4_5 == arg1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("now_present", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2986, dtype))(Current)).it_b);
		if (tb3) {
			uu4_1 = arg2;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2371, dtype))(Current, uu4_1x)).it_b);
			tb2 = tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("one_more_if_inserted", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2986, dtype))(Current)).it_b);
		if (tb3) {
			ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
			tb2 = (EIF_BOOLEAN)(ti4_5 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("unchanged_if_conflict", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2985, dtype))(Current)).it_b);
		if (tb3) {
			ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
			tb2 = (EIF_BOOLEAN)(ti4_5 == ti4_2);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(30);
		RTCT("same_item_if_conflict", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2985, dtype))(Current)).it_b);
		if (tb3) {
			uu4_1 = arg2;
			ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, uu4_1x)).it_i4);
			RTCO(tr1);
			tb2 = ((EIF_BOOLEAN)(ti4_5 == ti4_3));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(31);
		RTCT("found_item_associated_with_key", EX_POST);
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype));
		uu4_1 = arg2;
		ti4_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, uu4_1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_5 == ti4_6)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(32);
		RTCT("new_item_if_inserted", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2986, dtype))(Current)).it_b);
		if (tb3) {
			ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype));
			tb2 = (EIF_BOOLEAN)(ti4_5 == arg1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(33);
		RTCT("old_item_if_conflict", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2985, dtype))(Current)).it_b);
		if (tb3) {
			ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype));
			RTCO(tr2);
			tb2 = ((EIF_BOOLEAN)(ti4_5 == ti4_4));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(34);
		RTCT("default_property", EX_POST);
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		tb3 = '\01';
		tb4 = '\0';
		tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2986, dtype))(Current)).it_b);
		if (tb5) {
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3037, dtype))(Current)).it_n4);
			tb4 = (EIF_BOOLEAN)(arg2 == tu4_1);
		}
		if (!(tb4)) {
			tb4 = '\0';
			tb5 = '\01';
			tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2985, dtype))(Current)).it_b);
			if (!tb6) {
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3037, dtype))(Current)).it_n4);
				tb5 = (EIF_BOOLEAN)(arg2 != tu4_1);
			}
			if (tb5) {
				tb4 = tb1;
			}
			tb3 = tb4;
		}
		if ((EIF_BOOLEAN)(tb2 == tb3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(35);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef ub1
#undef arg2
#undef arg1
}

/* {HASH_TABLE}.force */
void F1626_3971 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "force";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 1625, Current, 4, 2, 16551);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16551);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		uu4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2371, dtype))(Current, uu4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTJB;
label_2:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		uu4_1 = arg2;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2371, dtype))(Current, uu4_1x)).it_b);
		tb1 = tb2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		ti4_1 = ti4_2;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		ti4_2 = ti4_3;
		RTE_OT
		uu4_1 = arg2;
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, uu4_1x)).it_i4);
		ti4_3 = ti4_4;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		tb2 = tb3;
		in_assertion = 0;
	}
	RTHOOK(3);
	uu4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3039, dtype))(Current, uu4_1x);
	RTHOOK(4);
	tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2990, dtype))(Current)).it_b);
	if (tb3) {
		RTHOOK(5);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3018, dtype))(Current)).it_b);
		if (tb3) {
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3058, dtype))(Current);
			RTHOOK(7);
			uu4_1 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3039, dtype))(Current, uu4_1x);
		}
		RTHOOK(8);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(3020, dtype));
		ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_4 == ti4_5)) {
			RTHOOK(9);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr3))(tr3)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_4;
			RTHOOK(10);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype));
			loc4 = (EIF_INTEGER_32) ti4_4;
		} else {
			RTHOOK(11);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(3020, dtype));
			ui4_1 = ti4_4;
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3027, dtype))(Current, ui4_1x)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_4;
			RTHOOK(12);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(3020, dtype));
			loc4 = (EIF_INTEGER_32) ti4_4;
			RTHOOK(13);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(13,1);
			ub1 = (EIF_BOOLEAN) 0;
			ui4_1 = loc3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2690, "force", tr3))(tr3, ub1x, ui4_1x);
		}
		RTHOOK(14);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(14,1);
		ui4_1 = loc3;
		ui4_2 = loc4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2689, "put", tr3))(tr3, ui4_1x, ui4_2x);
		RTHOOK(15);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(15,1);
		uu4_1 = arg2;
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2690, "force", tr3))(tr3, uu4_1x, ui4_1x);
		RTHOOK(16);
		if ((EIF_BOOLEAN)(arg2 == loc1)) {
			RTHOOK(17);
			RTDBGAA(Current, dtype, 3015, 0x04000000, 1); /* has_default */
			*(EIF_BOOLEAN *)(Current + RTWA(3015, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTHOOK(18);
		RTDBGAA(Current, dtype, 3060, 0x10000000, 1); /* count */
		(*(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype)))++;
		RTHOOK(19);
		RTDBGAA(Current, dtype, 2973, 0x10000000, 0); /* found_item */
		*(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype)) = (EIF_INTEGER_32) loc2;
	} else {
		RTHOOK(20);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3017, dtype))(Current)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_4;
		RTHOOK(21);
		RTDBGAA(Current, dtype, 2973, 0x10000000, 0); /* found_item */
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(21,1);
		ui4_1 = loc3;
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr3))(tr3, ui4_1x)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype)) = (EIF_INTEGER_32) ti4_4;
	}
	RTHOOK(22);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(22,1);
	ui4_1 = arg1;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2690, "force", tr3))(tr3, ui4_1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCT("inserted", EX_POST);
		uu4_1 = arg2;
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2369, dtype))(Current, uu4_1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_4 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("insertion_done", EX_POST);
		uu4_1 = arg2;
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, uu4_1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_4 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("now_present", EX_POST);
		uu4_1 = arg2;
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2371, dtype))(Current, uu4_1x)).it_b);
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(26);
		RTCT("found_or_not_found", EX_POST);
		tb3 = '\01';
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2989, dtype))(Current)).it_b);
		if (!tb4) {
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2990, dtype))(Current)).it_b);
			tb3 = tb4;
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("not_found_if_was_not_present", EX_POST);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2990, dtype))(Current)).it_b);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(tb3 == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("same_count_or_one_more", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		ti4_5 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_4 == ti4_1) || (EIF_BOOLEAN)(ti4_5 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("found_item_is_old_item", EX_POST);
		tb3 = '\01';
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2989, dtype))(Current)).it_b);
		if (tb4) {
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype));
			RTCO(tr2);
			tb3 = ((EIF_BOOLEAN)(ti4_4 == ti4_3));
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(30);
		RTCT("default_value_if_not_found", EX_POST);
		tb3 = '\01';
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2990, dtype))(Current)).it_b);
		if (tb4) {
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype));
			ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3038, dtype))(Current)).it_i4);
			tb3 = (EIF_BOOLEAN)(ti4_4 == ti4_5);
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(31);
		RTCT("default_property", EX_POST);
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		tb4 = '\01';
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3037, dtype))(Current)).it_n4);
		if (!((EIF_BOOLEAN)(arg2 == tu4_1))) {
			tb5 = '\0';
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3037, dtype))(Current)).it_n4);
			if ((EIF_BOOLEAN)(arg2 != tu4_1)) {
				tb5 = tb2;
			}
			tb4 = tb5;
		}
		if ((EIF_BOOLEAN)(tb3 == tb4)) {
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
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef ub1
#undef arg2
#undef arg1
}

/* {HASH_TABLE}.extend */
void F1626_3972 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "extend";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 1625, Current, 3, 2, 16552);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16552);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_present", EX_PRE);
		uu4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2371, dtype))(Current, uu4_1x)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		ti4_1 = ti4_2;
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		tb1 = tb2;
		in_assertion = 0;
	}
	RTHOOK(2);
	uu4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3040, dtype))(Current, uu4_1x);
	RTHOOK(3);
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3018, dtype))(Current)).it_b);
	if (tb2) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3058, dtype))(Current);
		RTHOOK(5);
		uu4_1 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3040, dtype))(Current, uu4_1x);
	}
	RTHOOK(6);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3020, dtype));
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
		RTHOOK(7);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(8);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype));
		loc3 = (EIF_INTEGER_32) ti4_2;
	} else {
		RTHOOK(9);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3020, dtype));
		ui4_1 = ti4_2;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3027, dtype))(Current, ui4_1x)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(10);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3020, dtype));
		loc3 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(11);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		ub1 = (EIF_BOOLEAN) 0;
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2690, "force", tr1))(tr1, ub1x, ui4_1x);
	}
	RTHOOK(12);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(12,1);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2689, "put", tr1))(tr1, ui4_1x, ui4_2x);
	RTHOOK(13);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(13,1);
	ui4_1 = arg1;
	ui4_2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2690, "force", tr1))(tr1, ui4_1x, ui4_2x);
	RTHOOK(14);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(14,1);
	uu4_1 = arg2;
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2690, "force", tr1))(tr1, uu4_1x, ui4_1x);
	RTHOOK(15);
	if ((EIF_BOOLEAN)(arg2 == loc1)) {
		RTHOOK(16);
		RTDBGAA(Current, dtype, 3015, 0x04000000, 1); /* has_default */
		*(EIF_BOOLEAN *)(Current + RTWA(3015, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(17);
	RTDBGAA(Current, dtype, 3060, 0x10000000, 1); /* count */
	(*(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype)))++;
	RTHOOK(18);
	RTDBGAA(Current, dtype, 3019, 0x10000000, 1); /* control */
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3048, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype)) = (EIF_INTEGER_32) ti4_2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("inserted", EX_POST);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2986, dtype))(Current)).it_b);
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("insertion_done", EX_POST);
		uu4_1 = arg2;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, uu4_1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_2 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("one_more", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("default_property", EX_POST);
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		tb3 = '\01';
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3037, dtype))(Current)).it_n4);
		if (!((EIF_BOOLEAN)(arg2 == tu4_1))) {
			tb3 = tb1;
		}
		if ((EIF_BOOLEAN)(tb2 == tb3)) {
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
	RTLO(7);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef ub1
#undef arg2
#undef arg1
}

/* {HASH_TABLE}.replace */
void F1626_3973 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "replace";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1625, Current, 1, 2, 16553);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16553);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		uu4_1 = arg2;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, uu4_1x)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		uu4_1 = arg2;
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, uu4_1x)).it_i4);
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	uu4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3039, dtype))(Current, uu4_1x);
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2989, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 2973, 0x10000000, 0); /* found_item */
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3017, dtype))(Current)).it_i4);
		ui4_1 = ti4_3;
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr3))(tr3, ui4_1x)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype)) = (EIF_INTEGER_32) ti4_3;
		RTHOOK(4);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ui4_1 = arg1;
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3017, dtype))(Current)).it_i4);
		ui4_2 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2689, "put", tr3))(tr3, ui4_1x, ui4_2x);
		RTHOOK(5);
		RTDBGAA(Current, dtype, 3019, 0x10000000, 1); /* control */
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3055, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype)) = (EIF_INTEGER_32) ti4_3;
	} else {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 2973, 0x10000000, 0); /* found_item */
		*(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype)) = (EIF_INTEGER_32) loc1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("replaced_or_not_found", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2987, dtype))(Current)).it_b);
		if (!tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2990, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("insertion_done", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2987, dtype))(Current)).it_b);
		if (tb2) {
			uu4_1 = arg2;
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, uu4_1x)).it_i4);
			tb1 = (EIF_BOOLEAN)(ti4_3 == arg1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("no_change_if_not_found", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2990, dtype))(Current)).it_b);
		if (tb2) {
			uu4_1 = arg2;
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, uu4_1x)).it_i4);
			RTCO(tr1);
			tb1 = (EIF_BOOLEAN)(ti4_3 == ti4_1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("found_item_is_old_item", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype));
		RTCO(tr2);
		if ((EIF_BOOLEAN)(ti4_3 == ti4_2)) {
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
	RTLO(5);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef arg2
#undef arg1
}

/* {HASH_TABLE}.replace_key */
void F1626_3974 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "replace_key";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1625, Current, 1, 2, 16554);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16554);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		ti4_1 = ti4_2;
		RTE_OT
		uu4_1 = arg2;
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, uu4_1x)).it_i4);
		ti4_2 = ti4_3;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		uu4_1 = arg2;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2371, dtype))(Current, uu4_1x)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		uu4_1 = arg1;
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2371, dtype))(Current, uu4_1x)).it_b);
		tb2 = tb3;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		uu4_1 = arg1;
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, uu4_1x)).it_i4);
		ti4_3 = ti4_4;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	uu4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3039, dtype))(Current, uu4_1x);
	RTHOOK(2);
	tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2989, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb3) {
		RTHOOK(3);
		uu4_1 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3039, dtype))(Current, uu4_1x);
		RTHOOK(4);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2989, dtype))(Current)).it_b);
		if (tb3) {
			RTHOOK(5);
			RTDBGAL(1, 0x10000000, 0, 0); /* loc1 */
			tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3017, dtype))(Current)).it_i4);
			ui4_1 = ti4_4;
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr5))(tr5, ui4_1x)).it_i4);
			loc1 = (EIF_INTEGER_32) ti4_4;
			RTHOOK(6);
			uu4_1 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3006, dtype))(Current, uu4_1x);
			RTHOOK(7);
			ui4_1 = loc1;
			uu4_1 = arg1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2372, dtype))(Current, ui4_1x, uu4_1x);
			RTHOOK(8);
			RTDBGAA(Current, dtype, 3019, 0x10000000, 1); /* control */
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3055, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype)) = (EIF_INTEGER_32) ti4_4;
		}
	} else {
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3045, dtype))(Current);
		RTHOOK(10);
		RTDBGAA(Current, dtype, 2973, 0x10000000, 0); /* found_item */
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,1);
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3017, dtype))(Current)).it_i4);
		ui4_1 = ti4_4;
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr5))(tr5, ui4_1x)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype)) = (EIF_INTEGER_32) ti4_4;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("same_count", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		if ((EIF_BOOLEAN)(ti4_4 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("replaced_or_conflict_or_not_found", EX_POST);
		tb3 = '\01';
		tb4 = '\01';
		tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2987, dtype))(Current)).it_b);
		if (!tb5) {
			tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2985, dtype))(Current)).it_b);
			tb4 = tb5;
		}
		if (!tb4) {
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2990, dtype))(Current)).it_b);
			tb3 = tb4;
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("old_absent", EX_POST);
		tb3 = '\01';
		tb4 = '\0';
		tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2987, dtype))(Current)).it_b);
		if (tb5) {
			uu4_1 = arg1;
			uu4_2 = arg2;
			tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2983, dtype))(Current, uu4_1x, uu4_2x)).it_b);
			tb4 = (EIF_BOOLEAN) !tb5;
		}
		if (tb4) {
			uu4_1 = arg2;
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2371, dtype))(Current, uu4_1x)).it_b);
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("new_present", EX_POST);
		tb3 = '\01';
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2987, dtype))(Current)).it_b);
		if (!tb4) {
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2985, dtype))(Current)).it_b);
			tb3 = tb4;
		}
		uu4_1 = arg1;
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2371, dtype))(Current, uu4_1x)).it_b);
		if ((EIF_BOOLEAN)(tb3 == tb4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("new_item", EX_POST);
		tb3 = '\01';
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2987, dtype))(Current)).it_b);
		if (tb4) {
			uu4_1 = arg1;
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, uu4_1x)).it_i4);
			RTCO(tr1);
			tb3 = ((EIF_BOOLEAN)(ti4_4 == ti4_2));
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("not_found_implies_no_old_key", EX_POST);
		tb3 = '\01';
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2990, dtype))(Current)).it_b);
		if (tb4) {
			RTCO(tr2);
			tb3 = tb1;
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("conflict_iff_already_present", EX_POST);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2985, dtype))(Current)).it_b);
		RTCO(tr3);
		if ((EIF_BOOLEAN)(tb3 == tb2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("not_inserted_if_conflict", EX_POST);
		tb3 = '\01';
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2985, dtype))(Current)).it_b);
		if (tb4) {
			uu4_1 = arg1;
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2974, dtype))(Current, uu4_1x)).it_i4);
			RTCO(tr4);
			tb3 = (EIF_BOOLEAN)(ti4_4 == ti4_3);
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef arg2
#undef arg1
}

/* {HASH_TABLE}.merge */
void F1626_3975 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "merge";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1625, Current, 2, 1, 16555);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16555);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,1625,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(2281, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = RTWCT(2374, dtype, Dftype(Current));
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		RTCC(arg1, 1625, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3711, "after", loc1))(loc1)).it_b);
		if (tb1) break;
		RTHOOK(3);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3710, "item", loc1))(loc1)).it_i4);
		ui4_1 = ti4_1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3768, "key", loc1))(loc1)).it_n4);
		uu4_1 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2373, dtype))(Current, ui4_1x, uu4_1x);
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3712, "forth", loc1))(loc1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("inserted", EX_POST);
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2280, "new_cursor", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		tb2 = EIF_TRUE;
		for (;;) {
			if (!tb2) break;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3711, "after", loc2))(loc2)).it_b);
			if (tb3) break;
			RTHOOK(7);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3768, "key", loc2))(loc2)).it_n4);
			uu4_1 = tu4_1;
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2371, dtype))(Current, uu4_1x)).it_b);
			tb2 = tb4;
			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3712, "forth", loc2))(loc2);
		}
		if (tb2) {
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
	RTLO(5);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef arg1
}

/* {HASH_TABLE}.remove */
void F1626_3976 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "remove";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	
	RTEAA(l_feature_name, 1625, Current, 6, 1, 16556);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16556);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		ti4_1 = ti4_2;
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		tb1 = tb2;
		in_assertion = 0;
	}
	RTHOOK(1);
	uu4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3039, dtype))(Current, uu4_1x);
	RTHOOK(2);
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2989, dtype))(Current)).it_b);
	if (tb2) {
		RTHOOK(3);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3017, dtype))(Current)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(4);
		if ((EIF_BOOLEAN)(arg1 == loc1)) {
			RTHOOK(5);
			RTDBGAA(Current, dtype, 3015, 0x04000000, 1); /* has_default */
			*(EIF_BOOLEAN *)(Current + RTWA(3015, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ub1 = (EIF_BOOLEAN) 1;
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2689, "put", tr1))(tr1, ub1x, ui4_1x);
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3023, dtype))(Current)).it_i4);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc3 + ti4_2);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype));
		ui4_2 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2689, "put", tr1))(tr1, ui4_1x, ui4_2x);
		RTHOOK(8);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == loc3)) {
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2996, dtype))(Current);
		}
		RTHOOK(10);
		RTDBGAA(Current, dtype, 3060, 0x10000000, 1); /* count */
		(*(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype)))--;
		RTHOOK(11);
		RTDBGAA(Current, dtype, 3024, 0x10000000, 1); /* ht_lowest_deleted_position */
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3024, dtype));
		ui4_1 = ti4_2;
		ti4_2 = eif_min_int32 (loc3,ui4_1);
		*(EIF_INTEGER_32 *)(Current + RTWA(3024, dtype)) = (EIF_INTEGER_32) ti4_2;
		RTHOOK(12);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3024, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
			RTHOOK(13);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(13,1);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(3024, dtype));
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 - ti4_3);
			RTHOOK(14);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(14,1);
			ui4_1 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2703, "remove_tail", tr1))(tr1, ui4_1x);
			RTHOOK(15);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(15,1);
			ui4_1 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2703, "remove_tail", tr1))(tr1, ui4_1x);
			RTHOOK(16);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(16,1);
			ub1 = (EIF_BOOLEAN) 0;
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3024, dtype));
			ui4_1 = ti4_2;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(16,2);
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr2))(tr2)).it_i4);
			ui4_2 = (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2693, "fill_with", tr1))(tr1, ub1x, ui4_1x, ui4_2x);
			RTHOOK(17);
			RTDBGAA(Current, dtype, 3025, 0x10000000, 0); /* ht_deleted_item */
			*(EIF_INTEGER_32 *)(Current + RTWA(3025, dtype)) = (EIF_INTEGER_32) loc2;
			RTHOOK(18);
			RTDBGAA(Current, dtype, 3026, 0x38000000, 0); /* ht_deleted_key */
			*(EIF_NATURAL_32 *)(Current + RTWA(3026, dtype)) = (EIF_NATURAL_32) loc1;
			RTHOOK(19);
			RTDBGAA(Current, dtype, 3024, 0x10000000, 1); /* ht_lowest_deleted_position */
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3021, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3024, dtype)) = (EIF_INTEGER_32) ti4_2;
		} else {
			RTHOOK(20);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3025, dtype));
			loc5 = ti4_2;
			tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(3026, dtype));
			loc6 = tu4_1;
			if ((EIF_BOOLEAN) ((EIF_TRUE) && (EIF_TRUE))) {
				RTHOOK(21);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(21,1);
				ui4_1 = loc5;
				ui4_2 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2689, "put", tr1))(tr1, ui4_1x, ui4_2x);
				RTHOOK(22);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(22,1);
				uu4_1 = loc6;
				ui4_1 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2689, "put", tr1))(tr1, uu4_1x, ui4_1x);
			} else {
				RTHOOK(23);
				RTDBGAA(Current, dtype, 3025, 0x10000000, 0); /* ht_deleted_item */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(23,1);
				ui4_1 = loc3;
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(3025, dtype)) = (EIF_INTEGER_32) ti4_2;
				RTHOOK(24);
				RTDBGAA(Current, dtype, 3026, 0x38000000, 0); /* ht_deleted_key */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(24,1);
				ui4_1 = loc3;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_n4);
				*(EIF_NATURAL_32 *)(Current + RTWA(3026, dtype)) = (EIF_NATURAL_32) tu4_1;
			}
		}
		RTHOOK(25);
		RTDBGAA(Current, dtype, 3019, 0x10000000, 1); /* control */
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3053, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype)) = (EIF_INTEGER_32) ti4_2;
		RTHOOK(26);
		RTDBGAA(Current, dtype, 2973, 0x10000000, 0); /* found_item */
		*(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype)) = (EIF_INTEGER_32) loc2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(27);
		RTCT("removed_or_not_found", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2988, dtype))(Current)).it_b);
		if (!tb3) {
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2990, dtype))(Current)).it_b);
			tb2 = tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("not_present", EX_POST);
		uu4_1 = arg1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2371, dtype))(Current, uu4_1x)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("one_less", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2989, dtype))(Current)).it_b);
		if (tb3) {
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
			tb2 = (EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(30);
		RTCT("default_case", EX_POST);
		tb2 = '\01';
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3037, dtype))(Current)).it_n4);
		if ((EIF_BOOLEAN)(arg1 == tu4_1)) {
			tb3 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(31);
		RTCT("non_default_case", EX_POST);
		tb2 = '\01';
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3037, dtype))(Current)).it_n4);
		if ((EIF_BOOLEAN)(arg1 != tu4_1)) {
			tb3 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
			tb2 = (EIF_BOOLEAN)(tb3 == tb1);
		}
		if (tb2) {
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
	RTLO(9);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef ub1
#undef arg1
}

/* {HASH_TABLE}.prune */
void F1626_3977 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "prune";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16557);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16557);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2336, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2329, dtype));
	if (tb1) {
		for (;;) {
			RTHOOK(3);
			tb1 = '\01';
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2991, dtype))(Current)).it_b);
			if (!tb2) {
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2978, dtype))(Current)).it_i4);
				tb1 = (ti4_1 == arg1);
			}
			if (tb1) break;
			RTHOOK(4);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2996, dtype))(Current);
		}
	} else {
		for (;;) {
			RTHOOK(5);
			tb2 = '\01';
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2991, dtype))(Current)).it_b);
			if (!tb3) {
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2978, dtype))(Current)).it_i4);
				tb2 = (EIF_BOOLEAN)(ti4_1 == arg1);
			}
			if (tb2) break;
			RTHOOK(6);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2996, dtype))(Current);
		}
	}
	RTHOOK(7);
	tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2991, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb3) {
		RTHOOK(8);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2979, dtype))(Current)).it_n4);
		uu4_1 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3006, dtype))(Current, uu4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef uu4_1
#undef arg1
}

/* {HASH_TABLE}.wipe_out */
void F1626_3978 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "wipe_out";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1625, Current, 1, 0, 16558);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16558);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2336, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2709, "wipe_out", tr1))(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2709, "wipe_out", tr1))(tr1);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ub1 = (EIF_BOOLEAN) 0;
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(4,2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2675, "upper", tr2))(tr2)).it_i4);
	ui4_2 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2693, "fill_with", tr1))(tr1, ub1x, ui4_1x, ui4_2x);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
	ui4_3 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2693, "fill_with", tr1))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 2973, 0x10000000, 0); /* found_item */
	*(EIF_INTEGER_32 *)(Current + RTWA(2973, dtype)) = (EIF_INTEGER_32) loc1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 3060, 0x10000000, 1); /* count */
	*(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 3014, 0x10000000, 1); /* item_position */
	*(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 3016, 0x10000000, 1); /* iteration_position */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(9,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 3019, 0x10000000, 1); /* control */
	*(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(11);
	RTDBGAA(Current, dtype, 3015, 0x04000000, 1); /* has_default */
	*(EIF_BOOLEAN *)(Current + RTWA(3015, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("wiped_out", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2327, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("position_equal_to_zero", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("count_equal_to_zero", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("has_default_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("no_status", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3057, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ub1
}

/* {HASH_TABLE}.clear_all */
void F1626_3979 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "clear_all";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16559);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16559);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2343, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HASH_TABLE}.linear_representation */
EIF_TYPED_VALUE F1626_3980 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "linear_representation";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1625, Current, 1, 0, 16560);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16560);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000259, 0,0); /* Result */
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,601,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(2281, dtype, Dftype(Current));
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLN(typres0.id);
	}
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3081, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2995, dtype))(Current);
	for (;;) {
		RTHOOK(4);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2992, dtype))(Current)).it_b);
		if (tb1) break;
		RTHOOK(5);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2978, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", Result))(Result, ui4_1x);
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2996, dtype))(Current);
	}
	RTHOOK(7);
	RTDBGAA(Current, dtype, 3016, 0x10000000, 1); /* iteration_position */
	*(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype)) = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("good_count", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2386, "count", Result))(Result)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
}

/* {HASH_TABLE}.copy */
void F1626_3981 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "copy";
	RTEX;
#define arg1 arg1x.it_r
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
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16561);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16561);
	RTCC(arg1, 1625, l_feature_name, 1, eif_new_type(Dftype(Current), 1), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_identity", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (!RTCEQ(arg1, Current)) {
		RTHOOK(4);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(19, dtype))(Current, ur1x);
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3010, "content", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3031, dtype))(Current, ur1x);
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3011, "keys", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3033, dtype))(Current, ur1x);
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3013, "deleted_marks", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3034, dtype))(Current, ur1x);
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3012, "indexes_map", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3035, dtype))(Current, ur1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {HASH_TABLE}.empty_duplicate */
EIF_TYPED_VALUE F1626_3982 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "empty_duplicate";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16562);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16562);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000659, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2970, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2329, dtype));
	if (tb1) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2331, "compare_objects", Result))(Result);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("empty_duplicate_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
#undef ui4_1
#undef arg1
}

/* {HASH_TABLE}.correct_mismatch */
void F1626_3983 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "correct_mismatch";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc12 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc13 = (EIF_BOOLEAN) 0;
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,loc8);
	RTLR(5,loc9);
	RTLR(6,loc10);
	RTLR(7,loc1);
	RTLR(8,tr3);
	RTLR(9,loc5);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_UINT32, &loc12);
	RTLU(SK_BOOL, &loc13);
	
	RTEAA(l_feature_name, 1625, Current, 13, 0, 16563);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16563);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2935, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = RTMS_EX_H("hash_table_version_64",21,855604276);
	ur1 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2371, "has", tr1))(tr1, ur1x)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2935, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tr2 = RTMS_EX_H("content",7,460700276);
		ur1 = tr2;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2974, "item", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc8 = RTCCL(tr2);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,593,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(2281, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc8 = RTRV(typres0,loc8);
		}
		if (EIF_TEST(loc8)) {
			RTHOOK(3);
			RTDBGAA(Current, dtype, 3010, 0xF8000253, 0); /* content */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2156, "area", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(3010, dtype)) = (EIF_REFERENCE) tr1;
		}
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2935, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tr2 = RTMS_EX_H("keys",4,1801812339);
		ur1 = tr2;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2974, "item", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc9 = RTCCL(tr2);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,501,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = RTWCT(2374, dtype, dftype);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc9 = RTRV(typres0,loc9);
		}
		if (EIF_TEST(loc9)) {
			RTHOOK(5);
			RTDBGAA(Current, dtype, 3011, 0xF80001F3, 0); /* keys */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2156, "area", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(3011, dtype)) = (EIF_REFERENCE) tr1;
		}
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2935, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		tr2 = RTMS_EX_H("deleted_marks",13,2142169971);
		ur1 = tr2;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2974, "item", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc10 = RTCCL(tr2);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,555,203,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc10 = RTRV(typres0,loc10);
		}
		if (EIF_TEST(loc10)) {
			RTHOOK(7);
			RTDBGAA(Current, dtype, 3013, 0xF800022F, 0); /* deleted_marks */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2156, "area", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(3013, dtype)) = (EIF_REFERENCE) tr1;
		}
		RTHOOK(8);
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb3 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb3) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2935, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			tr2 = RTMS_EX_H("hash_table_version_57",21,855604023);
			ur1 = tr2;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2371, "has", tr1))(tr1, ur1x)).it_b);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,2);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,3);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
			tb1 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
		}
		if (tb1) {
			RTHOOK(9);
			RTDBGAL(1, 0xF800022F, 0, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(10);
			RTDBGAA(Current, dtype, 3013, 0xF800022F, 0); /* deleted_marks */
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr2))(tr2)).it_i4);
			ui4_1 = ti4_1;
			if (ui4_1< 0) {
				eraise ("non_negative_argument", EN_RT_CHECK);
			}
			tr1 = RTLNSP2(RTWCT(3013, dtype, dftype).id,0,ui4_1,sizeof(EIF_BOOLEAN), EIF_TRUE);
			RT_SPECIAL_COUNT(tr1) = 0;
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(3013, dtype)) = (EIF_REFERENCE) tr1;
			RTHOOK(11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			ur1 = loc1;
			ui4_2 = ((EIF_INTEGER_32) 0L);
			ui4_3 = ((EIF_INTEGER_32) 0L);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", loc1))(loc1)).it_i4);
			ui4_4 = ti4_2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2696, "copy_data", tr1))(tr1, ur1x, ui4_2x, ui4_3x, ui4_4x);
		}
		RTHOOK(12);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2935, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		tr3 = RTMS_EX_H("count",5,1870727284);
		ur1 = tr3;
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2974, "item", tr2))(tr2, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr1 = RTCCL(tr3);
		RTOB(*(EIF_INTEGER_32 *), eif_new_type(218, 0x00), tr1, loc11, tb1);
		if (tb1) {
			RTHOOK(13);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) loc11;
		}
		RTHOOK(14);
		tb1 = '\01';
		tb2 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (!(EIF_BOOLEAN)(tr1 == NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb2 = (EIF_BOOLEAN)(tr1 == NULL);
		}
		if (!tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 == NULL);
		}
		if (tb1) {
			RTHOOK(15);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2934, 156))(Current);
		} else {
			RTHOOK(16);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(16,1);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(17);
			RTDBGAL(5, 0xF8000659, 0, 0); /* loc5 */
			ui4_2 = loc4;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3008, dtype))(Current, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
			for (;;) {
				RTHOOK(18);
				if ((EIF_BOOLEAN)(loc2 == loc3)) break;
				RTHOOK(19);
				tb1 = '\0';
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(19,1);
				ui4_2 = loc2;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_2x)).it_n4);
				loc12 = tu4_1;
				if ((EIF_TRUE)) {
					tb1 = (EIF_BOOLEAN)(loc12 != loc7);
				}
				if (tb1) {
					RTHOOK(20);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(20,1);
					ui4_2 = loc2;
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_2x)).it_i4);
					ui4_2 = ti4_2;
					uu4_1 = loc12;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", loc5))(loc5, ui4_2x, uu4_1x);
				}
				RTHOOK(21);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
			}
			RTHOOK(22);
			tb1 = '\0';
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2935, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(22,1);
			tr3 = RTMS_EX_H("has_default",11,1777575796);
			ur1 = tr3;
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2974, "item", tr2))(tr2, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr1 = RTCCL(tr3);
			RTOB(*(EIF_BOOLEAN *), eif_new_type(203, 0x00), tr1, loc13, tb2);
			if (tb2) {
				tb1 = loc13;
			}
			if (tb1) {
				RTHOOK(23);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(23,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(23,2);
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2080, "capacity", tr2))(tr2)).it_i4);
				ui4_2 = (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L));
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_2x)).it_i4);
				ui4_2 = ti4_2;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(23,3);
				ui4_3 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_3x)).it_n4);
				uu4_1 = tu4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", loc5))(loc5, ui4_2x, uu4_1x);
			}
			RTHOOK(24);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3010, "content", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3031, dtype))(Current, ur1x);
			RTHOOK(25);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3011, "keys", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3033, dtype))(Current, ur1x);
			RTHOOK(26);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3013, "deleted_marks", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3034, dtype))(Current, ur1x);
			RTHOOK(27);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3012, "indexes_map", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3035, dtype))(Current, ur1x);
			RTHOOK(28);
			RTDBGAA(Current, dtype, 2982, 0x10000000, 1); /* capacity */
			ti4_2 = *(EIF_INTEGER_32 *)(loc5 + RTVA(2982, "capacity", loc5));
			*(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype)) = (EIF_INTEGER_32) ti4_2;
			RTHOOK(29);
			RTDBGAA(Current, dtype, 3016, 0x10000000, 1); /* iteration_position */
			ti4_2 = *(EIF_INTEGER_32 *)(loc5 + RTVA(3016, "iteration_position", loc5));
			*(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype)) = (EIF_INTEGER_32) ti4_2;
			RTHOOK(30);
			RTDBGAA(Current, dtype, 3020, 0x10000000, 1); /* deleted_item_position */
			ti4_2 = *(EIF_INTEGER_32 *)(loc5 + RTVA(3020, "deleted_item_position", loc5));
			*(EIF_INTEGER_32 *)(Current + RTWA(3020, dtype)) = (EIF_INTEGER_32) ti4_2;
			RTHOOK(31);
			RTDBGAA(Current, dtype, 3014, 0x10000000, 1); /* item_position */
			ti4_2 = *(EIF_INTEGER_32 *)(loc5 + RTVA(3014, "item_position", loc5));
			*(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype)) = (EIF_INTEGER_32) ti4_2;
			RTHOOK(32);
			RTDBGAA(Current, dtype, 3024, 0x10000000, 1); /* ht_lowest_deleted_position */
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3021, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3024, dtype)) = (EIF_INTEGER_32) ti4_2;
			RTHOOK(33);
			RTDBGAA(Current, dtype, 3025, 0x10000000, 0); /* ht_deleted_item */
			*(EIF_INTEGER_32 *)(Current + RTWA(3025, dtype)) = (EIF_INTEGER_32) loc6;
			RTHOOK(34);
			RTDBGAA(Current, dtype, 3026, 0x38000000, 0); /* ht_deleted_key */
			*(EIF_NATURAL_32 *)(Current + RTWA(3026, dtype)) = (EIF_NATURAL_32) loc7;
		}
		RTHOOK(35);
		RTDBGAA(Current, dtype, 3019, 0x10000000, 1); /* control */
		*(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(36);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
}

/* {HASH_TABLE}.hash_table_version_64 */
EIF_TYPED_VALUE F1626_3984 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(3009,Dtype(Current)));
	return r;
}


/* {HASH_TABLE}.content */
EIF_TYPED_VALUE F1626_3985 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3010,Dtype(Current)));
	return r;
}


/* {HASH_TABLE}.keys */
EIF_TYPED_VALUE F1626_3986 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3011,Dtype(Current)));
	return r;
}


/* {HASH_TABLE}.indexes_map */
EIF_TYPED_VALUE F1626_3987 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3012,Dtype(Current)));
	return r;
}


/* {HASH_TABLE}.deleted_marks */
EIF_TYPED_VALUE F1626_3988 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3013,Dtype(Current)));
	return r;
}


/* {HASH_TABLE}.item_position */
EIF_TYPED_VALUE F1626_3989 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3014,Dtype(Current)));
	return r;
}


/* {HASH_TABLE}.has_default */
EIF_TYPED_VALUE F1626_3990 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(3015,Dtype(Current)));
	return r;
}


/* {HASH_TABLE}.iteration_position */
EIF_TYPED_VALUE F1626_3991 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3016,Dtype(Current)));
	return r;
}


/* {HASH_TABLE}.position */
EIF_TYPED_VALUE F1626_3992 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "position";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16572);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16572);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype));
	ui4_1 = ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
}

/* {HASH_TABLE}.soon_full */
EIF_TYPED_VALUE F1626_3993 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "soon_full";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16573);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16573);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,2);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2080, "capacity", tr1))(tr1)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result = (keys.count = keys.capacity)", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,2);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2080, "capacity", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti4_1 == ti4_2))) {
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {HASH_TABLE}.control */
EIF_TYPED_VALUE F1626_3994 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3019,Dtype(Current)));
	return r;
}


/* {HASH_TABLE}.deleted_item_position */
EIF_TYPED_VALUE F1626_3995 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3020,Dtype(Current)));
	return r;
}


/* {HASH_TABLE}.ht_max_position */
EIF_TYPED_VALUE F1626_3996 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
	return r;
}

/* {HASH_TABLE}.ht_impossible_position */
EIF_TYPED_VALUE F1626_3997 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	return r;
}

/* {HASH_TABLE}.ht_deleted_position */
EIF_TYPED_VALUE F1626_3998 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -2L);
	return r;
}

/* {HASH_TABLE}.ht_lowest_deleted_position */
EIF_TYPED_VALUE F1626_3999 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3024,Dtype(Current)));
	return r;
}


/* {HASH_TABLE}.ht_deleted_item */
EIF_TYPED_VALUE F1626_4000 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3025,Dtype(Current)));
	return r;
}


/* {HASH_TABLE}.ht_deleted_key */
EIF_TYPED_VALUE F1626_4001 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(3026,Dtype(Current)));
	return r;
}


/* {HASH_TABLE}.deleted_position */
EIF_TYPED_VALUE F1626_4002 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "deleted_position";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16582);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16582);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("deleted", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3032, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ui4_1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3023, dtype))(Current)).it_i4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -ti4_1 + ti4_2);
	RTHOOK(3);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_min_int32 (Result,ui4_1);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("deleted_position_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("deleted_position_valid", EX_POST);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN) (Result <= ti4_1)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,2);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
			tb1 = (EIF_BOOLEAN) (Result <= ti4_1);
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {HASH_TABLE}.occupied */
EIF_TYPED_VALUE F1626_4003 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "occupied";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16583);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16583);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_bounds", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2081, "valid_index", tr1))(tr1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
		ui4_1 = ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_i4);
		if ((EIF_BOOLEAN)(arg1 != ti4_1)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(3,2);
			ui4_1 = arg1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(4);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_b);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {HASH_TABLE}.truly_occupied */
EIF_TYPED_VALUE F1626_4004 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "truly_occupied";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16584);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16584);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L))) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
		tb1 = (EIF_BOOLEAN) (arg1 < ti4_1);
	}
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tb1 = '\01';
		tb2 = '\0';
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		if (tb3) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(2,1);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
			ui4_1 = ti4_1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_i4);
			tb2 = (EIF_BOOLEAN)(arg1 == ti4_1);
		}
		if (!(tb2)) {
			ui4_1 = arg1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3028, dtype))(Current, ui4_1x)).it_b);
			tb1 = tb2;
		}
		Result = (EIF_BOOLEAN) tb1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("normal_key", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tb3 = '\0';
		if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L))) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(3,1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
			tb3 = (EIF_BOOLEAN) (arg1 < ti4_1);
		}
		if (tb3) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(3,2);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
			ui4_1 = ti4_1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_i4);
			tb2 = (EIF_BOOLEAN)(arg1 != ti4_1);
		}
		if (tb2) {
			tb2 = '\01';
			ui4_1 = arg1;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3028, dtype))(Current, ui4_1x)).it_b);
			if (tb3) {
				tb2 = Result;
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("default_key", EX_POST);
		tb1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
		ui4_1 = ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_i4);
		if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
			tb1 = (EIF_BOOLEAN)(Result == tb2);
		}
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {HASH_TABLE}.is_off_position */
EIF_TYPED_VALUE F1626_4005 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_off_position";
	RTEX;
#define arg1 arg1x.it_i4
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
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16585);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16585);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	if (!(EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
		tb1 = (EIF_BOOLEAN) (arg1 >= ti4_1);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef arg1
}

/* {HASH_TABLE}.set_content */
void F1626_4006 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_content";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16586);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16586);
	RTCC(arg1, 1625, l_feature_name, 1, RTWCT(3010, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3010, 0xF8000253, 0); /* content */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(3010, dtype)) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("content_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {HASH_TABLE}.deleted */
EIF_TYPED_VALUE F1626_4007 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "deleted";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16587);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16587);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_bounds", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= ti4_1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ui4_1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3023, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 <= ti4_2);
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
#undef ui4_1
#undef arg1
}

/* {HASH_TABLE}.set_keys */
void F1626_4008 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_keys";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16588);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16588);
	RTCC(arg1, 1625, l_feature_name, 1, RTWCT(3011, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3011, 0xF80001F3, 0); /* keys */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(3011, dtype)) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("keys_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {HASH_TABLE}.set_deleted_marks */
void F1626_4009 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_deleted_marks";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16589);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16589);
	RTCC(arg1, 1625, l_feature_name, 1, RTWCT(3013, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3013, 0xF800022F, 0); /* deleted_marks */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(3013, dtype)) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("deleted_marks_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {HASH_TABLE}.set_indexes_map */
void F1626_4010 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_indexes_map";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16590);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16590);
	RTCC(arg1, 1625, l_feature_name, 1, RTWCT(3012, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3012, 0xF8000253, 0); /* indexes_map */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(3012, dtype)) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("indexes_map_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
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
#undef up1
#undef arg1
}

/* {HASH_TABLE}.default_key_value */
EIF_TYPED_VALUE F1626_4011 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_key_value";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16591);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16591);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("has_default", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
	ui4_1 = ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr2))(tr2, ui4_1x)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef ui4_1
}

/* {HASH_TABLE}.computed_default_key */
EIF_TYPED_VALUE F1626_4012 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "computed_default_key";
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16592);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16592);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
}

/* {HASH_TABLE}.computed_default_value */
EIF_TYPED_VALUE F1626_4013 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "computed_default_value";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16593);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16593);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {HASH_TABLE}.internal_search */
void F1626_4014 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "internal_search";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc12 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,tr1);
	RTLR(3,loc10);
	RTLR(4,loc11);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_UINT32, &loc12);
	
	RTEAA(l_feature_name, 1625, Current, 12, 1, 16594);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16594);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
	loc7 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 3014, 0x10000000, 1); /* item_position */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
		*(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
		if (tb1) {
			RTHOOK(5);
			RTDBGAA(Current, dtype, 3019, 0x10000000, 1); /* control */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3046, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype)) = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(6);
			RTDBGAA(Current, dtype, 3019, 0x10000000, 1); /* control */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3050, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype)) = (EIF_INTEGER_32) ti4_1;
		}
	} else {
		RTHOOK(7);
		RTDBGAL(9, 0xF80001F3, 0, 0); /* loc9 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc9 = (EIF_REFERENCE) tr1;
		RTHOOK(8);
		RTDBGAL(10, 0xF8000253, 0, 0); /* loc10 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc10 = (EIF_REFERENCE) tr1;
		RTHOOK(9);
		RTDBGAL(11, 0xF800022F, 0, 0); /* loc11 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc11 = (EIF_REFERENCE) tr1;
		RTHOOK(10);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(11);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		loc8 = (EIF_INTEGER_32) loc6;
		RTHOOK(12);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		uu4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2981, dtype))(Current, uu4_1x)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(13);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(14);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		RTHOOK(15);
		RTDBGAA(Current, dtype, 3019, 0x10000000, 1); /* control */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3050, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype)) = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(16);
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(17);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			RTHOOK(18);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ui4_1 = loc5;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc10))(loc10, ui4_1x)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(19);
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(20);
				RTDBGAL(12, 0x38000000, 0, 0); /* loc12 */
				ui4_1 = loc4;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc9))(loc9, ui4_1x)).it_n4);
				loc12 = (EIF_NATURAL_32) tu4_1;
				if (
					WDBG(1625,"detect_hash_table_catcall")
				) {
					if (RTAL & CK_CHECK) {
						RTHOOK(21);
						RTCT("catcall_detected", EX_CHECK);
						tb1 = '\0';
						if (EIF_TRUE) {
							ur1 = RTLN(eif_new_type(212, 0x00).id);
							*(EIF_NATURAL_32 *)ur1 = arg1;
							tr1 = RTLN(eif_new_type(212, 0x00).id);
							*(EIF_NATURAL_32 *)tr1 = loc12;
							tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", tr1))(tr1, ur1x)).it_b);
							tb1 = tb2;
						}
						if (tb1) {
							RTCK;
						} else {
							RTCF;
						}
					}
				}
				RTHOOK(22);
				uu4_1 = loc12;
				uu4_2 = arg1;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2983, dtype))(Current, uu4_1x, uu4_2x)).it_b);
				if (tb1) {
					RTHOOK(23);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(24);
					RTDBGAA(Current, dtype, 3019, 0x10000000, 1); /* control */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3046, dtype))(Current)).it_i4);
					*(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype)) = (EIF_INTEGER_32) ti4_1;
				}
			} else {
				RTHOOK(25);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
				if ((EIF_BOOLEAN)(loc4 == ti4_1)) {
					RTHOOK(26);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(27);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
					if ((EIF_BOOLEAN)(loc7 == ti4_1)) {
						RTHOOK(28);
						RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3023, dtype))(Current)).it_i4);
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ti4_1);
						if (RTAL & CK_CHECK) {
							RTHOOK(29);
							RTCT("l_pos_valid", EX_CHECK);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", loc11))(loc11)).it_i4);
							if ((EIF_BOOLEAN) (loc4 < ti4_1)) {
								RTCK;
							} else {
								RTCF;
							}
						}
						RTHOOK(30);
						ui4_1 = loc4;
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc11))(loc11, ui4_1x)).it_b);
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(31);
							RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							RTHOOK(32);
							RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			RTHOOK(33);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			loc8--;
		}
		RTHOOK(34);
		RTDBGAA(Current, dtype, 3014, 0x10000000, 1); /* item_position */
		*(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype)) = (EIF_INTEGER_32) loc5;
	}
	RTHOOK(35);
	RTDBGAA(Current, dtype, 3020, 0x10000000, 1); /* deleted_item_position */
	*(EIF_INTEGER_32 *)(Current + RTWA(3020, dtype)) = (EIF_INTEGER_32) loc7;
	if (RTAL & CK_ENSURE) {
		RTHOOK(36);
		RTCT("found_or_not_found", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2989, dtype))(Current)).it_b);
		if (!tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2990, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(37);
		RTCT("deleted_item_at_deleted_position", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3020, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3020, dtype));
			ui4_1 = ti4_1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3032, dtype))(Current, ui4_1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(38);
		RTCT("default_iff_at_capacity", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3037, dtype))(Current)).it_n4);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 == ti4_2) == (EIF_BOOLEAN)(arg1 == tu4_1))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(39);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef arg1
}

/* {HASH_TABLE}.search_for_insertion */
void F1626_4015 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "search_for_insertion";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,tr1);
	RTLR(3,loc10);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	
	RTEAA(l_feature_name, 1625, Current, 10, 1, 16595);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16595);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_present", EX_PRE);
		uu4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2371, dtype))(Current, uu4_1x)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
	loc7 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		if (RTAL & CK_CHECK) {
			RTHOOK(4);
			RTCT("not has_default", EX_CHECK);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3015, dtype));
			if ((EIF_BOOLEAN) !tb1) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(5);
		RTDBGAA(Current, dtype, 3014, 0x10000000, 1); /* item_position */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
		*(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype)) = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(6);
		RTDBGAL(9, 0xF8000253, 0, 0); /* loc9 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3012, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc9 = (EIF_REFERENCE) tr1;
		RTHOOK(7);
		RTDBGAL(10, 0xF800022F, 0, 0); /* loc10 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3013, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc10 = (EIF_REFERENCE) tr1;
		RTHOOK(8);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
		loc8 = (EIF_INTEGER_32) loc6;
		RTHOOK(10);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		uu4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2981, dtype))(Current, uu4_1x)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(11);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(12);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(14);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			RTHOOK(15);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ui4_1 = loc5;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc9))(loc9, ui4_1x)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(16);
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
			} else {
				RTHOOK(17);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
				if ((EIF_BOOLEAN)(loc4 == ti4_1)) {
					RTHOOK(18);
					RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(19);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
					if ((EIF_BOOLEAN)(loc7 == ti4_1)) {
						RTHOOK(20);
						RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3023, dtype))(Current)).it_i4);
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ti4_1);
						if (RTAL & CK_CHECK) {
							RTHOOK(21);
							RTCT("l_pos_valid", EX_CHECK);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", loc10))(loc10)).it_i4);
							if ((EIF_BOOLEAN) (loc4 < ti4_1)) {
								RTCK;
							} else {
								RTCF;
							}
						}
						RTHOOK(22);
						ui4_1 = loc4;
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", loc10))(loc10, ui4_1x)).it_b);
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(23);
							RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							RTHOOK(24);
							RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			RTHOOK(25);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			loc8--;
		}
		RTHOOK(26);
		RTDBGAA(Current, dtype, 3014, 0x10000000, 1); /* item_position */
		*(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype)) = (EIF_INTEGER_32) loc5;
	}
	RTHOOK(27);
	RTDBGAA(Current, dtype, 3020, 0x10000000, 1); /* deleted_item_position */
	*(EIF_INTEGER_32 *)(Current + RTWA(3020, dtype)) = (EIF_INTEGER_32) loc7;
	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("deleted_item_at_deleted_position", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3020, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3022, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3020, dtype));
			ui4_1 = ti4_1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3032, dtype))(Current, ui4_1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("default_iff_at_capacity", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3014, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3037, dtype))(Current)).it_n4);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(ti4_1 == ti4_2) == (EIF_BOOLEAN)(arg1 == tu4_1))) {
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
	RTLO(13);
	RTEE;
#undef up1
#undef ui4_1
#undef uu4_1
#undef arg1
}

/* {HASH_TABLE}.key_at */
EIF_TYPED_VALUE F1626_4016 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "key_at";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16596);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16596);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ui4_1 = arg1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2081, "valid_index", tr1))(tr1, ui4_1x)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0x38000000, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ui4_1 = arg1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_n4);
		Result = (EIF_NATURAL_32) tu4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {HASH_TABLE}.initial_position */
EIF_TYPED_VALUE F1626_4017 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "initial_position";
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16597);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16597);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 % ti4_1);
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

/* {HASH_TABLE}.position_increment */
EIF_TYPED_VALUE F1626_4018 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "position_increment";
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16598);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16598);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (arg1 % (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
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

/* {HASH_TABLE}.conflict_constant */
EIF_TYPED_VALUE F1626_4019 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {HASH_TABLE}.set_conflict */
void F1626_4020 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_conflict";
	RTEX;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16600);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16600);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3019, 0x10000000, 1); /* control */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3044, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("conflict", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2985, dtype))(Current)).it_b);
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
	RTLO(2);
	RTEE;
}

/* {HASH_TABLE}.found_constant */
EIF_TYPED_VALUE F1626_4021 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {HASH_TABLE}.set_found */
void F1626_4022 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_found";
	RTEX;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16602);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16602);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3019, 0x10000000, 1); /* control */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3046, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("found", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2989, dtype))(Current)).it_b);
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
	RTLO(2);
	RTEE;
}

/* {HASH_TABLE}.inserted_constant */
EIF_TYPED_VALUE F1626_4023 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {HASH_TABLE}.set_inserted */
void F1626_4024 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_inserted";
	RTEX;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16604);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16604);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3019, 0x10000000, 1); /* control */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3048, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("inserted", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2986, dtype))(Current)).it_b);
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
	RTLO(2);
	RTEE;
}

/* {HASH_TABLE}.not_found_constant */
EIF_TYPED_VALUE F1626_4025 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {HASH_TABLE}.set_not_found */
void F1626_4026 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_not_found";
	RTEX;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16606);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16606);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3019, 0x10000000, 1); /* control */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3050, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_found", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2990, dtype))(Current)).it_b);
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
	RTLO(2);
	RTEE;
}

/* {HASH_TABLE}.set_no_status */
void F1626_4027 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_no_status";
	RTEX;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16607);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16607);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3019, 0x10000000, 1); /* control */
	*(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("default_status", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3057, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
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
	RTLO(2);
	RTEE;
}

/* {HASH_TABLE}.removed_constant */
EIF_TYPED_VALUE F1626_4028 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	return r;
}

/* {HASH_TABLE}.set_removed */
void F1626_4029 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_removed";
	RTEX;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16609);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16609);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3019, 0x10000000, 1); /* control */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3053, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("removed", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2988, dtype))(Current)).it_b);
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
	RTLO(2);
	RTEE;
}

/* {HASH_TABLE}.replaced_constant */
EIF_TYPED_VALUE F1626_4030 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	return r;
}

/* {HASH_TABLE}.set_replaced */
void F1626_4031 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_replaced";
	RTEX;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16611);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16611);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3019, 0x10000000, 1); /* control */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3055, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("replaced", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2987, dtype))(Current)).it_b);
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
	RTLO(2);
	RTEE;
}

/* {HASH_TABLE}.special_status */
EIF_TYPED_VALUE F1626_4032 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "special_status";
	RTEX;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16612);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16612);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result = (control > 0)", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype));
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)))) {
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {HASH_TABLE}.add_space */
void F1626_4033 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "add_space";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 0, 16613);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16613);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
	ui4_1 = (EIF_INTEGER_32) (ti4_2 + (EIF_INTEGER_32) (ti4_3 / ((EIF_INTEGER_32) 2L)));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2972, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("count_not_changed", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("breathing_space", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
		if ((EIF_BOOLEAN) (ti4_2 < ti4_3)) {
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
#undef ui4_1
}

/* {HASH_TABLE}.minimum_capacity */
EIF_TYPED_VALUE F1626_4034 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {HASH_TABLE}.collection_extend */
void F1626_4035 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "collection_extend";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1625, Current, 0, 1, 16615);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1625, Current, 16615);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2335, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("item_inserted", EX_POST);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2337, dtype))(Current, ui4_1x)).it_b);
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
	RTLO(3);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {HASH_TABLE}._invariant */
void F1626_7179 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 1625, Current, 0, 7178);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("keys_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("content_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("keys_enough_capacity", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3011, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
	if ((EIF_BOOLEAN) (ti4_1 <= (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("content_enough_capacity", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3010, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2079, "count", tr1))(tr1)).it_i4);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
	if ((EIF_BOOLEAN) (ti4_1 <= (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_iteration_position", Current);
	tb1 = '\01';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2992, dtype))(Current)).it_b);
	if (!tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3016, dtype));
		ui4_1 = ti4_1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3029, dtype))(Current, ui4_1x)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("control_non_negative", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3019, dtype));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("special_status", Current);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3057, dtype))(Current)).it_b);
	tb2 = '\01';
	tb3 = '\01';
	tb4 = '\01';
	tb5 = '\01';
	tb6 = '\01';
	tb7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2985, dtype))(Current)).it_b);
	if (!tb7) {
		tb7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2986, dtype))(Current)).it_b);
		tb6 = tb7;
	}
	if (!tb6) {
		tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2987, dtype))(Current)).it_b);
		tb5 = tb6;
	}
	if (!tb5) {
		tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2988, dtype))(Current)).it_b);
		tb4 = tb5;
	}
	if (!tb4) {
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2989, dtype))(Current)).it_b);
		tb3 = tb4;
	}
	if (!tb3) {
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2990, dtype))(Current)).it_b);
		tb2 = tb3;
	}
	if ((EIF_BOOLEAN)(tb1 == tb2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("count_big_enough", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
	if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= ti4_1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("count_small_enough", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2982, dtype));
	if ((EIF_BOOLEAN) (ti4_1 <= ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("slot_count_big_enough", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3060, dtype));
	if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= ti4_1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
#undef ui4_1
}

void EIF_Minit1626 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
