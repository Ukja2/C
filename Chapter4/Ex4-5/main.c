#include<stdio.h>

int main() {

	int a = 5, b = 5;
	int re1 = 0, re2 = 0;

	printf("�ʱ���� a: %d, b: %d\n", a, b);
	printf("�ʱ���� re1: %d, re2: %d\n", re1, re2);

	//a++;// ��������
	++a; //��������
	re1 = a;
	re2 = b++;

	printf("���� �� ��� a : %d, b : %d\n", a, b);
	printf("���� �� ��� re1 : %d, re2 : %d\n", re1, re2);

	return 0;
}
