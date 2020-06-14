/********************************************
 * Copyright (C) 2019-2020 Intel Corporation
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 ********************************************/

#ifndef _SPHCS_TRACE_DEFS_H
#define _SPHCS_TRACE_DEFS_H


enum sph_trace_op_status_enum  {
	SPH_TRACE_OP_STATUS_QUEUED		= 0, //SPH_TRACE_STR_QUEUED
	SPH_TRACE_OP_STATUS_START		= 1, //SPH_TRACE_STR_START
	SPH_TRACE_OP_STATUS_COMPLETE		= 2, //SPH_TRACE_STR_COMPLETE
	SPH_TRACE_OP_STATUS_CB_START		= 3, //SPH_TRACE_STR_CB_START
	SPH_TRACE_OP_STATUS_CB_COMPLETE		= 4, //SPH_TRACE_STR_CB_COMPLETE
	SPH_TRACE_OP_STATUS_CB_NW_COMPLETE	= 5, //SPH_TRACE_STR_CB_NW_COMPLETE
	SPH_TRACE_OP_STATUS_NUM			= 6  //SPH_TRACE_STR_UNDEFINED
};

enum sph_trace_inf_enum {
	SPH_TRACE_INF_CONTEXT		= 0, //SPH_TRACE_STR_CONTEXT
	SPH_TRACE_INF_DEVRES		= 1, //SPH_TRACE_STR_DEVRES
	SPH_TRACE_INF_H2C_COPY_HANDLE	= 2, //SPH_TRACE_STR_H2C_COPY_HANDLE
	SPH_TRACE_INF_C2H_COPY_HANDLE	= 3, //SPH_TRACE_STR_C2H_COPY_HANDLE
	SPH_TRACE_INF_P2P_COPY_HANDLE	= 4, //SPH_TRACE_STR_P2P_COPY_HANDLE
	SPH_TRACE_INF_NETWORK		= 5, //SPH_TRACE_STR_NETWORK
	SPH_TRACE_INF_INF_REQ		= 6, //SPH_TRACE_STR_INF_REQ
	SPH_TRACE_INF_INF_SYNC		= 7, //SPH_TRACE_STR_INF_SYNC
	SPH_TRACE_INF_COMMAND_LIST	= 8, //SPH_TRACE_STR_COMMAND_LIST
	SPH_TRACE_INF_ADD_TO_COPY_LIST	= 9, //SPH_TRACE_STR_ADD_TO_COPY_LIST
	SPH_TRACE_INF_COPY              = 10, //SPH_TRACE_STR_COPY
	SPH_TRACE_INF_HOSTRES           = 11, //SPH_TRACE_INF_HOSTRES
	SPH_TRACE_INF_NUM		= 12 //SPH_TRACE_STR_UNDEFINED
};

extern char *sph_trace_op_to_str[];
extern char *sph_trace_inf_to_str[];

#endif /* _SPHCS_TRACE_DEFS_H */