#define  _CRT_SECURE_NO_WARNINGS 1
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

//#include <stdio.h>
//int main()
//{
//	int N, i, b;
//	char a;
//	scanf("%d%c", &N, &a);
//	for (i = 1; i <= 2 * N - 1; i++)
//	{
//		if (i <= N)//打印上半区
//		{
//			b = N - i;//该行的空格数
//			for (int j = 1; j <= b; j++)//打印空格
//			{
//				printf(" ");
//			}
//			for (int k = 1; k <= 2 * i - 1; k++)//打印字符
//			{
//				printf("%c", a);
//			}
//			printf("\n");
//		}
//		if (i>N)
//		{
//			b = i - N;
//			for (int j = 1; j <= b; j++)//打印空格
//			{
//				printf(" ");
//			}
//			for (int k = 1; k <= 4 * N - 2 * i - 1; k++)
//			{
//				printf("%c", a);
//			}
//			printf("\n");
//		}
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	for (int i = 0; i<5; i++)
//	{
//		for (int j = 0; j<15; j++)
//		{
//			printf(" ");
//		}
//		for (int k = 0; k <= i; k++)
//		{
//			printf("%c", 36);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int N, i, b;
//	char a;
//	for (i = 1; i <= 2 * 4 - 1; i++)
//	{
//		if (i <= 4)//打印上半区
//		{
//			b = 6 - i;//该行的空格数
//			for (int j = 1; j <= b; j++)//打印空格
//			{
//				printf(" ");
//			}
//			for (int k = 1; k <= 2 * i - 1; k++)//打印字符
//			{
//				printf("%c", '*');
//			}
//			printf("\n");
//		}
//		if (i>4)
//		{
//			b = i - 2;
//			for (int j = 1; j <= b; j++)//打印空格
//			{
//				printf(" ");
//			}
//			for (int k = 1; k <= 4 * 4 - 2 * i - 1; k++)
//			{
//				printf("%c", '*');
//			}
//			printf("\n");
//		}
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int N;
//	double  L;
//	scanf("%d %lf", &N, &L);
//	switch (N)
//	{
//	case 92:
//		printf("%d %.2lf", 92, L*6.86);
//		break;
//	case 95:
//		printf("%d %.2lf", 95, L*7.45);
//		break;
//	case 98:
//		printf("%d %.2lf", 98, L*8.16);
//		break;
//	default:
//		printf("Not available!");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m, n, k = 0;
//	scanf("%d %d", &m, &n);
//	for (int i = m; i <= n; i++)
//	{
//		if (i % 2 != 0 && i % 3 == 0 && i % 5 != 0)
//		{
//			printf("%d,", i);
//			k++;
//			if (k%8==0)
//				printf("\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 1;//公鸡数量
//	int b = 1;//母鸡数量
//	int c;//小鸡数量
//	int i = 0;//方案数
//	int n1 = 5 * a;//公鸡钱
//	int n2 = 3 * b;//母鸡钱
//	int d;//买完公鸡的钱剩下的钱
//	int e;//此时还能买母鸡的数量
//	int f;//买完母鸡剩下的钱
//	int n;//n种方案数
//	scanf("%d", &n);
//		for (a = 1; a<20; a++)
//		{
//			d = 100 - 5*a;//买完公鸡的钱剩下的钱
//			e = d / 3;//此时还能买母鸡的数量
//			for (b = 1; b <= e; b++)
//			{
//				f = d - 3 * b;//买完母鸡买完母鸡剩下的钱
//				c = 3 * f;//小鸡的数量
//				if (a + b + c == 100)
//				{
//					printf("%d %d %d\n", a, b, c);
//					i++;
//				}
//				if (i == n)
//				{
//					break;
//				}
//			}
//			if (i == n)
//			{
//				break;
//			}
//		}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int x;//输入
	int total;//一共
	int i;//5分硬币
	int a;//先都换了5分后剩下的
	int j;//2分硬币
	int b;//换了2分以后剩下的
	int n = 0;//计数
	scanf("%d", &x);
	for (i = 19; i >= 1; i--)
	{
		if (x > 5 * i)
		{
			a = x%5*i;//先都换了5分后剩下的
			int j1 = a / 2;//最多换j1个2分硬币
			for (j = j1; j >= 1; j--)
			{
				b = a%2*j;//一分硬币数量
				if (b == 0)
					continue;
				printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", i, j, b, i + j + b);
				n++;
			}
		}
	}
	printf("count = %d", n);
	return 0;
}