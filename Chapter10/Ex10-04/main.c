#include <stdio.h>

int main() {
    int i = 10;
    double d = 3.4;
    int *pi;
    double *pd;

    printf("변수 pi에 할당된 바이트: %d(byte)\n", sizeof(pi));
    printf("변수 pd에 할당된 바이트: %d(byte)\n", sizeof(pd));

    return 0;
}
