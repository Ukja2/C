#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    // ����ü �ν��Ͻ� ���� �� �ʱ�ȭ
    struct Person people = { "Moon", 25 };

    // ����ü ������ ���� �� �ʱ�ȭ
    struct Person* p;
    p = &people;

    // ����ü �����͸� ����Ͽ� ���� ���
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);

    return 0;
}
