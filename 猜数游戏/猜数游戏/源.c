#pragma warning (disable:6031)
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("请选择\n");
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
			printf("恭喜你，猜对了，你一共用了%d次\n", num);
		}
		else if (guess < ret) {
			printf("你的数猜小了\n");
		}
		else {
			printf("你的数猜大了\n");
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
			printf("选择错误，请重新选择\n");
		}
	} while (input);
	
	return 0;
}