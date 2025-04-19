//문제 3: 소수 판별 프로그램
//사용자로부터 정수 n을 입력받아 해당 숫자가 소수(prime number)인지 판별하는 프로그램을 작성하세요.결과는 "n은 소수입니다." 또는 "n은 소수가 아닙니다."로 출력해야 합니다.
//
//조건
//1.소수를 판별하는 방법은 입력받은 숫자를 “2부터 n - 1까지의 숫자로 나누어보기”
//2.양의 정수를 입력하지 않으면 “양의정수를 입력해주세요.”라고 띄우고 오류코드 반환할 것(return 1)
//3.1은 소수가 아님
//4.2는 소수임



#include<stdio.h>
#pragma warning(disable:4996)


int main() {

	int number = 0; //입력받을 정수
	int count = 0;

	printf("정수를 입력하세요:");
	scanf("%d", &number);

	if (number == 1) {
		printf("1은 소수가 아닙니다.");
	}
	else if (number == 2) {
		printf("2는 소수입니다.");
	}
	else {

		for (int i = 1; i <= number; i++) {
			if (number % i == 0) {
				count++;
			}
		}

	}

	if (count == 2) {
		printf("%d는(은) 소수입니다.", number);
	}
	else {
		printf("%d는(은) 소수가 아닙니다.", number);
	}

	return 0;
}
