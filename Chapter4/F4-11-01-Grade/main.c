#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{
    int score;
    char grade;

    // 사용자로부터 점수 입력받기
    printf("학생의 점수를 입력하세요: ");
    scanf("%d", &score);

    // 중첩된 삼항 연산자를 사용하여 학점 판별
    grade = (score >= 90) ? 'A' :
        (score >= 80) ? 'B' :
        (score >= 70) ? 'C' :
        (score >= 60) ? 'D' : 'F';

    printf("학점: %c\n", grade);

    return 0;
}
