all: Pre24

Pre24: main.o Fonction.o
	gcc main.o Fonction.o -o Pre24 -lgmp


main.o: main.c Fonction.h
	gcc -g -Wall -c main.c -lgmp



Fonction.o: Fonction.c Fonction.h 
	
	gcc -g -Wall -c Fonction.c -lgmp

run:
	./Pre24


clean:
	rm -rf Pre24 *.o


