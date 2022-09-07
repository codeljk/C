#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

void menu();
void game();
void initboard(char board[ROWS][COLS], int rows, int cols, char set);
void printboard(char board[ROWS][COLS], int row, int col);
void setboard(char board[ROWS][COLS], int rows, int cols);
void findboard(char board[ROWS][COLS],char showboard[ROWS][COLS], int rows, int cols);
int number(char board[ROWS][COLS], int rows, int cols, int x, int y);
void near(char mineboard[ROWS][COLS], char showboard[ROWS][COLS], int rows, int cols, int x, int y, int* p);
