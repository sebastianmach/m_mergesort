#
#    Makefile for mergesort
#
#    Author: Sebastian Mach
#    Created on Sep. 17 2014
#

CC=gcc
CFLAGS=-Wall
ODIR=bin/

all: mergesort_test.o

mergesort.o:
	$(CC) $(CFLAGS) -o mergesort.o -c mergesort.c

mergesort_test.o: mergesort.o
	$(CC) $(CFLAGS) -o mergesort_test.o mergesort.o mergesort_test.c


.PHONY: clean
clean:
	rm -rf *.o
