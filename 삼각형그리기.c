#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int starlex(int i);

int main()
{
    int i;

    printf("�ﰢ�� ũ�⸦ �Է��ϼ���.");
    scanf_s("%d", &i);

    starlex(i);
    return 0;
}

int starlex(int x)
{
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}