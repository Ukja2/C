#include<stdio.h>
#pragma warning(disable:4996)
#include<math.h>


int main() {

	double num, base, sqrt_val, pow_val, log_val;
	printf("�Ǽ� �Է�: ");
	scanf("%;lf", &num);

	sqrt_val = sqrt(num);
	pow_val = pow(num, 2);

	//log �Լ��� �ڿ��α� ��� (�Է°��� ������� ��)
	if (num <= 0) {
		printf("0 ������ ���� ���� �α׸� ����� �� �����ϴ�. \n");
	}
	else {
		log_val = log(num);
	}

	printf("������ of %.2lf = %lf\n", num, sqrt_val);
	printf("%.2lf���� = %lf\n", num, pow_val);

	if (num > 0) {
		printf("�ڿ��α� %.2lf = %;f\n", num, log_val);
	}

	return 0;
}