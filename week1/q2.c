/*
 COMP9024 Exercise Q3

 innerprodFun.c - a[i] * b[i] -> sum(for all i) 

 Author: Jatin Gupta (z5240221@unsw.edu.au)

 Date- 9-June-19  
 */
 #include<stdio.h>
 #include<stdlib.h>
 
 
 float innerProduct(float a[], float b[], int n) {
 	float result = 0.0;
 	for (int i = 0; i < n ; i++) {
 		result += a[i] * b[i];
 	}
 	return result;
 }
 
 
 int main(void) {
 	int n = 5;
 	float a[] = {1,2,3,4,5};
 	float b[] = {1,2,3,4,5};
 	
 	printf("%f\n", innerProduct(a, b, n));
 	return 0;
 }
