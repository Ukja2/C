#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int throwDice();
int getUserGuess();
void playGuessinGame();

int throwDice() {
	return rand() % 6 + 1;
}

int getUserGuess() {
	int guess;
	printf("�ֻ����� ���� ���� ���ڸ� ����������(1���� 6����): ");
	scanf("%d", &guess);
	return guess;
}

void playGuessinGame() {
	int userGuess, diceResult;

	do {
		userGuess = getUserGuess();
		diceResult = throwDice();
		printf("�ֻ��� ���: %d\n", diceResult);
		if (userGuess == diceResult) {
			printf("�����մϴ�! ���ڸ� �������ϴ�. \n");

		}
		else {
			printf("�ƽ����ϴ�. �ٽ� �õ��ϼ��� \n");
		}
	} while (userGuess != 0);
}

int main() {

	srand(time(NULL));

	printf("�ֻ��� ���� ������ ������ �����մϴ�. \n");

	playGuessinGame();

	printf("���� ���� \n");

	return 0;
}