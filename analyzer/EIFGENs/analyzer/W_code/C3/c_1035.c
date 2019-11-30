/*
 * Code for class C_DATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1035_9922(EIF_REFERENCE);
extern void F1035_9923(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1035_9924(EIF_REFERENCE);
extern void F1035_9925(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1035_9926(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1035_9927(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1035_9928(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1035_9929(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1035_9930(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1035_9931(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1035_9932(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1035_9933(EIF_REFERENCE);
extern void F1035_9934(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1035_9935(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1035_9936(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1035_9937(EIF_REFERENCE);
extern void F1035_9938(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1035_9939(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1035_9940(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1035_9941(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1035_9942(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1035_9943(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1035_9944(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1035_9945(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1035_9946(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1035_9947(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1035_9948(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1035(void);

#ifdef __cplusplus
}
#endif

#include <string.h>
#include "eif_time.h"
#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1035_9934
static void inline_F1035_9934 (EIF_POINTER arg1)
{
	#ifdef EIF_WINDOWS
    			static const uint64_t EPOCH = ((uint64_t) 116444736000000000ULL);

				SYSTEMTIME  system_time;
				FILETIME    file_time;
				uint64_t    time;
				struct timeval *tp = (struct timeval *) arg1;

				GetSystemTime (&system_time );
				SystemTimeToFileTime (&system_time, &file_time );
				time = ((uint64_t) file_time.dwLowDateTime );
				time += ((uint64_t) file_time.dwHighDateTime) << 32;

				tp->tv_sec  = (long) ((time - EPOCH) / 10000000L);
				tp->tv_usec = (long) (system_time.wMilliseconds * 1000);
			#else
				gettimeofday((struct timeval *) arg1, NULL);
			#endif
	;
}
#define INLINE_F1035_9934
#endif
#ifndef INLINE_F1035_9938
static void inline_F1035_9938 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	*(time_t *) arg2 = (((struct timeval *)arg1)->tv_sec);
	;
}
#define INLINE_F1035_9938
#endif
#ifndef INLINE_F1035_9941
static EIF_POINTER inline_F1035_9941 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (localtime ((time_t *) arg1))
	;
}
#define INLINE_F1035_9941
#endif
#ifndef INLINE_F1035_9942
static EIF_POINTER inline_F1035_9942 (EIF_POINTER arg1)
{
	return (EIF_POINTER) (gmtime ((time_t *) arg1))
	;
}
#define INLINE_F1035_9942
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {C_DATE}.default_create */
void F1035_9922 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
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
	
	RTEAA(l_feature_name, 1034, Current, 0, 0, 16275);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1034, Current, 16275);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7709, 0x04000000, 1); /* is_utc */
	*(EIF_BOOLEAN *)(Current + RTWA(7709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7710, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {C_DATE}.make_utc */
void F1035_9923 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_utc";
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
	
	RTEAA(l_feature_name, 1034, Current, 0, 0, 16276);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1034, Current, 16276);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7709, 0x04000000, 1); /* is_utc */
	*(EIF_BOOLEAN *)(Current + RTWA(7709, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7710, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_utc", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7709, dtype));
		if (tb1) {
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
}

/* {C_DATE}.is_utc */
EIF_TYPED_VALUE F1035_9924 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7709,Dtype(Current)));
	return r;
}


/* {C_DATE}.update */
void F1035_9925 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "update";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
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
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_POINTER, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 1034, Current, 4, 0, 16278);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1034, Current, 16278);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7720, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	tp1 = malloc((size_t)ui4_1);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(2);
	RTDBGAL(3, 0x40000000, 1, 0); /* loc3 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7721, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	tp1 = malloc((size_t)ui4_1);
	loc3 = (EIF_POINTER) tp1;
	RTHOOK(3);
	up1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7719, dtype))(Current, up1x);
	RTHOOK(4);
	up1 = loc1;
	up2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7723, dtype))(Current, up1x, up2x);
	RTHOOK(5);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7709, dtype));
	if (tb1) {
		RTHOOK(6);
		RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
		up1 = loc3;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7727, dtype))(Current, up1x)).it_p);
		loc2 = (EIF_POINTER) tp1;
	} else {
		RTHOOK(7);
		RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
		up1 = loc3;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7726, dtype))(Current, up1x)).it_p);
		loc2 = (EIF_POINTER) tp1;
	}
	RTHOOK(8);
	RTDBGAA(Current, dtype, 7725, 0xF80000AB, 0); /* internal_item */
	tr1 = RTLNSMART(RTWCT(7725, dtype, Dftype(Current)).id);
	up1 = loc2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7722, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3278, Dtype(tr1)))(tr1, up1x, ui4_1x);
	RTNHOOK(8,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7725, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	up1 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7724, dtype))(Current, up1x)).it_i4);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(10);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc4 < ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 999999L)))) {
		RTHOOK(11);
		RTDBGAA(Current, dtype, 7718, 0x10000000, 1); /* microseconds_now */
		*(EIF_INTEGER_32 *)(Current + RTWA(7718, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(12);
		RTDBGAA(Current, dtype, 7718, 0x10000000, 1); /* microseconds_now */
		*(EIF_INTEGER_32 *)(Current + RTWA(7718, dtype)) = (EIF_INTEGER_32) loc4;
	}
	RTHOOK(13);
	free(loc3);
	RTHOOK(14);
	free(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
}

/* {C_DATE}.year_now */
EIF_TYPED_VALUE F1035_9926 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "year_now";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 1034, Current, 0, 0, 16279);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1034, Current, 16279);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7725, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tp1 = *(EIF_POINTER *)(tr1 + RTVA(3282, "item", tr1));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7728, dtype))(Current, up1x)).it_i4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1900L) + ti4_1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("year_valid", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1900L))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {C_DATE}.month_now */
EIF_TYPED_VALUE F1035_9927 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "month_now";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 1034, Current, 0, 0, 16280);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1034, Current, 16280);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7725, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tp1 = *(EIF_POINTER *)(tr1 + RTVA(3282, "item", tr1));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7729, dtype))(Current, up1x)).it_i4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("month_valid", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 12L)))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {C_DATE}.day_now */
EIF_TYPED_VALUE F1035_9928 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "day_now";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 1034, Current, 0, 0, 16281);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1034, Current, 16281);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7725, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tp1 = *(EIF_POINTER *)(tr1 + RTVA(3282, "item", tr1));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7730, dtype))(Current, up1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("day_valid", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 31L)))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {C_DATE}.hour_now */
EIF_TYPED_VALUE F1035_9929 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "hour_now";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 1034, Current, 0, 0, 16282);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1034, Current, 16282);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7725, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tp1 = *(EIF_POINTER *)(tr1 + RTVA(3282, "item", tr1));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7731, dtype))(Current, up1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("hour_valid", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 23L)))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {C_DATE}.minute_now */
EIF_TYPED_VALUE F1035_9930 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "minute_now";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 1034, Current, 0, 0, 16283);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1034, Current, 16283);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7725, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tp1 = *(EIF_POINTER *)(tr1 + RTVA(3282, "item", tr1));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7732, dtype))(Current, up1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("minute_valid", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 59L)))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {C_DATE}.second_now */
EIF_TYPED_VALUE F1035_9931 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "second_now";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 1034, Current, 0, 0, 16284);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1034, Current, 16284);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7725, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tp1 = *(EIF_POINTER *)(tr1 + RTVA(3282, "item", tr1));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7733, dtype))(Current, up1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 59L))) {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("second_valid", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 59L)))) {
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {C_DATE}.millisecond_now */
EIF_TYPED_VALUE F1035_9932 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "millisecond_now";
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
	
	RTEAA(l_feature_name, 1034, Current, 0, 0, 16285);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1034, Current, 16285);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7718, dtype));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 1000L));
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

