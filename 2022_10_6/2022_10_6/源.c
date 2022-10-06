#pragma warning (disable:6031)
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//int a = -5;
	//int b = a >> 1;
	//printf("%d\n", b);
	//return 0;
	//int a = 5;
	//int b = 3;
	//a = a ^ b;
	//b = a ^ b;
	//a = a ^ b;
	//printf("%d %d", a, b);
	//return 0;
	//int a = 5;
	//char* p = &a;
	//int i = 0;
	//int n = 0;
	//for (i = 1; i <= 32; i++) {
	//	if (p == 1) {
	//		n++;
	//	}
	//	a = a >> 1;
	//}
	//printf("%d\n", n);
	//printf("%d\n", sizeof(int[10]));
	//char c = 1;
	//printf("%u", sizeof(c));
	//printf("%u", sizeof(+c));
	//printf("%u", sizeof(-c));
	//printf("%u", sizeof(!c));


	//int arr[][3] = { {1,2},{0},{3,4,5} };

	//int n = 0;
	//scanf("%d", &n);
	//int count = 0;
	//while (n) {
	//	if (n % 2 != 0) {
	//		count++;
	//	}
	//	n /= 2;
	//}
	//printf("%d\n", count);
	//return 0;

	//int n = 0;
	//scanf("%d", &n);
	//int count = 0;
	//int i = 0;
	//for (i = 0; i < 32; i++) {
	//	if (((n >> i) & 1) == 1) {
	//		count++;
	//	}
	//}
	//printf("%d\n", count);
	//return 0;

	// 11111111 -1补码
	// 10000010 -2原码
	// 11111110 -2补码
	// 11111110



	//int n = 0;
	//scanf("%d", &n);
	//int count = 0;
	//while (n) {
	//	n = n & (n - 1);
	//	count++;
	//}
	//if (count == 1) {
	//	printf("该数字是二的N次方\n");
	//}
	//else {
	//	printf("该数字不是二的N次方\n");
	//}

	//int x = 0;
	//int y = 0;
	//scanf("%d %d", &x, &y);
	//int i = 0;
	//int count = 0;
	//for (i = 0; i < 32; i++) {
	//	if (((x >> i)&1) != ((y >> i)&1)) {
	//		count++;
	//	}
	//}
	//printf("%d\n", count);
	//return 0;

	//int x = 0;
	//int y = 0;
	//scanf("%d", &x);
	//scanf("%d", &y);
	//int ret = x ^ y;
	//int count = 0;
	//int i = 0;
	//for (i = 0; i < 32; i++) {
	//	if (((ret >> i) & 1) == 1) {
	//		count++;
	//	}
	//}
	//printf("%d\n", count);
	//return 0
	//int n = 0;
	//scanf("%d", &n);
	//int ou[16]={0};
	//int ji[16]={0};
	//int i = 0;
	//for (i = 0; i < 32; i++) {
	//	if (i % 2 == 0) {
	//		ji[i/2] = (n >> i) & 1;
	//	}
	//	else {
	//		ou[i / 2] = (n >> i) & 1;
	//	}
	//}
	//for (i = 0; i < 16; i++) {
	//	printf("%d ", ji[i]);
	//}
	//printf("\n");
	//for (i = 0; i < 16; i++) {
	//	printf("%d ", ou[i]);
	//}
	//return 0;

	//int n = 0;
	//scanf("%d", &n);
	//int i = 0;
	////打印偶数位
	//for (i = 31; i >= 1; i -= 2) {
	//	printf("%d ", (n >> i) & 1);
	//}
	//printf("\n");
	////打印奇数位
	//for (i = 30; i >= 0; i -= 2) {
	//	printf("%d ", (n >> i) & 1);
	//}
	//return 0;
	//int arr[] = { 1,2,3,4,5 };
	//short* p = arr;
	//int i = 0;
	//for (i = 0; i < 4; i++) {
	//	*(p + i) = 0;
	//}
	//for (i = 0; i < 5; i++) {
	//	printf("%d ", arr[i]);
	//}
	//return 0;
	int a = 1;
	char* p = &(char)a;
	if (*p == 1) {
		printf("小端字节序");
	}
	else {
		printf("大端字节序");
	}
	return 0;
}