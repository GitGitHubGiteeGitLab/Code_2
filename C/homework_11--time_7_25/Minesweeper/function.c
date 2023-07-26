#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void initBoard(char(*board)[COLS], char rows, char cols, char ch) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++)
			board[i][j] = ch;//ÿһ����ʼ��������ȫ����ӡ����
	}
}

void DisplayBoard(char(*board)[COLS], char row, char col) {
	printf("\033[33m-------ɨ��-------\n\033[0m");
	//ѭ����ӡһ����������
	for (int i = 0; i <= COL; i++) {
		printf("\033[36m%d ", i);
	}
	printf("\n\033[0m");
	for (int i = 1; i <= COL; i++) {
		printf("\033[36m%d \033[0m", i);
		for (int j = 1; j <= COL; j++) {
			if (board[i][j] == '*' || board[i][j] == '0') { printf("\033[32m%c \033[0m", board[i][j]); continue; }
			if (board[i][j] == '!' || board[i][j] == '/') { printf("\033[31m%c \033[0m", board[i][j]); continue; }
			printf("\033[33m%c \033[0m", board[i][j]);
		}
		printf("\n\033");
	}
	printf("\033[33m-------ɨ��-------\n\033[0m");
}

void SetMine1(char(*board)[COLS], int row, int col) {
	int x, y, cnt = Easy_Count;
	while (cnt) {
		x = rand() % row + 1;
		y = rand() % row + 1;
		if (board[x][y] == '0') {
			board[x][y] = '!';
			cnt--;
		}
	}
}

void SetMine2(char(*board)[COLS], int row, int col) {
	int x, y, cnt = Medium_Count;
	while (cnt) {
		x = rand() % row + 1;
		y = rand() % row + 1;
		if (board[x][y] == '0') {
			board[x][y] = '!';
			cnt--;
		}
	}
}

void SetMine3(char(*board)[COLS], int row, int col) {
	int x, y, cnt = Difficult_Count;
	while (cnt) {
		x = rand() % row + 1;
		y = rand() % row + 1;
		if (board[x][y] == '0') {
			board[x][y] = '!';
			cnt--;
		}
	}
}


//�Ҵ�ӡ���������ַ�������returning char,�����꣨x, y)
int mineCount(char(*mine)[COLS], int row, int col, int x, int y) {
	int cnt = 0;
	for (int i = x - 1; i < x + 2; i++) {
		for (int j = y - 1; j < y + 2; j++) {
			if (mine[i][j] == '!')cnt++;
		}
	}
	return cnt;
}

void revealNonMineCells(char(*mine)[COLS], char(*show)[COLS], int row, int col, int x, int y, int *pwin) {
	if (x < 1 || x > row || y < 1 || y > col)return;
	int count = mineCount(mine, row, col, x, y);   //��ȡ������Χ�׵ĸ���
		if (count == 0){
			(*pwin)++;
			show[x][y] = ' ';   //�����������Χû���ף��ͰѸ������óɿո񣬲�����Χ�˸�����չ��

			for (int i = x - 1; i <= x + 2; i++)
			{
				for (int j = y - 1; j < y + 2; j++)
				{
					if (show[i][j] == '*' && mine[i][j] == '0')    //���Ƶݹ���������ֹ�Ѿ��Ų���������ٴεݹ飬�Ӷ�������ݹ� �� �ԣ�10�� 10��show[10][10]Ϊ'0'��������ҪҲ����ͳ����Χ������ �Լ� mine[i][j]�ǵ��׵�
						revealNonMineCells(mine, show, row, col, i, j, pwin);
				}
			}
		}else{
			(*pwin)++;
			show[x][y] = count + '0';
		}
}

//�������
void MarkMine(char(*show)[COLS], int row, int col, int *pwin, int count) {
	int x = 0, y = 0;
	while (1) {
		if (*pwin == col * row - count)break;
		printf("\033[32mIf you want to mark the location of mine,input y/Y to confirm,or input anything:\033[0m");
		char ch;
		while ((ch = getchar()) != '\n' && ch != ' ');//��ջ�����
		scanf("%c", &ch);
		if (ch != 'y' && ch != 'Y')break;
	 input:
		printf("\033[32mInput mark(x y)->\033[0m");
		scanf("%d%d", &x, &y);
		if (1 <= x && x <= row && 1 <= y || y <= col) {
			if (show[x][y] == '*' ) {//�е������
				show[x][y] = '/';//��ֵ�����
				system("cls");
				DisplayBoard(show, row, col);
			}else {
				printf("\033[31mPosition has been occpied\n\033[0m");
				goto input;
				continue;
			}
		}else {
			printf("\033[31mInvalid Input\n\033[0m");
			goto input;
			continue;
		}
	}	
}



