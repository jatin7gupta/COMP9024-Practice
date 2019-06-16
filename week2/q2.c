/*
Program name: sum num
Author Name: Jatin Gupta
Written:  19.06.16 
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int sum = 0;
	if (argc > 1) {
		for (int i = 1; i < argc; i++) {
			int val = atoi(argv[i]);
			if (val != 0) {
				sum += val;
			} else {
				if (strcmp(argv[i], "0") != 0) {
					fprintf(stderr ,"error: argument %s is non-numeric", argv[i]);
					return EXIT_FAILURE;
				}
			}
		}
		printf("%d\n", sum);
	}	
	
	return EXIT_SUCCESS;
}
