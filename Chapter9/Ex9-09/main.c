#include <stdio.h>

// 배열의 최댓값을 반환하는 함수
int findMax(int numbers[], int size) {
    int max = numbers[0]; // 변수 max의 numbers[0] 값 초기화

    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i]; // 최댓값 max 변경
        }
    }

    return max; // 최댓값 반환
}

int main() {
    int numbers[10] = { 10, 52, 23, 74, 15, 67, 38, 29, 40, 51 };

    // 최댓값을 찾는 함수 호출
    int max_value = findMax(numbers, 10); // 배열의 모든 요소를 한 번에 전달

    printf("배열의 최댓값은 %d입니다.\n", max_value);

    return 0;
}
