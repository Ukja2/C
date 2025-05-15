#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("양의 정수를 입력하세요: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("유효하지 않은 입력입니다. 0 이상의 정수를 입력해야 합니다.\n");
    }
    else {
        printf("%d번째 피보나치 수: %d\n", n, fibonacci(n));
    }

    return 0;
}
