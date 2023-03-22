#define  _CRT_SECURE_NO_WARNINGS 1
////编写一个用二分法查找平均分布的数字的程序
//#include <stdio.h>
//int main()
//{
//	int  arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, right = (sizeof(arr)/sizeof(arr[0])-1), left = 0, a = 0, mid = 0 ;//设定十个程序
//
//	scanf("%d", &a);//输入想要查找的数字
//	while (left<=right)//输入的数字不是想要找到的数字执行程序
//	{
//		mid = (left + right) / 2;//设定第一个中间值
//		if (arr[mid] < a)//当输入的数字比第一个中间值要大时
//			left = mid + 1;//这次的中间值作为下次计算的最小值
//		else if (arr[mid] > a)//小时
//			right = mid - 1;
//		else//mid = 7时跳出循环.
//			break;
//	}
//	printf("%d\n", mid);//输出在数组的下标
//
//	return 0;
//}


//从两侧向中间打印一串字符
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = { "hello!world!"};//设定要打印的字符
//	char arr2[] = { "############" };//一开始要被替换的字符
//	int right = strlen(arr1) - 1, left = 0;//获得两个数组的下标
//	while (left <= right)//每次替换都会对left和right进行调整
//	{
//		arr2[left] = arr1[left];//替换
//		arr2[right] = arr1[right];//替换
//		left++;//调整
//		right--;//调整
//		printf("%s\n", arr2);//输出此次调整过后的字符
//		Sleep(1000);//延迟一秒,头文件是windows.h
//		system("cls");//清空当前显示头文件是啥来着不知道为啥这个也能用
//	}
//	printf("hello!world!\n");//之前都被清空了再显示一次
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	char arr1[] = { "123456" };
//	char arr2[] = { "######" };
//	while (strcmp(arr1, arr2) != 0)
//	{
//		if (i == 4)
//		{
//			printf("error");
//			break;
//		}
//		scanf("%s", arr2);
//		i++;
//	}
//	if (strcmp(arr1, arr2) == 0)
//		printf("success");
//
//	return 0;
//}


//猜数字游戏,数字范围是0到100,假如过程中想退出游戏,输入范围外的数字,猜对了游戏后自动进入选择是否继续游戏

#include <time.h>
#include <windows.h>
#include <stdio.h>

int game()
{
	int num, an;//随机数字放在这里要猜
	num = rand() % 100 + 1;//生成一个随机数字,要求只有0到100之间
	printf("随机数=%d\n", num);
	scanf("%d", &an);
	while (1)//开始猜数字一直猜到结果或者不想猜了为止
	{
		if (0 <= an && an < num)
		{
			printf("猜小了\n");
			scanf("%d", &an);
		}
		else if (an > num && an <= 100)
		{
			printf("猜大了\n");
			scanf("%d", &an);
		}
		else if (an == num)
		{
			printf("恭喜你,猜对了\n");
			return 1;
			break;
		}
		else//不想猜了
		{
			printf("中途退出并结束游戏\n\n");
			return 0;//返回数字0结束游戏
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));//用时间戳计算随机数
	int input = 0;
	do//如果选择开始游戏,当开始游戏,结束后自动进行下一次选择
	{
		printf("-----猜数字游戏,数字范围是0到100,假如过程中想退出游戏,请输入范围外的数字-----\n");
		printf("-----输入1开始-----\n-----输入0结束游戏-----\n");
		scanf("%d", &input);//输入1开始,输入0结束游戏
		switch (input)//选择是否开始游戏
		{
		case 1:
//			printf("测试\n\n");
//			game();//游戏本身
			input = game();//根据返回值判断是否要中断游戏.
			break;
		case 0://输入0直接结束游戏
			break;
		default ://输入其他要求重新输入
			printf("输入错误请重新输入\n\n");
			break;
		}
		if (input == 0)//输入为0游戏直接结束不进入while循环
			break;
		else
		{
			printf("是否继续游戏?\n-----输入1继续游戏,输入0结束游戏-----\n\n");
			scanf("%d", &input);
		}
	} while (input != 0);
	printf("游戏结束\n\n");
	return 0;
}
