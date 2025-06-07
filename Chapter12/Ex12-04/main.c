#include <stdio.h>

// 덧셈을 수행하는 함수
int add(int a, int b) {
    return a + b;
}

// 제곱을 계산하는 함수
int square(int x) {
    return x * x;
}

int main() {
    // 덧셈 함수 포인터
    int (*funcPtr)(int, int) = add;
    int sum = funcPtr(3, 5);  // add() 함수 호출, 매개변수로 3과 5를 전달
    printf("Sum: %d\n", sum);

    // 제곱 함수 포인터
    int (*squarePtr)(int) = square;
    int squared = squarePtr(4);  // square() 함수 호출, 매개변수로 4를 전달
    printf("Squared: %d\n", squared);

    return 0;
}
