#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int a, b, c, input;
	scanf("%d", &input);
	a = input / 100;
	b = input % 100 / 10;
	c = input % 100 % 10;
	printf("%d,%d,%d", a, b, c);

	return 0;
}

#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("a=%d,b=%d", a, b);
	return 0;
}