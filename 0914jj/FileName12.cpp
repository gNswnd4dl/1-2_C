#include <stdio.h>

int main(void) {
	int i, j;

		for (i = 1; i <= 5; i++) {
			for (j = 0; j < i; j++) {
				printf("  ");
			}
			if (i % 2 != 0) {
				printf("|O|\n");
				printf("_______________\n");
			}

			else {
				printf("|X|\n");
				printf("_______________\n");
			}
		}
	

	return 0;
}