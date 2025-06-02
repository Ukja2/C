#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>  // strcpy() 함수 사용을 위한 헤더

int main()
{
    char str1[] = "c language!";                     // 문자열 리터럴로 초기화
    char str2[12] = { 'c',' ','l','a','n','g','u','a','g','e','!','\0' }; // 문자 배열 초기화
    char str3[12] = "c language!";                   // 배열 선언 및 문자열 리터럴 초기화
    char str4[12];                                   // 크기 12인 빈 문자 배열 선언

    strcpy(str4, "c language!");                     // str4에 문자열 복사

    printf("str1[] = %s \n", str1);
    printf("str2[12] = %s \n", str2);
    printf("str3[12] = %s \n", str3);
    printf("str4[12] = %s \n", str4);

    char str5[11] = "c language!";

 
    printf("str5[11] = ");
    for (int i = 0; i < 11; i++) {
        printf("%c", str5[i]);
    }
    
    return 0;
}
