/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright (C) 2008 Novell, Inc.
 * Copyright (C) 2008 - 2016 Red Hat, Inc.
 */

#ifndef __NM_PPP_STATUS_H__
#define __NM_PPP_STATUS_H__

typedef enum {
    NM_PPP_STATUS_UNKNOWN,

    NM_PPP_STATUS_DEAD,
    NM_PPP_STATUS_INITIALIZE,
    NM_PPP_STATUS_SERIALCONN,
    NM_PPP_STATUS_DORMANT,
    NM_PPP_STATUS_ESTABLISH,
    NM_PPP_STATUS_AUTHENTICATE,
    NM_PPP_STATUS_CALLBACK,
    NM_PPP_STATUS_NETWORK,
    NM_PPP_STATUS_RUNNING,
    NM_PPP_STATUS_TERMINATE,
    NM_PPP_STATUS_DISCONNECT,
    NM_PPP_STATUS_HOLDOFF,
    NM_PPP_STATUS_MASTER,

    /* these states are internal and not announced by the pppd plugin. */
    NM_PPP_STATUS_INTERN_DEAD,
} NMPPPStatus;

#endif /* __NM_PPP_STATUS_H__ */
