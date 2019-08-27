#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"
#include "IOmem.h"


int main(void) { 
   int numV;
   if ((numV = readNumV()) > 0) {        // read #vertices
      Graph g = newGraph(numV);
      if (readBuildGraph(g) == 1) {
         showGraph(g);

         searchForCycle(g, STARTVERTEX, numV);
      }
      freeGraph(g);
      g= NULL;
   }
   else {
      printf("Error in reading #number\n");
      return EXIT_FAILURE;
   }
   return EXIT_SUCCESS;
}

void findEulerianCycle(Graph g, int numV, Vertex startv) {
   Quack s = createQuack();
   printf("Eulerian cycle: ");

   push(startv, s);
   while (!isEmptyQuack(s)) {
      Vertex v = pop(s); // pop and then ...
      push(v, s);        // ... push back on, so no change
      Vertex w = getAdjacent(g, numV, v); // get largest adj. v
      if (w >= 0) {      // if true, there is an adj. vertex
         push(w, s);     // push this vertex onto stack
         removeEdge(newEdge(v, w), g); // remove edge to vertex
      }
      else {             // top v on stack has no adj. vertices
         w = pop(s);
         printf("%d ", w);
      }
   }
   putchar('\n');
}

Vertex getAdjacent(Graph g, int numV, Vertex v) {
   Vertex retv = -1; // assume no adj. vertices
   for (Vertex w = numV-1; w >= 0 && retv == -1; w--) { 
      if (isEdge(newEdge(v, w), g)) {
         retv = w;   // found largest adj. vertex
      }
   }
   return retv;
}
