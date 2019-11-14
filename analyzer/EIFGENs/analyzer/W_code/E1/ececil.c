#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* TRACING_HANDLER per_thread_trace */
void A32_36 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	EIF_TYPED_VALUE u [5];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(864, "per_thread_trace", Current))(Current, ((u [0].type = SK_INT32), (u [0].it_i4 = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_INT32), (u [3].it_i4 = arg4), u [3]), ((u [4].type = SK_BOOL), (u [4].it_b = arg5), u [4]));
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A139_159_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) F139_7136)(closed [1].it_r, open [1]);
}

	/* MISMATCH_INFORMATION wipe_out */
void A159_97 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2343, "wipe_out", Current))(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A159_161 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3070, "internal_put", Current))(Current, ((u [0].type = SK_REF), (u [0].it_r = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* MISMATCH_INFORMATION set_string_versions */
void A159_162 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3071, "set_string_versions", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* ETF_GUI_OUTPUT_HANDLER log_error */
void _A1105_35_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7184, "log_error", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_EVENT [G#1] execute */
void _A1612_36_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6298, "execute", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* ETF_CMD_LINE_OUTPUT_HANDLER log_empty */
void _A1106_34_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7182, "log_empty", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_CMD_LINE_OUTPUT_HANDLER log_error */
void _A1106_35_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7184, "log_error", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_CMD_LINE_OUTPUT_HANDLER log_command */
void _A1106_40_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7183, "log_command", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_ACCELERATOR_LIST enable_item_parented */
void _A1137_152_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7734, "enable_item_parented", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_ACCELERATOR_LIST disable_item_parented */
void _A1137_153_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7735, "disable_item_parented", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_COLUMN_ACTION_SEQUENCE wrapper */
void _A1139_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7743, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_MULTI_COLUMN_LIST_ROW_SELECT_ACTION_SEQUENCE wrapper */
void _A1140_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7744, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_VALUE_CHANGE_ACTION_SEQUENCE wrapper */
void _A1141_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7745, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_NEW_ITEM_ACTION_SEQUENCE wrapper */
void _A1142_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7746, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_MENU_ITEM_SELECT_ACTION_SEQUENCE wrapper */
void _A1143_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7747, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_DOCKABLE_SOURCE_ACTION_SEQUENCE wrapper */
void _A1144_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7748, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_PND_FINISHED_ACTION_SEQUENCE wrapper */
void _A1145_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7749, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_INTEGER_ACTION_SEQUENCE wrapper */
void _A1146_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7750, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_KEY_STRING_ACTION_SEQUENCE wrapper */
void _A1147_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7751, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_DPI_ACTION_SEQUENCE wrapper */
void _A1148_184_2_3_4_5_6 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7752, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], closed [2]);
}

	/* EV_KEY_ACTION_SEQUENCE wrapper */
void _A1149_184_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7753, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], closed [2]);
}

	/* EV_POINTER_MOTION_ACTION_SEQUENCE wrapper */
void _A1150_184_2_3_4_5_6_7_8 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7754, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], closed [2]);
}

	/* EV_PND_START_ACTION_SEQUENCE wrapper */
void _A1151_184_2_3 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7755, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], closed [2]);
}

	/* EV_GEOMETRY_ACTION_SEQUENCE wrapper */
void _A1152_184_2_3_4_5 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7756, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], closed [2]);
}

	/* EV_PND_MOTION_ACTION_SEQUENCE wrapper */
void _A1153_184_2_3_4 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7757, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], closed [2]);
}

	/* EV_POINTER_BUTTON_ACTION_SEQUENCE wrapper */
void _A1154_184_2_3_4_5_6_7_8_9 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7758, "wrapper", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8], closed [2]);
}

	/* EV_NOTIFY_ACTION_SEQUENCE wrapper */
