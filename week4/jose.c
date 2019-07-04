// Josephus.c: use a queue to simulate a ring of n people, and
// eliminate every mth person until there is just a single person remaining
#include <stdio.h>
#include <stdlib.h>
#include "quack.h"

int main(int argc, char *argv[]) {
   Quack q = NULL;

   int n, m;
   if ((argc != 3) ||
       (sscanf(argv[1], "%d", &n) != 1) ||
       (sscanf(argv[2], "%d", &m) != 1)) {
       fprintf (stderr, "Usage: %s total eliminate\n", argv[0]);
       return EXIT_FAILURE;
   }
   q = createQuack();
   int i;
   for (i=1; i<=n; i++) {  // populate the queue
      qush(i, q);          // top = '1' and bottom = 'n'
   }
   showQuack(q);
   int person=0;
   while (!isEmptyQuack(q)) { // continue until empty
      for (i=0; i<m-1; i++) { // skip m-1 people
         qush(pop(q), q);     // move from front to back
      }
      person = pop(q);        // if this person ...
      if (!isEmptyQuack(q)) { // ... is not last one ...
         printf("byebye %d\n", person); // eliminate him
      }
   } 
   printf("%d is the only person left\n", person);
   return EXIT_SUCCESS;
}
