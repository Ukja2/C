#include<stdio.h>
void function1();
void function2();
void function3();
void function4(int x, int y){}

int main() {

	function1();
	int a = 5, b = 7;
	function2(a, b);

	function3();

	function4(a, b);
	return 0;
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

void function3() {
	printf("�Ű������� ����, ��ȯ ���� �ִ� �Լ� \n");
	printf("�Ű����� : ���� \n");
	printf("��ȯ�� ���� : 42\n");
	

	return 42;
}

void function(x,y) {
	printf("�� ���� �Ű����� : %d, %d \n", x, y);
	printf("��ȯ�� ����: %d\n"), x + y);
}