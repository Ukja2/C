#include<stdio.h>

int main() {

	int mainVar = 5;
	printf("main �Լ��� �ʱ� MAINvAR = %d\n", mainVar);

	{
		int blockVar = 10;
		printf("��� �ȿ��� blockVar = %d\n", blockVar);

		mainVar = 20;
		printf("��� �ȿ��� ����� mainVar = %d\n", mainVar);


	}

	printf("��� �ٱ����� mainVar = %d\n", mainVar);

	return 0;
}