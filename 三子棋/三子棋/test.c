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
	//��ʼ������
	char board[ROW][COL];
	initboard(board, ROW, COL);
	//��ӡ����
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
			printf("�뿪��Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}