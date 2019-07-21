CC=dcc
CFLAGS=-O3

base2: base2.c quack.h quack.c
	$(CC) -o base2.out base2.c quack.c
	
base: base.c quack.h quack.c
	$(CC) -o base.out base.c quack.c
	
jose: quack.h quack.c jose.c
	$(CC) -o jose.out quack.c jose.c
	
qush: quack.h quack.c test.c
	$(CC) -o test.out quack.c test.c
	
new:
	touch ${f}.c
	echo -e "/*\nProgram name: \nAuthor Name: Jatin Gupta\nWritten(YY.MM.DD): $(LOGPATH) `date +'%y.%m.%d '`\n*/ \n\n#include <stdio.h>\n#include <stdlib.h>\n\nint main(void) {\n\tprintf(\"hello world\");\n\treturn EXIT_SUCCESS;\n}"  > ${f}.c
	gedit ${f}.c
	

all: base2 base jose qush

clean:
	-rm -f *.out



