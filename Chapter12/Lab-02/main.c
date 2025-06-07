#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����׸� ��ȣȭ �Լ� ����
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
            (*result)[i] = currentChar;  // �����ڰ� �ƴϸ� �״�� ����
        }
    }

    (*result)[textLength] = '\0';
}

int main() {
    char plainText[100];  // �� �Է�
    char key[50];         // ��ȣȭ Ű
    char* encryptedText = NULL;

    printf("���� �Է��ϼ���: ");
    scanf("%99[^\n]", plainText);
    getchar();  // ���� ���� ó��

    printf("Ű�� �Է��ϼ���: ");
    scanf("%s", key);

    vigenereEncrypt(plainText, key, &encryptedText);

    printf("��ȣȭ: %s\n", encryptedText);

    free(encryptedText);
    return 0;
}
