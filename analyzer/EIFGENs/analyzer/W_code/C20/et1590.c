/*
 * Code for class ETF_EVT_SCANNER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1590_16089(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1590_16090(EIF_REFERENCE);
extern void F1590_16091(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1590_16092(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1590_16093(EIF_REFERENCE);
extern void F1590_16094(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1590_16095(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1590_16096(EIF_REFERENCE);
extern void F1590_16097(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1590_16098(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1590_16099(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1590_16100(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1590_16101(EIF_REFERENCE);
extern void F1590_16102(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1590_16103(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1590_16104(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1590_16105(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1590_16106(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1590_16107(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1590_16108(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1590_16109(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1590_16110(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1590_16111(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1590_16112(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1590_16113(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1590_16114(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1590_16115(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1590_16116(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1590_16117(EIF_REFERENCE);
extern void F1590_16118(EIF_REFERENCE);
extern void F1590_16119(EIF_REFERENCE);
extern void EIF_Minit1590(void);

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

/* {ETF_EVT_SCANNER}.valid_start_condition */
EIF_TYPED_VALUE F1590_16089 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_start_condition";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 1589, Current, 0, 1, 22089);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1589, Current, 22089);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11773, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg1 == ti4_1);
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

/* {ETF_EVT_SCANNER}.yy_build_tables */
void F1590_16090 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_build_tables";
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
	
	RTEAA(l_feature_name, 1589, Current, 0, 0, 22090);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1589, Current, 22090);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 11324, 0xF8000253, 0); /* yy_nxt */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11760, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11324, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11325, 0xF8000253, 0); /* yy_chk */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11763, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11325, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 11326, 0xF8000253, 0); /* yy_base */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11766, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11326, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 11327, 0xF8000253, 0); /* yy_def */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11767, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11327, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 11328, 0xF8000253, 0); /* yy_ec */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11768, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11328, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 11329, 0xF8000253, 0); /* yy_meta */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11771, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11329, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 11330, 0xF8000253, 0); /* yy_accept */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11772, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11330, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("yy_nxt_not_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11324, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("yy_chk_not_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11325, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("yy_base_not_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11326, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("yy_def_not_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11327, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("yy_accept_not_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11330, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
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
	RTLO(2);
	RTEE;
#undef up1
}

/* {ETF_EVT_SCANNER}.yy_execute_action */
void F1590_16091 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_execute_action";
	RTEX;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1589, Current, 0, 1, 22091);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1589, Current, 22091);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 1L:
			RTHOOK(2);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11298, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11299, dtype));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(11304, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ti4_3) - ti4_4);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(3);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(3,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(3,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 67",72,1387144247);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			break;
		case 2L:
			RTHOOK(4);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11292, dtype))(Current);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(5);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(5,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(5,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 69",72,1387144249);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			break;
		case 3L:
			RTHOOK(6);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype))) += ((EIF_INTEGER_32) 6L);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(7);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(7,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(7,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 71",72,1387144497);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(8);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11729, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 4L:
			RTHOOK(9);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype))) += ((EIF_INTEGER_32) 4L);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(10);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(10,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(10,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 72",72,1387144498);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(11);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11730, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 5L:
			RTHOOK(12);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype))) += ((EIF_INTEGER_32) 7L);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(13);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(13,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(13,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 73",72,1387144499);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(14);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11731, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 6L:
			RTHOOK(15);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype))) += ((EIF_INTEGER_32) 4L);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(16);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(16,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(16,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 74",72,1387144500);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(17);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11732, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 7L:
			RTHOOK(18);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype))) += ((EIF_INTEGER_32) 9L);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(19);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(19,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(19,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 75",72,1387144501);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(20);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11733, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 8L:
			RTHOOK(21);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype))) += ((EIF_INTEGER_32) 10L);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(22);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(22,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(22,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 76",72,1387144502);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(23);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11734, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 9L:
			RTHOOK(24);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype))) += ((EIF_INTEGER_32) 7L);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(25);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(25,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(25,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 77",72,1387144503);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(26);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11735, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 10L:
			RTHOOK(27);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype))) += ((EIF_INTEGER_32) 4L);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(28);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(28,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(28,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 78",72,1387144504);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(29);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11736, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 11L:
			RTHOOK(30);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype))) += ((EIF_INTEGER_32) 6L);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(31);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(31,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(31,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 79",72,1387144505);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(32);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11737, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 12L:
			RTHOOK(33);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype))) += ((EIF_INTEGER_32) 5L);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(34);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(34,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(34,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 80",72,1387144752);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(35);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11738, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 13L:
			RTHOOK(36);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype))) += ((EIF_INTEGER_32) 5L);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(37);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(37,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(37,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 81",72,1387144753);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(38);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11739, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 14L:
			RTHOOK(39);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype))) += ((EIF_INTEGER_32) 5L);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(40);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(40,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(40,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 82",72,1387144754);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(41);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11740, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 15L:
			RTHOOK(42);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype)))++;
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(43);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(43,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(43,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 84",72,1387144756);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(44);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11743, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 16L:
			RTHOOK(45);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype)))++;
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(46);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(46,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(46,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 85",72,1387144757);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(47);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11744, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 17L:
			RTHOOK(48);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype)))++;
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(49);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(49,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(49,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 86",72,1387144758);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(50);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11745, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 18L:
			RTHOOK(51);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype)))++;
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(52);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(52,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(52,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 87",72,1387144759);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(53);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11746, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 19L:
			RTHOOK(54);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype)))++;
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(55);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(55,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(55,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 88",72,1387144760);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(56);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11747, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 20L:
			RTHOOK(57);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype)))++;
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(58);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(58,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(58,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 89",72,1387144761);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(59);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11748, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 21L:
			RTHOOK(60);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype)))++;
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(61);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(61,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(61,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 90",72,1387145008);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(62);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11749, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 22L:
			RTHOOK(63);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype)))++;
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(64);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(64,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(64,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 91",72,1387145009);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(65);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11750, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 23L:
			RTHOOK(66);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype)))++;
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(67);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(67,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(67,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 92",72,1387145010);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(68);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11751, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 24L:
			RTHOOK(69);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype)))++;
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(70);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(70,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(70,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 93",72,1387145011);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(71);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11752, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 25L:
			RTHOOK(72);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype)))++;
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(73);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(73,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(73,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 94",72,1387145012);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(74);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11753, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 26L:
			RTHOOK(75);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype)))++;
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(76);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(76,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(76,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 95",72,1387145013);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(77);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11754, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 27L:
			RTHOOK(78);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype)))++;
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(79);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(79,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(79,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 96",72,1387145014);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(80);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11755, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 28L:
			RTHOOK(81);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype))) += ((EIF_INTEGER_32) 2L);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(82);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(82,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(82,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 97",72,1387145015);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(83);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11756, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 29L:
			RTHOOK(84);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype))) += ((EIF_INTEGER_32) 4L);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(85);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(85,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(85,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 98",72,1387145016);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(86);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11757, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 30L:
			RTHOOK(87);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype)))++;
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(88);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(88,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(88,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 99",72,1387145017);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(89);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11758, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 31L:
			RTHOOK(90);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype))) += ((EIF_INTEGER_32) 4L);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(91);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(91,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(91,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 101",73,774429489);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(92);
			RTDBGAA(Current, dtype, 11723, 0xF80000E8, 0); /* last_string_value */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11234, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTCCL(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11723, dtype)) = (EIF_REFERENCE) tr1;
			RTHOOK(93);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11741, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 32L:
			RTHOOK(94);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype))) += ((EIF_INTEGER_32) 5L);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(95);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(95,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(95,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 106",73,774429494);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(96);
			RTDBGAA(Current, dtype, 11723, 0xF80000E8, 0); /* last_string_value */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11234, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTCCL(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11723, dtype)) = (EIF_REFERENCE) tr1;
			RTHOOK(97);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11742, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 33L:
			RTHOOK(98);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11298, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11299, dtype));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(11304, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ti4_3) - ti4_4);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(99);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(99,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(99,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 111",73,774429745);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(100);
			RTDBGAA(Current, dtype, 11723, 0xF80000E8, 0); /* last_string_value */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11234, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTCCL(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11723, dtype)) = (EIF_REFERENCE) tr1;
			RTHOOK(101);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11724, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 34L:
			RTHOOK(102);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11298, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11299, dtype));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(11304, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ti4_3) - ti4_4);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(103);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(103,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(103,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 117",73,774429751);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(104);
			RTDBGAA(Current, dtype, 11723, 0xF80000E8, 0); /* last_string_value */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11234, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTCCL(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11723, dtype)) = (EIF_REFERENCE) tr1;
			RTHOOK(105);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11725, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 35L:
			RTHOOK(106);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11298, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11299, dtype));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(11304, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ti4_3) - ti4_4);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(107);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(107,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(107,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 123",73,774430003);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(108);
			RTDBGAA(Current, dtype, 11723, 0xF80000E8, 0); /* last_string_value */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11234, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTCCL(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11723, dtype)) = (EIF_REFERENCE) tr1;
			RTHOOK(109);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11726, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 36L:
			RTHOOK(110);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype))) += ((EIF_INTEGER_32) 3L);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(111);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(111,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(111,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 128",73,774430008);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(112);
			RTDBGAA(Current, dtype, 11260, 0x08000000, 1); /* last_character */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11234, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(112,1);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2673, "item", tr1))(tr1, ui4_1x)).it_c1);
			*(EIF_CHARACTER_8 *)(Current + RTWA(11260, dtype)) = (EIF_CHARACTER_8) tc1;
			RTHOOK(113);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11727, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 37L:
			RTHOOK(114);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11292, dtype))(Current);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(115);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(115,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(115,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 133",73,774430259);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(116);
			RTDBGAA(Current, dtype, 11723, 0xF80000E8, 0); /* last_string_value */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11234, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(116,1);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11234, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(116,2);
			ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(4768, "count", tr2));
			ui4_2 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4722, "substring", tr1))(tr1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr1 = RTCCL(tr2);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11723, dtype)) = (EIF_REFERENCE) tr1;
			RTHOOK(117);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11728, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 38L:
			RTHOOK(118);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(11298, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(11299, dtype));
			ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(11304, dtype));
			*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ti4_3) - ti4_4);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(119);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(119,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(119,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 138",73,774430264);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			break;
		case 39L:
			RTHOOK(120);
			RTDBGAA(Current, dtype, 11301, 0x10000000, 1); /* yy_column */
			(*(EIF_INTEGER_32 *)(Current + RTWA(11301, dtype)))++;
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(121);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(121,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(121,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 140",73,774430512);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(122);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11235, dtype))(Current, ui4_1x)).it_c1);
			RTNHOOK(122,1);
			ti4_1 = (EIF_INTEGER_32) (tc1);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case 40L:
			RTHOOK(123);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11292, dtype))(Current);
			if (
				WDBG(1589,"gelex")
			) {
				RTHOOK(124);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7116, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(124,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6178, "error", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				RTNHOOK(124,2);
				tr1 = RTMS_EX_H("Executing scanner user-code from file \'etf_evt_scanner_def.l\' at line 0",71,424848176);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7791, "put_line", tr2))(tr2, ur1x);
			}
			RTHOOK(125);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11277, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(126);
			tr1 = RTMS_EX_H("scanner jammed",14,1957244260);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11274, dtype))(Current, ur1x);
			break;
		default:
			RTHOOK(127);
			RTDBGAA(Current, dtype, 11233, 0x10000000, 1); /* last_token */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11277, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(11233, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(128);
			tr1 = RTMS_EX_H("fatal scanner internal error: no action found",45,1022935396);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11274, dtype))(Current, ur1x);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(129);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {ETF_EVT_SCANNER}.yy_execute_eof_action */
