#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int n = 0, sum = 0;

	//printf("���� �Է�(���� : ctrl + z) : \n");

	//while (scanf("%d", &n) != EOF) {
	//	sum = sum + n;
	//}
	//printf("\n �հ� : %d \n", sum);


	printf("���� �Է�(����:0): ");
	
	//do {
	//	scanf("%d", &n);
	//	sum = sum + n;
	//	
	//} while (n != 0);



	while (1) {
		scanf("%d", &n);
		sum = sum + n;

		if (n == 0) {
			break;
		}

	}
		printf(" \n �հ� : %d\n", sum);


	return 0;
}

