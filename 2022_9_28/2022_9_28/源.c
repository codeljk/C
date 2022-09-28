#pragma warning (disable:6031)
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int main()
{
	////Õ·×ªÏà³ý·¨
	//int m = 0;
	//int n = 0;
	//scanf("%d %d", &m, &n);
	//if (m < n) {
	//	int tmp = m;
	//	int m = n;
	//	int n = tmp;
	//}
	//int t = 0;
	//while (m % n) {
	//	t = m % n;
	//	m = n;
	//	n = t;
	//}
	//printf("%d\n", n);
	//return 0;


	int i = 0;
	for (i = 100; i <= 200; i++) {
		int j = 0;
		for (j = 2; j < (int)sqrt(i*1.0); j++) {
			if (i % j == 0) {
				break;
			}
		}
		if ( i == j ) {
			printf("%d\n",i);
		}
	}

	return 0;






}