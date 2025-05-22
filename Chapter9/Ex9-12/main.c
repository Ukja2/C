#include <stdio.h>

int main()
{
    int table[4][4]; // 2차원 배열 선언
    int num = 1;

    // 배열에 값을 채워넣기 (1 ~ 16까지)
    for (int i = 0; i < 4; i++) {            // 행 반복
        for (int j = 0; j < 4; j++) {        // 열 반복
            table[i][j] = num;
            num++;
        }
    }

    // 배열 출력
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ", table[i][j]);     // 두 자리로 출력
        }
        printf("\n");                        // 줄 바꿈
    }

    return 0;
}
