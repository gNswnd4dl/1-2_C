#include <stdio.h>

int main(void) {

	int i = 2;
	int j = 1;

	while (i < 10) {
		if (i == 5) {
			i++;
			continue;
		}

		while (j < 10) {
			printf("%d X %d = %d\n", i, j, i * j);
			j++;
		}

		j = 1;
		i++;
	}
	return 0;

}