#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c = 5;

    // == �����ڿ� > �����ڴ� && �����ں��� �켱������ ����.
    int result = a == c && b > a;
    printf("Result: %d\n", result); // ���: 1 (true)

    return 0;
}
