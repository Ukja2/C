#include <stdio.h>

// 함수 선언
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    // 함수 포인터 배열 선언 및 초기화
    int (*operations[3])(int, int) = { add, subtract, multiply };

    // 각 함수 호출
    int sum = operations[0](10, 5);        // add() 함수 호출
    int difference = operations[1](10, 5); // subtract() 함수 호출
    int product = operations[2](10, 5);    // multiply() 함수 호출

    // 결과 출력
    printf("덧셈: %d\n", sum);
    printf("뺄셈: %d\n", difference);
    printf("곱셈: %d\n", product);

    return 0;
}
