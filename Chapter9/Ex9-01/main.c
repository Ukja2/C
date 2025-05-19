#include <stdio.h>

int main()
{
    int scores[5];              // 정수형 배열 선언

    scores[0] = 95;
    scores[1] = 85;
    scores[2] = 100;
    scores[3] = 77;
    scores[4] = 65;

    // 반복문으로 배열 scores의 요소 순회
    for (int i = 0; i < 5; i++) {
        printf("%d번 요소: %d\n", i, scores[i]);   // i번째 요소에 접근하여 값 출력
    }

    return 0;
}
