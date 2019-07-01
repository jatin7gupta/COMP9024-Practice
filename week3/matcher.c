/*
Program name: 
Author Name: Jatin Gupta
Written(YY.MM.DD):  19.07.01 
*/ 

#include <stdio.h>
#include <stdlib.h>
#include "quack.h"

#define OPEN_PAR '('
#define CLOSE_PAR ')'
#define OPEN_CURLY '{'
#define CLOSE_CURLY '}'
#define OPEN_SQ '['
#define CLOSE_SQ ']'

int main(int argc, char *argv[]) {
	char c;
	Quack qs = createQuack();
	if(qs == NULL) {
		fprintf(stderr, "Not able to create the quack");
		return EXIT_FAILURE;
	}
	int error = 0;
	while((c = getchar()) && c != EOF && error != 1) {
		if(c == OPEN_PAR || c == OPEN_CURLY || c == OPEN_SQ) {
			push(c, qs);
		} 
		else if(c == CLOSE_PAR || c == CLOSE_CURLY || c == CLOSE_SQ) {
			if(isEmptyQuack(qs)) {
				error = 1;
			} 
			else {
				char popped_element = pop(qs);
				if(!((c == CLOSE_PAR && popped_element == OPEN_PAR) || (c == CLOSE_CURLY && popped_element == OPEN_CURLY) || (c == CLOSE_SQ && popped_element == OPEN_SQ))) {
					error = 1; 				
				}
			}
		}
		
	}
	if(!isEmptyQuack(qs) || error) {
		printf("mismatch detected\n");
	}
	return EXIT_SUCCESS;
}
