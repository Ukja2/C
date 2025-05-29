#include<stdio.h>

int main() {

	int a[5] = { 2,4,6,8,22 };

	prinf("*a : 5d, a[0]: %d", *a, a[0]);

	prinf("*a : 5d, a[0]: %d", *(a+1), a[1]);

	prinf("*a : 5d, a[0]: %d", *a + 1, a[1]);

	return 0;
}