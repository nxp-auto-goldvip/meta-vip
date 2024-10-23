# Copyright 2022-2024 NXP

require recipes-fsl/images/fsl-image-auto.bb

# Add base OS packages indifferent if an hypervisor is present or not.
IMAGE_INSTALL += " \
    ${PACKAGES-CORE-benchmark} \
    iptables \
    ifmetric \
    strongswan \
    ntp ntpq \
    python3-pip \
    openjdk-8 \
    cronie \
    resolvconf \
"

update_timestamp() {
    echo "$(date -u +%4Y%2m%2d%2H%2M%2S)" > ${IMAGE_ROOTFS}/etc/timestamp
}

ROOTFS_POSTPROCESS_COMMAND += "update_timestamp; "

# Use the ifup/ifdown services included in busybox.
BAD_RECOMMENDATIONS += "ifupdown"

