#pragma warning(disable:4996)
#include <stdio.h>

struct Person {                      // name�� age�� �ʵ�� ���� ����ü Person ����
    char name[50];                  // �ִ� 49���� ���ڿ��� ������ �� �ִ� �迭
    int age;                        // ������ ����
};

int main() {
    struct Person people[5];        // Person ����ü �迭 ����
    int i;

    // �� Person ����ü�� ���� ����� �Է�
    for (i = 0; i < 5; i++) {
        printf("Person %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", people[i].name);

        printf("Enter age: ");
        scanf("%d", &people[i].age);
    }

    // �Է¹��� ����ü �迭 ������ ���
    printf("\nPeople List:\n");
    for (i = 0; i < 5; i++) {
        printf("Person %d: Name = %s, Age = %d\n", i + 1, people[i].name, people[i].age);
    }

    return 0;
}
