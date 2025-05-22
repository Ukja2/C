#include <stdio.h>
#include <stdlib.h>  // rand() 사용을 위해 필요

#define FLOOR 3  // 층 수
#define ROW 4    // 행 수
#define COL 5    // 열 수

int main()
{
    int array[FLOOR][ROW][COL];  // 3차원 배열 선언
    int a, b, c;

    // 배열 초기화: 랜덤 숫자로 채움
    for (a = 0; a < FLOOR; a++) {
        for (b = 0; b < ROW; b++) {
            for (c = 0; c < COL; c++) {
                array[a][b][c] = rand();  // 임의의 정수 저장
            }
        }
    }

    // 배열 내용 출력
    for (a = 0; a < FLOOR; a++) {
        for (b = 0; b < ROW; b++) {
            for (c = 0; c < COL; c++) {
                printf("array[%d][%d][%d] = %d\n", a, b, c, array[a][b][c]);
            }
        }
    }

    return 0;
}
