#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//把arr1的内容包括NULL复制到arr2

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "0000000000";
//	strcpy(arr2, arr1);//arr1是源字符串地址，arr2是目的字符串地址。
//	printf("%s", arr2);
//	return 0;
//}

//把hello替换成x.
//int main()
//{
//	char arr1[] = { "hello world "};
//	memset(arr1, 'x', 5);
//	printf("%s", arr1);
//	return 0;
//}

//用函数交换a和b的位置
//void Swap(int* pa1, int* pa2)
//{
//	int tmp = *pa1;
//	*pa1 = *pa2;
//	*pa2 = tmp;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	Swap(&a, &b);//记得要有取地址符号谢谢
//	printf("%d %d", a, b);
//	return 0;
//}

//计算101到199之间的素数
//#include <stdio.h>
//#include <math.h>
//int Judge(int j)
//{
//	int n;
//	for (n = 2; n <= sqrt(j); n++)//素数判断
//	{
//		if (j%n == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i;
//	for (i = 101; i < 200; i++)
//	{
//		if(Judge(i) == 1)
//		printf("%d\n", i);
//	}
//
//	return 0;
//}


//写一个函数,每调用一次函数则num+1
//#include <stdio.h>
//#include <windows.h>
//void Fun(int* ret)
//{
//	*ret = *ret + 1;
//  或者是(*p)++;//++的优先级比*要高.
//}
//int main()
//{
//	int num = 0;
//	while (1)
//	{
//		Fun(&num);
//		printf("%d", num);
//		system("pause\n");
//	}
//	return 0;
//}

/////////int *arr写法是错误的
//void Fun(int *arr)//❌
////void Fun(int arr[])应该写成这样 √
////这里传送的其实是数组的首元素.
//{
//	printf("%s", arr);//实际上只能打印出arr的第一个字符,数组的传参只能传递第一个字符的地址
//} 
//int main()
//{
//	char arr[10];
//	Fun(arr);
//	return 0;
//}
//
//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//链式访问是把一个函数的返回值给另一个函数,那么打印第一个43的时候返回值是多少捏?msdn上的解释是
//												 //Each of these functions returns the number of characters printed, or a negative value if an error occurs.
//												 //大概意思你打印多少个数字就返回几,打印43就返回数字2
//												 //所以最后的结果是输出4321
//	return 0;
//}

#include <stdio.h>
//输入1234，用递归打印出1 2 3 4
void print(num)
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d ", num % 10);
}

int main()
{
	int num = 1234;
	print(num);
	return 0;
} 