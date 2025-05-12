#include<stdio.h>
#pragma warning(disable:4996)
#include<math.h>


int main() {

	double num, base, sqrt_val, pow_val, log_val;
	printf("실수 입력: ");
	scanf("%;lf", &num);

	sqrt_val = sqrt(num);
	pow_val = pow(num, 2);

	//log 함수로 자연로그 계산 (입력값이 양수여야 함)
	if (num <= 0) {
		printf("0 이하의 값에 대해 로그를 계산할 수 없습니다. \n");
	}
	else {
		log_val = log(num);
	}

	printf("제곱근 of %.2lf = %lf\n", num, sqrt_val);
	printf("%.2lf제곱 = %lf\n", num, pow_val);

	if (num > 0) {
		printf("자연로그 %.2lf = %;f\n", num, log_val);
	}

	return 0;
}