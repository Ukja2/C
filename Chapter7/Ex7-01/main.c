#include <stdio.h>

// 사용자 정의 함수 선언
double triangleArea(double base, double height);

// 함수 정의
double triangleArea(double base, double height)
{
    return (base * height) / 2.0;  // 함수의 반환값
}

int main()
{
    double base = 10.0, height = 5.0;
    double area = 0.0;

    // triangleArea() 함수를 호출하여 base와 height의 값을 전달하고,
    // 반환되는 삼각형의 넓이를 변수 area에 저장
    area = triangleArea(base, height);

    printf("삼각형의 밑변이 %.2lf, 높이가 %.2lf일 때\n", base, height);
    printf("삼각형의 넓이는 %.2lf입니다.\n", area);


    printf("삼각형의 넓이는 %.2lf\n",triangleArea(7.2, 55.5));
    return 0;
}
