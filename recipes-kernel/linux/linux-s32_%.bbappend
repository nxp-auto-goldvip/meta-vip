# Copyright 2023-2024 NXP

FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

# Add the required VIP kernel configs
DELTA_KERNEL_DEFCONFIG:append = " \
    fleetwise.cfg \
    greengrass.cfg \
    vip.cfg \
    ipsec.cfg \
    usb_network.cfg \
    pcie.cfg \
"

SRC_URI:append = " \
    file://build/fleetwise.cfg \
    file://build/greengrass.cfg \
    file://build/vip.cfg \
    file://build/ipsec.cfg \
    file://build/usb_network.cfg \
    file://build/pcie.cfg \
"

