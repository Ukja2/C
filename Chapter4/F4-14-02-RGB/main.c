#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int red, green, blue;

	printf("����(Red)�� �Է� (0~255): ");
	scanf("%d", &red);

	printf("�ʷ�(Green)�� �Է� (0~255): ");
	scanf("%d", &green);

	printf("�Ķ�(Blue)�� �Է� (0~255): ");
	scanf("%d", &blue);

	int colorCode = (red << 16) | (green << 8) | blue;
	printf("�Էµ� RGB ���� ���� ���� �ڵ� : #%06x\n", colorCode);


	return 0;
}
