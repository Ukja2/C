#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{
    int score;
    char grade;

    // ����ڷκ��� ���� �Է¹ޱ�
    printf("�л��� ������ �Է��ϼ���: ");
    scanf("%d", &score);

    // ��ø�� ���� �����ڸ� ����Ͽ� ���� �Ǻ�
    grade = (score >= 90) ? 'A' :
        (score >= 80) ? 'B' :
        (score >= 70) ? 'C' :
        (score >= 60) ? 'D' : 'F';

    printf("����: %c\n", grade);

    return 0;
}
