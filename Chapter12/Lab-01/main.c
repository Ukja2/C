#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int numCandidates, totalVotes = 0, maxVotes = 0, maxIndex = 0;

    printf("�ĺ��� ���� �Է��ϼ���: ");
    scanf("%d", &numCandidates);

    char** candidates = (char**)malloc(numCandidates * sizeof(char*));
    int* votes = (int*)malloc(numCandidates * sizeof(int));

    for (int i = 0; i < numCandidates; i++) {
        candidates[i] = (char*)malloc(50 * sizeof(char));
        printf("�ĺ��� %d�� �̸��� �Է��ϼ���: ", i + 1);
        scanf("%s", candidates[i]);

        printf("%s �ĺ����� ��ǥ���� �Է��ϼ���: ", candidates[i]);
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
        printf("%s �ĺ�: %.2f%%\n", candidates[i], supportPercentage);
    }

    printf("\n%s �ĺ��� �� %dǥ(������: %.2f%%)�� �缱�Ǿ����ϴ�.\n",
        candidates[maxIndex], maxVotes,
        (float)maxVotes / totalVotes * 100);

    for (int i = 0; i < numCandidates; i++) {
        free(candidates[i]);
    }
    free(candidates);
    free(votes);

    return 0;
}
