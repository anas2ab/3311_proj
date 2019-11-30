/*
 * Code for class WEL_ABSTRACT_DISPATCHER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1910_22245(EIF_REFERENCE);
extern void F1910_22246(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1910_22247(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1910_22248(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1910_22249(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1910_22250(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1910_22251(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit1910(void);

#ifdef __cplusplus
}
#endif

#include <windows.h>
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_ABSTRACT_DISPATCHER}.make */
void F1910_22245 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 1909, Current, 0, 0, 28198);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1909, Current, 28198);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10159, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(34, "do_nothing", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {WEL_ABSTRACT_DISPATCHER}.set_exception_callback */
void F1910_22246 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_exception_callback";
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
	
	RTEAA(l_feature_name, 1909, Current, 0, 1, 28199);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1909, Current, 28199);
	RTCC(arg1, 1909, l_feature_name, 1, RTWCT(18398, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 18398, 0xF80000FA, 0); /* exception_callback */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(18398, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("exception_callback_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18398, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
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

/* {WEL_ABSTRACT_DISPATCHER}.exception_callback */
EIF_TYPED_VALUE F1910_22247 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(18398,Dtype(Current)));
	return r;
}


/* {WEL_ABSTRACT_DISPATCHER}.window_procedure */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_TYPED_VALUE F1910_22248 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "window_procedure";
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER EIF_VOLATILE loc2 = (EIF_POINTER) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
#define arg4 arg4x.it_p
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER  EIF_VOLATILE tp1;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,loc6);
	RTLR(5,tr2);
	RTLR(6,saved_except);
	RTLIU(7);
	RTXSLS;
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTLU(SK_REF, &loc6);
	RTLXL;
	
	RTEAA(l_feature_name, 1909, Current, 6, 4, 28201);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1909, Current, 28201);
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc5) {
		RTHOOK(2);
		RTDBGAL(1, 0xF800077A, 0, 0); /* loc1 */
		up1 = arg1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18197, dtype))(Current, up1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(4);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12378, "exists", loc1))(loc1)).it_b);
			if (tb1) {
				if (
					WDBG(1909,"win_dispatcher")
				) {
					RTHOOK(5);
					tr1 = RTMS_EX_H("After look at windows table ",28,1720817952);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
					RTHOOK(6);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8, "generating_type", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = tr1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
					RTHOOK(7);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(7,1);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(168, "put_new_line", tr1))(tr1);
				}
				RTHOOK(8);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9011, "increment_level", loc1))(loc1);
				RTHOOK(9);
				RTDBGAL(4, 0x04000000, 1, 0); /* loc4 */
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(10);
				RTDBGAL(0, 0x40000000, 1,0); /* Result */
				up1 = arg1;
				ui4_1 = arg2;
				up2 = arg3;
				up3 = arg4;
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18656, "process_message", loc1))(loc1, up1x, ui4_1x, up2x, up3x)).it_p);
				Result = (EIF_POINTER) tp1;
				RTHOOK(11);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9006, "has_return_value", loc1))(loc1)).it_b);
				if (tb1) {
					RTHOOK(12);
					RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
					tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9007, "message_return_value", loc1))(loc1)).it_p);
					loc2 = (EIF_POINTER) tp1;
					RTHOOK(13);
					RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9006, "has_return_value", loc1))(loc1)).it_b);
					loc3 = (EIF_BOOLEAN) tb1;
				}
				RTHOOK(14);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9008, "default_processing", loc1))(loc1)).it_b);
				if (tb1) {
					RTHOOK(15);
					RTDBGAL(0, 0x40000000, 1,0); /* Result */
					up1 = arg1;
					ui4_1 = arg2;
					up2 = arg3;
					up3 = arg4;
					tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18657, "call_default_window_procedure", loc1))(loc1, up1x, ui4_1x, up2x, up3x)).it_p);
					Result = (EIF_POINTER) tp1;
				}
				RTHOOK(16);
				if (loc3) {
					RTHOOK(17);
					RTDBGAL(0, 0x40000000, 1,0); /* Result */
					Result = (EIF_POINTER) loc2;
				}
				RTHOOK(18);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9012, "decrement_level", loc1))(loc1);
				RTHOOK(19);
				RTDBGAL(4, 0x04000000, 1, 0); /* loc4 */
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			} else {
				RTHOOK(20);
				RTDBGAL(0, 0x40000000, 1,0); /* Result */
				up1 = arg1;
				ui4_1 = arg2;
				up2 = arg3;
				up3 = arg4;
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18657, "call_default_window_procedure", loc1))(loc1, up1x, ui4_1x, up2x, up3x)).it_p);
				Result = (EIF_POINTER) tp1;
			}
		} else {
			RTHOOK(21);
			RTDBGAL(0, 0x40000000, 1,0); /* Result */
			up1 = arg1;
			ui4_1 = arg2;
			up2 = arg3;
			up3 = arg4;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18402, dtype))(Current, up1x, ui4_1x, up2x, up3x)).it_p);
			Result = (EIF_POINTER) tp1;
		}
	} else {
		RTHOOK(22);
		RTDBGAL(0, 0x40000000, 1,0); /* Result */
		up1 = arg1;
		ui4_1 = arg2;
		up2 = arg3;
		up3 = arg4;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18402, dtype))(Current, up1x, ui4_1x, up2x, up3x)).it_p);
		Result = (EIF_POINTER) tp1;
		RTHOOK(23);
		RTDBGAL(6, 0xF80000FA, 0, 0); /* loc6 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18398, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc6 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(24);
		if ((EIF_BOOLEAN)(loc6 != NULL)) {
			RTHOOK(25);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,0xFF01,64,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr1 = RTLNTS(typres0.id, 2, 0);
			}
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18401, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
			RTAR(tr1,tr2);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4611, "call", loc6))(loc6, ur1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(26);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != NULL) && loc4)) {
		RTHOOK(27);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9012, "decrement_level", loc1))(loc1);
		RTHOOK(28);
		RTDBGAL(4, 0x04000000, 1, 0); /* loc4 */
		loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTHOOK(29);
	RTDBGAL(5, 0x04000000, 1, 0); /* loc5 */
	loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(30);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(31);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(12);
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ui4_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WEL_ABSTRACT_DISPATCHER}.dialog_procedure */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_TYPED_VALUE F1910_22249 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "dialog_procedure";
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER EIF_VOLATILE loc2 = (EIF_POINTER) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
#define arg4 arg4x.it_p
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_POINTER  EIF_VOLATILE tp1;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,loc1);
	RTLR(5,loc5);
	RTLR(6,saved_except);
	RTLIU(7);
	RTXSLS;
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTLU(SK_REF, &loc5);
	RTLXL;
	
	RTEAA(l_feature_name, 1909, Current, 5, 4, 28202);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1909, Current, 28202);
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc4) {
		if (
			WDBG(1909,"dlg_dispatcher")
		) {
			RTHOOK(2);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(2,1);
			tr2 = RTMS_EX_H("in dlg_proc ",12,1615306784);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(149, "put_string", tr1))(tr1, ur1x);
			RTHOOK(3);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(3,1);
			tr2 = c_outp(arg1);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(149, "put_string", tr1))(tr1, ur1x);
			RTHOOK(4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,1);
			uc1 = (EIF_CHARACTER_8) ' ';
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(147, "put_character", tr1))(tr1, uc1x);
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			ui4_1 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(155, "put_integer", tr1))(tr1, ui4_1x);
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			uc1 = (EIF_CHARACTER_8) ' ';
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(147, "put_character", tr1))(tr1, uc1x);
			RTHOOK(7);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11308, dtype))(Current)).it_i4);
			ub1 = (EIF_BOOLEAN)(arg2 == ti4_1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(166, "put_boolean", tr1))(tr1, ub1x);
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(168, "put_new_line", tr1))(tr1);
		}
		RTHOOK(9);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11308, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(arg2 == ti4_1)) {
			RTHOOK(10);
			RTDBGAL(1, 0xF800077A, 0, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9847, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(11);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTHOOK(12);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9848, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(12,1);
				ur1 = NULL;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1719, "put", tr1))(tr1, ur1x);
				RTHOOK(13);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9011, "increment_level", loc1))(loc1);
				RTHOOK(14);
				RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(15);
				up1 = arg1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12379, "set_item", loc1))(loc1, up1x);
				RTHOOK(16);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18658, "register_current_window", loc1))(loc1);
				RTHOOK(17);
				RTDBGAL(0, 0x40000000, 1,0); /* Result */
				up1 = arg1;
				ui4_1 = arg2;
				up2 = arg3;
				up3 = arg4;
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18656, "process_message", loc1))(loc1, up1x, ui4_1x, up2x, up3x)).it_p);
				Result = (EIF_POINTER) tp1;
				RTHOOK(18);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9012, "decrement_level", loc1))(loc1);
				RTHOOK(19);
				RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			RTHOOK(20);
			RTDBGAL(0, 0x40000000, 1,0); /* Result */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11415, dtype))(Current, ui4_1x)).it_p);
			Result = (EIF_POINTER) tp1;
		} else {
			RTHOOK(21);
			RTDBGAL(1, 0xF800077A, 0, 0); /* loc1 */
			up1 = arg1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18197, dtype))(Current, up1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(22);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12378, "exists", loc1))(loc1)).it_b);
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(23);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9011, "increment_level", loc1))(loc1);
				RTHOOK(24);
				RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(25);
				RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
				up1 = arg1;
				ui4_1 = arg2;
				up2 = arg3;
				up3 = arg4;
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(18656, "process_message", loc1))(loc1, up1x, ui4_1x, up2x, up3x)).it_p);
				loc2 = (EIF_POINTER) tp1;
				RTHOOK(26);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9006, "has_return_value", loc1))(loc1)).it_b);
				if (tb1) {
					RTHOOK(27);
					RTDBGAL(0, 0x40000000, 1,0); /* Result */
					tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9007, "message_return_value", loc1))(loc1)).it_p);
					Result = (EIF_POINTER) tp1;
				} else {
					RTHOOK(28);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9008, "default_processing", loc1))(loc1)).it_b);
					if ((EIF_BOOLEAN) !tb1) {
						RTHOOK(29);
						RTDBGAL(0, 0x40000000, 1,0); /* Result */
						ui4_1 = ((EIF_INTEGER_32) 1L);
						tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11415, dtype))(Current, ui4_1x)).it_p);
						Result = (EIF_POINTER) tp1;
					} else {
						RTHOOK(30);
						RTDBGAL(0, 0x40000000, 1,0); /* Result */
						ui4_1 = ((EIF_INTEGER_32) 0L);
						tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11415, dtype))(Current, ui4_1x)).it_p);
						Result = (EIF_POINTER) tp1;
					}
				}
				RTHOOK(31);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9012, "decrement_level", loc1))(loc1);
				RTHOOK(32);
				RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		}
	} else {
		RTHOOK(33);
		RTDBGAL(0, 0x40000000, 1,0); /* Result */
		ui4_1 = ((EIF_INTEGER_32) 0L);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11415, dtype))(Current, ui4_1x)).it_p);
		Result = (EIF_POINTER) tp1;
		RTHOOK(34);
		RTDBGAL(5, 0xF80000FA, 0, 0); /* loc5 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18398, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(35);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTHOOK(36);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,186,0xFF01,64,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				tr1 = RTLNTS(typres0.id, 2, 0);
			}
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18401, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
			RTAR(tr1,tr2);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4611, "call", loc5))(loc5, ur1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(37);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != NULL) && loc3)) {
		RTHOOK(38);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9012, "decrement_level", loc1))(loc1);
		RTHOOK(39);
		RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
		loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTHOOK(40);
	RTDBGAL(4, 0x04000000, 1, 0); /* loc4 */
	loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(41);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(42);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(11);
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ui4_1
#undef ub1
#undef uc1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {WEL_ABSTRACT_DISPATCHER}.new_exception */
EIF_TYPED_VALUE F1910_22250 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "new_exception";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1909, Current, 1, 0, 28203);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1909, Current, 28203);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exception_manager.last_exception /= Void", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1271, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1134, "last_exception", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTTE((EIF_BOOLEAN)(tr2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000040, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1271, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1134, "last_exception", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(3);
	RTCT0("l_exception_attached", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	RTDBGAL(0, 0xF8000040, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc1);
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
#undef up2
}

/* {WEL_ABSTRACT_DISPATCHER}.cwin_def_window_proc */
EIF_TYPED_VALUE F1910_22251 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "cwin_def_window_proc";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
#define arg4 arg4x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1909, Current, 0, 4, 28204);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1909, Current, 28204);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) DefWindowProc(((HWND) arg1), ((UINT) arg2), ((WPARAM) arg3), ((LPARAM) arg4));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit1910 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
