CFLAGS  = -O2
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -std=gnu11
CFLAGS += -g0

all:
	gcc main.c -o main.exe ${CFLAGS}
	gcc -S operations.c ${CFLAGS}
	@echo No errors
