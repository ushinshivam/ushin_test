HOMEPAGE = "http://www.denx.de/wiki/U-Boot/WebHome"
SECTION = "bootloaders"
DEPENDS += "flex-native bison-native"

LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://Licenses/README;md5=30503fd321432fc713238f582193b78e"
PE = "1"

# We use the revision in order to avoid having to fetch it from the
# repo during parse
# SRCREV = "3c99166441bf3ea325af2da83cfe65430b49c066"
# SRC_URI = "git://git.denx.de/u-boot.git"

UBOOT_SRC ?= "git://github.com/MYiR-Dev/myir-imx-uboot.git;protocol=https"
SRCBRANCH = "develop"
SRC_URI = "${UBOOT_SRC};branch=${SRCBRANCH} \
"

SRCREV = "a4aee9ab38dfee05b95c8c9d99c989802572dc14"
#SRCREV = "${AUTOREV}"

S = "${WORKDIR}/git"
