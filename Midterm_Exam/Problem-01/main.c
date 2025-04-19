//문제 1: 숫자 피라미드 출력 프로그램
//사용자로부터 정수 n(1~9)을 입력받아 다음과 같은 숫자 피라미드를 출력하는 프로그램을 작성하세요.그 외의 숫자가 입력 되었을 경우 “1~9 사이의 숫자를 입력해주세요.”라는 문구를 띄우고, 오류코드를 반환하세요(return 1)
//입력이 5라면 :
//		  1
//	     222
//      33333
//     4444444
//    555555555
//    숫자는 행 번호를 의미하며, 각 행의 숫자 개수는 2 * 행번호 - 1개입니다.


#include<stdio.h>
#pragma warning(disable:4996)


int main() {

	int n = 0; // 입력받을 정수
	int blank; //공백
	int row_number; //행 숫자
	
	
	printf("정수를 입력하세요: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (blank = 1; blank <= n - i; blank++) {
			printf(" ");
		}

		for (row_number = 1; row_number <= i * 2 - 1; row_number++) {
			printf("%d", i);
		}

		printf("\n");
	}

	return 1;

}