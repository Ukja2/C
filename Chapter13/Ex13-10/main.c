#include <stdio.h>

union UNDATA {
    short num;          // 2바이트 크기의 정수 저장
    char chAry[2];      // 1바이트 크기의 문자 2개 저장
};

int main()
{
    union UNDATA ud;    // 공용체 ud 선언

    ud.num = 16706;     // short형으로 저장

    printf("Short: %hd\n", ud.num);
    printf("ch[0]: %c\n", ud.chAry[0]);
    printf("ch[1]: %c\n", ud.chAry[1]);

    return 0;
}
