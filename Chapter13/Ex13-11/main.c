#include <stdio.h>

// 공용체 정의
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    // 정수 데이터 저장 및 출력
    data.i = 10;
    printf("data.i : %d\n", data.i);

    // 실수 데이터 저장 및 출력
    data.f = 220.5;
    printf("data.f : %f\n", data.f);

    // 문자열 데이터 저장 및 출력
    strcpy(data.str, "C Programming");
    printf("data.str : %s\n", data.str);

    return 0;
}
