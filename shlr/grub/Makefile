NAME=grubfs

include ../../config-user.mk
include ../../global.mk
include ../../mk/platform.mk
NAME=grubfs
_INCLUDE_MK_GCC_=
include ../../libr/config.mk
include ../../mk/${COMPILER}.mk

EXT_AR?=a
LIBAR=libgrubfs.${EXT_AR}
CC?=gcc
RANLIB?=ranlib
OSTYPE=$(shell uname | tr 'A-Z' 'a-z')
ifeq (${OSTYPE},)
all:
	echo LE FAIL
	exit 1
endif

KERNFILES=kern/file.c
KERNFILES+=kern/term.c kern/device.c
KERNFILES+=kern/err.c
KERNFILES+=kern/env.c kern/disk.c
KERNFILES+=kern/fs.c kern/misc.c
KERNFILES+=kern/time.c
KERNFILES+=kern/list.c kern/partition.c
KERNFILES+=kern/mm.c
KERNFILES+=fs/fshelp.c
KERNFILES+=fs/reiserfs.c
KERNFILES+=fs/ext2.c
KERNFILES+=fs/fat.c
KERNFILES+=fs/ntfs.c
KERNFILES+=fs/ntfscomp.c
KERNFILES+=fs/cpio.c
KERNFILES+=fs/tar.c
KERNFILES+=fs/xfs.c
KERNFILES+=fs/ufs.c
KERNFILES+=fs/ufs2.c
# All nested functions are removed from the following .c with a lot of tobacco :-)
KERNFILES+=fs/hfs.c
KERNFILES+=fs/hfsplus.c
KERNFILES+=fs/udf.c
KERNFILES+=fs/iso9660.c
KERNFILES+=fs/minix.c
#KERNFILES+=fs/minix2.c #XXX: Are minix2 and minix the same?
KERNFILES+=fs/jfs.c
KERNFILES+=fs/fb.c
KERNFILES+=fs/sfs.c
KERNFILES+=grubfs.c

KERNFILES+=partmap/msdos.c
#KERNFILES+=partmap/acorn.c
KERNFILES+=partmap/gpt.c
KERNFILES+=partmap/apple.c
KERNFILES+=partmap/amiga.c
KERNFILES+=partmap/sun.c
KERNFILES+=partmap/bsdlabel.c
KERNFILES+=partmap/sunpc.c

KERNOBJS=$(subst .c,.o,${KERNFILES})
CFLAGS:=-I../../libr/include -DGRUB_TARGET_NO_MODULES $(CFLAGS)
CFLAGS+=-Iinclude
# CFLAGS+=-g

ifneq (,$(findstring cygwin,${OSTYPE}))
CFLAGS+=-D__CYGWIN__=1
else
ifneq (,$(findstring mingw32,${OSTYPE}))
CFLAGS+=-DMINGW32=1
else
ifneq (,$(findstring mingw64,${OSTYPE})$(findstring msys,${OSTYPE}))
LFDLAGS_SHARE?=-shared
else
CFLAGS+=${PIC_CFLAGS}
endif
endif
endif

# This fixes a silly GNU gcc build problem in OSX - BLAME! :D
ifeq (${OSTYPE},darwin)
CFLAGS+=-DAPPLE_CC
endif

include ../../shlr/sdb.mk

BIN=test${EXT_EXE}

all: ${KERNOBJS}
	${MAKE} $(LIBAR)

${BIN}: ${KERNOBJS} main.o
	${CC} -o ${BIN} main.o ${CFLAGS} ${KERNOBJS}

lib: $(LIBAR)

$(LIBAR): ${KERNOBJS}
	rm -f $(LIBAR)
	${CC_AR} ${KERNOBJS}
	${RANLIB} $(LIBAR)
ifneq ($(LIBAR),libgrubfs.a)
	cp -f $(LIBAR) libgrubfs.a
endif

clean:
	rm -f ${KERNOBJS} ${BIN} main.o $(LIBAR)

fs: /tmp/fs
	@echo ======================
	@echo m ext2 /mnt
	@echo md /mnt
	@echo mo /mnt/fstab
	@echo mg /mnt/fstab
	@echo q
	@echo ======================
	r2 -n /tmp/fs

/tmp/fs:
	rm -f /tmp/fs
	dd count=1 bs=4M if=/dev/zero of=/tmp/fs
	mkfs.ext2 /tmp/fs
	sudo mount -o loop /tmp/fs /media
	sudo cp /etc/fstab /media
	sudo cp /etc/resolv.conf /media
	sudo umount /media

sync:
	echo "XXX: Implement syncing with burg project"

.PHONY: fs clean all lib fs sync
