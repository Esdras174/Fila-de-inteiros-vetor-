CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: main test

main: fila.o main.o
	$(CC) $(CFLAGS) fila.o main.o -o main

test: fila.o test_fila.o
	$(CC) $(CFLAGS) fila.o test_fila.o -o test

fila.o: fila.c fila.h
	$(CC) $(CFLAGS) -c fila.c

main.o: main.c fila.h
	$(CC) $(CFLAGS) -c main.c

test_fila.o: test_fila.c fila.h
	$(CC) $(CFLAGS) -c test_fila.c

clean:
	rm -f *.o main test
