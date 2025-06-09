#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    // 구조체 인스턴스 생성 및 초기화
    struct Person people = { "Moon", 25 };

    // 구조체 포인터 선언 및 초기화
    struct Person* p;
    p = &people;

    // 구조체 포인터를 사용하여 정보 출력
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);

    return 0;
}
