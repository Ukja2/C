#include<stdio.h>

int main() {

	int value = 125;
	int *ptr;

	ptr = &value; // ptr은 value의 주소를 가리킴
	// 네비에서 우리집의 개념 = (별 떼고 쓰는)ptr = 주소 저장

	printf("value의 값: %d\n", value);
	printf("value의 주소: %p\n", &value);
	printf("ptr이 가리키는 주소: %p\n", ptr);
	printf("*ptr이 가리키는 실제 값: %d\n", *ptr);

	return 0;
}