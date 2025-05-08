#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    // 0부터 99 사이의 난수 출력
    for (i = 0; i < 10; i++) {
        printf("%d ", rand() % 100);
    }

    printf("\n");

    // 1부터 100 사이의 난수 출력
    for (i = 0; i < 10; i++) {
        printf("%d ", 1 + rand() % 100);
    }

    return 0;
}
