/*
Write a program that computes Ackermann's function, given by:

A(0, n):= n+1 for n>=0
A(m, 0):= A(m-1, 1) for m>0
A(m, n):= A(m-1, A(m, n - 1)) for m>0, n>0
The program should read 2 non-negative integers m and n from the command line, compute Ackermann's function for these numbers, and print the result.

If the number of command-line arguments is incorrect, or an argument is not an integer, then a Usage message is printed. If an argument is negative, then an error message that says that the function is undefined for negative integers should be printed.

Examples of executions are:

prompt$ ./a.out
Usage: ./a.out m n
prompt$ ./a.out 1 2 3
Usage: ./a.out m n
prompt$ ./a.out 1 a
Usage: ./a.out m n
prompt$ ./a.out -1 0
Ackermanns function is not defined for negative integers
prompt$
prompt$ ./a.out 2 1
Ackermann(2, 1) = 5
prompt$ ./a.out 4 0
Ackermann(4, 0) = 13
prompt$ ./a.out 4 1
Ackermann(4, 1) = 65533

Program name: ackermann
Author Name: Jatin Gupta
Written(YY.MM.DD):  19.07.20 
*/ 

#include <stdio.h>
#include <stdlib.h>


int A(int m, int n) {
	if (m == 0) {
		return n+1;
	}
	if (n == 0) {
		return A(m-1, 1);
	}
	return A(m-1, A(m, n-1));
}

int string_to_int(char *c) {
	int sum = 0;
	while(*c != '\0') {
		sum = sum*10 + (*c - '0');
		c++;
	}
	return sum;
}

int main(int argc, char *argv[]) {
	if (argc == 3) {
		int m; // = string_to_int(argv[1]);
		int n; // = string_to_int(argv[2]);
		if (sscanf(argv[1], "%d", &m) == 1 && sscanf(argv[2], "%d", &n) == 1) {
			if (m >= 0 && n >= 0) {
				printf("%d\n", A(m, n));
			}
			else {
				fprintf(stderr, "Ackermanns function is not defined for negative integers\n");
				return EXIT_FAILURE;
			}
		}
		else {
			fprintf(stderr, "Usage: ./a.out m n\n");
			return EXIT_FAILURE;
		}
	}
	else {
		fprintf(stderr, "Usage: ./a.out m n\n");
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
