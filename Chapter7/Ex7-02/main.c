#include <stdio.h>

// ����� ���� �Լ� ����
long factorial(int n);

long factorial(int n)
{
    long fac = 1;

    // n���� 1������ �������� �ݺ��Ͽ� ����
    for (int i = n; i >= 1; i--)
        fac = fac * i;

    return fac;
}

int main()
{
    int number = 5;
    long result = factorial(number);  // factorial �Լ� ȣ��

    printf("%d! = %ld\n", number, result);

    return 0;
}
