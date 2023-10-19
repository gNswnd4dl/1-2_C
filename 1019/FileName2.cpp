#include <stdio.h>
#include <stdlib.h>

struct Student {
	int sno;
	char name[10];
	int score;

};

int main() {
    int student = 0, sum = 0;
    struct Student* s;

    printf("학생수 입력 : ");
    scanf_s("%d", &student);

    s = (struct Student*)malloc(student * sizeof(struct Student));
    for (int i = 0; i < student; i++) {
        printf("학생 %d-%d 학번 입력 : ", student, i + 1);
        scanf_s("%d", &s[i].sno);
        printf("학생 %d-%d 이름 입력 : ", student, i + 1);
        scanf_s("%s", &s[i].name,10);
        printf("학생 %d-%d 성적 입력 : ", student, i + 1);
        scanf_s("%d", &s[i].score);

        sum += s[i].score;
    }


    printf("총점 : %d\n\n", sum);

    for (int i = 0; i < student; i++) {
        printf("학생 %d-%d 학번 출력 : %d \n", student, i + 1, s[i].sno);
        printf("학생 %d-%d 이름 출력 : %s \n", student, i + 1,s[i].name);
        printf("학생 %d-%d 성적 출력 : %d \n", student, i + 1,s[i].score);
    }
        
    printf("평균 점수 : %.2f", float(sum) / student);

    free(s);

    return 0;

}