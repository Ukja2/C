#include <stdio.h>

void main()
{
    int m_int = 15;
    double m_double = 3.1477;
    char m_char = 'M';
    void* mp;

    mp = &m_int;
    printf("m_int = %d\n", *(int*)mp);      // void* → int* 형변환 후 역참조

    mp = &m_double;
    printf("m_double = %.1lf\n", *(double*)mp);  // void* → double* 변환 후 출력

    mp = &m_char;
    printf("m_char = %c\n", *(char*)mp);    // void* → char* 변환 후 출력
}
