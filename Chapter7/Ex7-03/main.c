#include<stdio.h>
void function1();
void function2();

int main() {

	function1();
	int a = 5, b = 7;
	function2(a, b);


	return;
}

void function2(int x, int y) {
	printf("매개변수 ㅇ 반환값  x\n");
	printf("두 개의 매개변수 : %d. %d\n", x, y);
}

void function1() {
	printf("매개변수도 없고 반환 값도 없는 함수");
	printf("매개변수 : 없음\n");
	printf("반환값 없음 : void\n");
}