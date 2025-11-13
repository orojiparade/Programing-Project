#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char id[100], pw[100];
	char file_id[100], file_pw[100];
	printf("아이디를 입력하세요 : ");
	scanf("%s", id);
	printf("비밀번호를 입력하세요 : ");
	scanf("%s", pw);



	printf("%s %s", id, pw);

	return 0;
}