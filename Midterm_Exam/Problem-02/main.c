//문제 2: 자판기 시뮬레이션 프로그램
//다음 메뉴를 가진 자판기 프로그램을 작성하세요 :
//*조건 : while 구문으로 무한루프, 자판기 선택은 switch (case와 default를 사용할 것)로 만들 것
//1.콜라(1, 000원)
//2.사이다(900원)
//3.커피(1, 200원)
//4.생수(500원)
//5.종료
//사용자에게 초기 금액을 입력받고, 메뉴 선택을 통해 음료를 구매할 수 있도록 하세요.
//1)구매 후 “ㅇㅇ을 구매했습니다.남은 잔액 ㅇㅇ원”을 띄울 것
//2)잔액이 부족하면 구매할 수 없음 “잔액이 부족합니다.필요금액 ㅇㅇ원, 현재 ㅇㅇ원” 띄울 것
//3)사용자가 5를 입력하면 프로그램이 종료되고 잔액을 반환 “자판기를 종료합니다 잔액 ㅇㅇ원을 반환합니다.”를 띄울 것
//4)번호를 잘못 선택하면 “잘못된 선택입니다.1~5사이의 번호를 선택해주세요.”라고 띄울 것


#include<stdio.h>
#pragma warning(disable:4996)


int main() {

	int coke = 1000;
	int cider = 900;
	int coffee = 1200;
	int water = 500;

	int balance = 0; //투입한 금액이자 합계



	printf("금액을 입력하세요: ");
	scanf("%d", &balance);

	while (1) {
		
		int currentState = 0;

		printf("구매할 음료를 선택하세요 1.콜라 2.사이다 3.커피 4.생수 5.종료: ");
		scanf("%d", &currentState);

		switch (currentState)
		{
		case 1:

			if (coke > balance) {
				printf("잔액이 부족합니다. 필요금액 %d원 현재 %d원\n", coke, balance);
			} else{
				balance -= coke;
				printf("콜라를 구매했습니다. 남은 잔액 %d원\n", balance);
			}
			break;
			
		case 2:

			if (cider > balance) {
				printf("잔액이 부족합니다. 필요금액 %d원 현재 %d원\n", cider, balance);
			}
			else {
				balance -= cider;
				printf("사이다를 구매했습니다. 남은 잔액 %d원\n", balance);
			}
			break;

		case 3:

			if (coffee > balance) {
				printf("잔액이 부족합니다. 필요금액 %d원 현재 %d원\n", coffee, balance);
			}
			else {
				balance -= coffee;
				printf("커피를 구매했습니다. 남은 잔액 %d원\n", balance);
			}
			break;

		case 4:

			if (water > balance) {
				printf("잔액이 부족합니다. 필요금액 %d원 현재 %d원\n", water, balance);
			}
			else {
				balance -= water;
				printf("생수를 구매했습니다. 남은 잔액 %d원\n", balance);
			}
			break;
		case 5:
			printf("자판기를 종료합니다. 잔액 %d원을 반환합니다.\n", balance);
			return 0;

		default:
			printf("잘못된 선택입니다. 1~5사이의 번호를 선택해주세요.\n");
			break;
		}
	}


}
