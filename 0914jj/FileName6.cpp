#include <stdio.h>

int main(void) {
	int num;
	
	printf("���� �Է�: ");
	scanf_s("%d", &num);

	if (num > 0)
		printf("���� �����Դϴ�.");
	else if (num < 0)
		printf("���� �����Դϴ�.");
	else
		printf("0 �Դϴ�.");

	return 0;

}