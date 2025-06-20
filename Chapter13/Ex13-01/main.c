#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

struct Student {                   // Student 구조체 정의
    char name[50];                 // 학생의 이름을 저장할 문자 배열
    int id;                        // 학생의 ID를 저장할 정수형 변수
    float gradePoints;            // 학생의 점수를 저장할 부동 소수점 변수
};

int main() {
    // 두 학생을 위한 구조체 변수 선언
    struct Student student1, student2;

    // 첫 번째 학생의 데이터 초기화
    strcpy(student1.name, "Moon");
    student1.id = 20240001;
    student1.gradePoints = 95.5;

    // 두 번째 학생의 데이터 초기화
    strcpy(student2.name, "Yun");
    student2.id = 20240002;
    student2.gradePoints = 88.5;

    // 첫 번째 학생의 데이터 출력
    printf("학생 1의 정보:\n");
    printf("이름: %s\n", student1.name);
    printf("ID: %d\n", student1.id);
    printf("점수: %.2f\n\n", student1.gradePoints);

    // 두 번째 학생의 데이터 출력
    printf("학생 2의 정보:\n");
    printf("이름: %s\n", student2.name);
    printf("ID: %d\n", student2.id);
    printf("점수: %.2f\n", student2.gradePoints);

    return 0;
}
