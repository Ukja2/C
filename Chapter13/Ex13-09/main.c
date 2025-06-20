#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

// 구조체 포인터를 전달받는 함수
void printPerson(struct Person* p) {
    printf("Name: %s, Age: %d\n", p->name, p->age);
}

// 구조체 포인터를 전달받는 함수
void updateAge(struct Person* p) {
    strcpy(p->name, "Yun");
    p->age = 22;
}

int main() {
    struct Person p1 = { "Moon", 25 };

    printPerson(&p1);     
    updateAge(&p1);      
    printPerson(&p1);     

    return 0;
}
