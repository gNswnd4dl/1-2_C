#include <stdio.h>
#include <stdlib.h>



int main(void) {
	int student,k;
	int* score;
	int sum = 0;


	printf("�л� �� �Է�: ");
	scanf_s("%d", &student);
	score = (int*)malloc(student * sizeof(int));

	for(k=0; k<student;k++){
		printf("�л� # %d - %d �����Է� : ", student, k + 1);
		scanf_s("%d", &score[k]);
		sum += score[k];
	}
	printf("����: %d\n", sum);
	
	
	for (int k = 0; k < student; k++) {
		printf("�л� # %d - %d ���� ��� : %d\n", student, k + 1, score[k]);
	}
	printf("��� ���� : %.2f", float(sum) / student);

	free(score);

	return 0;
	
}