void _A1155_183 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7759, "wrapper", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_NOTIFY_ACTION_SEQUENCE call */
void _A1155_182 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* ETF_DUMMY etf_dummy */
void _A1174_50 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7903, "etf_dummy", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_GENERATE_JAVA_CODE_INTERFACE generate_java_code */
void _A1175_50 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7904, "generate_java_code", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_TYPE_CHECK_INTERFACE type_check */
void _A1177_50 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7905, "type_check", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_INT_VALUE_INTERFACE int_value */
void _A1179_50_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7906, "int_value", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_LOGICAL_NEGATION_INTERFACE logical_negation */
void _A1181_50 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7907, "logical_negation", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_NUMERICAL_NEGATION_INTERFACE numerical_negation */
void _A1183_50 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7908, "numerical_negation", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_LESS_THAN_INTERFACE less_than */
void _A1185_50 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7909, "less_than", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_GREATER_THAN_INTERFACE greater_than */
void _A1187_50 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7910, "greater_than", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_EQUALS_INTERFACE equals */
void _A1189_50 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7911, "equals", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_DISJUNCTION_INTERFACE disjunction */
void _A1191_50 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7912, "disjunction", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_CONJUNCTION_INTERFACE conjunction */
void _A1193_50 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7913, "conjunction", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_MODULO_INTERFACE modulo */
void _A1195_50 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7914, "modulo", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_QUOTIENT_INTERFACE quotient */
void _A1197_50 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7915, "quotient", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_MULTIPLICATION_INTERFACE multiplication */
void _A1199_50 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7916, "multiplication", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_SUBTRACTION_INTERFACE subtraction */
void _A1201_50 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7917, "subtraction", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_ADDITION_INTERFACE addition */
void _A1203_50 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(7918, "addition", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_BOOL_VALUE_INTERFACE bool_value */
void _A1205_50_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7919, "bool_value", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_ADD_CALL_CHAIN_INTERFACE add_call_chain */
void _A1207_50_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7920, "add_call_chain", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_ADD_ASSIGNMENT_INSTRUCTION_INTERFACE add_assignment_instruction */
void _A1209_51_2_3_4 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7922, "add_assignment_instruction", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3]);
}

	/* ETF_ADD_QUERY_INTERFACE add_query */
void _A1211_51_2_3_4_5 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7924, "add_query", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4]);
}

	/* ETF_ADD_COMMAND_INTERFACE add_command */
void _A1213_51_2_3_4 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7926, "add_command", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3]);
}

	/* ETF_ADD_ATTRIBUTE_INTERFACE add_attribute */
void _A1215_51_2_3_4 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7928, "add_attribute", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3]);
}

	/* ETF_ADD_CLASS_INTERFACE add_class */
void _A1217_51_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7930, "add_class", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_MENU_ITEM_IMP on_activate */
void _A1525_257 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(10905, "on_activate", closed [1].it_r))(closed [1].it_r);
}

	/* HASH_TABLE [NATURAL_32, POINTER] put */
void _A481_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [G#1, G#2] put */
void _A635_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [G#1, INTEGER_32] put */
void _A640_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] put */
void _A834_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [INTEGER_32, G#2] put */
void _A927_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [INTEGER_32, NATURAL_32] put */
void _A1626_89 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2372, "put", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* HASH_TABLE [NATURAL_32, POINTER] remove */
void _A481_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3006, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [G#1, G#2] remove */
void _A635_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3006, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [G#1, INTEGER_32] remove */
void _A640_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3006, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] remove */
void _A834_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3006, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [INTEGER_32, G#2] remove */
void _A927_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3006, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* HASH_TABLE [INTEGER_32, NATURAL_32] remove */
void _A1626_95 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3006, "remove", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL inline-agent#1 of expose_translate_agent */
EIF_TYPED_VALUE _A1242_428_2_3 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1242_16490)(closed [1].it_r, open [1], open [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL inline-agent#1 of size_allocate_translate_agent */
EIF_TYPED_VALUE _A1242_429_2_3 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1242_16491)(closed [1].it_r, open [1], open [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL inline-agent#1 of configure_translate_agent */
EIF_TYPED_VALUE _A1242_430_2_3 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1242_16492)(closed [1].it_r, open [1], open [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL inline-agent#1 of set_focus_event_translate_agent */
EIF_TYPED_VALUE _A1242_431_2_3 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1242_16493)(closed [1].it_r, open [1], open [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL translate_and_call */
void _A1242_401 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8259, "translate_and_call", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* EV_GTK_CALLBACK_MARSHAL marshal */
void A1242_414 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
{
	EIF_TYPED_VALUE u [3];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8272, "marshal", Current))(Current, ((u [0].type = SK_REF), (u [0].it_r = arg1), u [0]), ((u [1].type = SK_INT32), (u [1].it_i4 = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]));
}

	/* EV_GTK_CALLBACK_MARSHAL on_timeout_intermediary */
void _A1242_322 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8188, "on_timeout_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL directory_dialog_on_ok_intermediary */
void _A1242_334 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8200, "directory_dialog_on_ok_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL directory_dialog_on_cancel_intermediary */
void _A1242_335 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8201, "directory_dialog_on_cancel_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL font_dialog_on_ok_intermediary */
void _A1242_338 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8204, "font_dialog_on_ok_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL font_dialog_on_cancel_intermediary */
void _A1242_339 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8205, "font_dialog_on_cancel_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL color_dialog_on_ok_intermediary */
void _A1242_332 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8198, "color_dialog_on_ok_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL color_dialog_on_cancel_intermediary */
void _A1242_333 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8199, "color_dialog_on_cancel_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL file_dialog_on_ok_intermediary */
void _A1242_336 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8202, "file_dialog_on_ok_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL file_dialog_on_cancel_intermediary */
void _A1242_337 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8203, "file_dialog_on_cancel_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL on_size_allocate_intermediate */
void _A1242_326_3_4_5_6 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8192, "on_size_allocate_intermediate", closed [1].it_r))(closed [1].it_r, closed [2], open [1], open [2], open [3], open [4]);
}

	/* EV_GTK_CALLBACK_MARSHAL on_notebook_page_switch_intermediary */
void _A1242_323_3 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8189, "on_notebook_page_switch_intermediary", closed [1].it_r))(closed [1].it_r, closed [2], open [1]);
}

	/* EV_GTK_CALLBACK_MARSHAL page_switch_translate */
