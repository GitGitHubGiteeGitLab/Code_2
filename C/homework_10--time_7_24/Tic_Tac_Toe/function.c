#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include "game.h"
#include<stdio.h>

void initBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			board[i][j] = ' ';//�ո��ʼ��
		}
	}

}

void DisplayBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			 printf(" %c ", board[i][j]);//��ӡԪ�أ��������ո�
			 if(j < col - 1)printf("|");
		}
		printf("\n");//���д��»���
		if(i < row - 1){
			for (int k = 0; k < col; k++) {
				printf("---");
				if (k < col - 1)printf("|");
			}
		}
        printf("\n");
	}
}

void Player(char board[ROW][COL], int row, int col) {
	int m, n;
	printf("Player��\n");
	while (1) {
		printf("Location:");
		scanf("%d%d", &m, &n);
		//Խ����Ҫ�У����ж�����Ϸ��ԣ����ж�ֵ3
		if (m >= 1 && m <= row && n >= 1 && n <= row) {
			if (board[m - 1][n - 1] == ' ') {
				board[m - 1][n - 1] = '*';
				break;
			}else printf("Invalid input!\n");
		}
		else {
			printf("Invalid input!\n");
		}
	}

}

void Computer(char  board[ROW][COL], int row, int col) {
	int m, n;
	printf("Computer:\n");
	while (1) {
		m = rand() % row, n = rand() % col;
		if (board[m][n] == ' ') {
			board[m][n] = '#';
			break;
		}
	}
}

char Win(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];//��
		}
	}
	for (int j = 0; j < col; j++) {
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ') {
			return board[0][j];//��
		}
	}
	for (int i = 0; i < row - 1; i++) {
		if (board[i][i] != board[i + 1][i + 1])break;
		if (board[i][i] ==' ')break;//���ܸ�ֵ = ==
		if (i == row - 2) return board[i][i];//���ܸ�ֵ = ==,����board[i]
	}
	for (int i = 0, j = col - 1; j > 1; i++, j--) {
		if (board[i][j] != board[i + 1][j - 1])break;
		if (board[i][j] == ' ')break;
		if (i == col - 2) return board[i][j];//����board[i][i]
	}
	for (int i = 0; i < row ; i++) {//����row - 1
		for (int j = 0; j < col ; j++) {
			if (board[i][j] == ' ')return ' ';
		}
	}
	return 'e';
}