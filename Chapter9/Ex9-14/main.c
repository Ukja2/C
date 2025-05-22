#include <stdio.h>

int main()
{
    int i, j, array[3][4]; // 3행 4열짜리 2차원 배열 선언

    // 사용자로부터 값 입력받기
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("정수 입력: ");
            scanf("%d", &array[i][j]);
        }
    }

    // 입력받은 값 출력 (3x4 형태)
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
