#include<stdio.h>

int main() {
	int a = 15, b = 4;

	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	int quotient = a / b;

	printf("sum : %d\n", sum);
	printf("difference: %d\n", difference);
	printf("product : %d\n", product);
	printf("quotient : %d\n", quotient);


	float x = 5.5, y = 2.3;

	float floatSum = x + y;
	float floatDifference = x - y;
	float floatProduct = x * y;
	float floatQuotient = x / y;

	printf("floatSum : %f\n", floatSum);
	printf("floatDifference: %f\n", floatDifference);
	printf("floatProduct : %f\n", floatProduct);
	printf("floatQuotient : %f\n ", floatQuotient);

	return 0;

}
