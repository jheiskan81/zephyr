/*
 * Copyright (c) 2021 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef LWM2M_RW_SENML_JSON_H_
#define LWM2M_RW_SENML_JSON_H_

#include "lwm2m_object.h"

extern const struct lwm2m_writer senml_json_writer;
extern const struct lwm2m_reader senml_json_reader;

int do_send_op_senml_json(struct lwm2m_message *msg, struct lwm2m_obj_path path_list[], uint8_t path_list_size);
int do_composite_read_op_senml_json(struct lwm2m_message *msg);
int do_read_op_senml_json(struct lwm2m_message *msg);
int do_write_op_senml_json(struct lwm2m_message *msg);

#endif /* LWM2M_RW_SENML_JSON_H_ */
