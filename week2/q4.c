/*
Program name: 
Author Name: Jatin Gupta
Written:  19.06.16 
*/ 


#include <stdio.h>
#include <stdlib.h>

void print_num(int start, int limit) {
	if(start == limit){
		printf("%d\n", start);
		return;
	} if(limit < 0) {
		printf("%d,", start);
		print_num(start - 1, limit);
	} else {
		printf("%d,", start);
		print_num(start + 1, limit);
	}
}


void count(int limit) {
	print_num(0, limit);
}

 int main(int argc, char *argv[]) { 
 	if (argc == 2) {
 			int limit = atoi(argv[1]);
 			count(limit);
 	} else {
 		fprintf(stderr, "Usage: ./q3.out number\n");
 		return EXIT_FAILURE;
 	}
 	 
 	return EXIT_SUCCESS; 
 }
