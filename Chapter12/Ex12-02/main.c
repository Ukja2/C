#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int a;      // ������ ���� a ����
    int* p;     // ������ ������ p ����
    int** q;    // ������ ���� ������ q ����
    int*** r;   // ������ ���� ������ r ����

    p = &a;     // p�� a�� �ּ� ����
    q = &p;     // q�� p�� �ּ� ����
    r = &q;     // r�� q�� �ּ� ����

    printf("���ڸ� �Է��ϼ���: ");
    scanf("%d", &a);
    printf("�Է��� ���ڴ�: %d\n", a);

    printf("\n���ڸ� �Է��ϼ���: ");
    scanf("%d", p);
    printf("�Է��� ���ڴ�: %d\n", a);

    printf("\n���ڸ� �Է��ϼ���: ");
    scanf("%d", *q);
    printf("�Է��� ���ڴ�: %d\n", a);

    printf("\n���ڸ� �Է��ϼ���: ");
    scanf("%d", **r);
    printf("�Է��� ���ڴ�: %d\n", a);

    return 0;
}
