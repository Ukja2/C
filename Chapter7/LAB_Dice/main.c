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
	printf("주사위를 던져 나올 숫자를 맞혀보세요(1에서 6까지): ");
	scanf("%d", &guess);
	return guess;
}

void playGuessinGame() {
	int userGuess, diceResult;

	do {
		userGuess = getUserGuess();
		diceResult = throwDice();
		printf("주사위 결과: %d\n", diceResult);
		if (userGuess == diceResult) {
			printf("축하합니다! 숫자를 맞혔습니다. \n");

		}
		else {
			printf("아쉽습니다. 다시 시도하세요 \n");
		}
	} while (userGuess != 0);
}

int main() {

	srand(time(NULL));

	printf("주사위 숫자 맞히기 게임을 시작합니다. \n");

	playGuessinGame();

	printf("게임 종료 \n");

	return 0;
}