void F1590_16092 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_execute_eof_action";
	RTEX;
#define arg1 arg1x.it_i4
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
	
	RTEAA(l_feature_name, 1589, Current, 0, 1, 22092);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1589, Current, 22092);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11254, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {ETF_EVT_SCANNER}.yy_nxt_template */
RTOID (F1590_16093)
EIF_TYPED_VALUE F1590_16093 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_nxt_template";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1590_16093);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1589, Current, 1, 0, 22093);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1589, Current, 22093);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(1, 0xF8000251, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,593,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = ((EIF_INTEGER_32) 230L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2745, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11761, dtype))(Current, ur1x);
	RTHOOK(3);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11762, dtype))(Current, ur1x);
	RTHOOK(4);
	RTDBGAL(0, 0xF8000253, 0,0); /* Result */
	ur1 = RTCCL(loc1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11284, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef Result
}

/* {ETF_EVT_SCANNER}.yy_nxt_template_1 */
void F1590_16094 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_nxt_template_1";
	RTEX;
#define arg1 arg1x.it_r
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1589, Current, 0, 1, 22094);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1589, Current, 22094);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,593,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1589, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 201L);
	{
		static EIF_TYPE_INDEX typarr0[] = {595,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 201L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	*((EIF_INTEGER_32 *)tr2+13) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	*((EIF_INTEGER_32 *)tr2+14) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	*((EIF_INTEGER_32 *)tr2+15) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	*((EIF_INTEGER_32 *)tr2+16) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 17L);
	*((EIF_INTEGER_32 *)tr2+17) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 18L);
	*((EIF_INTEGER_32 *)tr2+18) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 19L);
	*((EIF_INTEGER_32 *)tr2+19) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
	*((EIF_INTEGER_32 *)tr2+20) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 21L);
	*((EIF_INTEGER_32 *)tr2+21) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+22) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 23L);
	*((EIF_INTEGER_32 *)tr2+23) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+24) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+25) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+26) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 26L);
	*((EIF_INTEGER_32 *)tr2+27) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+28) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+29) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 27L);
	*((EIF_INTEGER_32 *)tr2+30) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+31) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+32) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+33) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+34) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 28L);
	*((EIF_INTEGER_32 *)tr2+35) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 29L);
	*((EIF_INTEGER_32 *)tr2+36) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 30L);
	*((EIF_INTEGER_32 *)tr2+37) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+38) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	*((EIF_INTEGER_32 *)tr2+39) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+40) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	*((EIF_INTEGER_32 *)tr2+41) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr2+42) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 33L);
	*((EIF_INTEGER_32 *)tr2+43) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr2+44) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+45) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+46) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+47) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+48) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+49) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+50) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 34L);
	*((EIF_INTEGER_32 *)tr2+51) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+52) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+53) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+54) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 36L);
	*((EIF_INTEGER_32 *)tr2+55) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 37L);
	*((EIF_INTEGER_32 *)tr2+56) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+57) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+58) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+59) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+60) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 40L);
	*((EIF_INTEGER_32 *)tr2+61) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 45L);
	*((EIF_INTEGER_32 *)tr2+62) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 46L);
	*((EIF_INTEGER_32 *)tr2+63) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 46L);
	*((EIF_INTEGER_32 *)tr2+64) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 46L);
	*((EIF_INTEGER_32 *)tr2+65) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 51L);
	*((EIF_INTEGER_32 *)tr2+66) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 55L);
	*((EIF_INTEGER_32 *)tr2+67) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 55L);
	*((EIF_INTEGER_32 *)tr2+68) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+69) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 56L);
	*((EIF_INTEGER_32 *)tr2+70) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+71) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 40L);
	*((EIF_INTEGER_32 *)tr2+72) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 60L);
	*((EIF_INTEGER_32 *)tr2+73) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 62L);
	*((EIF_INTEGER_32 *)tr2+74) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 62L);
	*((EIF_INTEGER_32 *)tr2+75) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 62L);
	*((EIF_INTEGER_32 *)tr2+76) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 45L);
	*((EIF_INTEGER_32 *)tr2+77) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 46L);
	*((EIF_INTEGER_32 *)tr2+78) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 46L);
	*((EIF_INTEGER_32 *)tr2+79) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 46L);
	*((EIF_INTEGER_32 *)tr2+80) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 70L);
	*((EIF_INTEGER_32 *)tr2+81) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 55L);
	*((EIF_INTEGER_32 *)tr2+82) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 55L);
	*((EIF_INTEGER_32 *)tr2+83) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 66L);
	*((EIF_INTEGER_32 *)tr2+84) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 40L);
	*((EIF_INTEGER_32 *)tr2+85) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 78L);
	*((EIF_INTEGER_32 *)tr2+86) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
	*((EIF_INTEGER_32 *)tr2+87) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 108L);
	*((EIF_INTEGER_32 *)tr2+88) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 51L);
	*((EIF_INTEGER_32 *)tr2+89) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 62L);
	*((EIF_INTEGER_32 *)tr2+90) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 62L);
	*((EIF_INTEGER_32 *)tr2+91) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 62L);
	*((EIF_INTEGER_32 *)tr2+92) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 82L);
	*((EIF_INTEGER_32 *)tr2+93) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 90L);
	*((EIF_INTEGER_32 *)tr2+94) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 107L);
	*((EIF_INTEGER_32 *)tr2+95) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 70L);
	*((EIF_INTEGER_32 *)tr2+96) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 41L);
	*((EIF_INTEGER_32 *)tr2+97) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	*((EIF_INTEGER_32 *)tr2+98) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 105L);
	*((EIF_INTEGER_32 *)tr2+99) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 66L);
	*((EIF_INTEGER_32 *)tr2+100) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 78L);
	*((EIF_INTEGER_32 *)tr2+101) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+102) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+103) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+104) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+105) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+106) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+107) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 41L);
	*((EIF_INTEGER_32 *)tr2+108) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 41L);
	*((EIF_INTEGER_32 *)tr2+109) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 104L);
	*((EIF_INTEGER_32 *)tr2+110) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 103L);
	*((EIF_INTEGER_32 *)tr2+111) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 102L);
	*((EIF_INTEGER_32 *)tr2+112) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 82L);
	*((EIF_INTEGER_32 *)tr2+113) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 90L);
	*((EIF_INTEGER_32 *)tr2+114) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 42L);
	*((EIF_INTEGER_32 *)tr2+115) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 101L);
	*((EIF_INTEGER_32 *)tr2+116) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 42L);
	*((EIF_INTEGER_32 *)tr2+117) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 42L);
	*((EIF_INTEGER_32 *)tr2+118) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 42L);
	*((EIF_INTEGER_32 *)tr2+119) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 42L);
	*((EIF_INTEGER_32 *)tr2+120) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 41L);
	*((EIF_INTEGER_32 *)tr2+121) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 47L);
	*((EIF_INTEGER_32 *)tr2+122) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 47L);
	*((EIF_INTEGER_32 *)tr2+123) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 47L);
	*((EIF_INTEGER_32 *)tr2+124) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 47L);
	*((EIF_INTEGER_32 *)tr2+125) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 43L);
	*((EIF_INTEGER_32 *)tr2+126) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
	*((EIF_INTEGER_32 *)tr2+127) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 43L);
	*((EIF_INTEGER_32 *)tr2+128) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 43L);
	*((EIF_INTEGER_32 *)tr2+129) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 43L);
	*((EIF_INTEGER_32 *)tr2+130) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 43L);
	*((EIF_INTEGER_32 *)tr2+131) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 99L);
	*((EIF_INTEGER_32 *)tr2+132) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 98L);
	*((EIF_INTEGER_32 *)tr2+133) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 97L);
	*((EIF_INTEGER_32 *)tr2+134) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 96L);
	*((EIF_INTEGER_32 *)tr2+135) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 95L);
	*((EIF_INTEGER_32 *)tr2+136) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 94L);
	*((EIF_INTEGER_32 *)tr2+137) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 93L);
	*((EIF_INTEGER_32 *)tr2+138) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 92L);
	*((EIF_INTEGER_32 *)tr2+139) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 91L);
	*((EIF_INTEGER_32 *)tr2+140) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 89L);
	*((EIF_INTEGER_32 *)tr2+141) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 88L);
	*((EIF_INTEGER_32 *)tr2+142) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 87L);
	*((EIF_INTEGER_32 *)tr2+143) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 86L);
	*((EIF_INTEGER_32 *)tr2+144) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 85L);
	*((EIF_INTEGER_32 *)tr2+145) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 84L);
	*((EIF_INTEGER_32 *)tr2+146) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 83L);
	*((EIF_INTEGER_32 *)tr2+147) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 81L);
	*((EIF_INTEGER_32 *)tr2+148) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	*((EIF_INTEGER_32 *)tr2+149) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 79L);
	*((EIF_INTEGER_32 *)tr2+150) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 77L);
	*((EIF_INTEGER_32 *)tr2+151) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 76L);
	*((EIF_INTEGER_32 *)tr2+152) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 75L);
	*((EIF_INTEGER_32 *)tr2+153) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 74L);
	*((EIF_INTEGER_32 *)tr2+154) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 73L);
	*((EIF_INTEGER_32 *)tr2+155) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 72L);
	*((EIF_INTEGER_32 *)tr2+156) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 71L);
	*((EIF_INTEGER_32 *)tr2+157) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 69L);
	*((EIF_INTEGER_32 *)tr2+158) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 68L);
	*((EIF_INTEGER_32 *)tr2+159) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 67L);
	*((EIF_INTEGER_32 *)tr2+160) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 65L);
	*((EIF_INTEGER_32 *)tr2+161) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	*((EIF_INTEGER_32 *)tr2+162) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 63L);
	*((EIF_INTEGER_32 *)tr2+163) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 61L);
	*((EIF_INTEGER_32 *)tr2+164) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 58L);
	*((EIF_INTEGER_32 *)tr2+165) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 57L);
	*((EIF_INTEGER_32 *)tr2+166) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 54L);
	*((EIF_INTEGER_32 *)tr2+167) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 53L);
	*((EIF_INTEGER_32 *)tr2+168) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 52L);
	*((EIF_INTEGER_32 *)tr2+169) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	*((EIF_INTEGER_32 *)tr2+170) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 49L);
	*((EIF_INTEGER_32 *)tr2+171) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 48L);
	*((EIF_INTEGER_32 *)tr2+172) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 44L);
	*((EIF_INTEGER_32 *)tr2+173) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 43L);
	*((EIF_INTEGER_32 *)tr2+174) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+175) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+176) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+177) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+178) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+179) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+180) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+181) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+182) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+183) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+184) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+185) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+186) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+187) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+188) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+189) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+190) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+191) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+192) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+193) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+194) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+195) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+196) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+197) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+198) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+199) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11318, dtype))(Current)).it_i4);
	*((EIF_INTEGER_32 *)tr2+200) = (EIF_INTEGER_32) ti4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr2)))(tr2).it_r;
	ur2 = tr1;
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = ((EIF_INTEGER_32) 200L);
	ui4_4 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11285, dtype))(Current, ur1x, ur2x, ui4_2x, ui4_3x, ui4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {ETF_EVT_SCANNER}.yy_nxt_template_2 */
void F1590_16095 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_nxt_template_2";
	RTEX;
#define arg1 arg1x.it_r
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1589, Current, 0, 1, 22095);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1589, Current, 22095);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,593,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1589, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 32L);
	{
		static EIF_TYPE_INDEX typarr0[] = {595,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 32L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+13) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+14) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+15) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+16) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+17) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+18) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+19) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+20) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+21) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+22) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+23) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+24) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+25) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+26) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+27) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+28) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+29) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+30) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11318, dtype))(Current)).it_i4);
	*((EIF_INTEGER_32 *)tr2+31) = (EIF_INTEGER_32) ti4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr2)))(tr2).it_r;
	ur2 = tr1;
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = ((EIF_INTEGER_32) 31L);
	ui4_4 = ((EIF_INTEGER_32) 200L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11285, dtype))(Current, ur1x, ur2x, ui4_2x, ui4_3x, ui4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {ETF_EVT_SCANNER}.yy_chk_template */
RTOID (F1590_16096)
EIF_TYPED_VALUE F1590_16096 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_chk_template";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1590_16096);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1589, Current, 1, 0, 22096);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1589, Current, 22096);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(1, 0xF8000251, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,593,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = ((EIF_INTEGER_32) 230L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2745, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11764, dtype))(Current, ur1x);
	RTHOOK(3);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11765, dtype))(Current, ur1x);
	RTHOOK(4);
	RTDBGAL(0, 0xF8000253, 0,0); /* Result */
	ur1 = RTCCL(loc1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11284, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef Result
}

