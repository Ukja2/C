#include<stdio.h>
#pragma warning(disable:4996)


int main() {

	double credit;
	double annual_salary, interest_rate;
	int year, num_year;

	printf("�ʱ� ���ݾ��� �Է��ϼ��� : ");
	scanf("%lf", &credit);

	printf("�������� �Է��ϼ��� (�ۼ�Ʈ): ");
	scanf("%lf", &annual_salary);

	printf("���� �Ⱓ�� �Է��ϼ��� (��) : ");
	scanf("%d", &num_year);

	for (year = 1; year <= num_year; year++) {
		interest_rate = (credit * annual_salary/100);
		credit = credit + interest_rate;
		printf("%d��: ���ݾ� = %.2lf, ���� = %.2lf\n ", year, credit, interest_rate );

	
	}

	
	return 0;

}