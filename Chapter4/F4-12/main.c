#include <stdio.h>

int main()
{
    int a = 0x5555, b = 0x00ff; // �������� 16������ �ʱ�ȭ

    printf("a = %x, b = %x\n", a, b);
    printf("~a = %x, ~b = %x\n", ~a, ~b); // ��Ʈ NOT ����
    printf("a & b = %x\n", a & b); // ��Ʈ AND ����
    printf("a | b = %x\n", a | b); // ��Ʈ OR ����
    printf("a ^ b = %x\n", a ^ b); // ��Ʈ XOR ����

    return 0;
}
