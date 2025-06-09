#pragma warning(disable:4996)
#include <stdio.h>

typedef struct {                       // 2개의 정수형 멤버를 가지는 구조체 선언
    int numerator;                     // 분자
    int denominator;                   // 분모
} FRACTIONS;

int main() {
    // 3개의 구조체 변수 선언
    FRACTIONS fractionA;              // 입력받은 분수의 값을 저장
    FRACTIONS fractionB;
    FRACTIONS resultFraction;         // 분수의 곱을 저장

    // 분자와 분모를 입력받음
    printf("첫 번째 분수의 분자와 분모를 입력하세요(예: 1/2): ");
    scanf("%d / %d", &fractionA.numerator, &fractionA.denominator);

    printf("두 번째 분수의 분자와 분모를 입력하세요(예: 3/8): ");
    scanf("%d / %d", &fractionB.numerator, &fractionB.denominator);

    // 분자끼리, 분모끼리 곱셈 계산
    resultFraction.numerator = fractionA.numerator * fractionB.numerator;
    resultFraction.denominator = fractionA.denominator * fractionB.denominator;

    printf("\n%d / %d * %d / %d = %d / %d\n",
        fractionA.numerator, fractionA.denominator,
        fractionB.numerator, fractionB.denominator,
        resultFraction.numerator, resultFraction.denominator);

    return 0;
}
