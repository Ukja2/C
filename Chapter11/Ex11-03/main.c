#include<stdio.h>

int main() {

	char* pstr = "Tdoay is a good day"; //������ ������ ���۹����� ����Ű��, ���� ���ڿ� �����Ϸ��� + i ���·� ������ ����

	printf("%s\n", pstr);

	for (int i = 0; i < 20; i++) {
		printf("%c", *(pstr + i));
	}
	printf("\n");
	for (int i = 0; i < 20; i++) {
		printf("%c", pstr[i]);
		}
	printf("\n");


	int length = 0;
	while (pstr[length] != '\0') {
		length++;
	}

	printf("���ڿ��� ����: %d\n", length);

	return 0;
}