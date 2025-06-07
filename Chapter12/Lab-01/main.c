#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int numCandidates, totalVotes = 0, maxVotes = 0, maxIndex = 0;

    printf("후보자 수를 입력하세요: ");
    scanf("%d", &numCandidates);

    char** candidates = (char**)malloc(numCandidates * sizeof(char*));
    int* votes = (int*)malloc(numCandidates * sizeof(int));

    for (int i = 0; i < numCandidates; i++) {
        candidates[i] = (char*)malloc(50 * sizeof(char));
        printf("후보자 %d의 이름을 입력하세요: ", i + 1);
        scanf("%s", candidates[i]);

        printf("%s 후보자의 득표수를 입력하세요: ", candidates[i]);
        scanf("%d", &votes[i]);
        totalVotes += votes[i];

        if (votes[i] > maxVotes) {
            maxVotes = votes[i];
            maxIndex = i;
        }
    }

    printf("\n");
    for (int i = 0; i < numCandidates; i++) {
        float supportPercentage = (float)votes[i] / totalVotes * 100;
        printf("%s 후보: %.2f%%\n", candidates[i], supportPercentage);
    }

    printf("\n%s 후보가 총 %d표(지지율: %.2f%%)로 당선되었습니다.\n",
        candidates[maxIndex], maxVotes,
        (float)maxVotes / totalVotes * 100);

    for (int i = 0; i < numCandidates; i++) {
        free(candidates[i]);
    }
    free(candidates);
    free(votes);

    return 0;
}
