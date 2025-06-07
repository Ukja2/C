#include <stdio.h>

void increment(int* ptr) {
    (*ptr)++;  // ���� 1 ������Ŵ
}

void execute(void (*func)(int*), int* value) {
    func(value);  // ���޹��� �Լ� ȣ��
}

int main() {
    int a = 10;

    // �Լ� ������ ���� �� �ʱ�ȭ
    void (*func)(int*) = increment;

    // �Լ� ������ ����
    execute(func, &a);

    printf("a = %d\n", a);  // ���: a = 11

    return 0;
}
