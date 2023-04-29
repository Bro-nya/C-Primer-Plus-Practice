#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	char ming[24], xin[24];
	printf("请输入名\n");
	scanf("%s", &ming);
	printf("请输入性\n");
	scanf("%s", &xin);
	printf("%s,%s", ming, xin);
	return 0;
}