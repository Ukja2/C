#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>  // strcpy() �Լ� ����� ���� ���

int main()
{
    char str1[] = "c language!";                     // ���ڿ� ���ͷ��� �ʱ�ȭ
    char str2[12] = { 'c',' ','l','a','n','g','u','a','g','e','!','\0' }; // ���� �迭 �ʱ�ȭ
    char str3[12] = "c language!";                   // �迭 ���� �� ���ڿ� ���ͷ� �ʱ�ȭ
    char str4[12];                                   // ũ�� 12�� �� ���� �迭 ����

    strcpy(str4, "c language!");                     // str4�� ���ڿ� ����

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
