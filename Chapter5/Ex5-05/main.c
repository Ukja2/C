#pragma warning(disable:4996)
#include<stdio.h>

int main() {

	int outcome;
	char grades;

	printf("��� ������ �Է��ϼ���(0~100): ");
	scanf("%d", &outcome);

	if (outcome >= 90) {
		grades = 'A';
	}
	else if (outcome >= 80) {
		grades = 'B';
	}
	else if (outcome >= 70) {
		grades = 'C';
	}
	else if (outcome >= 60) {
		grades = 'D';
	}
	else {
		grades = 'F';

	} 
	
	printf("������ : %c. \n", grades);




	return 0;
}