/* {ETF_EVT_SCANNER}.yy_chk_template_1 */
void F1590_16097 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_chk_template_1";
	RTEX;
#define arg1 arg1x.it_r
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1589, Current, 0, 1, 22097);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1589, Current, 22097);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,593,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1589, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 201L);
	{
		static EIF_TYPE_INDEX typarr0[] = {595,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 201L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+13) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+14) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+15) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+16) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+17) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+18) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+19) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+20) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+21) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+22) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+23) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+24) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+25) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+26) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+27) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+28) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+29) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+30) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+31) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+32) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+33) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+34) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+35) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+36) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+37) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+38) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+39) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+40) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+41) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+42) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+43) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+44) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+45) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+46) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+47) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+48) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+49) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+50) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+51) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+52) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+53) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+54) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+55) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+56) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr2+57) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr2+58) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr2+59) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr2+60) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	*((EIF_INTEGER_32 *)tr2+61) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	*((EIF_INTEGER_32 *)tr2+62) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	*((EIF_INTEGER_32 *)tr2+63) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	*((EIF_INTEGER_32 *)tr2+64) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	*((EIF_INTEGER_32 *)tr2+65) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 26L);
	*((EIF_INTEGER_32 *)tr2+66) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 30L);
	*((EIF_INTEGER_32 *)tr2+67) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+68) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+69) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 30L);
	*((EIF_INTEGER_32 *)tr2+70) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+71) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+72) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 41L);
	*((EIF_INTEGER_32 *)tr2+73) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 45L);
	*((EIF_INTEGER_32 *)tr2+74) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 45L);
	*((EIF_INTEGER_32 *)tr2+75) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 45L);
	*((EIF_INTEGER_32 *)tr2+76) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 46L);
	*((EIF_INTEGER_32 *)tr2+77) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 46L);
	*((EIF_INTEGER_32 *)tr2+78) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 46L);
	*((EIF_INTEGER_32 *)tr2+79) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 46L);
	*((EIF_INTEGER_32 *)tr2+80) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 55L);
	*((EIF_INTEGER_32 *)tr2+81) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 30L);
	*((EIF_INTEGER_32 *)tr2+82) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+83) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 51L);
	*((EIF_INTEGER_32 *)tr2+84) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 60L);
	*((EIF_INTEGER_32 *)tr2+85) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 66L);
	*((EIF_INTEGER_32 *)tr2+86) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+87) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 107L);
	*((EIF_INTEGER_32 *)tr2+88) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 26L);
	*((EIF_INTEGER_32 *)tr2+89) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 62L);
	*((EIF_INTEGER_32 *)tr2+90) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 62L);
	*((EIF_INTEGER_32 *)tr2+91) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 62L);
	*((EIF_INTEGER_32 *)tr2+92) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 70L);
	*((EIF_INTEGER_32 *)tr2+93) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 78L);
	*((EIF_INTEGER_32 *)tr2+94) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 105L);
	*((EIF_INTEGER_32 *)tr2+95) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 55L);
	*((EIF_INTEGER_32 *)tr2+96) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	*((EIF_INTEGER_32 *)tr2+97) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 104L);
	*((EIF_INTEGER_32 *)tr2+98) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 103L);
	*((EIF_INTEGER_32 *)tr2+99) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 51L);
	*((EIF_INTEGER_32 *)tr2+100) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 66L);
	*((EIF_INTEGER_32 *)tr2+101) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 110L);
	*((EIF_INTEGER_32 *)tr2+102) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 110L);
	*((EIF_INTEGER_32 *)tr2+103) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 110L);
	*((EIF_INTEGER_32 *)tr2+104) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 110L);
	*((EIF_INTEGER_32 *)tr2+105) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 110L);
	*((EIF_INTEGER_32 *)tr2+106) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 110L);
	*((EIF_INTEGER_32 *)tr2+107) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+108) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 41L);
	*((EIF_INTEGER_32 *)tr2+109) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 102L);
	*((EIF_INTEGER_32 *)tr2+110) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 98L);
	*((EIF_INTEGER_32 *)tr2+111) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 97L);
	*((EIF_INTEGER_32 *)tr2+112) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 70L);
	*((EIF_INTEGER_32 *)tr2+113) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 78L);
	*((EIF_INTEGER_32 *)tr2+114) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 111L);
	*((EIF_INTEGER_32 *)tr2+115) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 96L);
	*((EIF_INTEGER_32 *)tr2+116) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 111L);
	*((EIF_INTEGER_32 *)tr2+117) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 111L);
	*((EIF_INTEGER_32 *)tr2+118) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 111L);
	*((EIF_INTEGER_32 *)tr2+119) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 111L);
	*((EIF_INTEGER_32 *)tr2+120) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 60L);
	*((EIF_INTEGER_32 *)tr2+121) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+122) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+123) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+124) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+125) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 113L);
	*((EIF_INTEGER_32 *)tr2+126) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 95L);
	*((EIF_INTEGER_32 *)tr2+127) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 113L);
	*((EIF_INTEGER_32 *)tr2+128) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 113L);
	*((EIF_INTEGER_32 *)tr2+129) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 113L);
	*((EIF_INTEGER_32 *)tr2+130) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 113L);
	*((EIF_INTEGER_32 *)tr2+131) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 92L);
	*((EIF_INTEGER_32 *)tr2+132) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 91L);
	*((EIF_INTEGER_32 *)tr2+133) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 89L);
	*((EIF_INTEGER_32 *)tr2+134) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 88L);
	*((EIF_INTEGER_32 *)tr2+135) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 85L);
	*((EIF_INTEGER_32 *)tr2+136) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 84L);
	*((EIF_INTEGER_32 *)tr2+137) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 83L);
	*((EIF_INTEGER_32 *)tr2+138) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 81L);
	*((EIF_INTEGER_32 *)tr2+139) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 79L);
	*((EIF_INTEGER_32 *)tr2+140) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 77L);
	*((EIF_INTEGER_32 *)tr2+141) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 76L);
	*((EIF_INTEGER_32 *)tr2+142) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 75L);
	*((EIF_INTEGER_32 *)tr2+143) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 74L);
	*((EIF_INTEGER_32 *)tr2+144) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 73L);
	*((EIF_INTEGER_32 *)tr2+145) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 72L);
	*((EIF_INTEGER_32 *)tr2+146) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 71L);
	*((EIF_INTEGER_32 *)tr2+147) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 69L);
	*((EIF_INTEGER_32 *)tr2+148) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 68L);
	*((EIF_INTEGER_32 *)tr2+149) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 67L);
	*((EIF_INTEGER_32 *)tr2+150) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 65L);
	*((EIF_INTEGER_32 *)tr2+151) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	*((EIF_INTEGER_32 *)tr2+152) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 63L);
	*((EIF_INTEGER_32 *)tr2+153) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
	*((EIF_INTEGER_32 *)tr2+154) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 58L);
	*((EIF_INTEGER_32 *)tr2+155) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 57L);
	*((EIF_INTEGER_32 *)tr2+156) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 56L);
	*((EIF_INTEGER_32 *)tr2+157) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 54L);
	*((EIF_INTEGER_32 *)tr2+158) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 53L);
	*((EIF_INTEGER_32 *)tr2+159) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 52L);
	*((EIF_INTEGER_32 *)tr2+160) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	*((EIF_INTEGER_32 *)tr2+161) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 49L);
	*((EIF_INTEGER_32 *)tr2+162) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 48L);
	*((EIF_INTEGER_32 *)tr2+163) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 42L);
	*((EIF_INTEGER_32 *)tr2+164) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 34L);
	*((EIF_INTEGER_32 *)tr2+165) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	*((EIF_INTEGER_32 *)tr2+166) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 29L);
	*((EIF_INTEGER_32 *)tr2+167) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 28L);
	*((EIF_INTEGER_32 *)tr2+168) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 27L);
	*((EIF_INTEGER_32 *)tr2+169) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+170) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 23L);
	*((EIF_INTEGER_32 *)tr2+171) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+172) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
	*((EIF_INTEGER_32 *)tr2+173) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
	*((EIF_INTEGER_32 *)tr2+174) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+175) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+176) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+177) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+178) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+179) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+180) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+181) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+182) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+183) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+184) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+185) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+186) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+187) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+188) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+189) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+190) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+191) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+192) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+193) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+194) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+195) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+196) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+197) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+198) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+199) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11318, dtype))(Current)).it_i4);
	*((EIF_INTEGER_32 *)tr2+200) = (EIF_INTEGER_32) ti4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr2)))(tr2).it_r;
	ur2 = tr1;
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = ((EIF_INTEGER_32) 200L);
	ui4_4 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11285, dtype))(Current, ur1x, ur2x, ui4_2x, ui4_3x, ui4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {ETF_EVT_SCANNER}.yy_chk_template_2 */
void F1590_16098 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_chk_template_2";
	RTEX;
#define arg1 arg1x.it_r
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1589, Current, 0, 1, 22098);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1589, Current, 22098);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,593,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1589, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 32L);
	{
		static EIF_TYPE_INDEX typarr0[] = {595,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 32L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+13) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+14) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+15) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+16) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+17) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+18) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+19) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+20) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+21) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+22) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+23) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+24) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+25) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+26) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+27) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+28) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+29) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+30) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11318, dtype))(Current)).it_i4);
	*((EIF_INTEGER_32 *)tr2+31) = (EIF_INTEGER_32) ti4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr2)))(tr2).it_r;
	ur2 = tr1;
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = ((EIF_INTEGER_32) 31L);
	ui4_4 = ((EIF_INTEGER_32) 200L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11285, dtype))(Current, ur1x, ur2x, ui4_2x, ui4_3x, ui4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {ETF_EVT_SCANNER}.yy_base_template */
RTOID (F1590_16099)
EIF_TYPED_VALUE F1590_16099 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_base_template";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1590_16099);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1589, Current, 0, 0, 22099);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1589, Current, 22099);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000253, 0,0); /* Result */
	ui4_1 = ((EIF_INTEGER_32) 115L);
	{
		static EIF_TYPE_INDEX typarr0[] = {595,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 115L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 174L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 175L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 54L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 175L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 55L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 55L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 175L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 175L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 175L);
	*((EIF_INTEGER_32 *)tr2+13) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 163L);
	*((EIF_INTEGER_32 *)tr2+14) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 161L);
	*((EIF_INTEGER_32 *)tr2+15) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	*((EIF_INTEGER_32 *)tr2+16) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 175L);
	*((EIF_INTEGER_32 *)tr2+17) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 175L);
	*((EIF_INTEGER_32 *)tr2+18) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 175L);
	*((EIF_INTEGER_32 *)tr2+19) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 175L);
	*((EIF_INTEGER_32 *)tr2+20) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 175L);
	*((EIF_INTEGER_32 *)tr2+21) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 175L);
	*((EIF_INTEGER_32 *)tr2+22) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 137L);
	*((EIF_INTEGER_32 *)tr2+23) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 138L);
	*((EIF_INTEGER_32 *)tr2+24) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 141L);
	*((EIF_INTEGER_32 *)tr2+25) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+26) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 44L);
	*((EIF_INTEGER_32 *)tr2+27) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 137L);
	*((EIF_INTEGER_32 *)tr2+28) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 142L);
	*((EIF_INTEGER_32 *)tr2+29) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 130L);
	*((EIF_INTEGER_32 *)tr2+30) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	*((EIF_INTEGER_32 *)tr2+31) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 144L);
	*((EIF_INTEGER_32 *)tr2+32) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 175L);
	*((EIF_INTEGER_32 *)tr2+33) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 175L);
	*((EIF_INTEGER_32 *)tr2+34) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 111L);
	*((EIF_INTEGER_32 *)tr2+35) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 33L);
	*((EIF_INTEGER_32 *)tr2+36) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 175L);
	*((EIF_INTEGER_32 *)tr2+37) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 175L);
	*((EIF_INTEGER_32 *)tr2+38) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 66L);
	*((EIF_INTEGER_32 *)tr2+39) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 66L);
	*((EIF_INTEGER_32 *)tr2+40) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 175L);
	*((EIF_INTEGER_32 *)tr2+41) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 67L);
	*((EIF_INTEGER_32 *)tr2+42) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 157L);
	*((EIF_INTEGER_32 *)tr2+43) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+44) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 175L);
	*((EIF_INTEGER_32 *)tr2+45) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 61L);
	*((EIF_INTEGER_32 *)tr2+46) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 65L);
	*((EIF_INTEGER_32 *)tr2+47) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+48) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 128L);
	*((EIF_INTEGER_32 *)tr2+49) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 129L);
	*((EIF_INTEGER_32 *)tr2+50) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 139L);
	*((EIF_INTEGER_32 *)tr2+51) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 53L);
	*((EIF_INTEGER_32 *)tr2+52) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 123L);
	*((EIF_INTEGER_32 *)tr2+53) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 137L);
	*((EIF_INTEGER_32 *)tr2+54) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 123L);
	*((EIF_INTEGER_32 *)tr2+55) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 43L);
	*((EIF_INTEGER_32 *)tr2+56) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 123L);
	*((EIF_INTEGER_32 *)tr2+57) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 125L);
	*((EIF_INTEGER_32 *)tr2+58) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 104L);
	*((EIF_INTEGER_32 *)tr2+59) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 105L);
	*((EIF_INTEGER_32 *)tr2+60) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 79L);
	*((EIF_INTEGER_32 *)tr2+61) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 175L);
	*((EIF_INTEGER_32 *)tr2+62) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 77L);
	*((EIF_INTEGER_32 *)tr2+63) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 131L);
	*((EIF_INTEGER_32 *)tr2+64) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 121L);
	*((EIF_INTEGER_32 *)tr2+65) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 116L);
	*((EIF_INTEGER_32 *)tr2+66) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	*((EIF_INTEGER_32 *)tr2+67) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 124L);
	*((EIF_INTEGER_32 *)tr2+68) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 118L);
	*((EIF_INTEGER_32 *)tr2+69) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 118L);
	*((EIF_INTEGER_32 *)tr2+70) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 67L);
	*((EIF_INTEGER_32 *)tr2+71) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 116L);
	*((EIF_INTEGER_32 *)tr2+72) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 108L);
	*((EIF_INTEGER_32 *)tr2+73) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 93L);
	*((EIF_INTEGER_32 *)tr2+74) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 98L);
	*((EIF_INTEGER_32 *)tr2+75) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 103L);
	*((EIF_INTEGER_32 *)tr2+76) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 116L);
	*((EIF_INTEGER_32 *)tr2+77) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 119L);
	*((EIF_INTEGER_32 *)tr2+78) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 68L);
	*((EIF_INTEGER_32 *)tr2+79) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+80) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+81) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 107L);
	*((EIF_INTEGER_32 *)tr2+82) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+83) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+84) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 111L);
	*((EIF_INTEGER_32 *)tr2+85) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 90L);
	*((EIF_INTEGER_32 *)tr2+86) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+87) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+88) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 113L);
	*((EIF_INTEGER_32 *)tr2+89) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 110L);
	*((EIF_INTEGER_32 *)tr2+90) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+91) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 107L);
	*((EIF_INTEGER_32 *)tr2+92) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 104L);
	*((EIF_INTEGER_32 *)tr2+93) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+94) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+95) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 79L);
	*((EIF_INTEGER_32 *)tr2+96) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 84L);
	*((EIF_INTEGER_32 *)tr2+97) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 75L);
	*((EIF_INTEGER_32 *)tr2+98) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 76L);
	*((EIF_INTEGER_32 *)tr2+99) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+100) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+101) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+102) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 84L);
	*((EIF_INTEGER_32 *)tr2+103) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 55L);
	*((EIF_INTEGER_32 *)tr2+104) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 63L);
	*((EIF_INTEGER_32 *)tr2+105) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	*((EIF_INTEGER_32 *)tr2+106) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+107) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 74L);
	*((EIF_INTEGER_32 *)tr2+108) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+109) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 175L);
	*((EIF_INTEGER_32 *)tr2+110) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
	*((EIF_INTEGER_32 *)tr2+111) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 113L);
	*((EIF_INTEGER_32 *)tr2+112) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 118L);
	*((EIF_INTEGER_32 *)tr2+113) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 124L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11318, dtype))(Current)).it_i4);
	*((EIF_INTEGER_32 *)tr2+114) = (EIF_INTEGER_32) ti4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr2)))(tr2).it_r;
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11284, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef Result
}

