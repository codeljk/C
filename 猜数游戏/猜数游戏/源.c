#pragma warning (disable:6031)
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("��ѡ��\n");
	printf("**************************\n");
	printf("*****     1.start    *****\n");
	printf("*****     0.exit     *****\n");
	printf("**************************\n");
}

void game()
{
	int ret = rand()%100+1;
	int guess = 0;
	int num = 0;
	do {
		scanf("%d", &guess);
		num++;
		if (guess == ret) {
			printf("��ϲ�㣬�¶��ˣ���һ������%d��\n", num);
		}
		else if (guess < ret) {
			printf("�������С��\n");
		}
		else {
			printf("������´���\n");
		}
	} while (guess != ret);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		scanf("%d", &input);
		if (input == 1) {
			game();
			break;
		}
		else if (input == 0) {
			break;
		}
		else {
			printf("ѡ�����������ѡ��\n");
		}
	} while (input);
	
	return 0;
}