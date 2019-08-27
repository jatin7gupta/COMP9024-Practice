// basic.c: insert nodes into a BST, print the tree and free all nodes
#include <stdio.h>
#include <stdlib.h>

typedef struct node *Tree;
struct node {
   int data;
   Tree left;
   Tree right;
};

Tree insertTree (Tree, int);
Tree createTree (int);
//void printTree  (Tree);
void freeTree   (Tree);
int sumTree(Tree);
void printTree(Tree, int);

int main(int argc, char *argv[]) {
	Tree t = NULL;

   	//t = createTree (argc-1);
	for (int i = 1; i < argc; i++) {
		int n;
		if (sscanf(argv[i], "%d", &n) != 1) {
          fprintf(stderr, "Invalid argument found\n");
          exit(EXIT_FAILURE);
       	}
		t = insertTree(t, n);
	}
	
   
   printTree(t,0);
   putchar('\n');
   printf("sum = %d\n", sumTree(t));
   freeTree(t);
   return EXIT_SUCCESS;
}

void printTree(Tree t, int depth) {
	if (t != NULL) {
		depth++;
		printTree(t->left, depth);
		for (int i = 0; i < depth; i++) {
			printf("\t");
		}
		printf("%d\n", t->data);
		printTree(t->right, depth);
	}
}


int sumTree(Tree t) {
	int sum = 0;
	if (t != NULL) {
		sum = t->data + sumTree(t->left) + sumTree(t->right);
	}
	return sum;
}

Tree insertTree(Tree t, int v) {
   if (t == NULL) {
      t = createTree(v);
   }
   else {
      if (v < t->data) {
        t->left = insertTree (t->left, v);
      }
      else {
        t->right = insertTree (t->right, v);
      }
   }
   return t;
}

Tree createTree (int v) {
   Tree t = NULL;

   t = malloc (sizeof(struct node));
   if (t == NULL) {
      fprintf(stderr, "Memory is exhausted: exiting\n");
      exit(1);
   }
   t->data = v;
   t->left = NULL;
   t->right = NULL;
   return t;
}
/*
void printTree(Tree t) { // not the final version
    if (t != NULL) {
        printTree (t->left);
        printf ("%d  ", t->data);
        printTree (t->right);
    }
    return;
}
*/
void freeTree(Tree t) { // free in postfix fashion
   if (t != NULL) {
      freeTree(t->left);
      freeTree(t->right);
      free(t);
   }
   return;
}
