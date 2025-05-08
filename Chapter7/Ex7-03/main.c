#include<stdio.h>
void function1();
void function2();
void function3();
void function4(int x, int y){}

int main() {

	function1();
	int a = 5, b = 7;
	function2(a, b);

	function3();

	function4(a, b);
	return 0;
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

void function3() {
	printf("매개변수가 없고, 반환 값이 있는 함수 \n");
	printf("매개변수 : 없음 \n");
	printf("반환값 있음 : 42\n");
	

	return 42;
}

void function(x,y) {
	printf("두 개의 매개변수 : %d, %d \n", x, y);
	printf("반환값 있음: %d\n"), x + y);
}