/* {ETF_EVT_SCANNER}.yy_def_template */
RTOID (F1590_16100)
EIF_TYPED_VALUE F1590_16100 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_def_template";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1590_16100);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1589, Current, 0, 0, 22100);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1589, Current, 22100);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000253, 0,0); /* Result */
	ui4_1 = ((EIF_INTEGER_32) 115L);
	{
		static EIF_TYPE_INDEX typarr0[] = {595,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 115L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 110L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 111L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+13) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+14) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+15) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+16) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+17) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+18) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+19) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+20) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+21) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+22) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+23) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+24) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+25) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+26) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+27) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+28) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+29) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+30) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+31) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+32) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+33) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+34) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+35) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+36) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+37) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+38) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+39) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 110L);
	*((EIF_INTEGER_32 *)tr2+40) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+41) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 110L);
	*((EIF_INTEGER_32 *)tr2+42) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+43) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 113L);
	*((EIF_INTEGER_32 *)tr2+44) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+45) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+46) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+47) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+48) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+49) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+50) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+51) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+52) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+53) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+54) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+55) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+56) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+57) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+58) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+59) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+60) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 110L);
	*((EIF_INTEGER_32 *)tr2+61) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+62) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+63) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+64) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+65) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+66) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+67) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+68) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+69) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+70) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+71) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+72) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+73) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+74) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+75) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+76) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+77) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+78) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+79) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+80) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+81) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+82) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+83) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+84) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+85) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+86) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+87) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+88) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+89) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+90) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+91) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+92) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+93) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+94) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+95) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+96) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+97) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+98) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+99) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+100) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+101) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+102) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+103) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+104) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+105) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+106) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+107) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+108) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 112L);
	*((EIF_INTEGER_32 *)tr2+109) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+110) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+111) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+112) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	*((EIF_INTEGER_32 *)tr2+113) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11318, dtype))(Current)).it_i4);
	*((EIF_INTEGER_32 *)tr2+114) = (EIF_INTEGER_32) ti4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr2)))(tr2).it_r;
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11284, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef Result
}

