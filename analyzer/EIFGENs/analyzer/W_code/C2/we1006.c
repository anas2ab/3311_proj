/*
 * Code for class WEL_SCALING_EXTERNALS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1006_9217(EIF_REFERENCE);
extern void F1006_9218(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1006_9219(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1006_9220(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1006_9221(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1006_9222(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1006_9223(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1006_9224(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1006_9225(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1006_9226(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1006_9227(EIF_REFERENCE);
extern void F1006_9228(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1006_9229(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1006_9230(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit1006(void);

#ifdef __cplusplus
}
#endif

#include <wel_scaling_api.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1006_9228
static void inline_F1006_9228 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32* arg4, EIF_INTEGER_32* arg5)
{
	#ifdef _MSC_VER  
	FARPROC GetDpiForMonitor = NULL;
	HMODULE user32_module = (HMODULE) arg1;
	
	GetDpiForMonitor = GetProcAddress (user32_module, "GetDpiForMonitor");
	if (GetDpiForMonitor) {
		(FUNCTION_CAST_TYPE(void, WINAPI, (HMONITOR, MONITOR_DPI_TYPE, UINT *, UINT * )) GetDpiForMonitor) (arg2, arg3, arg4, arg5 );
	}
#endif
	;
}
#define INLINE_F1006_9228
#endif
#ifndef INLINE_F1006_9229
static int inline_F1006_9229 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	#ifdef _MSC_VER  
	FARPROC SetProcessDpiAwareness = NULL;
	HMODULE user32_module = (HMODULE) arg1;
			
	SetProcessDpiAwareness = GetProcAddress (user32_module, "SetProcessDpiAwareness");
	if (SetProcessDpiAwareness) {
		return EIF_TEST((FUNCTION_CAST_TYPE(HRESULT, WINAPI, (PROCESS_DPI_AWARENESS)) SetProcessDpiAwareness) (arg2));
	} else {
		return EIF_FALSE;
	}
#else
	return EIF_FALSE;
#endif
	;
}
#define INLINE_F1006_9229
#endif
#ifndef INLINE_F1006_9230
static EIF_INTEGER_32 inline_F1006_9230 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	#ifdef _MSC_VER  
	FARPROC GetProcessDpiAwareness = NULL;
	HMODULE user32_module = (HMODULE) arg1;
					
	GetProcessDpiAwareness = GetProcAddress (user32_module, "GetProcessDpiAwareness");
	if (GetProcessDpiAwareness) {
		return (FUNCTION_CAST_TYPE(HRESULT, WINAPI, (HANDLE, PROCESS_DPI_AWARENESS * )) GetProcessDpiAwareness) (arg2, arg3);
	} else {
		return 0;
	}
#else
	return 0;
#endif
	;
}
#define INLINE_F1006_9230
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_SCALING_EXTERNALS}.default_create */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1006_9217 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,saved_except);
	RTLIU(2);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLXL;
	
	RTEAA(l_feature_name, 1005, Current, 1, 0, 15521);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 15521);
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7005, dtype))(Current);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(3);
	RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(4);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(3);
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WEL_SCALING_EXTERNALS}.initialize_scaling */
void F1006_9218 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "initialize_scaling";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1005, Current, 1, 0, 15522);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 15522);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80005B5, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1461, 0x01).id);
	tr2 = RTMS_EX_H("Shcore.dll",10,2028743276);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12461, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7011, 0x40000000, 1); /* scaling_handle */
	tp1 = *(EIF_POINTER *)(loc1 + RTVA(12376, "item", loc1));
	*(EIF_POINTER *)(Current + RTWA(7011, dtype)) = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
}

/* {WEL_SCALING_EXTERNALS}.mdt_effective_dpi */
EIF_TYPED_VALUE F1006_9219 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {WEL_SCALING_EXTERNALS}.monitor_defaulttonearest */
EIF_TYPED_VALUE F1006_9220 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {WEL_SCALING_EXTERNALS}.default_dpi */
EIF_TYPED_VALUE F1006_9221 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 96L);
	return r;
}

/* {WEL_SCALING_EXTERNALS}.process_per_monitor_dpi_aware */
EIF_TYPED_VALUE F1006_9222 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {WEL_SCALING_EXTERNALS}.is_scaling_installed */
EIF_TYPED_VALUE F1006_9223 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_scaling_installed";
	RTEX;
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 1005, Current, 0, 0, 15527);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 15527);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(7011, dtype));
	tb1 = !tp1;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
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

/* {WEL_SCALING_EXTERNALS}.scaling_handle */
EIF_TYPED_VALUE F1006_9224 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(7011,Dtype(Current)));
	return r;
}


