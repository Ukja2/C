#include <stdio.h>

int array_list(int*, int);  // 함수 프로토타입 선언

int main(void)
{
    int scores[10] = { 95, 83, 75, 98, 65, 77, 90, 91 };
    int array_size, total;

    // 배열의 전체 크기 ÷ 배열 요소 하나의 크기 = 배열 요소 개수
    array_size = sizeof(scores) / sizeof(int);
    total = array_list(scores, array_size);  // 함수 호출

    printf("scores 배열 요소의 개수 : %d\n", array_size);
    printf("scores 점수합계 합계 : %d\n", total);

    return 0;
}

int array_list(int scores[], int size)
{
    int i, sum = 0;

    for (i = 0; i < size; i++)
        sum += scores[i];

    return sum;
}
