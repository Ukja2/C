#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

struct Student {                   // Student ����ü ����
    char name[50];                 // �л��� �̸��� ������ ���� �迭
    int id;                        // �л��� ID
    float gradePoints;            // �л��� ����
};

int main() {
    // �� �л��� ���� ����ü ���� ����
    struct Student student1, student2;
    char uname[10];               // �л��� �̸��� �����ϱ� ���� ����

    printf("�л�1 �̸�: ");
    fgets(uname, sizeof(uname), stdin);
    rewind(stdin);
    strcpy(student1.name, uname);

    printf("�л�1 �й�: ");
    scanf("%d", &student1.id);
    printf("�л�1 ����: ");
    scanf("%f", &student1.gradePoints);
    rewind(stdin);
    printf("\n");

    printf("�л�2 �̸�: ");
    fgets(uname, sizeof(uname), stdin);
    rewind(stdin);
    strcpy(student2.name, uname);

    printf("�л�2 �й�: ");
    scanf("%d", &student2.id);
    printf("�л�2 ����: ");
    scanf("%f", &student2.gradePoints);

    // ù ��° �л��� ������ ���
    printf("\nù ��° �л��� ����:\n");
    printf("�̸�: %s\n", student1.name);
    printf("ID: %d\n", student1.id);
    printf("����: %.2f\n\n", student1.gradePoints);

    // �� ��° �л��� ������ ���
    printf("�� ��° �л��� ����:\n");
    printf("�̸�: %s\n", student2.name);
    printf("ID: %d\n", student2.id);
    printf("����: %.2f\n", student2.gradePoints);

    return 0;
}
