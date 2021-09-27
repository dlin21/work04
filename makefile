all: main.c euler.c euler.h
	gcc -o euler euler.c main.c