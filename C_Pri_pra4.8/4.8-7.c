#define _CRT_SECURE_NO_WARNINGS 1
#include<float.h>
#include<stdio.h>

const int main()
{
	double n = 1.0 / 3.0;
	float m = 1.0 / 3.0;
	printf("%.6f,%.12f,%.16f\n", n, n, n);
	printf("%.6lf,%.12lf,%.16lf\n", m, m, m);
	printf("%d,%d", FLT_DIG,DBL_DIG);
}

