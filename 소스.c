#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int year, month, day;

	while (1) {//������~while(1) 
		printf("��¥?");
		if (scanf("%4d%2d%2d", &year, &month, &day) == 3)
			break;

		printf("yyyymmdd �������� �Է��ϼ���.\n");
		while (getchar() != '\n') {}
	}
	printf("�Էµ� ��¥ : %4d-%02d-%02d\n", year, month, day);
}