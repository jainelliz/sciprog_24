CC = gcc #C compiler
CCFLAGS = -O3 #03 for optimization options
LDFLAGS = -lm #linking math

all: matmult_makefile #executable file creation happens here

matmult_makefile: main.o mmlt.o
	$(CC) -o $@ $^ $(LDFLAGS)

mmlt.o: mmlt.c
	$(CC) -c $(CCFLAGS) $< 

main.o: main.c
	$(CC) -c $(CCFLAGS) $<

clean:
	rm *.o