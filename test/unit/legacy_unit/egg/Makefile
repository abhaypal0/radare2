TESTS=exit1 hello loop loop2 fun fun2 fun3 fun4
TESTS+=nest nest2 nest3

#ARG PASSING ERR
TESTS+=fun5 fun6

#INVALID SYNTAX
#TESTS+=looptail

include ../../config.mk

BINDEPS=r_egg r_asm r_syscall r_db r_util
BIN=test
OBJ=test.o

.PHONY: t tests myclean

include ../../rules.mk
include ../../db/r.mk

t tests:
	@for TEST in ${TESTS} ; do sh t-$${TEST}.sh ; done

myclean:
	rm -f test${EXT_EXE} test.o