/* {ETF_EVT_SCANNER}.yy_ec_template */
RTOID (F1590_16101)
EIF_TYPED_VALUE F1590_16101 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_ec_template";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1590_16101);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1589, Current, 1, 0, 22101);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1589, Current, 22101);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(1, 0xF8000251, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,593,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = ((EIF_INTEGER_32) 256L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2745, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11769, dtype))(Current, ur1x);
	RTHOOK(3);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11770, dtype))(Current, ur1x);
	RTHOOK(4);
	RTDBGAL(0, 0xF8000253, 0,0); /* Result */
	ur1 = RTCCL(loc1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11284, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef Result
}

/* {ETF_EVT_SCANNER}.yy_ec_template_1 */
void F1590_16102 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_ec_template_1";
	RTEX;
#define arg1 arg1x.it_r
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1589, Current, 0, 1, 22102);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1589, Current, 22102);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,593,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1589, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 201L);
	{
		static EIF_TYPE_INDEX typarr0[] = {595,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 201L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+13) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr2+14) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+15) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+16) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+17) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+18) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+19) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+20) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+21) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+22) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+23) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+24) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+25) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+26) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+27) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+28) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+29) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+30) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+31) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+32) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr2+33) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+34) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr2+35) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+36) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+37) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+38) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+39) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	*((EIF_INTEGER_32 *)tr2+40) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr2+41) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	*((EIF_INTEGER_32 *)tr2+42) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+43) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+44) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
	*((EIF_INTEGER_32 *)tr2+45) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	*((EIF_INTEGER_32 *)tr2+46) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
	*((EIF_INTEGER_32 *)tr2+47) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+48) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+49) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+50) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+51) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+52) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
	*((EIF_INTEGER_32 *)tr2+53) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+54) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
	*((EIF_INTEGER_32 *)tr2+55) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+56) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+57) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+58) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	*((EIF_INTEGER_32 *)tr2+59) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	*((EIF_INTEGER_32 *)tr2+60) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 17L);
	*((EIF_INTEGER_32 *)tr2+61) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 18L);
	*((EIF_INTEGER_32 *)tr2+62) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 19L);
	*((EIF_INTEGER_32 *)tr2+63) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
	*((EIF_INTEGER_32 *)tr2+64) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+65) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 21L);
	*((EIF_INTEGER_32 *)tr2+66) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+67) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 23L);
	*((EIF_INTEGER_32 *)tr2+68) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+69) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+70) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 26L);
	*((EIF_INTEGER_32 *)tr2+71) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 27L);
	*((EIF_INTEGER_32 *)tr2+72) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 28L);
	*((EIF_INTEGER_32 *)tr2+73) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 29L);
	*((EIF_INTEGER_32 *)tr2+74) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+75) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+76) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 30L);
	*((EIF_INTEGER_32 *)tr2+77) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+78) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	*((EIF_INTEGER_32 *)tr2+79) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	*((EIF_INTEGER_32 *)tr2+80) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 33L);
	*((EIF_INTEGER_32 *)tr2+81) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+82) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 34L);
	*((EIF_INTEGER_32 *)tr2+83) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+84) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 36L);
	*((EIF_INTEGER_32 *)tr2+85) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 37L);
	*((EIF_INTEGER_32 *)tr2+86) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+87) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+88) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+89) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+90) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+91) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 40L);
	*((EIF_INTEGER_32 *)tr2+92) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 41L);
	*((EIF_INTEGER_32 *)tr2+93) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 42L);
	*((EIF_INTEGER_32 *)tr2+94) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+95) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 43L);
	*((EIF_INTEGER_32 *)tr2+96) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+97) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 44L);
	*((EIF_INTEGER_32 *)tr2+98) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+99) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+100) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+101) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 45L);
	*((EIF_INTEGER_32 *)tr2+102) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 26L);
	*((EIF_INTEGER_32 *)tr2+103) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+104) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+105) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+106) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+107) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+108) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 46L);
	*((EIF_INTEGER_32 *)tr2+109) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 47L);
	*((EIF_INTEGER_32 *)tr2+110) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+111) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+112) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 48L);
	*((EIF_INTEGER_32 *)tr2+113) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+114) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 49L);
	*((EIF_INTEGER_32 *)tr2+115) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	*((EIF_INTEGER_32 *)tr2+116) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 51L);
	*((EIF_INTEGER_32 *)tr2+117) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 52L);
	*((EIF_INTEGER_32 *)tr2+118) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+119) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+120) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+121) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 53L);
	*((EIF_INTEGER_32 *)tr2+122) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+123) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 54L);
	*((EIF_INTEGER_32 *)tr2+124) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+125) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 55L);
	*((EIF_INTEGER_32 *)tr2+126) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+127) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+128) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+129) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+130) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+131) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+132) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+133) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+134) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+135) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+136) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+137) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+138) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+139) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+140) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+141) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+142) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+143) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+144) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+145) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+146) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+147) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+148) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+149) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+150) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+151) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+152) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+153) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+154) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+155) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+156) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+157) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+158) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+159) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+160) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+161) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+162) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+163) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+164) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+165) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+166) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+167) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+168) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+169) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+170) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+171) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+172) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+173) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+174) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+175) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+176) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+177) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+178) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+179) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+180) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+181) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+182) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+183) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+184) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+185) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+186) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+187) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+188) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+189) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+190) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+191) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+192) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+193) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+194) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+195) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+196) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+197) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+198) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+199) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11318, dtype))(Current)).it_i4);
	*((EIF_INTEGER_32 *)tr2+200) = (EIF_INTEGER_32) ti4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr2)))(tr2).it_r;
	ur2 = tr1;
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = ((EIF_INTEGER_32) 200L);
	ui4_4 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11285, dtype))(Current, ur1x, ur2x, ui4_2x, ui4_3x, ui4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {ETF_EVT_SCANNER}.yy_ec_template_2 */
void F1590_16103 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "yy_ec_template_2";
	RTEX;
#define arg1 arg1x.it_r
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1589, Current, 0, 1, 22103);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1589, Current, 22103);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,593,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1589, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 58L);
	{
		static EIF_TYPE_INDEX typarr0[] = {595,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 58L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+13) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+14) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+15) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+16) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+17) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+18) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+19) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+20) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+21) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+22) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+23) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+24) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+25) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+26) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+27) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+28) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+29) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+30) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+31) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+32) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+33) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+34) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+35) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+36) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+37) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+38) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+39) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+40) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+41) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+42) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+43) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+44) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+45) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+46) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+47) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+48) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+49) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+50) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+51) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+52) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+53) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+54) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+55) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+56) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11318, dtype))(Current)).it_i4);
	*((EIF_INTEGER_32 *)tr2+57) = (EIF_INTEGER_32) ti4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr2)))(tr2).it_r;
	ur2 = tr1;
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = ((EIF_INTEGER_32) 57L);
	ui4_4 = ((EIF_INTEGER_32) 200L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11285, dtype))(Current, ur1x, ur2x, ui4_2x, ui4_3x, ui4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {ETF_EVT_SCANNER}.yy_meta_template */
RTOID (F1590_16104)
EIF_TYPED_VALUE F1590_16104 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_meta_template";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1590_16104);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1589, Current, 0, 0, 22104);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1589, Current, 22104);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000253, 0,0); /* Result */
	ui4_1 = ((EIF_INTEGER_32) 57L);
	{
		static EIF_TYPE_INDEX typarr0[] = {595,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 57L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+13) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+14) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr2+15) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+16) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+17) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+18) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+19) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+20) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+21) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+22) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+23) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+24) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+25) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+26) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+27) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+28) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+29) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+30) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+31) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+32) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+33) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+34) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+35) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+36) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+37) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+38) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+39) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr2+40) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+41) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+42) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+43) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+44) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+45) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+46) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+47) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+48) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+49) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+50) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+51) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+52) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+53) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	*((EIF_INTEGER_32 *)tr2+54) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+55) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11318, dtype))(Current)).it_i4);
	*((EIF_INTEGER_32 *)tr2+56) = (EIF_INTEGER_32) ti4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr2)))(tr2).it_r;
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11284, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef Result
}

