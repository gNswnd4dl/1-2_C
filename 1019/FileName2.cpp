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

    printf("�л��� �Է� : ");
    scanf_s("%d", &student);

    s = (struct Student*)malloc(student * sizeof(struct Student));
    for (int i = 0; i < student; i++) {
        printf("�л� %d-%d �й� �Է� : ", student, i + 1);
        scanf_s("%d", &s[i].sno);
        printf("�л� %d-%d �̸� �Է� : ", student, i + 1);
        scanf_s("%s", &s[i].name,10);
        printf("�л� %d-%d ���� �Է� : ", student, i + 1);
        scanf_s("%d", &s[i].score);

        sum += s[i].score;
    }


    printf("���� : %d\n\n", sum);

    for (int i = 0; i < student; i++) {
        printf("�л� %d-%d �й� ��� : %d \n", student, i + 1, s[i].sno);
        printf("�л� %d-%d �̸� ��� : %s \n", student, i + 1,s[i].name);
        printf("�л� %d-%d ���� ��� : %d \n", student, i + 1,s[i].score);
    }
        
    printf("��� ���� : %.2f", float(sum) / student);

    free(s);

    return 0;

}