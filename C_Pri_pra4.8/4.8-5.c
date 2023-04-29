#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	float m,n,time;
	printf("请输入下载速度（MB）和文件大小（MB）：");
	scanf("%f %f", &m, &n);
	time = n / m;
	printf("速度：%fMB,大小：%fMB,时间：%fS\n", m, n, time);
}