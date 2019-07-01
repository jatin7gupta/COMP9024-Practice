// blackbox.c: black box unit tester for a quack
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "quack.h"

int main(int argc, char *argv[]){
    Quack s = NULL;
    Quack t;

    printf("Test #1: Init stack is empty: ");
    s = createQuack();
    assert(isEmptyQuack(s));
    printf("passed\n");

    printf("Test #2: Push, stack not empty: ");
    push(1, s);
    assert(!isEmptyQuack(s));
    printf("passed\n");

    printf("Test #3: Push again, pop twice, then empty: ");
    push(2, s);
    pop(s);
    pop(s);
    assert(isEmptyQuack(s));
    printf("passed\n");

    printf("Test #4: TESTING ERROR: quack underflow\n");
    pop(s);
    return EXIT_SUCCESS;
}
