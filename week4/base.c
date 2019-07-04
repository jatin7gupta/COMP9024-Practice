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
	int base;
	Quack qs;
	if (argc == 3 && sscanf(argv[1], "%d", &num) == 1 && sscanf(argv[2], "%d", &base) == 1 && num >= 0 && base > 1) {
		if (num != 0) {
			qs = createQuack();
			while (num > 0) {
				push(num % base, qs);
				num = num/base;
			}
			while (!isEmptyQuack(qs)) {
				int poppedElement = pop(qs);
				if (poppedElement > 9) {
					printf("%c", 97 + (poppedElement - 10));
				} 
				else {
					printf("%d", poppedElement);
				}		
			}
			printf("\n");
		} 
		else {
			printf("0\n");
		} 
	} 
	else {
		fprintf(stderr, "Usage: ./base.out number base\n");
		return EXIT_FAILURE;
	}
	
	
	return EXIT_SUCCESS;
}
