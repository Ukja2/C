#include<stdio.h>
void function1();
void function2();

int main() {

	function1();
	int a = 5, b = 7;
	function2(a, b);


	return;
}

void function2(int x, int y) {
	printf("�Ű����� �� ��ȯ��  x\n");
	printf("�� ���� �Ű����� : %d. %d\n", x, y);
}

void function1() {
	printf("�Ű������� ���� ��ȯ ���� ���� �Լ�");
	printf("�Ű����� : ����\n");
	printf("��ȯ�� ���� : void\n");
}