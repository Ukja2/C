#pragma warning(disable:4996)
#include<stdio.h>


int main() {

	int currentState;

	printf("\n ���� ���� (0: ���� ����, 1: ���� ����, 2: ���� ����, 3: ���� ���ư���) : ");
	scanf("%d", &currentState);

	switch (currentState){
	case 0:
		printf("��� ��\n");
		printf("0. ���� ����\n");
		break; //�� case �ڵ��� ������ �������ϰ� switch ����� ��������
	
	case 1:
		printf("���� ���� ���� \n");
		printf("1. ���� ����\n");
		break;
	case 2:
		printf("���� ���� �� \n");
		printf("2. ���� ����\n");
		break;
	case 3:
		printf("���� ���� �� \n");
		printf("3. ���� ���ư���\n");
		break;

	default:
		printf("�� �� ���� ����\n");
		return 1; //�������� ���α׷� ���Ḧ �ǹ��� (������ �ൿ)

	}
	
	return 0;
}