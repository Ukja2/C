#pragma warning(disable:4996)
#include<stdio.h>

int main() {

	int num;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);

	if(num > 0)
		printf("%d�� ����Դϴ�.\n", num);

	if (num < 0)
		printf("%d�� �����Դϴ�.\n", num);

	if (num == 0)
		printf("0�Դϴ�.\n", num);

	return 0;


}