#include <stdio.h>

int main()
{
    int num = 50;     // ������ ���� num�� 50���� �ʱ�ȭ
    int* pnum;        // ������ ������ ���� pnum ����

    pnum = &num;      // pnum�� num�� �ּҷ� �ʱ�ȭ

    printf("*(pnum) = %d \n", *(pnum));       // num�� �� ���
    printf("*(pnum++) = %d \n", *(pnum++));   // �� ��� �� ������ ����
    printf("*(++pnum) = %d \n", *(++pnum));   // ������ ���� �� �� ���

    return 0;
}
