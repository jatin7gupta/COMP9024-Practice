CC=dcc
CFLAGS=-O3

ex1: q1.c
	$(CC) -o q1.out q1.c
	
	
ex2: q2.c
	$(CC) -o q2.out q2.c
	
	
ex3: q3.c
	$(CC) -o q3.out q3.c
	
new:
	touch ${f}.c
	echo -e "/*\nProgram name: \nAuthor Name: Jatin Gupta\nWritten: $(LOGPATH) `date +'%y.%m.%d '`\n*/ \n\n#include <stdio.h>\n#include <stdlib.h>\n\n int main(void) { \n \t printf(\"hello world\"); \n \t return EXIT_SUCCESS; \n }"  > ${f}.c
	gedit ${f}.c
	

all: ex1 ex2 ex3

clean:
	-rm -f *.out