/* {ETF_EVT_SCANNER}.yy_accept_template */
RTOID (F1590_16105)
EIF_TYPED_VALUE F1590_16105 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "yy_accept_template";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F1590_16105);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1589, Current, 0, 0, 22105);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1589, Current, 22105);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000253, 0,0); /* Result */
	ui4_1 = ((EIF_INTEGER_32) 111L);
	{
		static EIF_TYPE_INDEX typarr0[] = {595,218,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 111L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 41L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 26L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 18L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 19L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	*((EIF_INTEGER_32 *)tr2+13) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 27L);
	*((EIF_INTEGER_32 *)tr2+14) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 39L);
	*((EIF_INTEGER_32 *)tr2+15) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 33L);
	*((EIF_INTEGER_32 *)tr2+16) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	*((EIF_INTEGER_32 *)tr2+17) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 17L);
	*((EIF_INTEGER_32 *)tr2+18) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	*((EIF_INTEGER_32 *)tr2+19) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 30L);
	*((EIF_INTEGER_32 *)tr2+20) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 23L);
	*((EIF_INTEGER_32 *)tr2+21) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr2+22) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+23) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+24) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+25) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+26) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+27) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+28) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+29) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+30) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+31) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+32) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
	*((EIF_INTEGER_32 *)tr2+33) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 21L);
	*((EIF_INTEGER_32 *)tr2+34) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+35) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+36) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	*((EIF_INTEGER_32 *)tr2+37) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	*((EIF_INTEGER_32 *)tr2+38) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+39) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+40) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 37L);
	*((EIF_INTEGER_32 *)tr2+41) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+42) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+43) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 38L);
	*((EIF_INTEGER_32 *)tr2+44) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 28L);
	*((EIF_INTEGER_32 *)tr2+45) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+46) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 33L);
	*((EIF_INTEGER_32 *)tr2+47) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+48) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+49) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+50) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+51) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+52) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+53) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+54) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+55) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+56) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+57) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+58) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+59) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+60) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 37L);
	*((EIF_INTEGER_32 *)tr2+61) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 36L);
	*((EIF_INTEGER_32 *)tr2+62) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 34L);
	*((EIF_INTEGER_32 *)tr2+63) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+64) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+65) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+66) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+67) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+68) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+69) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+70) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+71) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+72) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+73) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+74) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+75) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+76) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr2+77) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	*((EIF_INTEGER_32 *)tr2+78) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+79) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+80) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	*((EIF_INTEGER_32 *)tr2+81) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+82) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	*((EIF_INTEGER_32 *)tr2+83) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+84) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+85) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+86) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 29L);
	*((EIF_INTEGER_32 *)tr2+87) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
	*((EIF_INTEGER_32 *)tr2+88) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+89) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+90) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	*((EIF_INTEGER_32 *)tr2+91) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+92) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+93) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
	*((EIF_INTEGER_32 *)tr2+94) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	*((EIF_INTEGER_32 *)tr2+95) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+96) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+97) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+98) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+99) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
	*((EIF_INTEGER_32 *)tr2+100) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+101) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr2+102) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+103) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
	*((EIF_INTEGER_32 *)tr2+104) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+105) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+106) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr2+107) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 35L);
	*((EIF_INTEGER_32 *)tr2+108) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	*((EIF_INTEGER_32 *)tr2+109) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11318, dtype))(Current)).it_i4);
	*((EIF_INTEGER_32 *)tr2+110) = (EIF_INTEGER_32) ti4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2686, Dtype(tr2)))(tr2).it_r;
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11284, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef Result
}

