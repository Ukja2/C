#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr;

    arr = (int*)malloc(5 * sizeof(int));  // arr[5]�� �Ҵ�
    arr[4] = 1234;

    arr = (int*)realloc(arr, 10 * sizeof(int));  // arr[10]���� ���Ҵ�
    arr[9] = 5678;

    // ���Ҵ�Ǵ��� ���� �޸� ���� ����
    printf("arr[4]=%d, arr[9]=%d\n", arr[4], arr[9]);

    free(arr);
    return 0;
}
