#pragma warning(disable:4996)
#include <stdio.h>

struct Person {                      // name과 age를 필드로 가진 구조체 Person 선언
    char name[50];                  // 최대 49자의 문자열을 저장할 수 있는 배열
    int age;                        // 정수값 저장
};

int main() {
    struct Person people[5];        // Person 구조체 배열 선언
    int i;

    // 각 Person 구조체에 대한 사용자 입력
    for (i = 0; i < 5; i++) {
        printf("Person %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", people[i].name);

        printf("Enter age: ");
        scanf("%d", &people[i].age);
    }

    // 입력받은 구조체 배열 데이터 출력
    printf("\nPeople List:\n");
    for (i = 0; i < 5; i++) {
        printf("Person %d: Name = %s, Age = %d\n", i + 1, people[i].name, people[i].age);
    }

    return 0;
}
