CC=dcc
CFLAGS=-O3

acker: ackermann.c 
	$(CC) -o acker.out ackermann.c 
	
args2heap: args2heap.c 
	$(CC) -o args2heap.out args2heap.c 
	
array2heap: array2heap.c
	$(CC) -o array2heap.out array2heap.c
	
cHeap: cHeap.c
	$(CC) -o cHeap.out cHeap.c 

sumdig: sumdig.c
	$(CC) -o sumdig.out sumdig.c 
	
new:
	touch ${f}.c
	echo -e "/*\nProgram name: \nAuthor Name: Jatin Gupta\nWritten(YY.MM.DD): $(LOGPATH) `date +'%y.%m.%d '`\n*/ \n\n#include <stdio.h>\n#include <stdlib.h>\n\nint main(void) {\n\tprintf(\"hello world\");\n\treturn EXIT_SUCCESS;\n}"  > ${f}.c
	gedit ${f}.c
	

all: sumdig cHeap acker array2heap args2heap

clean:
	-rm -f *.out



