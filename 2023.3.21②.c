#define  _CRT_SECURE_NO_WARNINGS 1
//输出1到100之间的奇数
//#include <stdio.h>
//int main()
//{
//	int i ;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d",i);
//	}
//	return 0;
//}

//只输出数字字符
//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		else
//			putchar(ch);//ascii码小于字符0大于字符9的都不会被输出.
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("This is a simple problem");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", a);
//	return 0;
//}


////输入一个整数把这个数字变成相对应的字符
//#include <stdio.h>
//int main()
//{
//	int a;//创建一个整数空间
//	scanf("%d", &a);//输入一个整数
//	printf("%c", a);//将这个整数以字符型输出
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("hello,%d!", a);
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("C=%d\nS=%d", 2 * (a + b), a*b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double a, b, c;
//	scanf("%lf %lf", &a, &b);
//	c = (a + b)*1.0;
//	printf("%.1f", c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a, b;
//	scanf("%c %c", &a, &b);
//	printf("%c%c", b, a);
//
//	return 0;
//}

//求得n的阶乘
//#include <stdio.h>
//int main()
//{
//	int i = 1, a = 0, b = 1;
//	scanf("%d", &a);
//	if (a != 0)//a不等于1的阶乘计算.
//	{
//		for (i = 1; i < a; i++)
//			b = b * (i + 1);
//	}
//	else
//		b = 1;//0的阶乘就是1
//	printf("%d", b);
//	return 0;
//}

//求1!+2!+...+10!
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 1, c = 1;
//	while (a < 10)//从2!开始到10!有9项
//	{
//		b = 1;//初始化b值
//		for (i = 0; i < a ; i++)//在第几项就循环几次
//			b = b * (i + 2);//求出当前项的阶乘,i = 0时求的是2!
//		c = c + b;//目前所有阶乘之和
//		a++;//开始下一项
//	}
//	printf("%d", c);
//	return 0;
//}

//感觉上是可以化简的
#include <stdio.h>
int main()
{
	int i = 1, a = 0, b = 1;
	do
	{
		a = a + i;
		i = i * (b + 1);
		b++;
	} while (b <= 10);
	printf("%d", a);
	return 0;
}
