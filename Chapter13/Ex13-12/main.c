#include <stdio.h>

// ��ȣ���� ���¸� ��Ÿ���� ������ ����
enum TrafficLight {
    Red,
    Yellow,
    Green
};

int main() {
    // ������ ���� ����
    enum TrafficLight signal;

    // ��ȣ���� ���¸� Green���� ����
    signal = Green;

    // ���� ��ȣ���� ���¿� ���� ���� ���
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
