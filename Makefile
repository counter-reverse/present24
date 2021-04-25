IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

all:
	$(CC) main.c -o out $(CFLAGS)


