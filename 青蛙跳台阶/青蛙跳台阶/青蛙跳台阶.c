#pragma warning (disable:6031)
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Frog(int n)
{	//当n为1时，只有一种跳法
	if (n == 1) {
		return 1;
	}
	//当n=2时，只有两种跳法
	else if (n == 2) {
		return 2;
	}
	//当n>2时，便可用递归计算青蛙的跳法
	else {
		return Frog(n - 1) + Frog(n - 2);
	}
}

int main()
{
	//跳到第n个台阶上
	int n = 0;
	scanf("%d", &n);
	int num = Frog(n);
	printf("一共有%d种跳法\n", num);
	return 0;
}