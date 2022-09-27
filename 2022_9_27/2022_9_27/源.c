#pragma warning (disable:6031)
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	//char arr1[20];
	//char arr2[20];
	//scanf("%s", &arr1);
	//scanf("%s", &arr2);
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);

	//int tmp = 0;
	//while ((tmp = getchar()) != '\n') {
	//	;
	//}
	//getchar
	//int n = 0;
	//int sum = 0;
	//for (n = 1; n <= 10; n++) {
	//	int i = 0;
	//	int m = 1;
	//	for (i = 1; i <= n; i++) {
	//		m *= i;
	//	}
	//	sum += m;
	//}
	//printf("%d\n", sum);


	//return 0;


	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int k = 7;

	//int left = 0;
	//int right = sz - 1;

	//while (left<=right) {

	//	int mid = (left + right) / 2;

	//	if (arr[mid] < k) {
	//		left = mid + 1;
	//	}
	//	else if (arr[mid] > k) {
	//		right = mid - 1;
	//	}
	//	else if (arr[mid] == k) {
	//		printf("找到了，该元素下标是：%d\n", mid);
	//		break;
	//	}
	//}

	//if (left > right) {
	//	printf("对不起，没有找到该元素\n");
	//}

	//return 0;

	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int k = 7;

	//int left = 0;
	//int right = sz - 1;

	//while (left <= right) {

	//	int mid = (left + right) / 2;

	//	if (arr[mid] < k) {
	//		left = mid + 1;
	//	}
	//	else if (arr[mid] > k) {
	//		right = mid - 1;
	//	}
	//	else if (arr[mid] = k) {
	//		printf("找到了，下标是：%d\n", mid);
	//		break;
	//	}

	//}

	//if (left > right) {
	//	printf("没有找到该元素\n");
	//}

	//return 0;
	
	//char arr1[] = {"Hello world!"};
	//char arr2[] = {"############"};
	//int sz = sizeof(arr1) / sizeof(arr1[0]);
	//int left = 0;
	//int right = sz - 1 - 1;
	//printf("%s\n", arr2);
	//while (left <= right) {
	//	Sleep(1000);
	//	system("cls");
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	left++;
	//	right--;
	//}
	//return 0;

	//char arr[20] = { 0 };
	//int i = 0;
	//for (i = 0; i < 3; i++) {
	//	scanf("%s", &arr);
	//	if (strcmp(arr, "123456") == 0) {
	//		printf("输入正确\n");
	//		break;
	//	}
	//	else {
	//		printf("输入错误，重新输入\n");
	//	}
	//}
	//if (i == 3) {
	//	printf("三次均输入错误\n");
	//}

	//return 0;

	srand((unsigned int)time(NULL));
	int ret = rand();
	printf("%d\n", ret);
	return 0;















}
