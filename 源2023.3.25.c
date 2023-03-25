#define  _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>

//int Strlen(char *str)
//{	
//	if (*str != '\0')//str解引用是str当前地址指向的字符
//		return 1 + Strlen(str + 1);//当当前字符不是\0的时候+1并且地址+1
//	else
//		return 0;//当当前字符是\0的时候不增加长度
//}
//
//int main()
//{
//	char arr[] = "abcdef";
////	int len = Strlen(arr);
//	printf("%d\n", Strlen(arr));
////	printf("%d", strlen(arr + 1));
//	return 0;
//}


//用递归求n的阶乘
//int Fac(int i)
//{	
//	if (i <= 1)
//		return 1;
//	else
//	{
//		return i * Fac(i - 1);//return 应该写在这里.
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", Fac(n));
//	return 0;
//}



//用递归求第n个斐波那契数

//int Fib(int n,int i, int j)
//{	
//	if ((n - 1) > 0)
//	{	
//		int tmp;
//		i = i + j;
//		tmp = i;
//		i = j;
//		j = tmp;
//		
//		return i + Fib(n - 1, i, j);
//	}
//	//else
//	//	return 1;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n > 2)
//		printf("%d", Fib(n, 1, 1));
//	else
//		printf("%d", 1);
//	return 0;
//}

//都错了.
