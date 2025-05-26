#include <stdio.h>

void printValue(void* ptr, char type) {
    switch (type) {
    case 'i':
        printf("%d\n", *(int*)ptr);    // int형 포인터로 형변환 후 역참조
        break;
    case 'f':
        printf("%f\n", *(float*)ptr);  // float형 포인터로 형변환 후 역참조
        break;
    case 'c':
        printf("%c\n", *(char*)ptr);   // char형 포인터로 형변환 후 역참조
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


    printValue(pi, 'i');  // int 값을 출력
    printValue(pi, 'f');  // float 값을 출력
    printValue(pi, 'c');  // char 값을 출력

    return 0;
}