void is_Mine1(char(*mine)[COLS], char(*show)[COLS], int row, int col) {
	int x, y, win = 0;
	while (win < col * row - Easy_Count) {
		printf("\033[32mInput(x y)->\033[0m");
		scanf("%d%d", &x, &y);
		if (1 <= x && x <= row && 1 <= y && y <= col) {
			if (mine[x][y] == '!') {
				system("cls");
				printf("\033[31m       Bomb!\n\033[0m");
				DisplayBoard(mine, row, col);
				break;
			}else if (show[x][y] != '*' && show [x][y] != '/') {//ʵ�ֱ�ǹ��ܣ���ֹ����Ҫ���ظ����
				printf("\033[31mRepeated Search\n\033[0m");
			}else {
				system("cls");
				revealNonMineCells(mine, show, row, col, x, y, &win); //winҲ�ڱ�
				DisplayBoard(show, row, col);
				//��ǹ���
				MarkMine(show, row, col, &win, Easy_Count);
			}
		}else {
			printf("\033[31mInvaild Input\n\033[0m");
		}
	}
	if (win == col * row - Easy_Count) {
		system("cls");
		printf("\033[32m       Win!\n\033[0m");
		DisplayBoard(mine, row, col);
	}
}



void is_Mine2(char(*mine)[COLS], char(*show)[COLS], int row, int col) {
	int x, y, win = 0;
	while (win < col * row - Medium_Count) {
		printf("\033[32mInput(x y)->\033[0m");
		scanf("%d%d", &x, &y);
		if (1 <= x && x <= row && 1 <= y && y <= col) {
			if (mine[x][y] == '!') {
				system("cls");
				printf("\033[31m       Bomb!\n\033[0m");
				DisplayBoard(mine, row, col);
				break;
			}
			else if (show[x][y] != '*' && show[x][y] != '/') {//ʵ�ֱ�ǹ��ܣ���ֹ����Ҫ���ظ����
				printf("\033[31mRepeated Search\n\033[0m");
			}
			else {
				system("cls");
				revealNonMineCells(mine, show, row, col, x, y, &win); //winҲ�ڱ�
				DisplayBoard(show, row, col);
				//��ǹ���
				MarkMine(show, row, col, &win, Medium_Count);
			}
		}
		else {
			printf("\033[31mInvaild Input\n\033[0m");
		}
	}
	if (win == col * row - Medium_Count) {
		system("cls");
		printf("\033[32m       Win!\n\033[0m");
		DisplayBoard(mine, row, col);
	}
}

void is_Mine3(char(*mine)[COLS], char(*show)[COLS], int row, int col) {
	int x, y, win = 0;
	while (win < col * row - Difficult_Count) {
		printf("\033[32mInput(x y)->\033[0m");
		scanf("%d%d", &x, &y);
		if (1 <= x && x <= row && 1 <= y && y <= col) {
			if (mine[x][y] == '!') {
				system("cls");
				printf("\033[31m       Bomb!\n\033[0m");
				DisplayBoard(mine, row, col);
				break;
			}
			else if (show[x][y] != '*' && show[x][y] != '/') {//ʵ�ֱ�ǹ��ܣ���ֹ����Ҫ���ظ����
				printf("\033[31mRepeated Search\n\033[0m");
			}
			else {
				system("cls");
				revealNonMineCells(mine, show, row, col, x, y, &win); //winҲ�ڱ�
				DisplayBoard(show, row, col);
				//��ǹ���
				MarkMine(show, row, col, &win, Difficult_Count);
			}
		}
		else {
			printf("\033[31mInvaild Input\n\033[0m");
		}
	}
	if (win == col * row - Difficult_Count) {
		system("cls");
		printf("\033[32m       Win!\n\033[0m"); 
		DisplayBoard(mine, row, col);
	}
}