#pragma warning (disable:6031)
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int my_strcpy(const char* str)
//{
//	if (*str != '\0') {
//		return 1 + my_strcpy(str + 1);
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "Hello";
//	int a = my_strcpy(arr);
//	printf("%d\n", a);
//	return 0;
//}

//递归求n的阶乘

//int factorial(int n)
//{
//	if (n > 1) {
//		return n * factorial(n - 1);
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	
//	int x = factorial(n);
//	printf("%d\n", x);
//
//	return 0;
//}

//斐波那契数列

//int Fib(int x)
//{
//	if (x == 1 || x == 2) {
//		return 1;
//	}
//	if (x > 2) {
//		return Fib(x - 1) + Fib(x - 2);
//	}
//}

//斐波那契数列
int Fib(int x)
{
	int a = 1;
	int b = 1;
	int c = a + b;
	int n = 3;
	if (x <= 2) {
		return 1;
	}
	else {
		while (n < x) {
			a = b;
			b = c;
			c = a + b;
			n++;
		}
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int a = Fib(n);
	printf("%d\n", a);
	return 0;
}