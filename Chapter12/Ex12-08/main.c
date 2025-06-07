#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* ptr;
    int size;

    printf("메모리 크기 >> ");
    scanf("%d", &size);

    if ((ptr = (char*)malloc(size)) == NULL) {  // 메모리 할당
        printf("메모리 할당에 실패하였습니다.\n");
        exit(0);
    }

    rewind(stdin);
    printf("string >> ");
    gets(ptr);

    printf("%s\n", ptr);

    free(ptr);  // 메모리 해제

    return 0;
}
