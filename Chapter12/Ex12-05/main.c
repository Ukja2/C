#include <stdio.h>

// �Լ� ����
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    // �Լ� ������ �迭 ���� �� �ʱ�ȭ
    int (*operations[3])(int, int) = { add, subtract, multiply };

    // �� �Լ� ȣ��
    int sum = operations[0](10, 5);        // add() �Լ� ȣ��
    int difference = operations[1](10, 5); // subtract() �Լ� ȣ��
    int product = operations[2](10, 5);    // multiply() �Լ� ȣ��

    // ��� ���
    printf("����: %d\n", sum);
    printf("����: %d\n", difference);
    printf("����: %d\n", product);

    return 0;
}
