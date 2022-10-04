#pragma warning (disable:6031)
#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("***********************\n");
	printf("*****    1.play   *****\n");
	printf("*****    0.exit   *****\n");
	printf("***********************\n");
}

void game()
{
	//创建并初始化棋盘
	char board[ROW][COL];
	initboard(board, ROW, COL);
	//打印棋盘
	printboard(board, ROW, COL);
	char ret = 0;
	while (1) {
		//玩家下棋
		playermove(board, ROW, COL);
		printboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		if(board)
		//电脑下棋
		computermove(board, ROW, COL);
		printboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
	}
	if (ret == '*') {
		printf("恭喜你，你赢了\n");
	}
	else if (ret == '#') {
		printf("你真菜，你输了\n");
	}
	else {
		printf("平局");
	}
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
	return 0;
}