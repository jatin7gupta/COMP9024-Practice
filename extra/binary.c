#include <stdio.h>
#include <stdlib.h>

void binarySearch(int *arr, int len, int key) {
	int beg = 0;
	int end = len-1;
	while (beg <= end) {
		int mid = (beg+end)/2;
		if (key < arr[mid]) {
			end = mid-1;
		} else if (key > arr[mid]) {
			beg = mid+1;
		} else {
			printf("found at %d, beg = %d and end = %d\n", mid, beg, end);
			break;
		}
	}
}

int main(void) {
	int arr[] = {1,2,3,4,5,6,7,8,9};
	binarySearch(arr, 9, 9);
	return EXIT_SUCCESS;
}
