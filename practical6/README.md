## **Without Makefile:**

### To Compile

#### *By creating object files first (like Makefile)-*
- gcc -c main.o main.c
- gcc -c mmlt.o mmlt.c
- gcc -o matmult_o main.o mmlt.o -lm

#### *Directly through single line*
- gcc main.c mmlt.c -o matmult_o -lm

### To Execute
- ./matmult_o

## **Using Makefile:**

### To Compile (Make will create the executable file matmult_makefile)
- make

### To Execute
- ./matmult_makefile
