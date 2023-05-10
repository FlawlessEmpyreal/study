#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
//int main()
//{
//	int a, n;
//	int c, d;
//	int e = 1;
//	int sum=0;
//	int sum2 = 0;
//	scanf("%d %d", &a, &n);
//	for (int i = 1; i <= n; i++)
//	{
//		e = 1;
//		sum = a;
//		if (i != 1)
//		{
//			for (int j = 2; j <= i; j++)
//			{
//				e *= 10;
//				c = a*e;
//				sum += c;
//			}
//		}
//		sum2 += sum;
//	}
//	printf("s = %d", sum2);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int a1;
//	int a2;
//	int b1, b2;
//	scanf("%d", &n);
//	int f = n - 1;
//	int arr[1000] = { 0 };
//
//
//	for (int i = 0; i < n; i++)//非零输入
//	{
//		scanf("%d", &arr[i]);
//	}
//	a2 = 0;
//	for (int i = 1; i < n; i++)//找最小
//	{
//		if (arr[i] < arr[a2])
//		{
//			a2 = i;//最xiao的数字
//		//	b2 = i;//当前位号
//		}
//	}
//	int e;//替换
//	e = arr[a2];
//	arr[a2] = arr[0];
//	arr[0] = e;
//
//	a1 = n-1;
//	for (int i = 0; i<n-1; i++)//找最大
//	{
//		if (arr[i]>arr[a1])
//		{
//			a1 = i;//最大的数字
//		//	b1 = i;//当前位号
//		}
//	}
//	int d;//替换
//	d = arr[a1];
//	arr[a1] = arr[f];
//	arr[f] = d;
//
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int arr[3][3];
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (j = 0; j < 3; j++)
//	{
//		int sum = 0;
//		for (i = 0; i < 3; i++)
//		{
//			sum += arr[i][j];
//			if (i==2)
//				printf("%.1f\n", sum / 3.0);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int arr[3][5] = {30,41,52,65,' ',40,56,22,34,' ',47,38,37,49,' '};
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][4] += arr[i][j];
//		}
//		arr[i][4] -= 32;
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr[80];
//	gets(arr);
//	char ch;
//	int n = 0;
//	scanf("%c", &ch);
//	for (int i = 0; arr[i] != '\0'; i++)
//	{
//		if (arr[i] == ch)
//			n++;
//	}
//	printf("%d", n);
//	return 0;
//}

//int main()
//{
//	char arr[10];
//	scanf("%s", arr);
//	int i;
//	for (i = 0; arr[i] != '\0'; i++)
//	{
//		if (arr[i] >= 65 && arr[i] <= 90)
//		{
//			arr[i] += 32;
//			continue;
//		}
//
//		if (arr[i] >= 97 && arr[i] <= 122)
//			arr[i] -= 32;
//	}
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	char arr[11];
//	scanf("%s", arr);
//	int i;
//	for (i = 0; i<11; i++)
//	{
//		if (arr[i] >= 48 && arr[i] <= 57)
//			arr[i] = 42;
//	}
//	printf("%s", arr);
//	return 0;
//}


//int main()
//{
//	int a, b,n;
//	scanf("%d %d", &a, &b);
//	n = abs(a - b) + 1;
//	if (a>b)
//		a = b;
//	for (int i = 0; i<n; i++)
//	{
//		printf("%c", a + 64);
//		a++;
//	}
//
//	return 0;
//}


//int main()
//{
//	char arr1[201] = { '\0' };
//	char arr2[101] = { '\0' };
//	char* arrp;
//	int i = 0;
//	scanf("%s %s", arr1, arr2);
//	for (i = 0; arr1[i] != '\0'; i++)
//	{
//	}
//	if (arr1[i] == '\0')
//	{
//		for (int j = 0; arr2[j] != '\0'; j++)
//		{
//			arr1[i] = arr2[j];
//			i++;
//		}
//		i++;
//		arr1[i] = '\0';
//	}
//	printf("%s", arr1);
//	return 0;
//}

//int main()
//{
//	char arr[81];
//	/*scanf("%s", arr);*/
//	gets(arr);
//	int len;
//	len = strlen(arr);
//	
//	for (int i = len-1; i >= 0; i--)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr[81];
//	char arr1[81];
//	gets(arr);
//	int len;
//	len = strlen(arr);
//	int j = 0;
//	int key = 0;
//
//	for (int i = len - 1; i >= 0; i--)
//	{
//		arr1[j] = arr[i];
//		j++;
//	}
//	j++;
//	arr1[j] = '\0';
//	//printf("%s",arr1);
//	for (int i = 0; i<len; i++)
//	{
//		if (arr[i] != arr1[i])
//			break;
//		key = 1;
//	}
//	if (key == 1)
//	{
//		printf("%s\n", arr);
//		printf("Yes");
//	}
//	else
//	{
//		printf("%s\n", arr);
//		printf("No");
//	}
//	return 0;
//}

float Count(float x)
{
	return (log((-5)*x) - (fabs((x*x) - (8 * x)) / (7 * x) + exp(1)));
}
int main()
{
	float x, y;
	scanf("%f", &x);
	y = Count(x);
	printf("y的值是%.2f", y);
	return 0;
}