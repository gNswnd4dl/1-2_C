#include <stdio.h>

int main(void) {
	int jumsu;

	printf("점수입력: ");
	scanf_s("%d", &jumsu);

	if (jumsu > 100 || jumsu < 0)
		printf("잘못된 점수입니다.");
	else if (jumsu >= 90)
		printf("A학점");
	else if (jumsu >= 80)
		printf("B학점");
	else if (jumsu >= 70)
		printf("C학점");
	else if (jumsu >= 60)
		printf("D학점");
	else
		printf("F학점");

	return 0;
}