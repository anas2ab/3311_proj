/*
 * Code for class WEL_GDIP_IMAGE_LOCK_MODE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F992_9056(EIF_REFERENCE);
extern EIF_TYPED_VALUE F992_9057(EIF_REFERENCE);
extern EIF_TYPED_VALUE F992_9058(EIF_REFERENCE);
extern EIF_TYPED_VALUE F992_9059(EIF_REFERENCE);
extern EIF_TYPED_VALUE F992_9060(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit992(void);

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

/* {WEL_GDIP_IMAGE_LOCK_MODE}.read_only */
EIF_TYPED_VALUE F992_9056 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 1U);
	return r;
}

/* {WEL_GDIP_IMAGE_LOCK_MODE}.write_only */
EIF_TYPED_VALUE F992_9057 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 2U);
	return r;
}

/* {WEL_GDIP_IMAGE_LOCK_MODE}.read_write */
EIF_TYPED_VALUE F992_9058 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 3U);
	return r;
}

/* {WEL_GDIP_IMAGE_LOCK_MODE}.user_input_buffer */
EIF_TYPED_VALUE F992_9059 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 4U);
	return r;
}

/* {WEL_GDIP_IMAGE_LOCK_MODE}.is_valid */
EIF_TYPED_VALUE F992_9060 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 991, Current, 0, 1, 15361);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(991, Current, 15361);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6846, dtype))(Current)).it_n4);
	tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6847, dtype))(Current)).it_n4);
	tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6848, dtype))(Current)).it_n4);
	tu4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6849, dtype))(Current)).it_n4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == tu4_1) || (EIF_BOOLEAN)(arg1 == tu4_2)) || (EIF_BOOLEAN)(arg1 == tu4_3)) || (EIF_BOOLEAN)(arg1 == tu4_4));
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

void EIF_Minit992 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
