#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

#define WIDTH 5      // �ʺ�� ���̸� ����� ����
#define HEIGHT 5

typedef struct {
    char pixels[HEIGHT][WIDTH];  // 5x5 ũ���� �۾��� �ϳ��� ������ �ٷ� �� �ִ� ����ü ����
} Grid;

// Grid ����ü�� �ʱ�ȭ�ϴ� �Լ�
void initializeGrid(Grid* grid) {
    for (int i = 0; i < HEIGHT; ++i) {
        for (int j = 0; j < WIDTH; ++j) {
            grid->pixels[i][j] = '.';
        }
    }
}

// Grid ����ü�� ����� �ȼ� �����͸� ȭ�鿡 ����ϴ� �Լ�
void printGrid(Grid* grid) {
    for (int i = 0; i < HEIGHT; ++i) {
        for (int j = 0; j < WIDTH; ++j) {
            printf("%c ", grid->pixels[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// ����ڷκ��� �Է¹��� �ȼ� ��ȣ�� �̿��Ͽ� ���ڿ� *�� �׸��� �Լ�
void drawPixels(Grid* grid, int attempts) {
    int pixelNumber;
    int attempt;
    int temp = attempts;

    for (attempt = 1; attempt <= attempts; ++attempt) {
        printf("�Է� %dȸ: �׸� �ȼ� ��ȣ�� �Է� (1-%d, 0�� �Է� �� ����): ", attempt, WIDTH * HEIGHT, temp);
        scanf("%d", &pixelNumber);

        if (pixelNumber == 0) {
            printf("�׸� �׸��� ����.\n");
            break;
        }

        // �Է��� ������ ����� ���� �޽��� ���
        if (pixelNumber < 1 || pixelNumber > WIDTH * HEIGHT) {
            printf("�߸��� �Է��Դϴ�. 1���� %d ������ ���� �Է��ϼ���.\n", WIDTH * HEIGHT);
            --attempt;  // �߸��� �Է��� �õ����� ����
            continue;
        }

        // �ȼ� ��ȣ�� ��� ���� ��ȯ
        int row = (pixelNumber - 1) / WIDTH;
        int col = (pixelNumber - 1) % WIDTH;

        grid->pixels[row][col] = '*';   // ���õ� ��ġ�� * ǥ��

        printGrid(grid);                // ���� ���� ���
        temp--;                         // ���� �õ� ����
    }
}

int main() {
    Grid myGrid;                       // Grid ����ü ���� myGrid ����
    initializeGrid(&myGrid);          // initializeGrid() �Լ��� ȣ���Ͽ� myGrid �ʱ�ȭ

    int totalAttempts;
    printf("�� �Է� Ƚ���� �Է��ϼ���: ");
    scanf("%d", &totalAttempts);

    drawPixels(&myGrid, totalAttempts);

    return 0;
}
