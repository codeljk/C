#include <stdio.h>

//用户输入的比较函数
int cmp(const void* e1, const void* e2)
{
	//return *(char*)e1 - *(char*)e2;
	return *(int*)e1 - *(int*)e2;
}


void swap(char* buf1, char* buf2, int width)
{
	int i;
	for (i = 0; i < width; i++) {
		int t = *buf1;
		*buf1 = *buf2;
		*buf2 = t;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int num, int width, int (*compare)(const void* e1, const void* e2))
{
	//冒泡排序
	int i;
	for (i = 0; i < num - 1; i++) {
		int j;
		for (j = 0; j < num - 1 - i; j++) {
			//利用用户输入的cmp函数进行判断
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width) > 0) {
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int main(void)
{
	//定义数组并调用模拟的qsort函数
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),cmp);
	
	//打印数组
	int i;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}