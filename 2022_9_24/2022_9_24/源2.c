#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//
//	//printf("%d\n", a);
//	//int b = 0;
//	//{
//	//	scanf("%d", &b);
//	//	int b = 1;
//	//	printf("%d\n", b);
//	//}
//
//	//float f = 0;
//	//double d = 0;
//	//scanf("%f", &f);
//	//scanf("%lf", &d);
//	//printf("%f\n", f);
//	//printf("%f\n", d);
//
//	//这些枚举类型的变量的未来的可能取值
//
//
//
//	return 0;
//}


//enum Sex {
//	// 这些枚举类型变量未来的可能取值
//	// 枚举常量
//	MALE ,
//	FEMALE,
//	SECRET
//};
#include <string.h>

int main()
{
	//printf("%d\n", MALE);        // 0
	//printf("%d\n", FEMALE);      // 1
	//printf("%d\n", SECRET);      // 2

	//return 0;

	char arr1[] = "hello";
	char arr2[] = { 'h','e','l','l','o' };

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr2));

	return 0;
}