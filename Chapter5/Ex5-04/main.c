#pragma warning(disable:4996)
#include<stdio.h>

int main() {

	char ch;
	printf("���ĺ��� �Է��ϼ���: ");

	scanf(" %c", &ch);

	if (ch >= 'a' && ch <= 'z') {
		ch = (ch - 'a' + 3) % 26 + 'a';
	}
	else {
		ch = (ch - 'A' + 3) % 26 + 'A';
	}

	printf("����� ����: %c\n", ch);
	
	return 0;
}