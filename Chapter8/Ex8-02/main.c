#include<stdio.h>

void modifyMainVar(int mainVar){
	int blockVar = 10;
	printf("블록 안에서 blockVar = %d\n", blockVar);

	mainVar = 20;
	printf("블록 안에서 변경된 mainVar = %d\n", mainVar);
}
int main() {


	int mainVar = 5;
	printf("main 함수의 초기 mainVar = %d\n", mainVar);

	modifyMainVar(mainVar);
	printf("블록 바깥에서 mainVar = %d\n", mainVar);

	return 0;
}