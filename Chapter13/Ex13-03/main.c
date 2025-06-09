#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Address {                             // Address ����ü ����
    char street[100];                        // �Ÿ� �̸� ����
    char city[50];                           // ���� �̸� ����
    char state[50];                          // �� �̸� ����
    int zipCode;                             // �����ȣ ����
};

struct Employee {                            // Employee ����ü ����
    char name[50];
    struct Address* address;                 // address�� Address ����ü�� ����Ű�� ������
};

int main() {
    // Employee ����ü�� Address ����ü �ν��Ͻ� ����
    struct Employee emp;
    struct Address addr;

    // ������ �ּ� ���� �Է� �� �ʱ�ȭ
    emp.address = &addr;                     // emp�� addr�� �����͸� ����
    //fgets() �Լ��� ���� ����ڷκ��� ������ �Է¹���
    printf("������ �̸��� �Է��ϼ���: ");
    fgets(emp.name, 50, stdin);

    printf("�Ÿ� �̸��� �Է��ϼ���: ");
    fgets(emp.address->street, 100, stdin);

    printf("���� �̸��� �Է��ϼ���: ");
    fgets(emp.address->city, 50, stdin);

    printf("�� �̸��� �Է��ϼ���: ");
    fgets(emp.address->state, 50, stdin);

    printf("�����ȣ�� �Է��ϼ���: ");
    scanf("%d", &emp.address->zipCode);

    printf("\n�Էµ� ���� ����:\n");
    printf("�̸�: %s", emp.name);
    printf("�ּ�: %s, %s, %s, %d\n",
        emp.address->street, emp.address->city,
        emp.address->state, emp.address->zipCode);

    return 0;
}
