#include<stdio.h>

int main() {

	char str[6] = "hello";
	char* pstr;

	pstr = str;

	printf("str : %s\n", str);
	printf("*pstr : %c\n", *pstr);
	printf("pstr : %s\n", pstr);

	
	
	for (int i = 4; i >= 0; i--) {
		printf("%c", str[i]);  
	}


	for (int i = 4; i >= 0; i--) {
		printf("%c", *(pstr + i));  
	}

	return 0;



}