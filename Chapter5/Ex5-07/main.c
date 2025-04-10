#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 첫 번째 내향/외향 판단
    char first, second;
    printf("MBTI의 첫 번째 및 두 번째 글자를 입력하세요 (예: E/I, S/N): ");
    scanf(" %c %c", &first, &second);

    // 첫 번째 결과가 'E'(외향적)인지 'I'(내향적)인지에 따라 출력
    if (first == 'E') {
        printf("외향적인 성격을 가지고 있습니다.\n");
        if (second == 'S') {
            printf("현실적입니다.\n");
        }
        else if (second == 'N') {
            printf("창의적입니다.\n");
        }
    }
    else if (first == 'I') {
        printf("내향적인 성격을 가지고 있습니다.\n");
        if (second == 'S') {
            printf("현실적입니다.\n");
        }
        else if (second == 'N') {
            printf("창의적입니다.\n");
        }
    }

    // 두 번째 판단: 사고/감정
    char third, fourth;
    printf("MBTI의 세 번째 및 네 번째 글자를 입력하세요 (예: T/F, J/P): ");
    scanf(" %c %c", &third, &fourth);

    // 두 번째 결과가 'T'(사고형)인지 'F'(감정형)인지에 따라 출력
    if (third == 'T') {
        printf("논리적이고 객관적으로 판단하는 사고형입니다.\n");
        if (fourth == 'J') {
            printf("계획적입니다.\n");
        }
        else if (fourth == 'P') {
            printf("융통성 있습니다.\n");
        }
    }
    else if (third == 'F') {
        printf("감정적이고 사람 중심적으로 판단하는 감정형입니다.\n");
        if (fourth == 'J') {
            printf("계획적입니다.\n");
        }
        else if (fourth == 'P') {
            printf("융통성 있습니다.\n");
        }
    }

    return 0;
}
