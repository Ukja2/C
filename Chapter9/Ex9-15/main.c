#include <stdio.h>

// ����ǥ ��� �Լ�
void gradePrint(int grade[3][3]) {
    int i, j, tot = 0;
    double avg = 0;

    printf("\n");
    printf("=================================================\n");
    printf("                   ��    ��    ǥ                \n");
    printf("=================================================\n");
    printf(" ��ȣ   ����   ����   ����   ����   ���   ����\n");
    printf("-------------------------------------------------\n");

    for (i = 0; i < 3; i++) {
        printf(" %d\t", i + 1);
        tot = 0;

        for (j = 0; j < 3; j++) {
            printf("%d\t", grade[i][j]);
            tot += grade[i][j];
        }

        avg = tot / 3.0;
        printf("%d\t%.2lf\t", tot, avg);

        if (avg >= 90) printf("A\n");
        else if (avg >= 80) printf("B\n");
        else if (avg >= 70) printf("C\n");
        else if (avg >= 60) printf("D\n");
        else printf("F\n");
    }

    printf("=================================================\n");
}

int main() {
    int i, j;
    int grade[3][3];  // 3�� �л�, 3����

    // ���� �Է� �ޱ�
    for (i = 0; i < 3; i++) {
        printf("%d��° �л��� ����, ����, ���� ���� �Է�: ", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%d", &grade[i][j]);
        }
    }

    // ����ǥ ��� �Լ� ȣ��
    gradePrint(grade);

    return 0;
}
