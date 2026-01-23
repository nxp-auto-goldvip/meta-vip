# Copyright 2022-2026 NXP

require recipes-fsl/images/fsl-image-auto.bb

# Add base OS packages indifferent if an hypervisor is present or not.
IMAGE_INSTALL += " \
    ${PACKAGES-CORE-benchmark} \
    iptables \
    ifmetric \
    strongswan \
    ntp ntpq \
    python3-pip \
    java-11 \
    cronie \
    perf \
"
