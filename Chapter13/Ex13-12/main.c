#include <stdio.h>

// 신호등의 상태를 나타내는 열거형 정의
enum TrafficLight {
    Red,
    Yellow,
    Green
};

int main() {
    // 열거형 변수 선언
    enum TrafficLight signal;

    // 신호등의 상태를 Green으로 설정
    signal = Green;

    // 현재 신호등의 상태에 따른 동작 출력
    switch (signal) {
    case Red:
        printf("Stop\n");
        break;
    case Yellow:
        printf("Caution\n");
        break;
    case Green:
        printf("Go\n");
        break;
    default:
        printf("Unknown signal\n");
        break;
    }

    return 0;
}
