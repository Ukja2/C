#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

struct Student {                   // Student ����ü ����
    char name[50];                 // �л��� �̸��� ������ ���� �迭
    int id;                        // �л��� ID�� ������ ������ ����
    float gradePoints;            // �л��� ������ ������ �ε� �Ҽ��� ����
};

int main() {
    // �� �л��� ���� ����ü ���� ����
    struct Student student1, student2;

    // ù ��° �л��� ������ �ʱ�ȭ
    strcpy(student1.name, "Moon");
    student1.id = 20240001;
    student1.gradePoints = 95.5;

    // �� ��° �л��� ������ �ʱ�ȭ
    strcpy(student2.name, "Yun");
    student2.id = 20240002;
    student2.gradePoints = 88.5;

    // ù ��° �л��� ������ ���
    printf("�л� 1�� ����:\n");
    printf("�̸�: %s\n", student1.name);
    printf("ID: %d\n", student1.id);
    printf("����: %.2f\n\n", student1.gradePoints);

    // �� ��° �л��� ������ ���
    printf("�л� 2�� ����:\n");
    printf("�̸�: %s\n", student2.name);
    printf("ID: %d\n", student2.id);
    printf("����: %.2f\n", student2.gradePoints);

    return 0;
}
