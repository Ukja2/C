#include <stdio.h>

int main()
{
    int i = 10;
    int* p;

    p = &i;  // p�� i�� �ּ� ����

    printf("p = %p \n", p);
    printf("(*p)++ = %d \n", (*p)++);  // ���� ���� �������� i�� �� ��� �� 1 ����
    printf("*p++ = %d \n", *p++);     // p�� ����Ű�� �� ��� �� ������ p ����
    printf("p++ = %p \n", p++);       // ������ p�� �ּ� ���
    printf("p = %p \n", p);
    return 0;
}
