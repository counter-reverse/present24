IDIR=src/core/include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR = build/obj


_DEPS = src/core/include/permutation.h ./src/core/include/substitution.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = src/core/permutation/permutation.o ./src/core/permutation/subsitution.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))



all:
	$(CC) -c -o build/obj/permutation.o $< $(CFLAGS) src/core/permutation/permutation.c
	$(CC) -c -o build/obj/substitution.o $< $(CFLAGS) src/core/substitution/substitution.c
	$(CC) main.c -o out $(ODIR)/*.o $(CFLAGS) 



clean:
	rm $(ODIR)/*.o
	rm ./out

.PHONY: clean
