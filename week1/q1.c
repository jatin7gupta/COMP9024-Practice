/*
COMP9024 Exercise Q1

fivedigit.c - to find number/s which are five digit and multiply by 4 to get the reverse of it

Author: Jatin Gupta (z5240221@unsw.edu.au)

Date- 9-June-19

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// reverses a five digit number and return the reversed number
int reverse(int x) {
	int temp = x;
	int res = 0;
	int i = 0;
	while (temp > 0) {
		int rem = temp % 10;
		temp = temp/10;
		if (i == 4) {
			res += rem;
		} else {
			res += ((int)pow(10, 4-i) * rem);
		}
		i++;
	}
	return res;
}

int main() {
	for (int i = 10000; i < 99999; i++) {
		if (i*4 == reverse(i)) {
			printf("%d\n", i);
		}
	}
	return 0;
}

