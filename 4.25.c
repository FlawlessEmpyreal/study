#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int x;//输入
//	int total;//一共
//	int i;//5分硬币
//	int a;//先都换了5分后剩下的
//	int j;//2分硬币
//	int b;//换了2分以后剩下的
//	int n = 0;//计数
//	scanf("%d", &x);
//	for (i = 19; i >= 1; i--)
//	{
//		if (x > 5 * i)
//		{
//			a = x-(i*5);//先都换了5分后剩下的
//			int j1 = a / 2;//最多换j1个2分硬币
//			for (j = j1; j >= 1; j--)
//			{
//				b = a-(j*2);//一分硬币数量
//				if (b == 0)
//					continue;
//				printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", i, j, b, i + j + b);
//				n++;
//			}
//		}
//	}
//	printf("count = %d", n);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int x, n, a[20], k = 0;
//	scanf("%d%d", &n, &x);
//	for (int i = 0; i<n; i++)
//	{
//		scanf("%d ", &a[i]);
//		if (a[i] == x)
//		{
//			printf("%d", i);
//			break;
//		}
//		else
//			k++;
//	}
//	if (k == n)
//		printf("Not Found");
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10];
//	for (int i = 0; i<10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] % 2 == 0)
//		{
//			arr[i] = arr[i] / 2;
//		}
//		else
//		{
//			arr[i] = arr[i] * 2;
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%4d", arr[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0, sum = 0;
//	if ((i % 7 == 0 || i % 17 == 0) && i % 2 == 0)
//	{
//		if (i % 7 == 0 || i % 17 == 0)
//		{
//			printf("%6d", i);
//			sum += i;
//			n++;
//			if (n % 5 == 0)
//				printf("\n");
//		}
//	}
//	printf("\n");
//	printf("sum=%d", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[3][5];
//	int(*p)[5] = arr;
//	printf("%d\n", &arr[0][0]);
//	printf("%d\n", *p);
//	printf("%d\n", p+1);
//	printf("%d\n", *p+1);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10], p = 0, n = 0, z = 0;
//	for (int i = 0; i<10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i]>0)
//			p++;
//		else if (arr[i]<0)
//			n++;
//		else
//			z++;
//	}
//	printf("positive number = %d\nnegative number = %d\nzero = %d", p, n, z);
//
//	return 0;
//}


//#include <stdio.h>
//void Arithmetic_progression(int a, int d, int n)
//{
//	printf("%5d", a += d);
//	n++;
//	if (n<5)
//		Arithmetic_progression(a, d, n);
//}
//
//int main()
//{
//	int a, d, n = 0;
//	scanf("%d %d", &a, &d);
//	a = a - d;
//	Arithmetic_progression(a, d, n);
//	return 0;
//}

#include <stdio.h>
void Fn(int n)
{
	Fn(0) = 0;
	Fn(1) = 1;
	Fn(n) = Fn(n - 1) + Fn(n - 2);
	printf("%d", Fn);
}

int main()
{
	int n;
	scanf("%d", &n);
	Fn(n);
	return 0;
}