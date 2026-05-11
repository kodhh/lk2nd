# SPDX-License-Identifier: BSD-3-Clause
LOCAL_DIR := $(GET_LOCAL_DIR)

MODULES += \
	lib/bio \
	lib/fs \
	lk2nd/hw/bdev \

DEFINES += WITH_LK2ND_BOOT=1 WITH_LK2ND_BOOT_MENU=1

OBJS += \
	$(LOCAL_DIR)/boot.o \
	$(LOCAL_DIR)/extlinux.o \
	$(LOCAL_DIR)/util.o \
