#include <stdio.h>
#pragma warning(disbale:4996)

int main() {

	int salary, monthlyExpense, targetAmount;
	int totalSavings = 0;
	int months = 0;

	printf("������ �Է��ϼ���( �� �� ������ �Է��ϼ���):");
	scanf("%d", &salary);

	printf("���� ������ �Է��ϼ��� (�� �� ������ �Է��ϼ���) : ");
	scanf("%d", &monthlyExpense);

	printf("��ǥ �ݾ��� �Է��ϼ���( �� �� ������ �Է��ϼ���):");
	scanf("%d", &targetAmount);

	while (totalSavings < targetAmount) {
		totalSavings += (salary - monthlyExpense);
		months++;
	}

	printf("\n ���� %d�� �� \n", salary);
	printf("\n ���� ���� %d�� �� \n", monthlyExpense);
	printf("\n ��ǥ �ݾ� %d�� �� \n", targetAmount);
	printf("\n ��ǥ �ݾ��� �޼��ϴµ�  %d ������ �ɸ��ϴ�. \n", months);


	return 0;
}
