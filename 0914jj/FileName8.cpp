#include <stdio.h>

int main(void) {
	int jumsu, j;

	printf("점수입력:");
	scanf_s("%d", &jumsu);

	j = jumsu / 10;

	if (jumsu > 100 || jumsu < 0){
		printf("잘못된 점수입니다.");
		return 0;
	}
		
	else
		switch (j) {
		case 10 : case 9:
			printf("A학점");
			break;
		case 8:
			printf("B학점");
			break;
		case 7:
			printf("C학점");
			break;
		case 6:
			printf("D학점");
			break;
		default:
			printf("F학점");
		}
	return 0;
}