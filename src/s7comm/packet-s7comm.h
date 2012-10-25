#ifndef __PACKET_S7COMM_H__
#define __PACKET_S7COMM_H__

void proto_reg_handoff_s7comm(void);
void proto_register_s7comm (void);

static gboolean dissect_s7comm(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_);

static guint32 s7comm_decode_req_resp(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, guint16 plength, guint16 dlength, guint32 offset, guint8 pdu_type);

static guint32 s7comm_decode_param_item(tvbuff_t *tvb, guint32 offset, packet_info *pinfo, proto_tree *sub_tree, guint8 item_no);
static guint32 s7comm_decode_pdu_length_negotiation(tvbuff_t *tvb, proto_tree *tree, guint16 plength, guint32 offset);
static guint32 s7comm_decode_response_write_data(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, guint16 dlength, guint8 item_count, guint32 offset);
static guint32 s7comm_decode_response_read_data(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, guint16 dlength, guint8 item_count, guint32 offset);

static guint32 s7comm_decode_plc_controls_param_hex28(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, guint16 plength, guint32 offset, guint8 pdu_type);
static guint32 s7comm_decode_plc_controls_param_hex29(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, guint16 plength, guint32 offset, guint8 pdu_type);
static guint32 s7comm_decode_plc_controls_param_hex1x(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, guint16 plength, guint32 offset, guint8 pdu_type);


static guint32 s7comm_decode_ud						(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, guint16 plength, guint16 dlength, guint32 offset );
static guint32 s7comm_decode_ud_cyclic_subfunc		(tvbuff_t *tvb, packet_info *pinfo, proto_tree *data_tree, guint8 type, guint8 subfunc, guint8 ret_val, guint8 tsize, guint16 len, guint16 dlength, guint32 offset);
static guint32 s7comm_decode_ud_block_subfunc		(tvbuff_t *tvb, packet_info *pinfo, proto_tree *data_tree, guint8 type,	guint8 subfunc,	guint8 ret_val,	guint8 tsize, guint16 len, guint16 dlength, guint32 offset);
static guint32 s7comm_decode_ud_security_subfunc	(tvbuff_t *tvb, packet_info *pinfo, proto_tree *data_tree, guint8 type, guint8 subfunc, guint8 ret_val, guint8 tsize, guint16 len, guint16 dlength, guint32 offset);
static guint32 s7comm_decode_ud_time_subfunc		(tvbuff_t *tvb, packet_info *pinfo, proto_tree *data_tree, guint8 type, guint8 subfunc, guint8 ret_val, guint8 tsize, guint16 len, guint16 dlength, guint32 offset);
static guint32 s7comm_decode_ud_prog_subfunc		(tvbuff_t *tvb, packet_info *pinfo, proto_tree *data_tree, guint8 type, guint8 subfunc, guint8 ret_val, guint8 tsize, guint16 len, guint16 dlength, guint32 offset);
static guint32 s7comm_decode_ud_prog_vartab_req_item(tvbuff_t *tvb, guint32 offset, packet_info *pinfo, proto_tree *sub_tree, guint16 item_no);
static guint32 s7comm_decode_ud_prog_vartab_res_item(tvbuff_t *tvb, guint32 offset, packet_info *pinfo, proto_tree *sub_tree, guint16 item_no);

#endif
