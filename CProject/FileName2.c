#include <stdio.h>

int main() {
	int x, y, z, n;

	scanf_s("%d", &n);
	printf("%d층 피라미드\n", n);


	for (x = 0; x < n; x++) {
		for (z = x; z < n - 1; z++) {
			printf(" ");
		}
		for (y = 0; y <= x*2; y++) {
			printf("*");
		}
		printf("\n");
	}
}