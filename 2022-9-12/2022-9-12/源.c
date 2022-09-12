//#include <stdio.h>
//
//void test()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = 0; i < sz; i++) {
//		arr[i] = i + 1;
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	test();
//
//
//	return 0;
//	
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i;
//	for (i = 0; i <= 15; i++) {
//		arr[i] = 0;
//		printf("%d\n", i);
//	}
//	return 0;
//}

#include <stdio.h>

//void my_strcpy(char* dst, char* src)
//{
//	while (*src != '\0') {
//		*dst = *src;
//		dst++;
//		src++;
//	}
//	*dst = *src;
//}
//#include <assert.h>
//
//char* my_strcpy(char* dst, const char* src)
//{
//	assert(dst != NULL);
//	assert(src != NULL);
//	char* ret = dst;
//	while (*dst++ = *src++) {
//		;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxx";
//	char arr2[] = "Hello world!";
//
//	printf("%s\n", my_strcpy(arr1,arr2));
//
//	return 0;
//}

#include <stdio.h>

int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int i = 0;
	for (i = 0; i <= 15; i++) {
		arr[i] = 0;
		printf("hello\n");
	}
	return 0;
}