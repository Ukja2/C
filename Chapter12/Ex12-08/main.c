#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* ptr;
    int size;

    printf("�޸� ũ�� >> ");
    scanf("%d", &size);

    if ((ptr = (char*)malloc(size)) == NULL) {  // �޸� �Ҵ�
        printf("�޸� �Ҵ翡 �����Ͽ����ϴ�.\n");
        exit(0);
    }

    rewind(stdin);
    printf("string >> ");
    gets(ptr);

    printf("%s\n", ptr);

    free(ptr);  // �޸� ����

    return 0;
}
