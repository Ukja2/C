//문제 1-2. 역피라미드 숫자 출력
//출력예시
//4444444
// 33333
//  222
//   1



#include<stdio.h>
#pragma warning(disable:4996)


int main() {

	int number = 0;
	int blank;
	int row_number;
	

	printf("정수 (1~9)를 입력하세요: ");
	scanf("%d", &number);

	for (int line = 1; line <= number; line++) {
		
		for (blank = 0; blank < line - 1 ; blank++) {
			printf(" ");
		}

		for (row_number = 1; row_number <= 2 * (number - line) + 1; row_number++) {
			printf("%d", number - line + 1);
		}

		printf("\n");

	}


	return 1;

	

}