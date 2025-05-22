#include <stdio.h>

// 성적표 출력 함수
void gradePrint(int grade[3][3]) {
    int i, j, tot = 0;
    double avg = 0;

    printf("\n");
    printf("=================================================\n");
    printf("                   성    적    표                \n");
    printf("=================================================\n");
    printf(" 번호   국어   영어   수학   총점   평균   학점\n");
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
    int grade[3][3];  // 3명 학생, 3과목

    // 점수 입력 받기
    for (i = 0; i < 3; i++) {
        printf("%d번째 학생의 국어, 영어, 수학 점수 입력: ", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%d", &grade[i][j]);
        }
    }

    // 성적표 출력 함수 호출
    gradePrint(grade);

    return 0;
}
