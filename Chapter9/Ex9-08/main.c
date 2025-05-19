#include <stdio.h>

int array_list(int*, int);  // �Լ� ������Ÿ�� ����

int main(void)
{
    int scores[10] = { 95, 83, 75, 98, 65, 77, 90, 91 };
    int array_size, total;

    // �迭�� ��ü ũ�� �� �迭 ��� �ϳ��� ũ�� = �迭 ��� ����
    array_size = sizeof(scores) / sizeof(int);
    total = array_list(scores, array_size);  // �Լ� ȣ��

    printf("scores �迭 ����� ���� : %d\n", array_size);
    printf("scores �����հ� �հ� : %d\n", total);

    return 0;
}

int array_list(int scores[], int size)
{
    int i, sum = 0;

    for (i = 0; i < size; i++)
        sum += scores[i];

    return sum;
}
