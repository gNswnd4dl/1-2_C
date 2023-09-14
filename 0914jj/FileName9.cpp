#include <stdio.h>

int main(void) {
	int i;
	int sum = 0;

	for (i = 1; i <= 100; i++) {
		if (i == 10) break;

		printf("i=%d sum=%d\n", i, sum);
		sum += i;
	}
	printf("\nsum = %d\n ", sum);
	return 0;
}