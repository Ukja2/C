#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>


int isPrime(int num);

int isPrime(int num) {
	
	if (num <= 1) return 0;

	for (int i = 2; i <= sqrt(num); ++i) { //������
		if (num % i == 0) return 0;
	}

	return 1;
}

int main() {

	int num;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);

	if (isPrime(num)) {
		printf("%d�� �Ҽ��Դϴ�. \n", num);
	}
	else {
		printf("%d�� �Ҽ��� �ƴմϴ�. \n", num);
	}

	return 0;
}
