/*
Program name: sum3argB.c
Author Name: Jatin Gupta
Written(YY.MM.DD):  19.07.01 
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, k;
	if(argc == 4) {
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		k = atoi(argv[3]);
		printf("%d\n", i + j + k);
	}
	return EXIT_SUCCESS;
}
