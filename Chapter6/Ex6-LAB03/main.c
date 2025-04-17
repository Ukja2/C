#include <stdio.h>
#include <math.h>

int main() {
    int limit, num, sum, temp, n, digit;

    printf("최대 범위를 입력하세요: ");
    scanf("%d", &limit);

    printf("최대 범위 내의 암스트롱 수를 찾습니다.\n");
    for (num = 1; num <= limit; num++) {
        sum = 0;
        temp = num;
        n = log10(num) + 1;

        while (temp > 0) {
            digit = temp % 10;
            sum += pow(digit, 3);
            temp /= 10;
        }

        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
