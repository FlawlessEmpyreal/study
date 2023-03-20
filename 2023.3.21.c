#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//double Area(int x, int y, int z)
//{
//	double s = 1.0*(x + y + z) / 2;
//	return sqrt(s*(s - x)*(s - y)*(s - z));
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d",&a,&b,&c);
//
//	if (a >= b + c && b >= a + c && c >= a + b)
//		printf("These sides do not correspond to a valid triangle");
//	else
//		printf("area=%.2f perimeter=%.2f", Area(a, b, c),a+b+c);
//
//	return 0;
//}

//写个三角形周长和面积的算法
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a, b, c;
//	double  s;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b + c && b < a + c && c < a + b)
//	{
//		s = 1.0*(a + b + c) / 2;
//		printf("area=%.2f perimeter=%.2f", sqrt(s*(s - a)*(s - b)*(s - c)), a + b + c);
//	}
//	else
//		printf("These sides do not correspond to a valid triangle");
//	return 0;
//}

//写一个分段函数的计算
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double a,  y;
//	scanf("%lf", &a);
//	if (a < 0)
//		y = abs(a + 1);
//	else if (0 <= a&&a <= 5)
//		y = 2 * a + 1;
//	else
//		y = sin(a) + 5;
//	printf("x=%.2lf,y=%.2lf\n", a*1.0, y);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main(int argc, char *argv[])
//{
//	double x;
//	scanf("%lf", &x);
//	if (x<0) printf("x=%.2lf,y=%.2lf\n", x, fabs(x + 1));
//	else if (x <= 5) printf("x=%.2lf,y=%.2lf\n", x, 2 * x + 1);
//	else printf("x=%.2lf,y=%.2lf\n", x, sin(x) + 5);
//	return 0;
//}

//写一个简单计算器可根据输入的运算符对两个整数进行运算
#include