/* {WEL_SCALING_EXTERNALS}.monitor_scale */
EIF_TYPED_VALUE F1006_9225 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "monitor_scale";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 1005, Current, 3, 1, 15529);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 15529);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80000BA, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,206,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r8 = (EIF_REAL_64) 1.0;
	((EIF_TYPED_VALUE *)tr1+2)->it_r8 = (EIF_REAL_64) 1.0;
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(7011, dtype));
	tb1 = !tp1;
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
		up1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8462, 1103))(Current)).it_i4);
		ui4_1 = ti4_1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7543, 1026))(Current, up1x, ui4_1x)).it_p);
		up1 = tp1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7007, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7555, 1026))(Current, up1x, ui4_1x)).it_p);
		loc1 = (EIF_POINTER) tp1;
		RTHOOK(4);
		tb1 = !loc1;
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(5);
			tp1 = *(EIF_POINTER *)(Current + RTWA(7011, dtype));
			up1 = tp1;
			up2 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7006, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			up3 = (EIF_INTEGER_32 *) &(loc2);
			up4 = (EIF_INTEGER_32 *) &(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7015, dtype))(Current, up1x, up2x, ui4_1x, up3x, up4x);
			RTHOOK(6);
			RTDBGAL(0, 0xF80000BA, 0,0); /* Result */
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,206,206,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNTS(typres0.id, 3, 1);
			}
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7008, dtype))(Current)).it_i4);
			((EIF_TYPED_VALUE *)tr1+1)->it_r8 = (EIF_REAL_64) ((EIF_REAL_64) (loc2) /  (EIF_REAL_64) (ti4_1));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7008, dtype))(Current)).it_i4);
			((EIF_TYPED_VALUE *)tr1+2)->it_r8 = (EIF_REAL_64) ((EIF_REAL_64) (loc3) /  (EIF_REAL_64) (ti4_1));
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef up4
#undef ui4_1
#undef arg1
}

/* {WEL_SCALING_EXTERNALS}.dpi_for_monitor */
EIF_TYPED_VALUE F1006_9226 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "dpi_for_monitor";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
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
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 1005, Current, 3, 1, 15530);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 15530);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("hwnd_exists", EX_PRE);
		tb1 = !arg1;
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(7011, dtype));
	tb1 = !tp1;
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
		up1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8462, 1103))(Current)).it_i4);
		ui4_1 = ti4_1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7543, 1026))(Current, up1x, ui4_1x)).it_p);
		up1 = tp1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7007, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7555, 1026))(Current, up1x, ui4_1x)).it_p);
		loc1 = (EIF_POINTER) tp1;
		RTHOOK(4);
		tb1 = !loc1;
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(5);
			tp1 = *(EIF_POINTER *)(Current + RTWA(7011, dtype));
			up1 = tp1;
			up2 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7006, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			up3 = (EIF_INTEGER_32 *) &(loc2);
			up4 = (EIF_INTEGER_32 *) &(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7015, dtype))(Current, up1x, up2x, ui4_1x, up3x, up4x);
			RTHOOK(6);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) loc2;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef up4
#undef ui4_1
#undef arg1
}

/* {WEL_SCALING_EXTERNALS}.set_process_per_monitor_dpi_aware */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1006_9227 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_process_per_monitor_dpi_aware";
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN EIF_VOLATILE loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER  EIF_VOLATILE tp1;
	EIF_POINTER  EIF_VOLATILE tp2;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,saved_except);
	RTLIU(2);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTLXL;
	
	RTEAA(l_feature_name, 1005, Current, 4, 0, 15531);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 15531);
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc4) {
		RTHOOK(2);
		tp1 = *(EIF_POINTER *)(Current + RTWA(7011, dtype));
		tb1 = !tp1;
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(3);
			RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
			tp1 = *(EIF_POINTER *)(Current + RTWA(7011, dtype));
			up1 = tp1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7009, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7016, dtype))(Current, up1x, ui4_1x)).it_b);
			loc1 = (EIF_BOOLEAN) tb1;
			if (
				WDBG(1005, (char *) 0)
			) {
				RTHOOK(4);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				tp1 = *(EIF_POINTER *)(Current + RTWA(7011, dtype));
				up1 = tp1;
				tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
				up2 = tp2;
				up3 = (EIF_INTEGER_32 *) &(loc2);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7017, dtype))(Current, up1x, up2x, up3x)).it_i4);
				loc3 = (EIF_INTEGER_32) ti4_1;
				if (RTAL & CK_CHECK) {
					RTHOOK(5);
					RTCT("process_dpi_awarness", EX_CHECK);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7009, dtype))(Current)).it_i4);
					if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
						RTCK;
					} else {
						RTCF;
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(6);
	RTDBGAL(4, 0x04000000, 1, 0); /* loc4 */
	loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(7);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(6);
#undef up1
#undef up2
#undef up3
#undef ui4_1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WEL_SCALING_EXTERNALS}.c_get_dpi_for_monitor */
void F1006_9228 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "c_get_dpi_for_monitor";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_p
#define arg5 arg5x.it_p
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_p = * (EIF_INTEGER_32* *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_INTEGER_32* *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU(SK_POINTER,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1005, Current, 0, 5, 15532);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1005, Current, 15532);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_api_exists", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	inline_F1006_9228 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32*) arg4, (EIF_INTEGER_32*) arg5);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(7);
	RTEE;
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_SCALING_EXTERNALS}.c_set_process_dpi_awareness */
EIF_TYPED_VALUE F1006_9229 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_set_process_dpi_awareness";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1005, Current, 0, 2, 15533);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1005, Current, 15533);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_api_exists", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = EIF_TEST(inline_F1006_9229 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg2
#undef arg1
}

/* {WEL_SCALING_EXTERNALS}.c_get_process_dpi_awareness */
EIF_TYPED_VALUE F1006_9230 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "c_get_process_dpi_awareness";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_p
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_INTEGER_32* *) arg3x.it_r;
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
	
	RTEAA(l_feature_name, 1005, Current, 0, 3, 15534);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1005, Current, 15534);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_api_exists", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = inline_F1006_9230 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32*) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
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

void EIF_Minit1006 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
