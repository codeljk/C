#pragma warning (disable:6031)
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void Hanoi(int n, char pos1, char pos2, char pos3)
//{
//	if (n == 1) {
//		printf("%c->%c ", pos1, pos3);
//	}
//	else {
//		Hanoi(n - 1, pos1, pos3, pos2);
//		printf("%c->%c ", pos1, pos3);
//		Hanoi(n - 1, pos2, pos1, pos3);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Hanoi(n, 'A', 'B', 'C');
//	return 0;
//}

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++) {
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	//int arr[10] = { 0 };
	//int i = 0;
	//for (i = 0; i < 10; i++) {
	//	printf("%p\n", &arr[i]);
	//}
	//return 0;
	//int a[3][4] = { {1,2},{3,4},{5,6} };
	//int* p = a;
	//int i = 0;
	//for (i = 0; i < 12; i++) {
	//	printf("%d\n", *p++);
	//}
	//return 0;

	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}