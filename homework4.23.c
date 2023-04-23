#define  _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double x;
//	double t = 1, b = 1;
//	double a = 1;
//	scanf("%lf", &x);
//	for (double i = 1;; i++)
//	{
//		a = a*i;
//		t += pow(x, i) / a;
//		b = pow(x, i) / a;
//		if (b < 0.00001)
//			break;
//	}
//	printf("%.4lf", t);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n = 100;
//	int a, b, c;
//	for (n = 100; n < 1000; n++)
//	{
//		a = n / 100;
//		b = n / 10 % 10;
//		c = n % 10;
//		if (n == a*a*a + b*b*b + c*c*c)
//			printf("%d  ", n);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[28];
//	int j = 0;
//	int i = 0;
//	int sum=0;
//	int m = 0, n = 0;
//	int c = 0;
//	//int (*p)[5] = arr;
//	for (i = 1; i < 300; i++)
//	{
//		if (i % 2 == 0)
//		{
//			if (i % 7 == 0 || i % 17 == 0)
//			{
//				arr[j] = i;
//				sum += i;
//				j++;
//			}
//		}
//	}
//	
//	while (c < 7)
//	{
//		for (int n = 0; n < 5; n++)
//		{
//			if (n + c*5 < 28)
//			{
//				if (*arr < 100)
//					printf("    %d", arr[n + c*5]);
//				else
//					printf("   %d", arr[n + c*5]);
//			}
//		}
//		printf("\n");
//		c++;
//	}
//
//		
//	printf("sum=%d", sum);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr[15] = { 0 };
//	for (int i = 0; i < 15; i++)
//	{
//		scanf("%c", &arr[i]);
//		if (arr[i] == '\n')
//			break;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i])
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr[1];
//	scanf("%c", arr);
//	char b = arr[0] - 2;
//	printf("%c", b);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int c;
//	int digit = 0, letter = 0, other = 0;
//	char arr[15] = { 0 };
//	for (int i = 0; i < 15; i++)
//	{
//		scanf("%c", &arr[i]);
//		if (arr[i] == '\n')
//			break;
//	}
//	for (int i = 0; i<10; i++)
//	{
//		if (arr[i] - 48 >= 0 && arr[i] - 57 <= 0)//判断为数字
//			digit++;
//		else if ((arr[i] - 65 >= 0 && arr[i - 90] <= 0) || (arr[i] - 97 >= 0 && arr[i] - 122 <= 0))
//			letter++;//判断为英文
//		else if (arr[i] == '\0')
//			break;
//		else
//			other++;
//	}
//	printf("letter = %d, digit = %d, other = %d", letter, digit, other);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch;
//	int letter, digit;
//	letter = 0; digit = 0;
//	for (int i = 1; i <= 10; i++)
//	{
//		ch = getchar();
//		if (ch >= 'a'&&ch <= 'z' || ch >= 'A'&&ch <= 'Z')
//			letter = letter + 1;
//		else
//		if (ch >= '0' && ch <= '9')
//			digit = digit + 1;
//	}
//	printf("letter = %d, digit = %d, other = %d", letter, digit, 10 - letter - digit);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int y, n = 0;
//	scanf("%d", &y);
//	if (y <=2000 || y >=2101)
//		printf("Invalid year!");
//	else
//	{
//		for (int i = 2001; i <= y; i++)
//		{
//			if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//			{
//				printf("%d\n",i);
//				n++;
//			}
//		}
//		if (n == 0)
//			printf("None");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double x;
//	double t = 1, b = 1;
//	double a = 1;
//	scanf("%lf", &x);
//	for (double i = 1; i <= x; i++)
//	{
//		a = a*i;
//		t += pow(x, i) / a;
//		//		b = pow(x, i) / a;
//		//		if (b < 0.00001)
//		//			break;
//	}
//	printf("%.8lf", t);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double i, n, t = 1, a = 1;
//	scanf("%lf", &n);
//	for (i = 1; i <= n; i++)
//	{
//		a = a*i;//求阶乘
//		t += 1 / a;//n+1项和
//	}
//	printf("%.8lf", t);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, n = 0;
//	scanf("%d %d", &a, &b);
//	for (int i = a; i <= b; i++)
//	{
//		if (i % 2 == 1)
//		{
//			if (i % 3 == 0 && i % 5 != 0)
//			{
//				printf("%d,",i);
//				n++;
//				if (n % 8 == 0)
//					printf("\n");
//			}
//
//		}
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int N, i, b;
	char a;
	scanf("%d%c", &N, &a);
	for (i = 1; i <= 2 * N - 1; i++)
	{
		if (i <= N)//打印上半区
		{
			b = N - i;//该行的空格数
			for (int j = 1; j <= b; j++)//打印空格
			{
				printf(" ");
			}
			for (int k = 1; k <= 2 * N - 1; k++)//打印字符
			{
				printf("%c", a);
				printf("\n");
			}
		}
		if (i>N)
		{
			b = i - N;
			for (int j = 1; j <= b; j++)//打印空格
			{
				printf(" ");
			}
			for (int k = 1; k <= 4 * N - 2 * i - 1; k++)
			{
				printf("%c", a);
				printf("\n");
			}
		}

	}
	return 0;
}