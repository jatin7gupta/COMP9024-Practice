 /*
 COMP9024 Exercise Q5.2

 collatzeFib.c -The Fibonacci numbers are defined as follows:
 Fib(1) = 1
 Fib(2) = 1
 Fib(n) = Fib(n-1)+Fib(n-2) for n?3

 Write a C program that calls the function in Part a. with the first 10 Fibonacci numbers.

 Author: Jatin Gupta (z5240221@unsw.edu.au)

 Date- 10-June-19
    
 */
 
 #include<stdio.h>
 #include<stdlib.h>
 
 int fib(int n) {
 	if (n == 1 || n == 2) {
 		return 1;
 	} else {
 		return (fib(n-1) + fib(n-2));
 	}
 }
 
 void generate(int n) {
 	while(n != 1) {
 		if (n % 2 == 0) {
 			n = n/2;
 		} else {
 			n = (3 * n) + 1;
 		}
 		printf("%d ", n);
 	}
 }
 
 int main(void) {
 	
     for (int i = 1; i <= 10; i++) {
 		int ans = fib(i);
 		printf("Fib[%d] = %d: ",i, ans);
 		if (ans != 1) {
 			generate(ans);
 			printf("\n");
 		} else {
 			printf("\n");
 		}
 	}
 	
 	return 0;
 }
