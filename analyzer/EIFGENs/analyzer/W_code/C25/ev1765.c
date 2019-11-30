/*
 * Code for class EV_BOX_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1765_19745(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1765_19746(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1765_19747(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1765_19759(EIF_REFERENCE);
static EIF_TYPED_VALUE F1765_19760_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1765_19760(EIF_REFERENCE);
extern void EIF_Minit1765(void);

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

/* {EV_BOX_I}.default_homogeneous */
EIF_TYPED_VALUE F1765_19745 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {EV_BOX_I}.default_spacing */
EIF_TYPED_VALUE F1765_19746 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {EV_BOX_I}.default_border_width */
EIF_TYPED_VALUE F1765_19747 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {EV_BOX_I}.insertion_position */
EIF_TYPED_VALUE F1765_19759 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "insertion_position";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	
	RTEAA(l_feature_name, 1764, Current, 6, 0, 26110);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1764, Current, 26110);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(2);
	RTDBGAL(1, 0xF800008E, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16074, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16477, dtype))(Current)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	tb1 = '\0';
	if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16479, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN) (loc2 <= ti4_1);
	}
	if (tb1) {
		RTHOOK(5);
		tb1 = '\01';
		tb2 = '\01';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16479, dtype))(Current)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16470, dtype))(Current)).it_i4);
		if (!(EIF_BOOLEAN) (loc2 >= (EIF_INTEGER_32) (ti4_1 - ti4_2))) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16431, dtype))(Current)).it_i4);
			tb2 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
		}
		if (!tb2) {
			tb2 = '\0';
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16431, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16076, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10444, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				tb2 = RTCEQ(tr1, tr2);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(6);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16431, dtype))(Current)).it_i4);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(7);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16470, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN) (loc2 < ti4_1)) {
				RTHOOK(8);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			} else {
				RTHOOK(9);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16084, dtype))(Current);
				RTHOOK(10);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16470, dtype))(Current)).it_i4);
				loc4 = (EIF_INTEGER_32) ti4_1;
				for (;;) {
					RTHOOK(11);
					if ((EIF_BOOLEAN)(Result != ((EIF_INTEGER_32) -1L))) break;
					RTHOOK(12);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16478, dtype))(Current)).it_i4);
					loc3 += ti4_1;
					RTHOOK(13);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(16073, dtype));
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
						RTHOOK(14);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16470, dtype))(Current)).it_i4);
						loc3 += ti4_1;
					} else {
						RTHOOK(15);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16471, dtype))(Current)).it_i4);
						loc3 += ti4_1;
					}
					RTHOOK(16);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= loc4) && (EIF_BOOLEAN) (loc2 <= loc3))) {
						RTHOOK(17);
						RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
						loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - loc4) / ((EIF_INTEGER_32) 2L));
						RTHOOK(18);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16471, dtype))(Current)).it_i4);
						loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + loc5) + (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)));
						RTHOOK(19);
						if ((EIF_BOOLEAN) (loc2 > loc6)) {
							RTHOOK(20);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(16073, dtype));
							Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
						} else {
							RTHOOK(21);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(16073, dtype));
							Result = (EIF_INTEGER_32) ti4_1;
						}
					}
					RTHOOK(22);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					loc4 = (EIF_INTEGER_32) loc3;
					RTHOOK(23);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16086, dtype))(Current);
				}
				RTHOOK(24);
				ur1 = RTCCL(loc1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16088, dtype))(Current, ur1x);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
}

/* {EV_BOX_I}.interface */
static EIF_TYPED_VALUE F1765_19760_body (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1764, Current, 0, 0, 26111);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1764, Current, 26111);
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

EIF_TYPED_VALUE F1765_19760 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(15741,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(15741, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1765_19760_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(15741,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1765 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
