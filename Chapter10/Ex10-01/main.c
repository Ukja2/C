#include<stdio.h>

int main() {

	char x = 'h';
	int y = 100;
	float z = 2.5f;

	printf("x�� �޸� �ּ� : %p\n", &x);
	printf("y�� �޸� �ּ� : %p\n", &y);
	printf("z�� �޸� �ּ� : %p\n", &z);

	return 0;
}