/*
Program name: 
Author Name: Jatin Gupta
Written(YY.MM.DD):  19.07.04 
*/ 

#include <stdio.h>
#include <stdlib.h>
#include "quack.h"

int main(int argc, char *argv[]) {
	int num;
	Quack qs;
	if (argc == 2 && sscanf(argv[1], "%d", &num) == 1 && num >= 0) {
		if (num != 0) {
			qs = createQuack();
			while (num > 0) {
				push(num % 2, qs);
				num = num/2;
			}
			while (!isEmptyQuack(qs)) {
				printf("%d", pop(qs));		
			}
			printf("\n");
		} 
		else {
			printf("0\n");
		} 
	} 
	else {
		fprintf(stderr, "Usage: ./a.out number\n");
		return EXIT_FAILURE;
	}
	
	
	return EXIT_SUCCESS;
}
