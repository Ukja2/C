#include <stdio.h>

void swap(int, int);    // 함수 원형

int main()
{
    int a, b;
    a = 10;
    b = 20;

    printf("before swap() : a=%d, b=%d\n", a, b);   // 호출 전 a와 b의 값
    swap(a, b);   // a와 b의 값 전달
    printf("after swap() : a=%d, b=%d\n", a, b);    // 호출 후 a와 b의 값

    return 0;
}

void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("in swap() : a=%d, b=%d\n", a, b);
}
