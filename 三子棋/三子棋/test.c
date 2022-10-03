#pragma warning (disable:6031)
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("*****     1.play    ******\n");
	printf("*****     0.exit    ******\n");
	printf("**************************\n");
}

void game()
{
	//初始化棋盘
	char board[ROW][COL];
	initboard(board, ROW, COL);
	//打印棋盘
	displayboard(board,ROW,COL);
}

int main()
{
	int input = 0;
	do {
		menu();
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("离开游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}