EIF_TYPED_VALUE _A1242_316_2_3 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8182, "page_switch_translate", closed [1].it_r))(closed [1].it_r, open [1], open [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL on_set_focus_event_intermediary */
void _A1242_327_3 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8193, "on_set_focus_event_intermediary", closed [1].it_r))(closed [1].it_r, closed [2], open [1]);
}

	/* EV_GTK_CALLBACK_MARSHAL tree_row_expansion_change_intermediary */
void _A1242_314_4_5 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8180, "tree_row_expansion_change_intermediary", closed [1].it_r))(closed [1].it_r, closed [2], closed [3], open [1], open [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL on_pnd_deferred_item_parent_selection_change */
void _A1242_317 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8183, "on_pnd_deferred_item_parent_selection_change", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL mcl_column_resize_callback */
void _A1242_312 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8178, "mcl_column_resize_callback", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* EV_GTK_CALLBACK_MARSHAL mcl_column_click_callback */
void _A1242_311 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8177, "mcl_column_click_callback", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* EV_GTK_CALLBACK_MARSHAL on_gauge_value_changed_intermediary */
void _A1242_325 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8191, "on_gauge_value_changed_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL button_select_intermediary */
void _A1242_330 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8196, "button_select_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL text_component_change_intermediary */
void _A1242_328 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8194, "text_component_change_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL text_buffer_mark_set_intermediary */
void _A1242_313_3_4 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8179, "text_buffer_mark_set_intermediary", closed [1].it_r))(closed [1].it_r, closed [2], open [1], open [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL text_field_return_intermediary */
void _A1242_329 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8195, "text_field_return_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL on_combo_box_toggle_button_event */
void _A1242_318 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8184, "on_combo_box_toggle_button_event", closed [1].it_r))(closed [1].it_r, closed [2], closed [3]);
}

	/* EV_GTK_CALLBACK_MARSHAL menu_item_activate_intermediary */
void _A1242_331 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8197, "menu_item_activate_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL new_toolbar_item_select_actions_intermediary */
void _A1242_309 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8175, "new_toolbar_item_select_actions_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL toolbar_item_select_actions_intermediary */
void _A1242_319 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(8185, "toolbar_item_select_actions_intermediary", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_GTK_CALLBACK_MARSHAL create_expose_actions_intermediary */
void _A1242_324_3_4_5_6 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(8190, "create_expose_actions_intermediary", closed [1].it_r))(closed [1].it_r, closed [2], open [1], open [2], open [3], open [4]);
}

	/* EV_DYNAMIC_LIST [G#1] inline-agent#1 of append */
EIF_TYPED_VALUE _A1599_150_2 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) F1599_16513)(closed [1].it_r, open [1]);
}

	/* EV_WINDOW_I connect_accelerator */
void _A1468_263_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10437, "connect_accelerator", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_WINDOW_I disconnect_accelerator */
void _A1468_264_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10438, "disconnect_accelerator", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* ETF_MAIN_WINDOW_IMP command_return_key_pressed */
void _A1324_318 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9012, "command_return_key_pressed", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP execute_pressed */
void _A1324_319 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9013, "execute_pressed", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP reset_pressed */
void _A1324_320 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9014, "reset_pressed", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP load_pressed */
void _A1324_321 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9015, "load_pressed", closed [1].it_r))(closed [1].it_r);
}

	/* ETF_MAIN_WINDOW_IMP destroy_and_exit_if_last */
