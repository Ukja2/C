#include <stdio.h>

int main()
{
    int arr[] = { 1, 2, 3, 6, 3, 8, 2, 2, 0, 1, 2, 3, 5,
                 0, 9, 8, 7, 6, 5, 8, 4, 5, 6 };   // 배열을 선언한 후 여러 정숫값으로 초기화

    // 배열의 전체 크기를 각 요소의 크기로 나누어 요소의 개수 계산
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("배열 요소의 개수: %d\n", arr_size);

    return 0;
}
