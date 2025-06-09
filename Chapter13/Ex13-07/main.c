#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>   // malloc(), free() 함수를 사용하기 위한 헤더 선언

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person* people;   // 구조체 포인터 선언
    int i;

    // 5명의 Person 구조체에 대한 메모리 할당
    people = (struct Person*)malloc(5 * sizeof(struct Person));

    // 메모리 할당 실패 검사
    if (people == '\0') {
        printf("Memory allocation failed.\n");
        return 1;  // 비정상적 종료
    }

    // 각 Person 구조체에 대한 사용자 입력
    for (i = 0; i < 5; i++) {
        printf("Person %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", people[i].name);

        printf("Enter age: ");
        scanf("%d", &people[i].age);
    }

    // 입력받은 구조체 배열 데이터 출력
    printf("\nPeople List:\n");
    for (i = 0; i < 5; i++) {
        printf("Person %d: Name = %s, Age = %d\n", i + 1, people[i].name, people[i].age);
    }

    // 할당된 메모리 해제
    free(people);

    return 0;
}
