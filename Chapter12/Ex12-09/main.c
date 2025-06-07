#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;          // �迭�� ũ��
    int* arr;

    // ������ �迭�� ���� ���� �޸� �Ҵ�
    arr = (int*)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("�޸� �Ҵ� ����.\n");
        return 1;       // �޸� �Ҵ� ���� �� ���α׷� ����
    }

    // �迭 �ʱⰪ ��� (calloc�� �޸𸮸� 0���� �ʱ�ȭ)
    printf("calloc���� �޸� �Ҵ� �� �迭 ���: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // ����ڰ� ���ϴ� ������ �迭 ä���
    for (int i = 0; i < n; i++) {
        arr[i] = i * 2;
    }

    // �迭�� ���
    printf("�Ҵ� �� �迭 ���: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);  // �޸� ����

    return 0;
}
