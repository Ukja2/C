#include<stdio.h>

int main() {

	int value = 125;
	int *ptr;

	ptr = &value; // ptr�� value�� �ּҸ� ����Ŵ
	// �׺񿡼� �츮���� ���� = (�� ���� ����)ptr = �ּ� ����

	printf("value�� ��: %d\n", value);
	printf("value�� �ּ�: %p\n", &value);
	printf("ptr�� ����Ű�� �ּ�: %p\n", ptr);
	printf("*ptr�� ����Ű�� ���� ��: %d\n", *ptr);

	return 0;
}