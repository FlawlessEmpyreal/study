#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 3
#define COL 3
#define MINE_COUNT 6

#define ROWS ROW+2
#define COLS COL+2

void Init_board(char arr[ROWS][COLS], int rows, int cols, char set);

void Display_board(char board[ROWS][COLS], int row, int col);

void set_mine(char arr[ROWS][COLS], int row, int col, int count);

void Find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);