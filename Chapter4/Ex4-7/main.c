#include<stdio.h>

int main() {

	int a = 5;
	int b = 3;
	int result;

	result = a * b + (++a);
	printf("��� = %d\n", result);

	int c = 6;
	int d = 4;

	result = c * d + (c--);


	printf("��� = %d\n", result);


	return 0;


}