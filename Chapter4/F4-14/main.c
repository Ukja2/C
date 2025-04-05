#include <stdio.h>

int main() {
    int x = 10;          // 정수 변수
    int* p;               // 정수 포인터 선언

    p = &x;              // 변수 x의 메모리 주소를 반환한 후 p에 대입

    printf("x의 값: %d\n", x);
    printf("x의 주소: %p\n", &x);
    printf("p가 가리키는 주소: %p\n", p);
    printf("p가 가리키는 값 (참조): %d\n", *p);

    // p를 통해 x의 값을 변경
    *p = 20;              // 포인터 p가 가리키는 메모리 위치의 값 반환

    printf("변경된 x의 값: %d\n", x);

    return 0;
}
