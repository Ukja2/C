#include <stdio.h>

int main()
{
    int a;
    int* p;
    int** q;

    a = 100;
    p = &a;     // *p�� a�� ���� ���� 100�� ����
    q = &p;     // *q�� p�� ����, **q�� a�� ���� ���� ����

    printf("a: %3d\n", a);
    printf("*p: %3d\n", *p);
    printf("**q: %3d\n", **q);

    return 0;
}
