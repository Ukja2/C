#include<stdio.h>
#pragma warning(disable:4996)

int main() {


	int number, count = 0, sum = 0;

	printf("\n �����Է�: ");
	scanf("%d", &number);
	printf("����� �Է��� �� : %d \n\n", number);

	while (number != 0)
	{
		count++;
		sum += number % 10;
		number /= 10;
	}

	printf("������ �� �ڸ��� ����: %d\n", count);
	printf("�Է��� ������ �հ�: %d\n", sum);

	return 0;
}
