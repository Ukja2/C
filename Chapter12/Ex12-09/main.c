#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;          // 배열의 크기
    int* arr;

    // 정수형 배열에 대한 동적 메모리 할당
    arr = (int*)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("메모리 할당 실패.\n");
        return 1;       // 메모리 할당 실패 시 프로그램 종료
    }

    // 배열 초기값 출력 (calloc은 메모리를 0으로 초기화)
    printf("calloc으로 메모리 할당 후 배열 요소: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 사용자가 원하는 값으로 배열 채우기
    for (int i = 0; i < n; i++) {
        arr[i] = i * 2;
    }

    // 배열값 출력
    printf("할당 후 배열 요소: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);  // 메모리 해제

    return 0;
}
