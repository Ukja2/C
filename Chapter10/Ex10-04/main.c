#include <stdio.h>

int main() {
    int i = 10;
    double d = 3.4;
    int *pi;
    double *pd;

    printf("���� pi�� �Ҵ�� ����Ʈ: %d(byte)\n", sizeof(pi));
    printf("���� pd�� �Ҵ�� ����Ʈ: %d(byte)\n", sizeof(pd));

    return 0;
}
