#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

struct Student {                   // Student 구조체 정의
    char name[50];                 // 학생의 이름을 저장할 문자 배열
    int id;                        // 학생의 ID
    float gradePoints;            // 학생의 점수
};

int main() {
    // 두 학생을 위한 구조체 변수 선언
    struct Student student1, student2;
    char uname[10];               // 학생의 이름을 저장하기 위한 변수

    printf("학생1 이름: ");
    fgets(uname, sizeof(uname), stdin);
    rewind(stdin);
    strcpy(student1.name, uname);

    printf("학생1 학번: ");
    scanf("%d", &student1.id);
    printf("학생1 학점: ");
    scanf("%f", &student1.gradePoints);
    rewind(stdin);
    printf("\n");

    printf("학생2 이름: ");
    fgets(uname, sizeof(uname), stdin);
    rewind(stdin);
    strcpy(student2.name, uname);

    printf("학생2 학번: ");
    scanf("%d", &student2.id);
    printf("학생2 학점: ");
    scanf("%f", &student2.gradePoints);

    // 첫 번째 학생의 데이터 출력
    printf("\n첫 번째 학생의 정보:\n");
    printf("이름: %s\n", student1.name);
    printf("ID: %d\n", student1.id);
    printf("점수: %.2f\n\n", student1.gradePoints);

    // 두 번째 학생의 데이터 출력
    printf("두 번째 학생의 정보:\n");
    printf("이름: %s\n", student2.name);
    printf("ID: %d\n", student2.id);
    printf("점수: %.2f\n", student2.gradePoints);

    return 0;
}
