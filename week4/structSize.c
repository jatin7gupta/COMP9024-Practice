/*
Program name: 
Author Name: Jatin Gupta
Written(YY.MM.DD):  19.07.02 
*/ 

#include <stdio.h>
#include <stdlib.h>

int main(void) {
struct unknown {
		
		double k;
        
        int a;
        char c;
        float b;
        
    };
    printf("%lu\n", sizeof(struct unknown));
	return EXIT_SUCCESS;
}
