#pragma warning (disable:6031)
#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}
void printboard(char board[ROW][COL], int row, int col) {
	system("cls");
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1) {
			printf("---|---|---\n");
		}
	}
}
void playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1) {
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("你输入的坐标被占用了，请重新输入\n");
			}
		}
		else {
			printf("你输入的坐标非法，请重新输入\n");
		}
	}
}
void computermove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	srand((unsigned int)time(NULL));
	while (1) {
		x = rand() % 3;
		y = rand() % 3;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}
}
char iswin(char board[ROW][COL], int row, int col) {
	//若返回*，玩家胜利；若返回#，电脑胜利；若返回C，游戏继续；若返回D，平局；
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
			break;
		}
	}
	for (i = 0; i < col; i++) {
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ') {
			return board[0][i];
			break;
		}
	}
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ') {
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ') {
		return board[0][2];
	}
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return 'C';
			}
		}
	}
	return 'D';
}