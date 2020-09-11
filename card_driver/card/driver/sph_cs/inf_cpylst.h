/********************************************
 * Copyright (C) 2019-2020 Intel Corporation
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 ********************************************/

#ifndef SPHCS_INF_CPYLST_H
#define SPHCS_INF_CPYLST_H

#include <linux/kref.h>
#include <linux/hashtable.h>
#include <linux/spinlock.h>
#include <linux/dma-buf.h>
#include <linux/list.h>
#include "inf_devres.h"
#include "inf_cmd_list.h"
#include "sphcs_sw_counters.h"
#include "sphcs_pcie.h"

struct inf_cpylst {
	void                 *magic;
	uint16_t              idx_in_cmd;
	uint16_t              n_copies;
	struct inf_copy     **copies;
	struct inf_devres   **devreses;
	uint8_t              *priorities;
	uint64_t             *sizes;
	uint64_t             *cur_sizes;
	uint32_t              added_copies;
	uint64_t              size;
	bool                  active;


	struct lli_desc lli;
	struct lli_desc cur_lli;
	struct sphcs_dma_multi_xfer_handle multi_xfer_handle;

	int destroyed;
	u64 min_block_time;
	u64 max_block_time;
	u64 min_exec_time;
	u64 max_exec_time;
	u64 min_hw_exec_time;
	u64 max_hw_exec_time;
};

int inf_cpylst_create(struct inf_cmd_list *cmd,
		      uint16_t             cmdlist_index,
		      uint16_t             num_copies,
		      struct inf_cpylst  **out_cpylst);

int inf_cpylst_add_copy(struct inf_cpylst  *cpylst,
			struct inf_copy *copy,
			uint64_t size,
			uint8_t priority);

int inf_cpylst_build_cur_lli(struct inf_cpylst *cpylst);

void inf_cpylst_req_init(struct inf_exec_req *req,
			 struct inf_cpylst *cpylst,
			 struct inf_cmd_list *cmd);

#endif
