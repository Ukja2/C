#include <stdio.h>

int main()
{
    int scores[5];              // ������ �迭 ����

    scores[0] = 95;
    scores[1] = 85;
    scores[2] = 100;
    scores[3] = 77;
    scores[4] = 65;

    // �ݺ������� �迭 scores�� ��� ��ȸ
    for (int i = 0; i < 5; i++) {
        printf("%d�� ���: %d\n", i, scores[i]);   // i��° ��ҿ� �����Ͽ� �� ���
    }

    return 0;
}
