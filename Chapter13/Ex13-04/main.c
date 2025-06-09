#include <stdio.h>

// 주소를 나타내는 구조체 정의
struct Address {
    char street[50];
    char city[50];
    int zipCode;
};

// 사람을 나타내는 구조체 정의
struct Person {
    char name[50];
    struct Address address;   // 구조체의 중첩
};

int main() {
    // Person 구조체의 인스턴스 생성
    struct Person person;

    // 데이터 할당
    strcpy(person.name, "Moon Seok Jae");
    strcpy(person.address.street, "Seoul City");
    strcpy(person.address.city, "Anytown");
    person.address.zipCode = 12345;

    // 데이터 출력
    printf("Name: %s\n", person.name);
    printf("Address: %s, %s, %d\n", person.address.street, person.address.city, person.address.zipCode);

    return 0;
}
