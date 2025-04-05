#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int red, green, blue;

	printf("빨강(Red)값 입력 (0~255): ");
	scanf("%d", &red);

	printf("초록(Green)값 입력 (0~255): ");
	scanf("%d", &green);

	printf("파랑(Blue)값 입력 (0~255): ");
	scanf("%d", &blue);

	int colorCode = (red << 16) | (green << 8) | blue;
	printf("입력된 RGB 값에 대한 색상 코드 : #%06x\n", colorCode);


	return 0;
}
