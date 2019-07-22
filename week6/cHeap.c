/*
In this exercise we go back to characters.

Write a program that reads single, alphanumeric characters on the command line and stores them in a heap. The heap is printed if it is non-empty. The zeroth character in the heap is printed as '#'.

The program should ignore (i.e. throw away) any argument that is not a single alphanumeric character. The alphanumeric characters set is [0-9A-Za-z] by the way.

Examples of use:

prompt$ ./a.out red rover move over
prompt$ ./a.out @ [ }
prompt$ ./a.out
prompt$ ./a.out a b c
# c a b
prompt$ ./a.out abcd ef gh a b c
# c a b
prompt$ ./a.out 1 e g g
# g g e 1 
prompt$ ./a.out 1 A a 2 B b 3 C c 4 D d END
# d b c C D a 3 1 B 2 4 A 
Notice in the 1 e g g execution that the heap has lower-case 'a' at the top, above the upper-case characters. This is because the character comparison in fixUp() (the condition in the while loop) actually compares ASCII codes, and lower-case letters have ASCII codes > ASCII codes for upper-case letters (which in turn are > ASCII code for digits).

A reminder that the command ascii on the CSE network, or any Linux/unix computer will show the ASCII codes of all characters. You might also like to look at ctype.h on the C Reference Card for help in checking whether a character is alphanumeric.
Program name: cHeap
Author Name: Jatin Gupta
Written(YY.MM.DD):  19.07.21 
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void print(int *heap, int len) {
	for (int j = 0; j<=len; j++) {
		printf("%c ", heap[j]);
	}
	printf("\n");
}

// fix up the heap for the new element at index child
int * fixUp(int *heap, int len) {
	for (int i = len; i > 0; i--) {
		int child = i;
		while (child>1 && heap[child/2]<heap[child]) {
		  int swap = heap[child];      // if parent < child ...
		  heap[child] = heap[child/2]; // swap them ...
		  heap[child/2] = swap;        // and then ...
		  child = child/2;             // become the parent
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
		    fprintf(stderr, "out of memory\n");
		    return EXIT_FAILURE;
    	}
		arr[0] = 35; 
		int index = 0;
		for (int i = 1; i < argc; i++) {
			if(*(argv[i]+1) == '\0' && isalnum(*argv[i])) {
				index++;
				arr[index] = (int)*argv[i];
				fixUp2(arr, index);
			}
		}
		if (index > 1) {
			print(arr, index);
		}
		free(arr);
		arr = NULL;
	}
	return EXIT_SUCCESS;
}
