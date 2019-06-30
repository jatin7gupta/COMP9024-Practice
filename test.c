// echostdin.c

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
  char c = getchar(); // get a char from stdin
  while (c != '\n') {
      printf("%c", c);
      c = getchar();
  }
  putchar('\n');
  return EXIT_SUCCESS;
}
