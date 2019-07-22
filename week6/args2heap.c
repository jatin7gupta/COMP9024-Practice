/*
We now want to take out the hard-coded array in the previous exercise, and instead use the command line.

Write a program that reads integers on the command line, builds a heap from the integers as they are being read, and prints the heap when complete. So, for example:

prompt$ ./a.out 1 2 3
-999 3 1 2
If there are no arguments, or any argument is non-numerical, a Usage message is printed.

prompt$ ./a.out 1 2a 3
Usage: ./a.out integers ...
prompt$ ./a.out
Usage: ./a.out integers ...
prompt$ ./a.out 1 2 abc
Usage: ./a.out integers ...
Note the following:

do not use arrays (except of course for argv[], which is needed to read the numbers)

(this means you will need to use malloc() to store the heap)

do not forget to put a '-999' at the zeroth position in the heap
you should build the heap as you read each integer
when you have processed all the command-line arguments, print the final heap
make sure your program is leak-free and there are no dangling pointers
Run the test case from the previous exercise to check it's working:

prompt$ ./a.out 1 2 3 4 5 6 7
which should produce the same heap as the previous exercise.
Program name: args2heap
Author Name: Jatin Gupta
Written(YY.MM.DD):  19.07.20 
*/ 

#include <stdio.h>
#include <stdlib.h>

void print(int *heap, int len) {
	for (int j = 0; j<=len; j++) {
		printf("%d ", *(heap + j));
	}
	printf("\n");
}

// fix up the heap for the new element at index child
int * fixUp(int *heap, int len) {
	for (int i = len; i > 0; i--) {
		int child = i;
		while (child>1 && *(heap + child/2) < *(heap + child)) {
		  int swap = *(heap + child);          // if parent < child ...
		  *(heap + child) = *(heap + child/2); // swap them ...
		  *(heap + child/2) = swap;            // and then ...
		  child = child/2;                     // become the parent
		}
	}
	//print(heap, len);
	return heap;
}


void fixUp2(int *heap, int child) {
	while (child > 1 && *(heap + child/2) < *(heap + child)) {
	  int swap = *(heap + child);          // if parent < child ...
	  *(heap + child) = *(heap + child/2); // swap them ...
	  *(heap + child/2) = swap;            // and then ...
	  child = child/2;                     // become the parent
	}
}


int main(int argc, char *argv[]) {
	if (argc > 1) {
		int *arr = malloc(sizeof(int) * argc);
		if (arr == NULL) {
           fprintf(stderr, "malloc error\n");
           return EXIT_FAILURE;
       	}
		*arr = -999; 
		for (int i = 1; i < argc; i++) {
			if(sscanf(argv[i], "%d", &*(arr + i)) == 1) {
				fixUp2(arr, i);
			} else {
				fprintf(stderr, "Usage: ./a.out integers ...\n");
				free(arr);
				arr = NULL;
				return EXIT_FAILURE;
			}
		}
		print(arr, argc-1);
		free(arr);
		arr = NULL;
	} else {
		fprintf(stderr, "Usage: ./a.out integers ...\n");
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