void _A1324_262 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8964, "destroy_and_exit_if_last", closed [1].it_r))(closed [1].it_r);
}

	/* EV_DIALOG dialog_key_press_action */
void _A1326_310_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9051, "dialog_key_press_action", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_DIALOG destroy */
void _A1326_262 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(8411, "destroy", closed [1].it_r))(closed [1].it_r);
}

	/* EV_MESSAGE_DIALOG on_button_press */
void _A1328_351 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9081, "on_button_press", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_MESSAGE_DIALOG on_key_press */
void _A1328_352_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9082, "on_key_press", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_FONT_IMP update_preferred_faces */
void _A1387_105_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9538, "update_preferred_faces", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_APPLICATION_I contextual_help */
void _A1395_301_2_3_4_5_6_7_8_9 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(9739, "contextual_help", closed [1].it_r))(closed [1].it_r, open [1], open [2], open [3], open [4], open [5], open [6], open [7], open [8]);
}

	/* EV_APPLICATION_I safe_destroy */
void _A1395_33 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9338, "safe_destroy", closed [1].it_r))(closed [1].it_r);
}

	/* EV_APPLICATION_I inline-agent#1 of create_target_menu */
EIF_TYPED_VALUE _A1395_306_2_3 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1395_16537)(closed [1].it_r, open [1], open [2]);
}

	/* EV_APPLICATION_I inline-agent#2 of create_target_menu */
void _A1395_307_2_3_4 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1395_16538)(closed [1].it_r, open [1], open [2], open [3]);
}

	/* EV_APPLICATION_I help_handler */
void _A1395_298 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9736, "help_handler", closed [1].it_r))(closed [1].it_r);
}

	/* EV_APPLICATION_I enable_contextual_help */
void _A1395_243 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9682, "enable_contextual_help", closed [1].it_r))(closed [1].it_r);
}

	/* EV_PND_ACTION_SEQUENCE call */
void _A1138_183 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3112, "call", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_APPLICATION_IMP inline-agent#1 of im_context_commit_translate_agent */
EIF_TYPED_VALUE _A1396_567_2_3 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1396_16539)(closed [1].it_r, open [1], open [2]);
}

	/* EV_APPLICATION_IMP on_char */
void _A1396_443_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9743, "on_char", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_ANY_IMP c_object_dispose */
void A1398_76 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(9867, "c_object_dispose", Current))(Current);
}

	/* EV_DOCKABLE_SOURCE_I close_dockable_dialog */
void _A1406_100 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10023, "close_dockable_dialog", closed [1].it_r))(closed [1].it_r, closed [2]);
}

	/* EV_PICK_AND_DROPABLE_IMP inline-agent#1 of start_transport */
void _A1443_212 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F1443_16546)(closed [1].it_r, closed [2], closed [3], closed [4], closed [5], closed [6]);
}

	/* EV_GAUGE_IMP set_range */
void _A1496_380 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(10758, "set_range", closed [1].it_r))(closed [1].it_r);
}

	/* EV_RICH_TEXT_IMP format_region */
void _A1507_456 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10675, "format_region", closed [1].it_r))(closed [1].it_r, closed [2], closed [3], closed [4]);
}

	/* EV_RICH_TEXT_IMP update_tab_positions */
void _A1507_495_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10698, "update_tab_positions", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* EV_MENU_IMP c_gtk_menu_popup */
void _A1529_305 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10917, "c_gtk_menu_popup", closed [1].it_r))(closed [1].it_r, closed [2], closed [3], closed [4], closed [5], closed [6]);
}

	/* EV_DRAWING_AREA_IMP update_tooltip_window */
void _A1542_510 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11071, "update_tooltip_window", closed [1].it_r))(closed [1].it_r);
}

	/* STRING_8 is_empty */
EIF_TYPED_VALUE _A233_162_1 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4659, "is_empty", open [1].it_r))(open [1].it_r);
}


static fnptr feif_address_table[] = {
(fnptr)0,
(fnptr)A32_36,
(fnptr)A159_97,
(fnptr)A159_161,
(fnptr)A159_162,
(fnptr)A1242_414,
(fnptr)A1398_76,
};

fnptr *egc_address_table_init = feif_address_table;



#ifdef __cplusplus
}
#endif
