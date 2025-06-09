#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

#define WIDTH 5      // 너비와 높이를 상수로 정의
#define HEIGHT 5

typedef struct {
    char pixels[HEIGHT][WIDTH];  // 5x5 크기의 작업판 하나의 변수를 다룰 수 있는 구조체 선언
} Grid;

// Grid 구조체를 초기화하는 함수
void initializeGrid(Grid* grid) {
    for (int i = 0; i < HEIGHT; ++i) {
        for (int j = 0; j < WIDTH; ++j) {
            grid->pixels[i][j] = '.';
        }
    }
}

// Grid 구조체에 저장된 픽셀 데이터를 화면에 출력하는 함수
void printGrid(Grid* grid) {
    for (int i = 0; i < HEIGHT; ++i) {
        for (int j = 0; j < WIDTH; ++j) {
            printf("%c ", grid->pixels[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// 사용자로부터 입력받은 픽셀 번호를 이용하여 격자에 *를 그리는 함수
void drawPixels(Grid* grid, int attempts) {
    int pixelNumber;
    int attempt;
    int temp = attempts;

    for (attempt = 1; attempt <= attempts; ++attempt) {
        printf("입력 %d회: 그릴 픽셀 번호를 입력 (1-%d, 0번 입력 시 종료): ", attempt, WIDTH * HEIGHT, temp);
        scanf("%d", &pixelNumber);

        if (pixelNumber == 0) {
            printf("그림 그리기 종료.\n");
            break;
        }

        // 입력이 범위를 벗어나면 오류 메시지 출력
        if (pixelNumber < 1 || pixelNumber > WIDTH * HEIGHT) {
            printf("잘못된 입력입니다. 1에서 %d 사이의 값을 입력하세요.\n", WIDTH * HEIGHT);
            --attempt;  // 잘못된 입력은 시도에서 제외
            continue;
        }

        // 픽셀 번호를 행과 열로 변환
        int row = (pixelNumber - 1) / WIDTH;
        int col = (pixelNumber - 1) % WIDTH;

        grid->pixels[row][col] = '*';   // 선택된 위치에 * 표시

        printGrid(grid);                // 현재 격자 출력
        temp--;                         // 남은 시도 감소
    }
}

int main() {
    Grid myGrid;                       // Grid 구조체 변수 myGrid 선언
    initializeGrid(&myGrid);          // initializeGrid() 함수를 호출하여 myGrid 초기화

    int totalAttempts;
    printf("총 입력 횟수를 입력하세요: ");
    scanf("%d", &totalAttempts);

    drawPixels(&myGrid, totalAttempts);

    return 0;
}
