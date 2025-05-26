#include <stdio.h>

int main()
{
    char c = 'P';
    float f = 2.15f;
    double d = 2.15;

    char *pc = &c;
    float *pf = &f;   // float형 변수를 가리키는 포인터로 변경
    double *pd = &d;  // double형 변수를 가리키는 포인터로 변경

    // 포인터를 통해 각 변수의 값 출력
    printf("c의 값: %c\n", *pc);
    printf("f의 값: %f\n", *pf);
    printf("d의 값: %lf\n", *pd);

    // 각 변수의 메모리 주소 출력
    printf("c의 주소: %p\n", (void*)pc);
    printf("f의 주소: %p\n", (void*)pf);
    printf("d의 주소: %p\n", (void*)pd);

    return 0;
}
