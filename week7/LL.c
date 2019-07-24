/*
Program name: 
Author Name: Jatin Gupta and Albert N
Written(YY.MM.DD):  19.07.21 
*/ 
/*
  LL.c
  an ADT for a linked list
 */

#include "LL.h"
#include <limits.h>

struct node {
  int data;
  struct node *next;
};

List createList(void) { // creates a node, fills with INT_MAX and NULL
   List marker;
   marker = malloc(sizeof(struct node));
   if (marker == NULL) {
       fprintf (stderr, "createList: no memory, aborting\n");
       exit(1);
   }
   marker->data = INT_MAX;         // defined in <limits.h>
   marker->next = NULL;
   return marker;
}

void putTail(int n, List marker) { // add new data to the tail
   if (marker == NULL) {
       fprintf (stderr, "putTail: no linked list found\n");
   }
   else {
       List new = createList();   // re-use of createList to make a node
       new->data = n;             // overwrites INT_MAX with proper data
       List p = marker;
       while (p->next != NULL) {  // find the last node 
           p = p->next;
       }
       p->next = new;             // append new to the list
   }
   return;
}

void putHead(int n, List marker) { // insert at the head
    if (marker == NULL) {
       fprintf (stderr, "putTail: no linked list found\n");
	}
	else {
	   List new = createList();   // re-use of createList to make a node
	   new->data = n;             // overwrites INT_MAX with proper data
	   new->next = marker->next;  // link new node to old List head
	   marker->next = new;        // new node is now List head 
	}
	return;
}

int getTail(List marker) {         // get & delete last node
	int retVal = 0;
    if (marker == NULL) {
       fprintf (stderr, "putTail: no linked list found\n");
	}
	else {
		List p = marker;
		if (p->next == NULL) {
		    printf("List Empty returning 0");
			return retVal; // List is empty
		} 
		else {
			List secondLast = p;
			while (p->next != NULL) {  // find the last node 
		       secondLast = p;
		       p = p->next;
		    }
		    retVal = p->data;
		    secondLast->next = NULL;
		    free(p);
		}
	}
    return retVal; 
}

int getHead(List marker) {         // get & delete head node
    int retVal = 0;
    if (marker == NULL) {
       fprintf (stderr, "putTail: no linked list found\n");
    }
    else {
    	List p = marker;
    	if (p->next == NULL) {
    		printf("List Empty returning 0");
    		return retVal;         // List is empty
    	} 
    	else {
    		List nodeToDelete = p->next;
    		retVal = nodeToDelete->data;
    		p->next = nodeToDelete->next;
    		free(nodeToDelete);
    		nodeToDelete = NULL;
    	}
    }
    return retVal; 
}

int isEmptyList(List marker) {     // 0 is false, 1 is true
   int empty = 0;
   if (marker == NULL) {
       fprintf (stderr, "isEmptyList: no linked list found\n");
   }
   else {
       empty = marker->next == NULL;
   }
   return empty;
}

void showList(List marker) {
   if (marker == NULL) {
      fprintf(stderr, "showList: no linked list found\n");
   }
   else {
       printf("List: ");
       if (marker->next == NULL) {
          printf("<< >>\n");
       }
       else {
          printf("<<");              // start with <<
          List p = marker->next;     // get the head
          while (p->next != NULL) {
             printf("%d, ", p->data); // print each element
             p = p->next;
          }
          printf("%d>>\n", p->data); // last element + >>
       }
   }
   return;
}
