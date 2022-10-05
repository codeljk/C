#pragma warning (disable:6031)
#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu() {
	printf("***************************\n");
	printf("*****      1. play    *****\n");
	printf("*****      0. exit    *****\n");
	printf("***************************\n");
}

void game() {
	//定义棋盘
	
}

int main()
{
	int input = 0;
	while (1) {
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
			printf("输入错误，请重新输入\n");
		}
	}
}