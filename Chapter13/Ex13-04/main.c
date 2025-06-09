#include <stdio.h>

// �ּҸ� ��Ÿ���� ����ü ����
struct Address {
    char street[50];
    char city[50];
    int zipCode;
};

// ����� ��Ÿ���� ����ü ����
struct Person {
    char name[50];
    struct Address address;   // ����ü�� ��ø
};

int main() {
    // Person ����ü�� �ν��Ͻ� ����
    struct Person person;

    // ������ �Ҵ�
    strcpy(person.name, "Moon Seok Jae");
    strcpy(person.address.street, "Seoul City");
    strcpy(person.address.city, "Anytown");
    person.address.zipCode = 12345;

    // ������ ���
    printf("Name: %s\n", person.name);
    printf("Address: %s, %s, %d\n", person.address.street, person.address.city, person.address.zipCode);

    return 0;
}
