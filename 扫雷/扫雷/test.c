#include "saolei.h"

void menu()
{
	printf("***********************\n");
	printf("****    1. play    ****\n");
	printf("****    0. exit    ****\n");
	printf("***********************\n");
}

void initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i, j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			board[i][j] = set;
		}
	}
}

void printboard(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	printf("  ");
	for (i = 1; i <= row; i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++) {
		printf("%d ", i);
		for (j = 1; j <= col; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void setboard(char board[ROWS][COLS], int rows, int cols)
{
	srand((unsigned int)time(NULL));
	int i;
	for (i = 0; i < 10; i++) {
		int x = rand()%9+1;
		int y = rand()%9+1;
		board[x][y] = '1';
	}
}

int number(char board[ROWS][COLS], int rows, int cols, int x, int y)
{
	int i, j;
	int n = 0;
	for (i = -1; i <= 1; i++) {
		for (j = -1; j <= 1; j++) {
			if (board[x+i][y+j] == '1') {
				n++;
			}
		}
	}
	return n;
}

void near(char mineboard[ROWS][COLS], char showboard[ROWS][COLS], int rows, int cols, int x, int y,int* p)
{
	if (showboard[x][y] == '*') {
		(*p)++;
		showboard[x][y] = '0' + number(mineboard, ROWS, COLS, x, y);
		if (showboard[x][y] == '0') {
			int i, j;
			for (i = -1; i <= 1; i++) {
				for (j = -1; j <= 1; j++) {
					if (x + i >= 1 && x + i <= 9 && y + j >= 1 && y + j <= 9) {
						near(mineboard, showboard, rows, cols, x + i, y + j, p);
					}
				}
			}
		}
	}
}

void findboard(char mineboard[ROWS][COLS], char showboard[ROWS][COLS], int rows, int cols)
{
	int x;
	int y;
	int count = 0;
	int* p = &count;
	while (count < 71) {
		scanf_s("%d %d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9) {
			if (mineboard[x][y] == '0') {
				near(mineboard, showboard, rows, cols, x, y, p);
				printboard(showboard, ROW, COL);
			}
			else {
				break;
			}
		}
		else if (x >= -9 && x <= -1 && y >= -9 && y <= -1) {
			if (showboard[-x][-y] == '*') {
				showboard[-x][-y] = '#';
				printboard(showboard, ROW, COL);
			}
			else {
				showboard[-x][-y] = '*';
				printboard(showboard, ROW, COL);
			}
		}
		else {
			printf("输入错误，请重新输入\n");
		}
	}

	if (count==71) {
		printf("恭喜你，游戏胜利\n");
	}
	else {
		printf("游戏结束，你输了\n");
	}

}

void game()
{
	//定义棋盘
	char mineboard[ROWS][COLS];
	char showboard[ROWS][COLS];
	char set1 = '0';
	char set2 = '*';

	//初始化棋盘
	initboard(mineboard, ROWS, COLS, set1);
	initboard(showboard, ROWS, COLS, set2);

	//打印棋盘
	printboard(showboard, ROW, COL);

	//布雷
	setboard(mineboard, ROWS, COLS);

	//进行游戏
	findboard(mineboard, showboard, ROWS, COLS);

}