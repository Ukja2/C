#include <stdio.h>

// ����� ���� �Լ� ����
double triangleArea(double base, double height);

// �Լ� ����
double triangleArea(double base, double height)
{
    return (base * height) / 2.0;  // �Լ��� ��ȯ��
}

int main()
{
    double base = 10.0, height = 5.0;
    double area = 0.0;

    // triangleArea() �Լ��� ȣ���Ͽ� base�� height�� ���� �����ϰ�,
    // ��ȯ�Ǵ� �ﰢ���� ���̸� ���� area�� ����
    area = triangleArea(base, height);

    printf("�ﰢ���� �غ��� %.2lf, ���̰� %.2lf�� ��\n", base, height);
    printf("�ﰢ���� ���̴� %.2lf�Դϴ�.\n", area);

    return 0;
}
