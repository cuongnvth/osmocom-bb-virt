#pragma once

#include <osmocom/core/msgb.h>
#include "l1ctl_sock.h"
#include "virtual_um.h"

void gsmtapl1_init(struct virt_um_inst *vui, struct l1ctl_sock_inst *lsi);

void gsmtapl1_rx_from_virt_um_cb(struct virt_um_inst *vui, struct msgb *msg);
void gsmtapl1_rx_from_virt_um(struct msgb *msg);

void gsmtapl1_tx_to_virt_um(struct virt_um_inst *vui, struct msgb *msg);
void gsmtapl1_tx_to_virt_um(struct msgb *msg);
