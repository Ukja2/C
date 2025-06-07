#include <stdio.h>

int main()
{
    char* strings[3] = {      // 문자열 포인터 배열 선언 및 초기화
        "How are you?",
        "Hello World!",
        "C language Programming."
    };

    for (int i = 0; i < 3; i++) {     // 각 배열 요소를 순회하며 각 문자열을 출력
        printf("%s\n", strings[i]);
    }

    return 0;
}
