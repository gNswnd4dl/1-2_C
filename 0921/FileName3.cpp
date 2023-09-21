#include <stdio.h>

int acc(int num) {
	if (num == 0) return 1;

	return num * acc(num - 1);
}

int main(void) {
	int num;
	printf("계산할 팩토리얼 값 입력: ");
	scanf_s("%d", &num);

	printf("%d! = %d", num, acc(num));

	return 0;
}
