#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num1, num2, num3;
//	scanf("%d %d %d",&num1,&num2,&num3);
//	if (num1 > num2&&num1 > num3)
//	{
//		if (num2 > num3)
//			printf("%d %d %d", num1, num2, num3);
//		else
//			printf("%d %d %d", num1, num3, num2);
//	}
//	else if(num2 > num1&&num2 > num3)
//	{
//		if (num1 > num3)
//			printf("%d %d %d", num2, num1, num3);
//		else
//			printf("%d %d %d", num2, num3, num1);
//	}
//	else if (num3 > num1&&num3 > num2)
//	{
//		if (num1 > num2)
//			printf("%d %d %d", num3, num1, num2);
//		else
//			printf("%d %d %d", num3, num2, num1);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{	
//	int a = 0;
//	int i = 1;
//	for (i = 1; i < 100; i++)//从1循环到99。
//	{
//		if (i % 3 == 0)//寻找可以被三整除的数字.
//		{
//			printf("%d\n", i);
//			a += 1;//每次if循环都会执行一次自加.
//		}
//	}
//	printf("一共有%d个数字",a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b=0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a);
//		if (b < a)
//			b = a;
//	}
//	printf("%d", b);
//		
//	return 0;
//}


////写一个求100-200之间素数的程序.
//#include <stdio.h>
//int main()
//{
//	int i = 101,a=2;//起始量是101,2作为第一个被除数
//	for (i = 101; i < 200; i++)//从101循环到199.
//	{	
//		a = 2;//直接把循环开始的a初始化.
//		while (a < i)//让除数除以比自己小的被除数a,验证从2到i-1是否有其他公约数
//		{
//			if (i%a == 0)//寻找到其他公约数了.
//				break;//假如现在的被除数是公约数直接跳出循环,进行下一个数字的验证.
//			else
//				a += 1;//假如现在的a不是公约数那么a+1
//		}
//		if (a == i)
//			printf("%d\n", i);//假如2到i-1都不是i的公约数那么就是素数,输出
//	}
//	return 0;
//}

//#include <stdio.h>//判断平年和闰年。
//int main()
//{
//	int a=1000;
//	for (a = 1000; a < 2000; a++)
//	{
//		((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0));
//		printf("%d\n", a);
//	}
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
//#include <math.h>
//#include <stdio.h>
//int main()
//{
//	float i;
//	float sum = 0;
//	for (i = 1.0; i <= 100; i++)
//	{
//		sum = sum + 1 / i*pow(-1, i - 1);
//	}
//	printf("%f", sum);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{ 
//	int iq;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &iq);
//		if (iq >= 140)
//			printf("genius\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a = -1;
	int c;
	c = -a;
	printf("%d",c);


	return 0;
}

