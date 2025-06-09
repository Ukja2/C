#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 방사성 물질 구조체 정의
typedef struct {
    double initialAmount;     // 초기 물질량
    double decayConstant;     // 붕괴 상수
} RadioactiveMaterial;

// 방사성 물질의 붕괴 비율을 계산하는 함수
double calculateDecayRate(RadioactiveMaterial* material, double time) {
    double decayRate;
    decayRate = material->initialAmount * exp(-material->decayConstant * time);
    return decayRate;
}

int main() {
    // 동적으로 구조체 메모리 할당
    RadioactiveMaterial* material = (RadioactiveMaterial*)malloc(sizeof(RadioactiveMaterial));

    // 사용자로부터 초기 물질량과 붕괴 상수 입력받기
    printf("초기 물질량을 입력하세요: ");
    scanf("%lf", &material->initialAmount);
    printf("방사성 붕괴 상수를 입력하세요: ");
    scanf("%lf", &material->decayConstant);

    // 사용자로부터 시간 입력받기
    double time;
    printf("시간을 입력하세요: ");
    scanf("%lf", &time);

    // 붕괴 비율 계산
    double remainingAmount = calculateDecayRate(material, time);

    // 남은 물질량 백분율로 계산
    double decayPercentage = (remainingAmount / material->initialAmount) * 100;

    // 붕괴 비율 출력(소수점 아래 둘째 자리까지)
    printf("\n남아있는 비율: %.2f%%\n", decayPercentage);

    // 동적으로 할당된 메모리 해제
    free(material);

    return 0;
}
