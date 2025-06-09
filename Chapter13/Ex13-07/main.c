#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>   // malloc(), free() �Լ��� ����ϱ� ���� ��� ����

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person* people;   // ����ü ������ ����
    int i;

    // 5���� Person ����ü�� ���� �޸� �Ҵ�
    people = (struct Person*)malloc(5 * sizeof(struct Person));

    // �޸� �Ҵ� ���� �˻�
    if (people == '\0') {
        printf("Memory allocation failed.\n");
        return 1;  // �������� ����
    }

    // �� Person ����ü�� ���� ����� �Է�
    for (i = 0; i < 5; i++) {
        printf("Person %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", people[i].name);

        printf("Enter age: ");
        scanf("%d", &people[i].age);
    }

    // �Է¹��� ����ü �迭 ������ ���
    printf("\nPeople List:\n");
    for (i = 0; i < 5; i++) {
        printf("Person %d: Name = %s, Age = %d\n", i + 1, people[i].name, people[i].age);
    }

    // �Ҵ�� �޸� ����
    free(people);

    return 0;
}
