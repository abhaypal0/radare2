ifeq (${_INCLUDE_MK_GCC_},)
_INCLUDE_MK_GCC_=1
CC=mingw32-gcc-5.3.0
RANLIB=mingw32-gcc-ranlib
OSTYPE=windows
ONELIB=0
LINK=-shared
AR=mingw32-gcc-ar
CC_AR=${AR} ${LIBAR}
PARTIALLD=mingw32-gcc-ld -r --whole-archive
PICFLAGS=
#CFLAGS+=${PICFLAGS} -MD -DR2__WINDOWS__=1
CFLAGS+=${PICFLAGS} -DR2__WINDOWS__=1
CC_LIB=${CC} -shared -o
CFLAGS_INCLUDE=-I
LDFLAGS+=-static-libgcc
LDFLAGS_LINK=-l
LDFLAGS_LINKPATH=-L
CFLAGS_OPT0=-O0
CFLAGS_OPT1=-O1
CFLAGS_OPT2=-O2
CFLAGS_OPT3=-O3
CFLAGS_DEBUG=-g
endif
