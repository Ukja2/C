#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int a;      // 정수형 변수 a 선언
    int* p;     // 정수형 포인터 p 선언
    int** q;    // 정수형 이중 포인터 q 선언
    int*** r;   // 정수형 삼중 포인터 r 선언

    p = &a;     // p에 a의 주소 저장
    q = &p;     // q에 p의 주소 저장
    r = &q;     // r에 q의 주소 저장

    printf("숫자를 입력하세요: ");
    scanf("%d", &a);
    printf("입력한 숫자는: %d\n", a);

    printf("\n숫자를 입력하세요: ");
    scanf("%d", p);
    printf("입력한 숫자는: %d\n", a);

    printf("\n숫자를 입력하세요: ");
    scanf("%d", *q);
    printf("입력한 숫자는: %d\n", a);

    printf("\n숫자를 입력하세요: ");
    scanf("%d", **r);
    printf("입력한 숫자는: %d\n", a);

    return 0;
}
