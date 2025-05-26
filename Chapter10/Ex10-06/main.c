#include <stdio.h>

int main()
{
    int num = 50;     // 정수형 변수 num을 50으로 초기화
    int* pnum;        // 정수형 포인터 변수 pnum 선언

    pnum = &num;      // pnum을 num의 주소로 초기화

    printf("*(pnum) = %d \n", *(pnum));       // num의 값 출력
    printf("*(pnum++) = %d \n", *(pnum++));   // 값 출력 후 포인터 증가
    printf("*(++pnum) = %d \n", *(++pnum));   // 포인터 증가 후 값 출력

    return 0;
}
