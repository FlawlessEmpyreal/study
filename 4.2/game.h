#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game();
void Init_board(char board[ROW][COL], int row, int col);
void Display_board(char board[ROW][COL], int row, int col);
void Player_move(char board[ROW][COL], int row, int col);
void Computer_move(char board[ROW][COL], int row, int col);
char is_win(char board[ROW][COL], int row, int col);