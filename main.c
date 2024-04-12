#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, n;
	int arr[100];
	printf("Enter array size 1-100: \n");
	while (1) {
		scanf("%d", &n);
		if (n>0 && n<=100) {
			break;
		}
		else {
			printf("array musst be in 1-100 boundary!\n");
		}
	}
	printf("\narray has %d elements: ", n);

	for (i = 0; i < n; ++i) {
		arr[i] = 15;
		if (i == 2) {
			arr[i] = 122;
		}
		printf("%d", arr[i]);
	}

	for (i = 1; i < n; ++i) {
		if (arr[i] > arr[0]) {
			arr[0] = arr[i];
		}
	}
	printf("\nthe biggest elements is %d", arr[0]);
	return 0;
}