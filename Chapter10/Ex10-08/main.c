#include <stdio.h>

void printValue(void* ptr, char type) {
    switch (type) {
    case 'i':
        printf("%d\n", *(int*)ptr);    // int�� �����ͷ� ����ȯ �� ������
        break;
    case 'f':
        printf("%f\n", *(float*)ptr);  // float�� �����ͷ� ����ȯ �� ������
        break;
    case 'c':
        printf("%c\n", *(char*)ptr);   // char�� �����ͷ� ����ȯ �� ������
        break;
    }
}

int main() {
    int i = 23;
    float f = 4.5;
    char c = 'z';
    void* p;

    int* pi = &i;
    int* pi = &f;
    int* pi = &c;


    printValue(pi, 'i');  // int ���� ���
    printValue(pi, 'f');  // float ���� ���
    printValue(pi, 'c');  // char ���� ���

    return 0;
}
