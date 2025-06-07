#include <stdio.h>

// ������ �����ϴ� �Լ�
int add(int a, int b) {
    return a + b;
}

// ������ ����ϴ� �Լ�
int square(int x) {
    return x * x;
}

int main() {
    // ���� �Լ� ������
    int (*funcPtr)(int, int) = add;
    int sum = funcPtr(3, 5);  // add() �Լ� ȣ��, �Ű������� 3�� 5�� ����
    printf("Sum: %d\n", sum);

    // ���� �Լ� ������
    int (*squarePtr)(int) = square;
    int squared = squarePtr(4);  // square() �Լ� ȣ��, �Ű������� 4�� ����
    printf("Squared: %d\n", squared);

    return 0;
}
