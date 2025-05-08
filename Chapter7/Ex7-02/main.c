#include <stdio.h>

// 사용자 정의 함수 선언
long factorial(int n);

long factorial(int n)
{
    long fac = 1;

    // n부터 1까지를 역순으로 반복하여 곱함
    for (int i = n; i >= 1; i--)
        fac = fac * i;

    return fac;
}

int main()
{
    int number = 5;
    long result = factorial(number);  // factorial 함수 호출

    printf("%d! = %ld\n", number, result);

    return 0;
}
