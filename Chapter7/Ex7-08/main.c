#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    // 0���� 99 ������ ���� ���
    for (i = 0; i < 10; i++) {
        printf("%d ", rand() % 100);
    }

    printf("\n");

    // 1���� 100 ������ ���� ���
    for (i = 0; i < 10; i++) {
        printf("%d ", 1 + rand() % 100);
    }

    return 0;
}
