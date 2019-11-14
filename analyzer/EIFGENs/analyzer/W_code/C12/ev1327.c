/*
 * Code for class EV_DOCKABLE_DIALOG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1327_11822(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1327_11823(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1327_11824(EIF_REFERENCE);
extern void F1327_11825(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1327_11826(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1327_11827(EIF_REFERENCE);
extern void EIF_Minit1327(void);

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

/* {EV_DOCKABLE_DIALOG}.original_parent */
EIF_TYPED_VALUE F1327_11822 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9052,Dtype(Current)));
	return r;
}


/* {EV_DOCKABLE_DIALOG}.original_parent_index */
EIF_TYPED_VALUE F1327_11823 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(9053,Dtype(Current)));
	return r;
}


/* {EV_DOCKABLE_DIALOG}.expansion_was_disabled */
EIF_TYPED_VALUE F1327_11824 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(9054,Dtype(Current)));
	return r;
}


/* {EV_DOCKABLE_DIALOG}.set_original_parent */
void F1327_11825 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_original_parent";
	RTEX;
#define arg1 arg1x.it_r
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
	
	RTEAA(l_feature_name, 1326, Current, 0, 1, 18491);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1326, Current, 18491);
	RTCC(arg1, 1326, l_feature_name, 1, RTWCT(9052, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9052, 0xF800050D, 0); /* original_parent */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(9052, dtype)) = (EIF_REFERENCE) tr1;
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

/* {EV_DOCKABLE_DIALOG}.set_original_parent_index */
void F1327_11826 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_original_parent_index";
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
	
	RTEAA(l_feature_name, 1326, Current, 0, 1, 18492);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1326, Current, 18492);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9053, 0x10000000, 1); /* original_parent_index */
	*(EIF_INTEGER_32 *)(Current + RTWA(9053, dtype)) = (EIF_INTEGER_32) arg1;
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

/* {EV_DOCKABLE_DIALOG}.set_expansion_was_disabled */
void F1327_11827 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_expansion_was_disabled";
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
	
	RTEAA(l_feature_name, 1326, Current, 0, 0, 18493);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1326, Current, 18493);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 9054, 0x04000000, 1); /* expansion_was_disabled */
	*(EIF_BOOLEAN *)(Current + RTWA(9054, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit1327 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
