#pragma warning(disable:4996)
#include<stdio.h>


int main() {

	int currentState;

	printf("\n 현재 상태 (0: 동전 투입, 1: 음료 선택, 2: 음료 제공, 3: 대기로 돌아가기) : ");
	scanf("%d", &currentState);

	switch (currentState){
	case 0:
		printf("대기 중\n");
		printf("0. 동전 투입\n");
		break; //각 case 코드의 실행을 마무리하고 switch 블록을 빠져나옴
	
	case 1:
		printf("동전 투입 상태 \n");
		printf("1. 음료 선택\n");
		break;
	case 2:
		printf("음료 선택 중 \n");
		printf("2. 음료 제공\n");
		break;
	case 3:
		printf("음료 제공 중 \n");
		printf("3. 대기로 돌아가기\n");
		break;

	default:
		printf("알 수 없는 상태\n");
		return 1; //비정상적 프로그램 종료를 의미함 (관습적 행동)

	}
	
	return 0;
}