#include <stdio.h>

// �迭�� �ִ��� ��ȯ�ϴ� �Լ�
int findMax(int numbers[], int size) {
    int max = numbers[0]; // ���� max�� numbers[0] �� �ʱ�ȭ

    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i]; // �ִ� max ����
        }
    }

    return max; // �ִ� ��ȯ
}

int main() {
    int numbers[10] = { 10, 52, 23, 74, 15, 67, 38, 29, 40, 51 };

    // �ִ��� ã�� �Լ� ȣ��
    int max_value = findMax(numbers, 10); // �迭�� ��� ��Ҹ� �� ���� ����

    printf("�迭�� �ִ��� %d�Դϴ�.\n", max_value);

    return 0;
}
