/*
Program name: sum3argA.c
Author Name: Jatin Gupta
Written(YY.MM.DD):  19.07.01 
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, k;
	if(argc == 4 && sscanf(argv[1], "%d", &i) == 1 && sscanf(argv[2], "%d", &j) == 1 && sscanf(argv[3], "%d", &k) == 1) {
		printf("%d\n", i + j + k);
	}
	return EXIT_SUCCESS;
}
