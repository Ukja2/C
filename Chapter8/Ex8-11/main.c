#include <stdio.h>

extern int sharedVar;           // 외부 연결 변수 사용 선언
// 다른 소스 파일에서 정의된 변수에 접근하기 위한 외부 연결

void displaySharedVar(void);    // 외부 연결 함수 선언

int main()
{
    printf("내부 변수 sharedVar: %d\n", sharedVar);
    displaySharedVar();         // 외부에서 정의된 함수 호출
    return 0;
}
