===================
OpenEmbedded/Yocto layer for NXP Vehicle Integration Platforms
===================

This layer provides support for NXP Vehicle Integration Platforms (e.g., GoldVIP)
for use with OpenEmbedded and/or Yocto Project.

Complete instructions for building a particular VIP image are documented in the
corresponding VIP User Manual.

To manually add meta-vip layer to your build run the following command from
within the build directory::

  bitbake-layers add-layer meta-vip

Dependencies
============
This layer depends on the following Yocto layers:
 - meta-alb: https://github.com/nxp-auto-linux/meta-alb

Note: The above layers have other dependencies that are automatically handled
via the repo manifests.
