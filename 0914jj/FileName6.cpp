#include <stdio.h>

int main(void) {
	int num;
	
	printf("숫자 입력: ");
	scanf_s("%d", &num);

	if (num > 0)
		printf("양의 정수입니다.");
	else if (num < 0)
		printf("음의 정수입니다.");
	else
		printf("0 입니다.");

	return 0;

}