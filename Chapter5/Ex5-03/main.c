#pragma warning(disable:4996)
#include<stdio.h>

int main() {
	
	int ku;
	char cd = 'A';

	printf("���� ���� �Է�: ");
	scanf("%d", &ku);

	if (ku != 100) {
		cd++;
		printf("cd : %c", cd);

	} 
	else
	{
		printf("cd: %c", cd);
	}

	return 0;
}
