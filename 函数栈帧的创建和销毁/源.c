#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int Add(x, y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 15;
	int c = Add(a, b);
	return 0;
}