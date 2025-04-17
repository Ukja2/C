#include<stdio.h>
#pragma warning(disable:4996)


int main() {

	double credit;
	double annual_salary, interest_rate;
	int year, num_year;

	printf("초기 예금액을 입력하세요 : ");
	scanf("%lf", &credit);

	printf("연이율을 입력하세요 (퍼센트): ");
	scanf("%lf", &annual_salary);

	printf("저축 기간을 입력하세요 (년) : ");
	scanf("%d", &num_year);

	for (year = 1; year <= num_year; year++) {
		interest_rate = (credit * annual_salary/100);
		credit = credit + interest_rate;
		printf("%d년: 예금액 = %.2lf, 이자 = %.2lf\n ", year, credit, interest_rate );

	
	}

	
	return 0;

}