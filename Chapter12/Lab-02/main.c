#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 비제네르 암호화 함수 정의
void vigenereEncrypt(const char* text, const char* key, char** result) {
    int textLength = strlen(text);
    int keyLength = strlen(key);
    *result = (char*)malloc((textLength + 1) * sizeof(char));

    for (int i = 0; i < textLength; i++) {
        char currentChar = text[i];
        if (currentChar >= 'A' && currentChar <= 'Z') {
            (*result)[i] = ((currentChar - 'A') + (key[i % keyLength] - 'A')) % 26 + 'A';
        }
        else if (currentChar >= 'a' && currentChar <= 'z') {
            (*result)[i] = ((currentChar - 'a') + (key[i % keyLength] - 'a')) % 26 + 'a';
        }
        else {
            (*result)[i] = currentChar;  // 영문자가 아니면 그대로 복사
        }
    }

    (*result)[textLength] = '\0';
}

int main() {
    char plainText[100];  // 평문 입력
    char key[50];         // 암호화 키
    char* encryptedText = NULL;

    printf("평문을 입력하세요: ");
    scanf("%99[^\n]", plainText);
    getchar();  // 개행 문자 처리

    printf("키를 입력하세요: ");
    scanf("%s", key);

    vigenereEncrypt(plainText, key, &encryptedText);

    printf("암호화: %s\n", encryptedText);

    free(encryptedText);
    return 0;
}
