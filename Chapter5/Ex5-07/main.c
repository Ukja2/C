#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // ù ��° ����/���� �Ǵ�
    char first, second;
    printf("MBTI�� ù ��° �� �� ��° ���ڸ� �Է��ϼ��� (��: E/I, S/N): ");
    scanf(" %c %c", &first, &second);

    // ù ��° ����� 'E'(������)���� 'I'(������)������ ���� ���
    if (first == 'E') {
        printf("�������� ������ ������ �ֽ��ϴ�.\n");
        if (second == 'S') {
            printf("�������Դϴ�.\n");
        }
        else if (second == 'N') {
            printf("â�����Դϴ�.\n");
        }
    }
    else if (first == 'I') {
        printf("�������� ������ ������ �ֽ��ϴ�.\n");
        if (second == 'S') {
            printf("�������Դϴ�.\n");
        }
        else if (second == 'N') {
            printf("â�����Դϴ�.\n");
        }
    }

    // �� ��° �Ǵ�: ���/����
    char third, fourth;
    printf("MBTI�� �� ��° �� �� ��° ���ڸ� �Է��ϼ��� (��: T/F, J/P): ");
    scanf(" %c %c", &third, &fourth);

    // �� ��° ����� 'T'(�����)���� 'F'(������)������ ���� ���
    if (third == 'T') {
        printf("�����̰� ���������� �Ǵ��ϴ� ������Դϴ�.\n");
        if (fourth == 'J') {
            printf("��ȹ���Դϴ�.\n");
        }
        else if (fourth == 'P') {
            printf("���뼺 �ֽ��ϴ�.\n");
        }
    }
    else if (third == 'F') {
        printf("�������̰� ��� �߽������� �Ǵ��ϴ� �������Դϴ�.\n");
        if (fourth == 'J') {
            printf("��ȹ���Դϴ�.\n");
        }
        else if (fourth == 'P') {
            printf("���뼺 �ֽ��ϴ�.\n");
        }
    }

    return 0;
}
