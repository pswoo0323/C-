#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int year, month, day;

	while (1) {//영원히~while(1) 
		printf("날짜?");
		if (scanf("%4d%2d%2d", &year, &month, &day) == 3)
			break;

		printf("yyyymmdd 형식으로 입력하세요.\n");
		while (getchar() != '\n') {}
	}
	printf("입력된 날짜 : %4d-%02d-%02d\n", year, month, day);
}