#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // ù ��° ����/���� �Ǵ�
    char first, second;
    printf("MBTI�� ù ��° �� �� ��° ���ڸ� �Է��ϼ��� (��: E/I, S/N): ");
    scanf(" %c %c", &first, &second);

    // ù ��° ����� 'E'(������)���� 'I'(������)������ ���� ���
    if (first == 'E' || first == 'e') {
        printf("�������� ������ ������ �ֽ��ϴ�.\n");
        if (second == 'S' || second == 's') {
            printf("�������Դϴ�.\n");
        }
        else if (second == 'N' || second == 'n') {
            printf("â�����Դϴ�.\n");
        }
    }
    else if (first == 'I' || first == 'i') {
        printf("�������� ������ ������ �ֽ��ϴ�.\n");
        if (second == 'S' || second == 's') {
            printf("�������Դϴ�.\n");
        }
        else if (second == 'N' || second == 'n') {
            printf("â�����Դϴ�.\n");
        }
    }

    // �� ��° �Ǵ�: ���/����
    char third, fourth;
    printf("MBTI�� �� ��° �� �� ��° ���ڸ� �Է��ϼ��� (��: T/F, J/P): ");
    scanf(" %c %c", &third, &fourth);

    // �� ��° ����� 'T'(�����)���� 'F'(������)������ ���� ���
    if (third == 'T' || third == 't') {
        printf("�����̰� ���������� �Ǵ��ϴ� ������Դϴ�.\n");
        if (fourth == 'J' || fourth == 'j') {
            printf("��ȹ���Դϴ�.\n");
        }
        else if (fourth == 'P' || fourth == 'p') {
            printf("���뼺 �ֽ��ϴ�.\n");
        }
    }
    else if (third == 'F' || third == 'f') {
        printf("�������̰� ��� �߽������� �Ǵ��ϴ� �������Դϴ�.\n");
        if (fourth == 'J' || fourth == 'j') {
            printf("��ȹ���Դϴ�.\n");
        }
        else if (fourth == 'P' || fourth == 'p') {
            printf("���뼺 �ֽ��ϴ�.\n");
        }
    }

    return 0;
}
