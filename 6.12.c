#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char arr[12];
	scanf("%s", arr);
	int i = 0, n = 1;
	char *j;
	for (i = 0; i < 12; i++)
	{
		if (arr[i]=='\0')
			j = arr+i;
	}
	while ((j - ((3 * n+(n-1))))>arr)
	{
		char* i = j;
		while (i != (j - ((3 * n + (n - 1)))))
		{
			*(i + 1) = *i;
			i--;
		}
		*(i + 1) = *i;
		*i = ',';
		j++;
		n++;
	}
	printf("%s", arr);
	return 0;
}