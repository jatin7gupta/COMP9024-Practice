CC=dcc
CFLAGS=-O3

q1: q1.c
	$(CC) -o q1.out q1.c
	
	
q2: q2.c
	$(CC) -o q2.out q2.c
	
	
q3: q3.c
	$(CC) -o q3.out q3.c
	
q4: q4.c
	$(CC) -o q4.out q4.c
	
new:
	touch ${f}.c
	echo -e "/*\nProgram name: \nAuthor Name: Jatin Gupta\nWritten: $(LOGPATH) `date +'%y.%m.%d '`\n*/ \n\n#include <stdio.h>\n#include <stdlib.h>\n\n int main(void) { \n \t printf(\"hello world\"); \n \t return EXIT_SUCCESS; \n }"  > ${f}.c
	gedit ${f}.c
	

all: q1 q2 q3 q4

clean:
	-rm -f *.out



