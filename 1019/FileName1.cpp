#include <stdio.h>
#include <stdlib.h>



int main(void) {
	int student,k;
	int* score;
	int sum = 0;


	printf("학생 수 입력: ");
	scanf_s("%d", &student);
	score = (int*)malloc(student * sizeof(int));

	for(k=0; k<student;k++){
		printf("학생 # %d - %d 성적입력 : ", student, k + 1);
		scanf_s("%d", &score[k]);
		sum += score[k];
	}
	printf("총점: %d\n", sum);
	
	
	for (int k = 0; k < student; k++) {
		printf("학생 # %d - %d 성적 출력 : %d\n", student, k + 1, score[k]);
	}
	printf("평균 점수 : %.2f", float(sum) / student);

	free(score);

	return 0;
	
}