#include <stdio.h>

int main()
{
    char* strings[3] = {      // ���ڿ� ������ �迭 ���� �� �ʱ�ȭ
        "How are you?",
        "Hello World!",
        "C language Programming."
    };

    for (int i = 0; i < 3; i++) {     // �� �迭 ��Ҹ� ��ȸ�ϸ� �� ���ڿ��� ���
        printf("%s\n", strings[i]);
    }

    return 0;
}
