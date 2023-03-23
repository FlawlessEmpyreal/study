#define  _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
#include <stdio.h>
int main()
{
	double x, y;
	scanf("&lf", &x);
	y = log((-1) * 5 * x) - ( abs(x * x -  8* x ) / 7 * x ) + exp(1);
	printf("%.2f", y);
	return 0;
}