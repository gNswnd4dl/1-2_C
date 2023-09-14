#include <stdio.h>

int main(void) {
	int year, y;

	printf("년도 입력:");
	scanf_s("%d", &year);

	
	y = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);


	if (y)
		printf("윤년입니다.");
	else
		printf("윤년이 아닙니다.");


	return 0;
}