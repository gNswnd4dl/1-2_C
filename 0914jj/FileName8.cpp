#include <stdio.h>

int main(void) {
	int jumsu, j;

	printf("�����Է�:");
	scanf_s("%d", &jumsu);

	j = jumsu / 10;

	if (jumsu > 100 || jumsu < 0){
		printf("�߸��� �����Դϴ�.");
		return 0;
	}
		
	else
		switch (j) {
		case 10 : case 9:
			printf("A����");
			break;
		case 8:
			printf("B����");
			break;
		case 7:
			printf("C����");
			break;
		case 6:
			printf("D����");
			break;
		default:
			printf("F����");
		}
	return 0;
}