#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int score;
	char choice;

	//do {
	//	printf("������ �Է��ϼ��� (0 ~100): ");
	//	scanf("%d", &score);

	//	if (score >= 90) {
	//		printf("��� A\n");
	//	} else if (score >= 80) {
	//		printf("��� B\n");
	//	}
	//	else if (score >= 70) {
	//		printf("��� C\n");
	//	}
	//	else if (score >= 60) {
	//		printf("��� D\n");
	//	}
	//	else {
	//		printf("��� F\n");

	//	}

	//	printf("�ٸ� ������ �Է��Ͻðڽ��ϱ�? (Y/N): ");
	//	scanf(" %c", &choice);

	//} while(choice == 'Y' || choice == "y");

	while (1) {
		printf("������ �Է��ϼ��� (0 ~100): ");
		scanf("%d", &score);

		if (score >= 90) {
			printf("��� A\n");
		}
		else if (score >= 80) {
			printf("��� B\n");
		}
		else if (score >= 70) {
			printf("��� C\n");
		}
		else if (score >= 60) {
			printf("��� D\n");
		}
		else {
			printf("��� F\n");

		}

		printf("�ٸ� ������ �Է��Ͻðڽ��ϱ�? (Y/N): ");
		scanf(" %c", &choice);



		if (!(choice == 'Y' || choice == 'y')) {
			break;
		}
	}


	return 0;
}
