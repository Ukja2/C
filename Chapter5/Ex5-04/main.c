#pragma warning(disable:4996)
#include<stdio.h>
#include<ctype.h>

int main() {

	char ch;
	//printf("���ĺ��� �Է��ϼ���: ");

	//scanf(" %c", &ch);

	//if (ch >= 'a' && ch <= 'z') {
	//	//ch = (ch - 'a' + 3) % 26 + 'a';
	//	ch = ch - 32; ��ҹ��ں�ȯ
	//}
	//else {
	//	//ch = (ch - 'A' + 3) % 26 + 'A';
	//	ch = ch + 32; ��ҹ��� ��ȯ
	//}
	//printf("����� ����: %c\n", ch);

	

	while ((getchar()) != '\n'); // ���� �Է¿��� ���� ���� ���� ����(�ʿ��)
	
	printf("���ĺ��� �Է��ϼ���: ");
	scanf(" %c", &ch);

	if (islower(ch)) {
		ch = (ch - 'a' + 3) % 26 + 'a';
	}
	else if (isupper(ch)) {
		ch = (ch - 'A' + 3) % 26 + 'A';
	}
	
	printf("����� ����: %c\n", ch);

	return 0;
}