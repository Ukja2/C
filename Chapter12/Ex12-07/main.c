#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    // argc는 전달된 인자의 수를 확인
    // argv는 인자의 배열을 가리킴
    if (argc != 3) {
        printf("Usage: %s <number1> <number2>\n", argv[0]);
        return 1;
    }

    int num1 = atoi(argv[1]);  // 첫 번째 인자를 정수로 변환
    int num2 = atoi(argv[2]);  // 두 번째 인자를 정수로 변환

    printf("Sum: %d\n", num1 + num2);  // 두 수의 합을 출력

    return 0;
}
