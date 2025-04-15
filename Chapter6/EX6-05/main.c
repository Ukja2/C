#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int score;
	char choice;

	//do {
	//	printf("성적을 입력하세요 (0 ~100): ");
	//	scanf("%d", &score);

	//	if (score >= 90) {
	//		printf("등급 A\n");
	//	} else if (score >= 80) {
	//		printf("등급 B\n");
	//	}
	//	else if (score >= 70) {
	//		printf("등급 C\n");
	//	}
	//	else if (score >= 60) {
	//		printf("등급 D\n");
	//	}
	//	else {
	//		printf("등급 F\n");

	//	}

	//	printf("다른 성적을 입력하시겠습니까? (Y/N): ");
	//	scanf(" %c", &choice);

	//} while(choice == 'Y' || choice == "y");

	while (1) {
		printf("성적을 입력하세요 (0 ~100): ");
		scanf("%d", &score);

		if (score >= 90) {
			printf("등급 A\n");
		}
		else if (score >= 80) {
			printf("등급 B\n");
		}
		else if (score >= 70) {
			printf("등급 C\n");
		}
		else if (score >= 60) {
			printf("등급 D\n");
		}
		else {
			printf("등급 F\n");

		}

		printf("다른 성적을 입력하시겠습니까? (Y/N): ");
		scanf(" %c", &choice);



		if (!(choice == 'Y' || choice == 'y')) {
			break;
		}
	}


	return 0;
}
