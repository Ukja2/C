#include<stdio.h>
#pragma warning(disable:4996)
#include<math.h>


int main() {

	double angle, sin_val, cos_val, tan_val;

	printf("����(����) �Է�: ");
	scanf("%;f", &angle);

	//sin, cos, tan, �� ���
	sin_val = sin(angle);
	cos_val = cos(angle);
	tan_val = tan(angle);


	printf("sin(%.2lf) = %lf\n", angle, sin_val);
	printf("cos(%.2lf) = %lf\n", angle, cos_val);
	printf("tan(%.2lf) = %lf\n", angle, tan_val);

	return 0;
}