#pragma once
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#define ROW 3
#define COL 3

//�˵�
void menu();

//game
void game();

//��ʼ������
void initBoard(char board[ROW][COL], int row, int col);//Ϊʲôchar** board����

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�����
void Player(char board[ROW][COL], int row, int col);

//������
void Computer(char board[ROW][COL], int row, int col);

//��ʤ��
char Win(char board[ROW][COL], int row, int col);
