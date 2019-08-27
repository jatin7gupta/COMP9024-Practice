#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int palin(char *str, int length) {
	int i = 0;
	int j = length-1;
	while (i<j) {
		if (str[i] != str[j]) {
			return 0;
		}
		i++;
		j--;
	}
	return 1;
}


int main(int argc, char* argv[]) {
	if (argc == 2) {
		int len = strlen(argv[1]);
		char str[len+1];
		strcpy(str, argv[1]);
		printf("%d\n", len);
		if (palin(str, len)) {
			printf("yes");
		} else {
			printf("no");
		}
	}
	return EXIT_SUCCESS;
}
