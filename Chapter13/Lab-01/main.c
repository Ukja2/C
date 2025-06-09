#pragma warning(disable:4996)
#include <stdio.h>

typedef struct {                       // 2���� ������ ����� ������ ����ü ����
    int numerator;                     // ����
    int denominator;                   // �и�
} FRACTIONS;

int main() {
    // 3���� ����ü ���� ����
    FRACTIONS fractionA;              // �Է¹��� �м��� ���� ����
    FRACTIONS fractionB;
    FRACTIONS resultFraction;         // �м��� ���� ����

    // ���ڿ� �и� �Է¹���
    printf("ù ��° �м��� ���ڿ� �и� �Է��ϼ���(��: 1/2): ");
    scanf("%d / %d", &fractionA.numerator, &fractionA.denominator);

    printf("�� ��° �м��� ���ڿ� �и� �Է��ϼ���(��: 3/8): ");
    scanf("%d / %d", &fractionB.numerator, &fractionB.denominator);

    // ���ڳ���, �и𳢸� ���� ���
    resultFraction.numerator = fractionA.numerator * fractionB.numerator;
    resultFraction.denominator = fractionA.denominator * fractionB.denominator;

    printf("\n%d / %d * %d / %d = %d / %d\n",
        fractionA.numerator, fractionA.denominator,
        fractionB.numerator, fractionB.denominator,
        resultFraction.numerator, resultFraction.denominator);

    return 0;
}
