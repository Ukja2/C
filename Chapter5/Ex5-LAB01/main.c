#pragma warning(disable:4996)
#include<stdio.h>	

int main() {

	int year;

	printf("������ �Է��ϼ���: ");
	scanf(" %d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		printf("%d���� �����Դϴ�.\n", year);
	}
	else {
		printf("%d���� ����Դϴ�.\n", year);
	}

	return 0;

}