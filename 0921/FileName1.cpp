#include <stdio.h>

int add(int i) {
	for (int a = i - 1; a > 1; a--) {
		if (i % a == 0) return 0;
	}
	return 1;
}

int main(void) {
	int i;

	printf("�Ҽ����� Ȯ���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &i);

	printf("%d\n", add(i));

	return 0;

}