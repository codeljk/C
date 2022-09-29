#pragma warning (disable:6031)
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "add.h"

int main()
{
	int a = 10;
	int b = 20;
	int c = add(a, b);
	printf("%d\n", c);
	return 0;
}