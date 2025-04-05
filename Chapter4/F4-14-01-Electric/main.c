#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int bulbState;

    printf("전구의 현재 상태를 입력하세요 (-1 또는 1): ");
    scanf("%d", &bulbState);

    bulbState = ~bulbState + 1;

    printf("변경된 전구의 상태: %d\n", bulbState);

    return 0;
}
