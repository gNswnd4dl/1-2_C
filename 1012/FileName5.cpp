#include <stdio.h>

void swap(int* p_num1, int* p_num2) {
	int a = *p_num1;
	*p_num1 = *p_num2;
	*p_num2 = a;
}

int main(void) {
	int num1=30, num2=50;

	printf("num1 : %d\n", num1);
	printf("num2 : %d\n", num2);

	swap(&num1, &num2);

	printf("num1 : %d\n", num1);
	printf("num2 : %d\n", num2);

	return 0;
}