#include <stdio.h>

void swap(int* pa, int* pb) {
	int c = *pa;
	*pa = *pb;
	*pb = c;
}

void sort(int *arr) {
	for(int k=0; k<4; k++){
		for (int i = 0; i < 4-k; i++) {
			if (arr[i] > arr[i + 1]) {
				swap(&arr[i], &arr[i + 1]);
			}
		}
	}
	
}

int main(void) {
	int arr[5] = {5,4,1,2,3};

	printf("호출 전: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	sort(arr);

	printf("호출 후: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}