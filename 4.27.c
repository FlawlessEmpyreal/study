#define  _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int arr[5][5];
//	int sum = 0;
//	int product = 1;
//	int i = 0, j = 0;
//	for (i = 0; i<5; i++)
//	{
//		for (j = 0; j<5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (i = 0; i<5; i++)
//	{
//		for (j = 0; j<5; j++)
//		{
//			if (i == j)
//			{
//				sum += arr[i][j];
//			}
//			if (i + j == 4)
//			{
//				product *= arr[i][j];
//			}
//		}
//	}
//	printf("s=%d,t=%d", sum, product);
//	return 0;
//}

////7 - 65 求二维数组除了四条边框之外的元素的和
//
//#include <stdio.h>
//int main()
//{
//	int arr[5][5];
//	int i, j;
//	int sumi = 0;
//	int sumj = 0;
//	int sumi2 = 0;
//	int sumj2 = 0;
//	for (i = 0; i<5; i++)
//	{
//		for (j = 0; j<5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i<5; i++)
//	{
//		for (j = 0; j<5; j++)
//		{
//			if (i == 0)
//			{
//				sumi += arr[0][j];
//			}
//			if (j == 0)
//			{
//				sumj += arr[i][0];
//			}
//			if (i == 4)
//			{
//				sumi2 += arr[4][j];
//			}
//			if (j == 4)
//			{
//				sumj2 += arr[i][4];
//			}
//		}
//	}
//	printf("%d", sumi + sumj + sumi2 + sumj2 - arr[0][0] - arr[0][4] - arr[4][0] - arr[4][4]);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//void main(){
//	int n = 0;
//	printf("请输入杨辉三角的项数n:\n");
//	scanf("%d", &n);
//	int yh[10][10];
//	system("cls");//清屏输出结果，记得加上stdlib.h头文件
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i)
//				yh[i][j] = 1;
//			else
//				yh[i][j] = yh[i - 1][j] + yh[i - 1][j - 1];
//			printf("%4d", yh[i][j]);
//		}
//		printf("\n");//输出一行就换行
//	}
//}

//#include <math.h>
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr1[100][100];
//	int arr2[100][100];
//	int i = 0, j = 0;
//	int count = 0;
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			arr2[j][i]=arr1[i][j];
//		}
//	}
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//				count++;
//		}
//	}
//	if (count == pow(n,2))
//		printf("Yes");
//	else
//		printf("No");
//
//
//	return 0;
//}


#include <stdio.h>

int main()
{
	int n;

	for (n = 7;
		n<100
		; n++)
	{
		if (
			n % 7 != 0
			)
			continue;
		printf("%d\n", n);
	}

	return 0;
}