#include<stdio.h>

void modifyMainVar(int mainVar){
	int blockVar = 10;
	printf("��� �ȿ��� blockVar = %d\n", blockVar);

	mainVar = 20;
	printf("��� �ȿ��� ����� mainVar = %d\n", mainVar);
}
int main() {


	int mainVar = 5;
	printf("main �Լ��� �ʱ� mainVar = %d\n", mainVar);

	modifyMainVar(mainVar);
	printf("��� �ٱ����� mainVar = %d\n", mainVar);

	return 0;
}