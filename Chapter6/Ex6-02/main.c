#include<stdio.h>
#pragma warning(disable:4996)

int main() {


	int number, count = 0, sum = 0;

	printf("\n 정수입력: ");
	scanf("%d", &number);
	printf("당신이 입력한 수 : %d \n\n", number);

	while (number != 0)
	{
		count++;
		sum += number % 10;
		number /= 10;
	}

	printf("정수의 각 자릿수 개수: %d\n", count);
	printf("입력한 숫자의 합계: %d\n", sum);

	return 0;
}
