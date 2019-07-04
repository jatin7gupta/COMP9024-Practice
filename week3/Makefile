CC=dcc
CFLAGS=-O3

q1: q1.c
	$(CC) -o q1.out q1.c
	
	
q2: q2.c
	$(CC) -o q2.out q2.c
	
	
q3: q3.c
	$(CC) -o q3.out q3.c
	
	
blackbox: quack.h quack.c blackbox.c
	$(CC) -o blackbox.out quack.c blackbox.c
	
jose: quack.h quack.c jose.c
	$(CC) -o jose.out quack.c jose.c
	
match: quack.h quack.c matcher.c
	$(CC) -o matcher.out quack.c matcher.c
	
new:
	touch ${f}.c
	echo -e "/*\nProgram name: \nAuthor Name: Jatin Gupta\nWritten(YY.MM.DD): $(LOGPATH) `date +'%y.%m.%d '`\n*/ \n\n#include <stdio.h>\n#include <stdlib.h>\n\nint main(void) {\n\tprintf(\"hello world\");\n\treturn EXIT_SUCCESS;\n}"  > ${f}.c
	gedit ${f}.c
	

all: q1 q2 q3 blackbox jose match

clean:
	-rm -f *.out



