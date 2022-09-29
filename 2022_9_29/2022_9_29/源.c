//#pragma warning (disable:6031)
////#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>

//int is_prime(int n)
//{
//	return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
//}
//
//int main() {
//	int i = 0;
//	for (i = 1000; i <= 2000; i++) {
//		if (is_prime(i)) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int binary_search(int arr[], int sz, int k)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] < k) {
//			left = mid + 1;
//			continue;
//		}
//		else if (arr[mid] > k) {
//			right = mid - 1;
//			continue;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//
//	int i = binary_search(arr, sz, k);
//
//	if (i == -1) {
//		printf("找不到这个数字\n");
//	}
//	else {
//		printf("找到了，这个数字下标是%d\n", i);
//	}
//
//	return 0;
//}

//int main() {
//	printf("%d\n", printf(""));
//	return 0;
//}

//
