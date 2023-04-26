#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int Fib(int a)
//{
//	if (0 < a && a <= 2)
//		return 1;
//	else if (a == 0)
//		return 0;
//	else
//		return Fib(a - 1) + Fib(a - 2);
//}
//
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	for (int i = 0; i < a; i++)
//	{
//		int ret = Fib(i);
//		printf("%d,", ret);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	int arr[1000] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int j = n - 1; j >= 0; j--)
//	{
//		printf("%d", arr[j]);
//		if (j != 0)
//			printf(" ");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, c = -1000000, d;
//	int arr[1000] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i>0 && arr[i]>c && arr[1]>arr[0])
//		{
//			c = arr[i];
//			d = i;
//		}
//		else
//		{
//			c = arr[0];
//			d = 0;
//		}
//	}
//	printf("%d %d", c, d);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[12] = { 0 };
//	int n = 2;
//	arr[0] = 1;
//	arr[1] = 1;
//	printf("%6d", arr[0]);
//	printf("%6d", arr[1]);
//	for (int i = 2; i<12; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//		n++;
//		printf("%6d", arr[i]);
//		if (n % 3 == 0)
//			printf("\n");
//	}
//
//	return 0;
//}

////7-58

//#include <stdio.h>
//int main()
//{
//	int n=0;
//	int a1 = -1000;
//	int a2 = 1000;
//	int b1, b2;
//	scanf("%d", &n);
//	int f = n - 1;
//	int arr[1000] = { 0 };
//
//	if (n == 0)
//	{
//		scanf("%d", &arr[n]);
//		printf("%d ", arr[n]);
//	}
//	else
//	{
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (int i = 0; i < n; i++)
//		{
//			if (arr[i] < a2)
//			{
//				a2 = arr[i];//最xiao的数字
//				b2 = i;//当前位号
//			}
//		}
//		int e;
//		e = arr[b2];
//		arr[b2] = arr[0];
//		arr[0] = e;
//
//		for (int i = 0; i<n; i++)
//		{
//			if (arr[i]>a1)
//			{
//				a1 = arr[i];//最大的数字
//				b1 = i;//当前位号
//			}
//		}
//		int d;
//		d = arr[b1];
//		arr[b1] = arr[f];
//		arr[f] = d;
//
//
//		for (int i = 0; i < n; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//
//	return 0;
//}

////7 - 59 输出所有大于平均值的数
//
//#include <stdio.h>
//int main()
//{
//	int n;
//	double ave;
//	int k = 0;
//	int arr[1000] = { 0 };
//	scanf("%d", &n);
//	int j = 0;
//	int l = 0;
//	if (1 <= n && n <= 10)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (int i = 0; i < n; i++)
//		{
//			j += arr[i];
//		}
//		ave = j / n;
//		printf("%.2lf\n", ave);
//		for (int i = 0; i<n; i++)
//		{
//			if (arr[i]>ave)
//			{
//				printf("%d ", arr[i]);
//				l++;
//			}
//		}
//		if (l == 0)
//			printf(" ");
//	}
//	else
//		printf("Invalid.");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n, m;
//	int arr1[100][100];
//	int arr2[100][100];
//	int arrc[100][100];
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j<m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j<m; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j<m; j++)
//		{
//			arrc[i][j] = arr1[i][j] + arr2[i][j];
//		}
//	}
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j<m; j++)
//		{
//			printf("%d ", arrc[i][j]);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n, i, j;
//	scanf("%d", &n);
//	int arr[100][100];
//	int k = 1000;
//	
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (j = 0; j<n; j++)
//	{
//		for (i = 0; i<n; i++)
//		{
//			if (arr[i][j]<k)
//			{
//				k = arr[i][j];
//			}
//			if (i == n - 1)
//			{
//				printf("%3d", k);
//				k = 1000;
//			}
//		}
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int arr[100][100];
	int sum = 0;
	int max = 0;
	int line = 0;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i<n; i++)
	{
		sum = 0;
		for (int j = 0; j<m; j++)
		{
			sum += arr[i][j];
			if (j == 2 && sum>max)
			{
				max = sum;
				line = i;
			}
		}
	}
	printf("第%d个学生的总分最高",line+1);
	return 0;
}