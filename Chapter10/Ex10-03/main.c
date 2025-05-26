#include <stdio.h>

int main()
{
    char c = 'P';
    float f = 2.15f;
    double d = 2.15;

    char *pc = &c;
    float *pf = &f;   // float�� ������ ����Ű�� �����ͷ� ����
    double *pd = &d;  // double�� ������ ����Ű�� �����ͷ� ����

    // �����͸� ���� �� ������ �� ���
    printf("c�� ��: %c\n", *pc);
    printf("f�� ��: %f\n", *pf);
    printf("d�� ��: %lf\n", *pd);

    // �� ������ �޸� �ּ� ���
    printf("c�� �ּ�: %p\n", (void*)pc);
    printf("f�� �ּ�: %p\n", (void*)pf);
    printf("d�� �ּ�: %p\n", (void*)pd);

    return 0;
}
