/*
Program name: 
Author Name: Jatin Gupta
Written:  19.06.16 
*/ 

#include <stdio.h>
#include <stdlib.h>

 int main(int argc, char *argv[]) { 
 	if (argc == 2) {
 		int i;
 		for (i = 0; i < atoi(argv[1]); i++) {
 			printf("%d,", i);
 		}
 		printf("%d\n", i);
 	} else {
 		fprintf(stderr, "Usage: ./q3.out number\n");
 		return EXIT_FAILURE;
 	}
 	 
 	return EXIT_SUCCESS; 
 }
