#include <stdio.h>

int main(void) {
	int year, y;

	printf("�⵵ �Է�:");
	scanf_s("%d", &year);

	
	y = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);


	if (y)
		printf("�����Դϴ�.");
	else
		printf("������ �ƴմϴ�.");


	return 0;
}