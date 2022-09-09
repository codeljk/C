#include <stdio.h>

void bubble_sort(int arr[], int sz)
{
	int i;
	for (i = 0; i < sz-1; i++) {
		int j;
		for (j = 0; j < sz - 1 - i; j++) {
			while (arr[j] > arr[ j + 1 ]) {
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
}

print(int arr[], int sz)
{
	int i;
	for (i = 0; i < sz; i++) {
		printf("%d ");
	}
	printf("\n");
}

int main(void)
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	print(arr, sz);
	return 0;
}