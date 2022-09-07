#include <stdio.h>

void reverse(int a[], int len)
{
	int t;
	int left = 0;
	int right = len - 1;
	while (left < right) {
		t = a[left];
		a[left] = a[right];
		a[right] = t;
		left++;
		right--;
	}
}

int main(void)
{
	int a[] = { 0,1,2,3,4,5 };
	int len = sizeof(a) / sizeof(a[0]);
	reverse(a, len);
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}