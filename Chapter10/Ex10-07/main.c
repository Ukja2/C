#include <stdio.h>

void main()
{
    int m_int = 15;
    double m_double = 3.1477;
    char m_char = 'M';
    void* mp;

    mp = &m_int;
    printf("m_int = %d\n", *(int*)mp);      // void* �� int* ����ȯ �� ������

    mp = &m_double;
    printf("m_double = %.1lf\n", *(double*)mp);  // void* �� double* ��ȯ �� ���

    mp = &m_char;
    printf("m_char = %c\n", *(char*)mp);    // void* �� char* ��ȯ �� ���
}
