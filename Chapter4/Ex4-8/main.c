#include<stdio.h>

int main() {

	int a = 52, b = 31, c = 15;
	int res1, res2, res3;

	res1 = a < b && b < c;
	printf("a�� b���� �۰�, b�� c���� �۽��ϴ�. \n");
	printf("a < b && b < c - > %d\n", res1);

	res2 = a < b || a > c;
	printf("a�� b���� �۰ų�, a�� c���� Ů�ϴ�. \n");
	printf("a < b || a > c - > %d\n", res2);

	res3 = !(a < b);
	printf("a�� b���� �۽��ϴ�. \n");
	printf("!(a < b) - > %d\n", res3);

	return 0;
}