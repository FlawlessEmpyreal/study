#define  _CRT_SECURE_NO_WARNINGS 1
#include <assert.h>
#include <stdio.h>

//int My_strlen(const char* str)
//{
//	assert(*str != NULL);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()//实现strlen
//{
//	char arr[20];
//	scanf("%s", arr);
//	int ret = My_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}

//void My_strcpy(char *des, const char *sou)
//{
//	assert(des && sou != 0);
//	char *ret1=des;
//  char *ret2=sou;
//	while (*sou++)
//	{
//		des++;
//		*des = *sou;
//	}
//  *ret1=*ret2;
//}
//
//int main()//实现strcpy
//{
//	char arr1[20];
//	char arr2[20];
//	scanf("%s %s", arr1, arr2);
//	My_strcpy(arr2, arr1);
//	printf("%s\n", arr1);
//	printf("%s", arr2);
//	return 0;
//}

//char* My_strcat(char* dest, const char*sour)
//{
//	char* ret1 = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while(*dest++ = *sour++)
//	{
//		;
//	}
//	return ret1;
//}
//int main()
//{
//	char arr1[20];
//	char arr2[20];
//	scanf("%s %s", arr1, arr2);
//	//char *ret = My_strcat(arr2, arr1);
//	printf("%s\n", My_strcat(arr2, arr1));
//	return 0;
//}

int My_strcmp(const char *ch1,const char *ch2)
{
	assert(ch1 && ch2);
	while (*ch1 == *ch2)
	{
		ch1++;
		ch2++;
	}
	if (*ch1 == '\0'&&*ch2 == '\0')
		return 0;
	else if (*ch1 < *ch2)
		return -1;
	else 
		return 1;
}
int main()//实现strcmp
{
	char arr1[20];
	char arr2[20];
	scanf("%s %s", arr1, arr2);
	printf("%d", My_strcmp(arr1, arr2));
	return 0;
}