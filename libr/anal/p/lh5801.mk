OBJ_LH5801=anal_lh5801.o

STATIC_OBJ+=${OBJ_LH5801}
TARGET_LH5801=anal_lh5801.${EXT_SO}

ifeq ($(WITHPIC),1)
ALL_TARGETS+=${TARGET_LH5801}

${TARGET_LH5801}: ${OBJ_LH5801}
	${CC} ${call libname,anal_lh5801} ${CFLAGS} -o ${TARGET_LH5801} ${OBJ_LH5801}
endif
