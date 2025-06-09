#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// ��缺 ���� ����ü ����
typedef struct {
    double initialAmount;     // �ʱ� ������
    double decayConstant;     // �ر� ���
} RadioactiveMaterial;

// ��缺 ������ �ر� ������ ����ϴ� �Լ�
double calculateDecayRate(RadioactiveMaterial* material, double time) {
    double decayRate;
    decayRate = material->initialAmount * exp(-material->decayConstant * time);
    return decayRate;
}

int main() {
    // �������� ����ü �޸� �Ҵ�
    RadioactiveMaterial* material = (RadioactiveMaterial*)malloc(sizeof(RadioactiveMaterial));

    // ����ڷκ��� �ʱ� �������� �ر� ��� �Է¹ޱ�
    printf("�ʱ� �������� �Է��ϼ���: ");
    scanf("%lf", &material->initialAmount);
    printf("��缺 �ر� ����� �Է��ϼ���: ");
    scanf("%lf", &material->decayConstant);

    // ����ڷκ��� �ð� �Է¹ޱ�
    double time;
    printf("�ð��� �Է��ϼ���: ");
    scanf("%lf", &time);

    // �ر� ���� ���
    double remainingAmount = calculateDecayRate(material, time);

    // ���� ������ ������� ���
    double decayPercentage = (remainingAmount / material->initialAmount) * 100;

    // �ر� ���� ���(�Ҽ��� �Ʒ� ��° �ڸ�����)
    printf("\n�����ִ� ����: %.2f%%\n", decayPercentage);

    // �������� �Ҵ�� �޸� ����
    free(material);

    return 0;
}
