#include <stdio.h>

void swap(int, int);    // �Լ� ����

int main()
{
    int a, b;
    a = 10;
    b = 20;

    printf("before swap() : a=%d, b=%d\n", a, b);   // ȣ�� �� a�� b�� ��
    swap(a, b);   // a�� b�� �� ����
    printf("after swap() : a=%d, b=%d\n", a, b);    // ȣ�� �� a�� b�� ��

    return 0;
}

void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("in swap() : a=%d, b=%d\n", a, b);
}
