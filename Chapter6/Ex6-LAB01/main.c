#include <stdio.h>
#pragma warning(disbale:4996)

int main() {

	int salary, monthlyExpense, targetAmount;
	int totalSavings = 0;
	int months = 0;

	printf("월급을 입력하세요( 만 원 단위로 입력하세요):");
	scanf("%d", &salary);

	printf("월간 지출을 입력하세요 (만 원 단위로 입력하세요) : ");
	scanf("%d", &monthlyExpense);

	printf("목표 금액을 입력하세요( 만 원 단위로 입력하세요):");
	scanf("%d", &targetAmount);

	while (totalSavings < targetAmount) {
		totalSavings += (salary - monthlyExpense);
		months++;
	}

	printf("\n 월급 %d만 원 \n", salary);
	printf("\n 월간 지출 %d만 원 \n", monthlyExpense);
	printf("\n 목표 금액 %d만 원 \n", targetAmount);
	printf("\n 목표 금액을 달성하는데  %d 개월이 걸립니다. \n", months);


	return 0;
}
