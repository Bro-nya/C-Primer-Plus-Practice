#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	float m,n,time;
	printf("�����������ٶȣ�MB�����ļ���С��MB����");
	scanf("%f %f", &m, &n);
	time = n / m;
	printf("�ٶȣ�%fMB,��С��%fMB,ʱ�䣺%fS\n", m, n, time);
}