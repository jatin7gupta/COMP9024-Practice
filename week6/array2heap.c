/*
Before you commence this exercise, do the following:

by hand, make a heap from the numbers 1, 2, 3, 4, 5, 6, 7

do this by inserting each element in turn into the growing heap, starting with an empty heap
when finished, flatten the structure so that you can see what the heap looks like as an array
Now the programming exercise. Assume you have an array of integers:

Toggle line numbers
   1 int heap[] = {-999,1,2,3,4,5,6,7};
hard-coded into a program. In spite if its name, this array clearly is not a heap.

Convert the above array into a heap in-place, and print the result. Note the following:

there is no input in this program
in-place means you change the elements in the array itself: you do not need any other data structures

use the function fixUp from lectures (it may need modification)

remember, the root element in a heap is at location 1. I've set location 0 to -999 in the array above to indicate it is not used.
when you print the final heap, include the zero location just to confirm it is still -999
Program name: array2heap
Author Name: Jatin Gupta
Written(YY.MM.DD):  19.07.20 
*/ 

#include <stdio.h>
#include <stdlib.h>

// fix up the heap for the new element at index child
void fixUp(int *heap, int len) {
	for (int i = len-1; i > 0; i--) {
		int child = i;
		while (child>1 && heap[child/2]<heap[child]) {
		  int swap = heap[child];      // if parent < child ...
		  heap[child] = heap[child/2]; // swap them ...
		  heap[child/2] = swap;        // and then ...
		  child = child/2;             // become the parent
		}
	}
	for (int j = 0; j<8; j++) {
			printf("%d ", heap[j]);
		}
		printf("\n");
	return;
}

int main(void) {
	int heap[] = {-999,1,2,3,4,5,6,7};
	fixUp(heap, 8);
	return EXIT_SUCCESS;
}
