#include <stdio.h>

int main()
{
    int i, j, array[3][4]; // 3�� 4��¥�� 2���� �迭 ����

    // ����ڷκ��� �� �Է¹ޱ�
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("���� �Է�: ");
            scanf("%d", &array[i][j]);
        }
    }

    // �Է¹��� �� ��� (3x4 ����)
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