/* {ETF_EVT_SCANNER}.yyjam_base */
EIF_TYPED_VALUE F1590_16106 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 175L);
	return r;
}

/* {ETF_EVT_SCANNER}.yyjam_state */
EIF_TYPED_VALUE F1590_16107 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 109L);
	return r;
}

/* {ETF_EVT_SCANNER}.yytemplate_mark */
EIF_TYPED_VALUE F1590_16108 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 110L);
	return r;
}

/* {ETF_EVT_SCANNER}.yynull_equiv_class */
EIF_TYPED_VALUE F1590_16109 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {ETF_EVT_SCANNER}.yyreject_used */
EIF_TYPED_VALUE F1590_16110 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {ETF_EVT_SCANNER}.yyvariable_trail_context */
EIF_TYPED_VALUE F1590_16111 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {ETF_EVT_SCANNER}.yyreject_or_variable_trail_context */
EIF_TYPED_VALUE F1590_16112 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {ETF_EVT_SCANNER}.yynb_rules */
EIF_TYPED_VALUE F1590_16113 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 40L);
	return r;
}

/* {ETF_EVT_SCANNER}.yyend_of_buffer */
EIF_TYPED_VALUE F1590_16114 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 41L);
	return r;
}

/* {ETF_EVT_SCANNER}.yyline_used */
EIF_TYPED_VALUE F1590_16115 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_TRUE;
	return r;
}

/* {ETF_EVT_SCANNER}.yyposition_used */
EIF_TYPED_VALUE F1590_16116 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {ETF_EVT_SCANNER}.initial */
EIF_TYPED_VALUE F1590_16117 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {ETF_EVT_SCANNER}.make */
void F1590_16118 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
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
	
	RTEAA(l_feature_name, 1589, Current, 0, 0, 22087);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1589, Current, 22087);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11226, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {ETF_EVT_SCANNER}.reset */
void F1590_16119 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset";
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
	
	RTEAA(l_feature_name, 1589, Current, 0, 0, 22088);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1589, Current, 22088);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(11229, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit1590 (void)
{
	GTCX
	RTOTS (16093,F1590_16093)
	RTOTS (16096,F1590_16096)
	RTOTS (16099,F1590_16099)
	RTOTS (16100,F1590_16100)
	RTOTS (16101,F1590_16101)
	RTOTS (16104,F1590_16104)
	RTOTS (16105,F1590_16105)
}


#ifdef __cplusplus
}
#endif
