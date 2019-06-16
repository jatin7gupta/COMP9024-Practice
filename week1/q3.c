 /*
 COMP9024 Exercise Q3

 matrixprodFun.c - matrix multiplication

 Author: Jatin Gupta (z5240221@unsw.edu.au)

 Date- 10-June-19
 1 1 1 1   1 1 1 1   x x x x
 1 1 1 1 * 1 1 1 1 = x x x x
 1 1 1 1   1 1 1 1   x x x x
 		   1 1 1 1   
 */
 
 #include<stdio.h>
 #include<stdlib.h>
 
 #define M 3
 #define N 4
 #define P 4
 void matrixProduct(float a[M][N], float b[N][P], float c[M][P]) {
 	for (int row = 0; row < M; row++) { 
	 	for (int r = 0; r < N; r++) {
	 		float save = 0.0;
	 		for (int col = 0; col < N; col++) {
	 			save += a[row][col] * b[col][r];
	 		}
	 		c[row][r] = save;
	 	}
 	}
 	
 	// printing c matrix
 	for (int row = 0; row < M; row++) {
 		for (int col = 0; col < P; col++) {
 			printf("%f ", c[row][col]);
 		}
 		printf("\n");
 	}
 }
 

 
 int main(void) {
 	float a[M][N] = { 
 		{1,2,3,4},
 		{5,6,7,8},
 		{9,1,2,3}
 	};
 	float b[N][P] = {
 		{1,2,3,4},
 		{5,6,7,8},
 		{9,1,2,3},
 		{4,5,6,7}
 	};
 	float c[M][P] = {
 		{0.0, 0.0, 0.0, 0.0},
 		{0.0, 0.0, 0.0, 0.0},
 		{0.0, 0.0, 0.0, 0.0},
 	};
 	
 	matrixProduct(a, b, c);
 	
 	return 0;
 }
