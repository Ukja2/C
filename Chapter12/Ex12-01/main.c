#include <stdio.h>

int main()
{
    int a;
    int* p;
    int** q;

    a = 100;
    p = &a;     // *p는 a와 같은 값인 100을 가짐
    q = &p;     // *q는 p와 같고, **q는 a와 같은 값을 가짐

    printf("a: %3d\n", a);
    printf("*p: %3d\n", *p);
    printf("**q: %3d\n", **q);

    return 0;
}
