#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("���� ������ �Է��ϼ���: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("��ȿ���� ���� �Է��Դϴ�. 0 �̻��� ������ �Է��ؾ� �մϴ�.\n");
    }
    else {
        printf("%d��° �Ǻ���ġ ��: %d\n", n, fibonacci(n));
    }

    return 0;
}
