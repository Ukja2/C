#include <stdio.h>
#include <stdlib.h>  // rand() ����� ���� �ʿ�

#define FLOOR 3  // �� ��
#define ROW 4    // �� ��
#define COL 5    // �� ��

int main()
{
    int array[FLOOR][ROW][COL];  // 3���� �迭 ����
    int a, b, c;

    // �迭 �ʱ�ȭ: ���� ���ڷ� ä��
    for (a = 0; a < FLOOR; a++) {
        for (b = 0; b < ROW; b++) {
            for (c = 0; c < COL; c++) {
                array[a][b][c] = rand();  // ������ ���� ����
            }
        }
    }

    // �迭 ���� ���
    for (a = 0; a < FLOOR; a++) {
        for (b = 0; b < ROW; b++) {
            for (c = 0; c < COL; c++) {
                printf("array[%d][%d][%d] = %d\n", a, b, c, array[a][b][c]);
            }
        }
    }

    return 0;
}
