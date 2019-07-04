/*
Program name: 
Author Name: Jatin Gupta
Written(YY.MM.DD):  19.07.04 

Write a C-program that takes 1 command line argument and prints all its prefixes in decreasing order of length.

You are not permitted to use any library functions other than printf()

You are not permitted to use any array other than argv[]

An example of the program executing is

./prefixes Programming
Programming
Programmin
Programmi
Programm
Program
Progra
Progr
Prog
Pro
Pr
P
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char *c;
	if (argc == 2) {
		c = argv[1];
		int i = 0;
		char index;
		do {
			index = *(c + i);
			i++;
		} while(index != '\0');
		
		for (i = i-1; i > 0; i--) {
			for (int j = 0; j < i; j++) {
				printf("%c", *(c + j));
			}
			printf("\n");
		}
	} 
	else {
		fprintf(stderr,"Usage: prefixes.out argument");
		return EXIT_FAILURE;
	}
	
	return EXIT_SUCCESS;
}
