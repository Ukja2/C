#include <stdio.h>

int sharedVar = 10;              // �ܺ� ���� ���� ����

void displaySharedVar(void) {    // �ܺ� ���� �Լ� ����
    sharedVar += 5;
    printf("�ܺ� ���� ����: %d\n", sharedVar);
}
