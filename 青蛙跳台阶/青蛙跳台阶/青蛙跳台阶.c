#pragma warning (disable:6031)
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Frog(int n)
{	//��nΪ1ʱ��ֻ��һ������
	if (n == 1) {
		return 1;
	}
	//��n=2ʱ��ֻ����������
	else if (n == 2) {
		return 2;
	}
	//��n>2ʱ������õݹ�������ܵ�����
	else {
		return Frog(n - 1) + Frog(n - 2);
	}
}

int main()
{
	//������n��̨����
	int n = 0;
	scanf("%d", &n);
	int num = Frog(n);
	printf("һ����%d������\n", num);
	return 0;
}