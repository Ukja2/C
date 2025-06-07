#include <stdio.h>

void increment(int* ptr) {
    (*ptr)++;  // 값을 1 증가시킴
}

void execute(void (*func)(int*), int* value) {
    func(value);  // 전달받은 함수 호출
}

int main() {
    int a = 10;

    // 함수 포인터 선언 및 초기화
    void (*func)(int*) = increment;

    // 함수 포인터 전달
    execute(func, &a);

    printf("a = %d\n", a);  // 출력: a = 11

    return 0;
}
