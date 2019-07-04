/*
Program name: 
Author Name: Jatin Gupta
Written(YY.MM.DD):  19.07.04 
*/ 

#include <stdio.h>
#include <stdlib.h>
#include "quack.h"

int main(void) {
	Quack q = createQuack();
	push(1, q);
	push(2, q);
	push(3, q);
	showQuack(q);
	pop(q);
	showQuack(q);
	return EXIT_SUCCESS;
}
