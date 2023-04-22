#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d", &a, &b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	float a, y;
//	int n;
//	scanf("%f %d", &a, &n);
//	y = a*n;
//	printf("y=%f", y);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a, b, c, d;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	int Sum = a + b + c + d;
//	float ave = (a + b + c + d) / 4.0;
//	printf("Sum = %d; Average = %.1f", Sum, ave);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int main(){
//	double n = 2;
//	double result = log(n);
//	printf("%lf", result);
//
//	getchar();
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int H;//Éí¸ß
//	scanf("%d", H);
//	float kg, g;
//	kg = (H - 100)*0.9;//¹«½ï
//	g = kg * 2;//½ï
//	printf("%.1f", g);
//	return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int a = 0, b = 0, y = 0;
//	char c = '0';//´æ´¢·ûºÅ
//	scanf("%d %c %d", &a, &c, &b);//ÊäÈë
//	switch (c)
//	{
//	case '+':
//
//		y = a + b;
//		break;
//
//	case '-':
//
//		y = a - b;
//		break;
//
//	case'*':
//
//		y = a*b;
//		break;
//
//	case'/':
//
//		y = a / b;
//		break;
//
//	case'%':
//
//		y = a%b;
//		break;
//
//	default:
//		printf("ERROR");
//	}
//	printf("%d", y);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d", &a);
//	b = a / 100;
//	//    a=a%100;
//	if (a >= 1 && a <= 9)
//		printf("yes");
//	else
//		printf("no");
//}

//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	float y = 0;
//	scanf("%d", &x);
//	if (x <= 15)
//		y = (4 * x) / 3;
//	else
//		y = (2.5*x) - 17.5;
//	printf("%.2f", y);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x;
//	float y;
//	scanf("%d", &x);
//	if (x<0 && x != -3)
//		y = x;
//	else if (x<10 && x != 2 && x != 3&&0<=x)
//		y = x + 1;
//	else
//		ysin(3 * x);
//	printf("%f", y);
//	return 0;
//}

//

//#include <stdio.h>
//int main()
//{
//	double x, y;
//	scanf("%lf", &x);
//	if (0 <= x&&x <= 50)
//	{
//		y = 0.53 * 50;
//		printf("cost = %.2lf", y);
//	}
//	else if (x>50)
//	{
//		y = 50 * 0.53 + (x - 50)*0.58;
//		printf("cost = %.2lf", y);
//	}
//	else
//		printf("Invalid Value!");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float L;
//	int N;
//	scanf("%f %d", &L, &N);
//	switch (N)
//	{
//	case 92:
//		printf("%.2f", L*6.86);
//		break;
//	case 95:
//		printf("%.2f", L*7.45);
//		break;
//	case 98:
//		printf("%.2f", L*8.16);
//		break;
//	default:
//		printf("Not available!");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n;
//	int a = 0;
//	int i;
//	int b;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		b = a + i;
//		a = b;
//	}
//	printf("sum = %d", b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 1, n, ret, m = 1, q;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = m*i;
//		q = ret + m;
//		m = ret;
//	}
//	printf("%d", q);
//	return 0;
//}

#include <math.h>
#include <stdio.h>
int main()
{
	int j = 1, N;
	double a, b = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{	
		a = pow(-1,i)*1 / j;
		b = b + a;
		j += 3;
	}
	printf("sum = %.3f", b);
	return 0;
}

//#include<stdio.h>
//#include<math.h>
//int main(void){
//	double n, s = 1, t, i, j = 4;
//	scanf("%lf", &n);
//	for (i = 1; i<n; i++){
//		t = pow(-1, i) * 1 / j;
//		s = s + t;
//		j = j + 3;
//	}printf("sum = %0.3f", s);
//	return 0;
//}
