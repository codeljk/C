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
	//��������ʼ������
	char board[ROW][COL];
	initboard(board, ROW, COL);
	//��ӡ����
	printboard(board, ROW, COL);
	char ret = 0;
	while (1) {
		//�������
		playermove(board, ROW, COL);
		printboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		if(board)
		//��������
		computermove(board, ROW, COL);
		printboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
	}
	if (ret == '*') {
		printf("��ϲ�㣬��Ӯ��\n");
	}
	else if (ret == '#') {
		printf("����ˣ�������\n");
	}
	else {
		printf("ƽ��");
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
			printf("�����������������\n");
		}
	}
	return 0;
}