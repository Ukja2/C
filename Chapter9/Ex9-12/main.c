#include <stdio.h>

int main()
{
    int table[4][4]; // 2���� �迭 ����
    int num = 1;

    // �迭�� ���� ä���ֱ� (1 ~ 16����)
    for (int i = 0; i < 4; i++) {            // �� �ݺ�
        for (int j = 0; j < 4; j++) {        // �� �ݺ�
            table[i][j] = num;
            num++;
        }
    }

    // �迭 ���
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ", table[i][j]);     // �� �ڸ��� ���
        }
        printf("\n");                        // �� �ٲ�
    }

    return 0;
}
