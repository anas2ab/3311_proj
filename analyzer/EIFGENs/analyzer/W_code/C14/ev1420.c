/*
 * Code for class EV_RADIO_PEER_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1420_13244(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1420_13245(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1420_13249(EIF_REFERENCE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE F1420_13251_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1420_13251(EIF_REFERENCE);
extern void EIF_Minit1420(void);

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

/* {EV_RADIO_PEER_IMP}.peers */
EIF_TYPED_VALUE F1420_13244 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "peers";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_POINTER, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1419, Current, 5, 0, 19721);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1419, Current, 19721);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000330, 0,0); /* Result */
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,816,0xFF01,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = RTWCT(9374, dtype, Dftype(Current));
			typarr0[3] = l_type.annotations | 0xFF00;
			typarr0[4] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2880, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tb1 = '\01';
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10119, dtype))(Current)).it_p);
	if (!(EIF_BOOLEAN)(tp1 == loc3)) {
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10119, dtype))(Current)).it_p);
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10118, dtype))(Current, up1x)).it_p);
		tb1 = (EIF_BOOLEAN)(tp1 == loc3);
	}
	if (tb1) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9373, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", Result))(Result, ur1x);
	} else {
		RTHOOK(4);
		RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10119, dtype))(Current)).it_p);
		loc1 = (EIF_POINTER) tp1;
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			RTHOOK(6);
			RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
			up1 = loc1;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10118, dtype))(Current, up1x)).it_p);
			loc2 = (EIF_POINTER) tp1;
			RTHOOK(7);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
			if ((EIF_BOOLEAN)(loc2 != tp1)) {
				RTHOOK(8);
				RTDBGAL(4, 0xF800058B, 0, 0); /* loc4 */
				up1 = loc2;
				loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10115, dtype))(Current, up1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc4 = RTRV(eif_new_type(1419, 0x00), loc4);
				RTHOOK(9);
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					RTHOOK(10);
					RTDBGAL(5, 0xF8000510, 0, 0); /* loc5 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9374, "interface", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc5 = RTCCL(tr1);
					loc5 = RTRV(RTWCT(9374, dtype, Dftype(Current)), loc5);
					RTHOOK(11);
					RTCT0("l_interface /= Void", EX_CHECK);
					if ((EIF_BOOLEAN)(loc5 != NULL)) {
						RTCK0;
					} else {
						RTCF0;
					}
					RTHOOK(12);
					ur1 = RTCCL(loc5);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2339, "extend", Result))(Result, ur1x);
				}
			}
			RTHOOK(13);
			RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
			up1 = loc1;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6093, 970))(Current, up1x)).it_p);
			loc1 = (EIF_POINTER) tp1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
}

/* {EV_RADIO_PEER_IMP}.selected_peer */
EIF_TYPED_VALUE F1420_13245 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "selected_peer";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc5);
	RTLR(4,loc4);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_POINTER, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1419, Current, 5, 0, 19722);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1419, Current, 19722);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\01';
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10119, dtype))(Current)).it_p);
	if (!(EIF_BOOLEAN)(tp1 == loc3)) {
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10119, dtype))(Current)).it_p);
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10118, dtype))(Current, up1x)).it_p);
		tb1 = (EIF_BOOLEAN)(tp1 == loc3);
	}
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0xF8000510, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9373, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(3);
		RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10119, dtype))(Current)).it_p);
		loc1 = (EIF_POINTER) tp1;
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc3) || (EIF_BOOLEAN)(loc5 != NULL))) break;
			RTHOOK(5);
			RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
			up1 = loc1;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10118, dtype))(Current, up1x)).it_p);
			loc2 = (EIF_POINTER) tp1;
			RTHOOK(6);
			if ((EIF_BOOLEAN)(loc2 != loc3)) {
				RTHOOK(7);
				RTDBGAL(4, 0xF800058B, 0, 0); /* loc4 */
				up1 = loc1;
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10118, dtype))(Current, up1x)).it_p);
				up1 = tp1;
				loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10115, dtype))(Current, up1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc4 = RTRV(eif_new_type(1419, 0x00), loc4);
				RTHOOK(8);
				tb1 = '\0';
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10111, "is_selected", loc4))(loc4)).it_b);
					tb1 = tb2;
				}
				if (tb1) {
					RTHOOK(9);
					RTDBGAL(5, 0xF8000510, 0, 0); /* loc5 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9374, "interface", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc5 = RTCCL(tr1);
					loc5 = RTRV(RTWCT(9374, dtype, Dftype(Current)), loc5);
				}
			}
			RTHOOK(10);
			RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
			up1 = loc1;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6093, 970))(Current, up1x)).it_p);
			loc1 = (EIF_POINTER) tp1;
		}
		RTHOOK(11);
		RTCT0("l_result /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(12);
		RTDBGAL(0, 0xF8000510, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(loc5);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {EV_RADIO_PEER_IMP}.widget_object */
EIF_TYPED_VALUE F1420_13249 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "widget_object";
	RTEX;
#define arg1 arg1x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 1419, Current, 0, 1, 19723);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1419, Current, 19723);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x40000000, 1,0); /* Result */
	up1 = arg1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6092, 970))(Current, up1x)).it_p);
	Result = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef up1
#undef arg1
}

/* {EV_RADIO_PEER_IMP}.interface */
static EIF_TYPED_VALUE F1420_13251_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "interface";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1419, Current, 0, 0, 19724);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1419, Current, 19724);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

EIF_TYPED_VALUE F1420_13251 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9374,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(9374, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1420_13251_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(9374,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1420 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
