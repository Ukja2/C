#include<stdio.h>

int main() {

	int maxV, minV;
	int a = 900, b = 800;

	maxV = (a > b) ? a : b; //a�� b���� ũ�� maxV�� a ���� ����, �׷��� ������ b ���� ����
	minV = (a < b) ? a : b; //a�� b���� ũ�� maxV�� a ���� ����, �׷��� ������ b ���� ����

	printf("900�� 800 �߿� �� ū �� : %d\n", maxV);
	printf("900�� 800 �߿� �� ���� �� : %d\n", minV);

	return 0;
}