#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int n = 0, sum = 0;

	printf("���� �Է�(���� : ctrl + z) : \n");

	while (scanf("%d", &n) != EOF) {
		sum = sum + n;
	}
	printf("\n �հ� : %d \n", sum);
	return 0;
}

