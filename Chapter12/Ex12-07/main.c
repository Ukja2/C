#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    // argc�� ���޵� ������ ���� Ȯ��
    // argv�� ������ �迭�� ����Ŵ
    if (argc != 3) {
        printf("Usage: %s <number1> <number2>\n", argv[0]);
        return 1;
    }

    int num1 = atoi(argv[1]);  // ù ��° ���ڸ� ������ ��ȯ
    int num2 = atoi(argv[2]);  // �� ��° ���ڸ� ������ ��ȯ

    printf("Sum: %d\n", num1 + num2);  // �� ���� ���� ���

    return 0;
}
