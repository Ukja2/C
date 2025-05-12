#include<stdio.h>

int globalVar = 10;

void printValue() {
	printf("globalVal = %d\n", globalVar);
}

int main() {

	printValue();
	globalVar = 20;
	printValue();
	int globalVar = 50;
	printf("globalVar = %d\n", globalVar);

	return 0;
}