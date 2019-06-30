/*
Program name: sum3str.c
Author Name: Jatin Gupta
Written(YY.MM.DD):  19.07.01 
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char *r = "1";
	char *s = "23";
	char *t = "456";
	int ir, is, it;
	if((sscanf(r, "%d", &ir) == 1) && (sscanf(s, "%d", &is) == 1) && (sscanf(t, "%d", &it) == 1)) {
		printf("%d\n", ir + is + it);
	}
	
	return EXIT_SUCCESS;
}
