#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stu {
	char name[20];
	int age;
};

int cmp(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

//int cmp(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}

//int main(void)
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp);
//	
//	int i;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

//int main(void)
//{
//	char arr[] = "fdadwa";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp);
//
//	int i;
//	for (i = 0; i < sz; i++) {
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}



int main(void)
{
	struct Stu arr[] = {{"zhangsan",20},{"lisi",15},{"wangwu",25}};
	int sz = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, sz, sizeof(arr[0]), cmp);

	int i;
	for (i = 0; i < sz; i++) {
		printf("%s ", arr[i].name);
	}
	printf("\n");

	return 0;
}