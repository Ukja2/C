#pragma warning(disable:4996)
#include<stdio.h>
#include<ctype.h>

int main() {

	char ch;
	//printf("알파벳을 입력하세요: ");

	//scanf(" %c", &ch);

	//if (ch >= 'a' && ch <= 'z') {
	//	//ch = (ch - 'a' + 3) % 26 + 'a';
	//	ch = ch - 32; 대소문자변환
	//}
	//else {
	//	//ch = (ch - 'A' + 3) % 26 + 'A';
	//	ch = ch + 32; 대소문자 변환
	//}
	//printf("변경된 문자: %c\n", ch);

	

	while ((getchar()) != '\n'); // 이전 입력에서 남은 개행 문자 제거(필요시)
	
	printf("알파벳을 입력하세요: ");
	scanf(" %c", &ch);

	if (islower(ch)) {
		ch = (ch - 'a' + 3) % 26 + 'a';
	}
	else if (isupper(ch)) {
		ch = (ch - 'A' + 3) % 26 + 'A';
	}
	
	printf("변경된 문자: %c\n", ch);

	return 0;
}