/*
 * Copyright (C) 2015-2017 Netronome Systems, Inc.
 *
 * This software is dual licensed under the GNU General License Version 2,
 * June 1991 as shown in the file COPYING in the top-level directory of this
 * source tree or the BSD 2-Clause License provided below.  You have the
 * option to license this software under the complete terms of either license.
 *
 * The BSD 2-Clause License:
 *
 *     Redistribution and use in source and binary forms, with or
 *     without modification, are permitted provided that the following
 *     conditions are met:
 *
 *      1. Redistributions of source code must retain the above
 *         copyright notice, this list of conditions and the following
 *         disclaimer.
 *
 *      2. Redistributions in binary form must reproduce the above
 *         copyright notice, this list of conditions and the following
 *         disclaimer in the documentation and/or other materials
 *         provided with the distribution.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/*
 * nfp_export.c
 * Author: Jason McMullan <jason.mcmullan@netronome.com>
 */
#include <linux/module.h>

#include "nfp.h"
#include "nfp_cpp.h"
#include "nfp_nbi.h"
#include "nfp_nffw.h"
#include "nfp_nsp.h"

/* Implemented in nfp_cppcore.c */

EXPORT_SYMBOL(nfp_cpp_from_device_id);
EXPORT_SYMBOL(nfp_cpp_device_id);
EXPORT_SYMBOL(nfp_cpp_free);
EXPORT_SYMBOL(nfp_cpp_model);
EXPORT_SYMBOL(nfp_cpp_interface);
EXPORT_SYMBOL(nfp_cpp_serial);
EXPORT_SYMBOL(nfp_cpp_area_priv);
EXPORT_SYMBOL(nfp_cpp_area_cpp);
EXPORT_SYMBOL(nfp_cpp_area_name);
EXPORT_SYMBOL(nfp_cpp_area_alloc_with_name);
EXPORT_SYMBOL(nfp_cpp_area_alloc);
EXPORT_SYMBOL(nfp_cpp_area_alloc_acquire);
EXPORT_SYMBOL(nfp_cpp_area_free);
EXPORT_SYMBOL(nfp_cpp_area_release_free);
EXPORT_SYMBOL(nfp_cpp_area_acquire);
EXPORT_SYMBOL(nfp_cpp_area_acquire_nonblocking);
EXPORT_SYMBOL(nfp_cpp_area_release);
EXPORT_SYMBOL(nfp_cpp_area_read);
EXPORT_SYMBOL(nfp_cpp_area_write);
EXPORT_SYMBOL(nfp_cpp_area_resource);
EXPORT_SYMBOL(nfp_cpp_area_phys);
EXPORT_SYMBOL(nfp_cpp_area_iomem);
EXPORT_SYMBOL(nfp_cpp_area_readl);
EXPORT_SYMBOL(nfp_cpp_area_writel);
EXPORT_SYMBOL(nfp_cpp_area_readq);
EXPORT_SYMBOL(nfp_cpp_area_writeq);
EXPORT_SYMBOL(nfp_cpp_readl);
EXPORT_SYMBOL(nfp_cpp_writel);
EXPORT_SYMBOL(nfp_cpp_readq);
EXPORT_SYMBOL(nfp_cpp_writeq);
EXPORT_SYMBOL(nfp_xpb_readl);
EXPORT_SYMBOL(nfp_xpb_writel);
EXPORT_SYMBOL(nfp_cpp_explicit_priv);
EXPORT_SYMBOL(nfp_cpp_explicit_cpp);
EXPORT_SYMBOL(nfp_cpp_explicit_acquire);
EXPORT_SYMBOL(nfp_cpp_explicit_set_target);
EXPORT_SYMBOL(nfp_cpp_explicit_set_data);
EXPORT_SYMBOL(nfp_cpp_explicit_set_signal);
EXPORT_SYMBOL(nfp_cpp_explicit_set_posted);
EXPORT_SYMBOL(nfp_cpp_explicit_put);
EXPORT_SYMBOL(nfp_cpp_explicit_do);
EXPORT_SYMBOL(nfp_cpp_explicit_get);
EXPORT_SYMBOL(nfp_cpp_explicit_release);
EXPORT_SYMBOL(nfp_cpp_event_priv);
EXPORT_SYMBOL(nfp_cpp_event_cpp);
EXPORT_SYMBOL(nfp_cpp_event_alloc);
EXPORT_SYMBOL(nfp_cpp_event_as_callback);
EXPORT_SYMBOL(nfp_cpp_event_free);
EXPORT_SYMBOL(nfp_cpp_from_operations);
EXPORT_SYMBOL(nfp_cpp_device);
EXPORT_SYMBOL(nfp_cpp_priv);
EXPORT_SYMBOL(nfp_cpp_island_mask);

/* Implemented in nfp_cpplib.c */

EXPORT_SYMBOL(nfp_xpb_writelm);
EXPORT_SYMBOL(nfp_cpp_read);
EXPORT_SYMBOL(nfp_cpp_write);
EXPORT_SYMBOL(nfp_cpp_area_fill);

/* Implemented in nfp_nbi.c */

EXPORT_SYMBOL(nfp_nbi_open);
EXPORT_SYMBOL(nfp_nbi_close);
EXPORT_SYMBOL(nfp_nbi_index);
EXPORT_SYMBOL(nfp_nbi_mac_acquire);
EXPORT_SYMBOL(nfp_nbi_mac_release);

/* Implemented in nfp_nbi_mac_eth.c */

EXPORT_SYMBOL(nfp_nbi_mac_eth_read_linkstate);
EXPORT_SYMBOL(nfp_nbi_mac_eth_read_mode);
EXPORT_SYMBOL(nfp_nbi_mac_eth_write_mac_addr);
EXPORT_SYMBOL(nfp_nbi_mac_eth_read_mac_addr);

/* Implemented in nfp_nsp_eth.c */

EXPORT_SYMBOL(nfp_eth_read_ports);
EXPORT_SYMBOL(nfp_eth_set_mod_enable);
EXPORT_SYMBOL(nfp_eth_set_configured);

/* Implemented in nfp_rtsym.c */

EXPORT_SYMBOL(nfp_rtsym_table_read);
EXPORT_SYMBOL(nfp_rtsym_count);
EXPORT_SYMBOL(nfp_rtsym_get);
EXPORT_SYMBOL(nfp_rtsym_lookup);
