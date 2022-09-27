#pragma warning (disable:6031)
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//scanf("%d %d %d", &a, &b, &c);
	//int tmp = 0;
	//if (a < b) {
	//	tmp = a;
	//	a = b;
	//	b = tmp;
	//}
	//if (a < c) {
	//	tmp = a;
	//	a = c;
	//	c = tmp;
	//}
	//if (b < c) {
	//	tmp = b;
	//	b = c;
	//	c = tmp;
	//}
	//printf("%d %d %d\n", a, b, c);
	//return 0;
	//int i = 0;
	//for (i = 0; i <= 100; i++) {
	//	if (i % 3 == 0) {
	//		printf("%d\n",i);
	//	}
	//}
	//printf("\n");
	//return 0;

	//int a, b;
	//scanf("%d %d", &a, &b);
	//int max = a > b ? b : a;
	//while (1) {
	//	if (a % max == 0 && b % max == 0) {
	//		printf("最大公约数为%d\n", max);
	//		break;
	//	}
	//	max--;
	//}
	//return 0;

	int m = 0;
	int n = 0;
	int t = 0;
	scanf("%d %d", &m, &n);
	if (m < n) {
		int tmp = m;
		m = n;
		n = tmp;
	}
	while (m % n) {
		t = m % n;
		m = n;
		n = t;
	}
	printf("最大公约数是%d\n", t);
	return 0;
}