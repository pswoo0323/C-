#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char in_fname[128] = "";
	char out_fname[128] = "";
	FILE* fin = NULL;
	FILE* fout = NULL;
	char str[BUFSIZ];

	printf("파일 이름?");
	gets_s(in_fname, sizeof(in_fname));
	fin = fopen(in_fname, "r");
	if (fin == NULL) {
		printf("%s 파일 열기 실패\n", in_fname);
		return 1;
	}
	strcpy(out_fname, in_fname);
	strcat(out_fname, ".bak");
	fout = fopen(out_fname, "w");
	if (fout == NULL) {
		printf("%s파일 열기 실패\n", out_fname);
		fclose(fin);
		return 1;
	}
	while (fgets(str, sizeof(str), fin)!= NULL)
		fputs(str, fout);
	fclose(fin);
	fclose(fout);

	printf("파일 백업 성공 : %s로 백업했습니다.\n", out_fname);
}