/*
 * Code for class EV_G_INPUT_STREAM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1236_10704(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1236_10705(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1236_10706(EIF_REFERENCE);
extern void F1236_10707(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1236_10708(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1236_10709(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1236_10710(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1236_10711(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1236_10712(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1236(void);

#ifdef __cplusplus
}
#endif

#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1236_10709
static EIF_INTEGER_32 inline_F1236_10709 (void)
{
	{
	#if GTK_MAJOR_VERSION > 1 && GTK_MINOR_VERSION > 13
		return sizeof (GInputStream);
	#endif
}
	;
}
#define INLINE_F1236_10709
#endif
#ifndef INLINE_F1236_10710
static EIF_POINTER inline_F1236_10710 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	{
	#if GTK_MAJOR_VERSION > 1 && GTK_MINOR_VERSION > 13
		return g_memory_input_stream_new_from_data ((const void *)arg1, (gssize)arg2, NULL);
	#endif					
}
	;
}
#define INLINE_F1236_10710
#endif
#ifndef INLINE_F1236_10711
static EIF_INTEGER_32 inline_F1236_10711 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER* arg3)
{
	{
	#if GTK_MAJOR_VERSION > 1 && GTK_MINOR_VERSION > 13
		return g_input_stream_close ((GInputStream *)arg1, (GCancellable *)arg2, (GError **)arg3);
	#endif
}
	;
}
#define INLINE_F1236_10711
#endif
#ifndef INLINE_F1236_10712
static EIF_INTEGER_32 inline_F1236_10712 (EIF_POINTER arg1)
{
	{
	#if GTK_MAJOR_VERSION > 1 && GTK_MINOR_VERSION > 13
		return g_input_stream_is_closed ((GInputStream *)arg1);
	#endif
}
	;
}
#define INLINE_F1236_10712
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_G_INPUT_STREAM}.new_from_data */
void F1236_10704 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "new_from_data";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	
	RTEAA(l_feature_name, 1235, Current, 1, 2, 17327);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1235, Current, 17327);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	up1 = arg1;
	ui4_1 = arg2;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8159, dtype))(Current, up1x, ui4_1x)).it_p);
	loc1 = (EIF_POINTER) tp1;
	if (RTAL & CK_CHECK) {
		RTHOOK(2);
		RTCT("created", EX_CHECK);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc1 != tp1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(3);
	RTDBGAA(Current, dtype, 8157, 0xF80000A3, 0); /* internal_item */
	tr1 = RTLNSMART(RTWCT(8157, dtype, Dftype(Current)).id);
	up1 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8158, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3173, Dtype(tr1)))(tr1, up1x, ui4_1x);
	RTNHOOK(3,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(8157, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EV_G_INPUT_STREAM}.item */
EIF_TYPED_VALUE F1236_10705 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "item";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1235, Current, 0, 0, 17328);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1235, Current, 17328);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x40000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8157, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tp1 = *(EIF_POINTER *)(tr1 + RTVA(3176, "item", tr1));
	Result = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef up1
}

/* {EV_G_INPUT_STREAM}.is_closed */
EIF_TYPED_VALUE F1236_10706 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_closed";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_POINTER, &loc2);
	
	RTEAA(l_feature_name, 1235, Current, 2, 0, 17329);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1235, Current, 17329);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8155, dtype))(Current)).it_p);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(2);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(loc2 != tp1)) {
		RTHOOK(3);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		up1 = loc2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(8161, dtype))(Current, up1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
	} else {
		if (RTAL & CK_CHECK) {
			RTHOOK(4);
			RTCT("should_not_happen", EX_CHECK);
				RTCF;
		}
	}
	RTHOOK(5);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {EV_G_INPUT_STREAM}.dispose */
void F1236_10707 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dispose";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_POINTER tp1;
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
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 1235, Current, 3, 0, 17330);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1235, Current, 17330);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8155, dtype))(Current)).it_p);
	loc1 = (EIF_POINTER) tp1;
	RTHOOK(2);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(loc1 != tp1)) {
		RTHOOK(3);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		up1 = loc1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		up2 = tp1;
		up3 = (EIF_POINTER *) &(loc2);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(8160, dtype))(Current, up1x, up2x, up3x)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_1;
	} else {
		if (RTAL & CK_CHECK) {
			RTHOOK(4);
			RTCT("should_not_happen", EX_CHECK);
				RTCF;
		}
	}
	if (RTAL & CK_CHECK) {
		RTHOOK(5);
		RTCT("success", EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 0L))) {
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
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef up3
}

/* {EV_G_INPUT_STREAM}.internal_item */
EIF_TYPED_VALUE F1236_10708 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(8157,Dtype(Current)));
	return r;
}


/* {EV_G_INPUT_STREAM}.c_size */
EIF_TYPED_VALUE F1236_10709 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_size";
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
	
	RTEAA(l_feature_name, 1235, Current, 0, 0, 17332);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1235, Current, 17332);
	RTIV(Current, RTAL);
	Result = inline_F1236_10709 ();
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

/* {EV_G_INPUT_STREAM}.c_g_memory_input_stream_new_from_data */
EIF_TYPED_VALUE F1236_10710 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_g_memory_input_stream_new_from_data";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1235, Current, 0, 2, 17333);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1235, Current, 17333);
	RTIV(Current, RTAL);
	Result = inline_F1236_10710 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg2
#undef arg1
}

/* {EV_G_INPUT_STREAM}.c_g_input_stream_close */
EIF_TYPED_VALUE F1236_10711 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "c_g_input_stream_close";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER* *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1235, Current, 0, 3, 17334);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1235, Current, 17334);
	RTIV(Current, RTAL);
	Result = inline_F1236_10711 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER*) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_G_INPUT_STREAM}.c_g_input_stream_is_closed */
EIF_TYPED_VALUE F1236_10712 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_g_input_stream_is_closed";
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
	
	RTEAA(l_feature_name, 1235, Current, 0, 1, 17335);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1235, Current, 17335);
	RTIV(Current, RTAL);
	Result = inline_F1236_10712 ((EIF_POINTER) arg1);
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

void EIF_Minit1236 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