/* {C_DATE}.microseconds_now */
EIF_TYPED_VALUE F1035_9933 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7718,Dtype(Current)));
	return r;
}


/* {C_DATE}.gettimeofday */
void F1035_9934 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "gettimeofday";
	RTEX;
#define arg1 arg1x.it_p
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1034, Current, 0, 1, 16287);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1034, Current, 16287);
	RTIV(Current, RTAL);
	inline_F1035_9934 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {C_DATE}.timeval_structure_size */
EIF_TYPED_VALUE F1035_9935 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "timeval_structure_size";
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
	
	RTEAA(l_feature_name, 1034, Current, 0, 0, 16288);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1034, Current, 16288);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) sizeof(struct timeval);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {C_DATE}.time_t_structure_size */
EIF_TYPED_VALUE F1035_9936 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "time_t_structure_size";
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
	
	RTEAA(l_feature_name, 1034, Current, 0, 0, 16289);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1034, Current, 16289);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) sizeof(time_t);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {C_DATE}.tm_structure_size */
EIF_TYPED_VALUE F1035_9937 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tm_structure_size";
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
	
	RTEAA(l_feature_name, 1034, Current, 0, 0, 16290);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1034, Current, 16290);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) sizeof(struct tm);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {C_DATE}.get_time */
void F1035_9938 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "get_time";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1034, Current, 0, 2, 16291);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1034, Current, 16291);
	RTIV(Current, RTAL);
	inline_F1035_9938 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {C_DATE}.get_micro */
EIF_TYPED_VALUE F1035_9939 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_micro";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1034, Current, 0, 1, 16292);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1034, Current, 16292);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((struct timeval *)arg1)->tv_usec);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {C_DATE}.internal_item */
EIF_TYPED_VALUE F1035_9940 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7725,Dtype(Current)));
	return r;
}


/* {C_DATE}.localtime */
EIF_TYPED_VALUE F1035_9941 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "localtime";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1034, Current, 0, 1, 16267);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1034, Current, 16267);
	RTIV(Current, RTAL);
	Result = inline_F1035_9941 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {C_DATE}.gmtime */
EIF_TYPED_VALUE F1035_9942 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "gmtime";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1034, Current, 0, 1, 16268);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1034, Current, 16268);
	RTIV(Current, RTAL);
	Result = inline_F1035_9942 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {C_DATE}.get_tm_year */
EIF_TYPED_VALUE F1035_9943 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_tm_year";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1034, Current, 0, 1, 16269);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1034, Current, 16269);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_year);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {C_DATE}.get_tm_mon */
EIF_TYPED_VALUE F1035_9944 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_tm_mon";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1034, Current, 0, 1, 16270);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1034, Current, 16270);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_mon);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {C_DATE}.get_tm_mday */
EIF_TYPED_VALUE F1035_9945 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_tm_mday";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1034, Current, 0, 1, 16271);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1034, Current, 16271);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_mday);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {C_DATE}.get_tm_hour */
EIF_TYPED_VALUE F1035_9946 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_tm_hour";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1034, Current, 0, 1, 16272);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1034, Current, 16272);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_hour);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {C_DATE}.get_tm_min */
EIF_TYPED_VALUE F1035_9947 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_tm_min";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1034, Current, 0, 1, 16273);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1034, Current, 16273);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_min);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {C_DATE}.get_tm_sec */
EIF_TYPED_VALUE F1035_9948 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_tm_sec";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1034, Current, 0, 1, 16274);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1034, Current, 16274);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((struct tm *)arg1)->tm_sec);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

void EIF_Minit1035 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
