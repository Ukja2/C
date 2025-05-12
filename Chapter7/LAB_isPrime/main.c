#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>


int isPrime(int num);

int isPrime(int num) {
	
	if (num <= 1) return 0;

	for (int i = 2; i <= sqrt(num); ++i) { //제곱근
		if (num % i == 0) return 0;
	}

	return 1;
}

int main() {

	int num;

	printf("정수를 입력하세요: ");
	scanf("%d", &num);

	if (isPrime(num)) {
		printf("%d는 소수입니다. \n", num);
	}
	else {
		printf("%d는 소수가 아닙니다. \n", num);
	}

	return 0;
}
