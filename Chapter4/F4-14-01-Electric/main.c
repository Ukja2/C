#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int bulbState;

    printf("������ ���� ���¸� �Է��ϼ��� (-1 �Ǵ� 1): ");
    scanf("%d", &bulbState);

    bulbState = ~bulbState + 1;

    printf("����� ������ ����: %d\n", bulbState);

    return 0;
}
