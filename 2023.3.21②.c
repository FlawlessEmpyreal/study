#define  _CRT_SECURE_NO_WARNINGS 1
//���1��100֮�������
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

//ֻ��������ַ�
//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		else
//			putchar(ch);//ascii��С���ַ�0�����ַ�9�Ķ����ᱻ���.
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


////����һ��������������ֱ�����Ӧ���ַ�
//#include <stdio.h>
//int main()
//{
//	int a;//����һ�������ռ�
//	scanf("%d", &a);//����һ������
//	printf("%c", a);//������������ַ������
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

//���n�Ľ׳�
//#include <stdio.h>
//int main()
//{
//	int i = 1, a = 0, b = 1;
//	scanf("%d", &a);
//	if (a != 0)//a������1�Ľ׳˼���.
//	{
//		for (i = 1; i < a; i++)
//			b = b * (i + 1);
//	}
//	else
//		b = 1;//0�Ľ׳˾���1
//	printf("%d", b);
//	return 0;
//}

//��1!+2!+...+10!
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 1, b = 1, c = 1;
//	while (a < 10)//��2!��ʼ��10!��9��
//	{
//		b = 1;//��ʼ��bֵ
//		for (i = 0; i < a ; i++)//�ڵڼ����ѭ������
//			b = b * (i + 2);//�����ǰ��Ľ׳�,i = 0ʱ�����2!
//		c = c + b;//Ŀǰ���н׳�֮��
//		a++;//��ʼ��һ��
//	}
//	printf("%d", c);
//	return 0;
//}

//�о����ǿ��Ի����
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
