#include <stdio.h>

int add(int i) {
	for (int a = i - 1; a > 1; a--) {
		if (i % a == 0) return 0;
	}
	return 1;
}

int main(void) {
	int i;

	printf("소수인지 확인할 수를 입력하세요 : ");
	scanf_s("%d", &i);

	printf("%d\n", add(i));

	return 0;

}