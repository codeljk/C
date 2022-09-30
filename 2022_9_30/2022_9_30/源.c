//#pragma warning (disable:6031)
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int my_strlen(char* str)
//{
//	if (*str != '\0') {
//		return 1+my_strlen(str + 1);
//	}
//}
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right) {
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//
//
//	char arr[] = "Hello";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//
//}
#include <stdio.h>

int main()
{
	int a = 1;
	printf("%d\n", &a);
	printf("%p\n", &a);
	return 0;
}