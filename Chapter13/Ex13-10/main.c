#include <stdio.h>

union UNDATA {
    short num;          // 2����Ʈ ũ���� ���� ����
    char chAry[2];      // 1����Ʈ ũ���� ���� 2�� ����
};

int main()
{
    union UNDATA ud;    // ����ü ud ����

    ud.num = 16706;     // short������ ����

    printf("Short: %hd\n", ud.num);
    printf("ch[0]: %c\n", ud.chAry[0]);
    printf("ch[1]: %c\n", ud.chAry[1]);

    return 0;
}
