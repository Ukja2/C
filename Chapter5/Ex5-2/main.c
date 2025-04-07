#pragma warning(disable:4996)
#include<stdio.h>

int main() {

	int num;
	printf("정수를 입력하세요: ");
	scanf("%d", &num);

	if(num > 0)
		printf("%d는 양수입니다.\n", num);

	if (num < 0)
		printf("%d는 음수입니다.\n", num);

	if (num == 0)
		printf("0입니다.\n", num);

	return 0;


}