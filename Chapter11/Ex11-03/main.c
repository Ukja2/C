#include<stdio.h>

int main() {

	char* pstr = "Tdoay is a good day"; //포인터 변수는 시작번지를 가리키고, 이후 문자에 접근하려면 + i 형태로 순차적 접근

	printf("%s\n", pstr);

	for (int i = 0; i < 20; i++) {
		printf("%c", *(pstr + i));
	}
	printf("\n");
	for (int i = 0; i < 20; i++) {
		printf("%c", pstr[i]);
		}
	printf("\n");


	int length = 0;
	while (pstr[length] != '\0') {
		length++;
	}

	printf("문자열의 길이: %d\n", length);

	return 0;
}