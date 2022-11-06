/* //lab1 - 배열에 출석 기록하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 16

int main(void)
{
	int att_book[SIZE] = { 0 };
	int i, count = 0;

	//사용자로부터 출석인지 결석인지를 받아서 배열에 저장.
	for (i = 0; i < SIZE; i++)	
	{
		printf("%d번째 강의에 출석하셨나요(출석은 1, 결석은 0): ", i + 1);
		scanf("%d", &att_book[i]);
	}

	//배열을 검사하여서 결석한 횟수 계산.
	for (i = 0; i < SIZE; i++)
	{
		if (att_book[i] == 0)
			count++;
	}

	//이번 학기 결석률 계산.
	double ratio = count / 16.0;
	if (ratio > 0.3)
		printf("수업 일수 부족입니다(%f%%). \n", ratio * 100.0);

	return 0;
}
*/
/* //lab2 - 가장 싼 물건 찾기
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int prices[SIZE] = { 12, 3, 19, 6, 18, 8, 12 ,4, 1, 19 };
	int i, minimum;

	printf("[ ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", prices[i]);
	}
	printf("]\n");

	minimum = prices[0];
	for (i = 1; i < SIZE; i++)
	{
		if (prices[i] < minimum)
			minimum = prices[i];
	}
	printf("최소값은 %d입니다. \n", minimum);
	
	return 0;
}
*/
/* //lab3 - 배열에서 특정한 값 탐색하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int key, i;
	int list[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	printf("[ ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", list[i]);
	}
	printf("]\n");

	printf("탐색할 값을 입력하시오:");
	scanf("%d", &key);

	for (i = 0; i < SIZE; i++)
	{
		if (list[i] == key)
		{
			printf("탐색 성공 인덱스= %d \n", i);
			break;
		}
	}

	return 0;
}
*/
/* // lab4 - 그래픽으로 나타내는 버블 정렬
#include <windows.h>
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int list[SIZE] = { 100, 30, 20, 78, 89, 12, 56, 38, 99, 66 };

	for (int k = 0; k < SIZE; k++)
	{
		system("cls");
		for (int i = 0; i < SIZE - 1; i++)
		{
			if (list[i] > list[i + 1])
			{
				int tmp = list[i]; list[i] = list[i + 1]; list[i + 1] = tmp;
			}
		}
		for (int i = 0; i < SIZE; i++)
		{
			for (int m = 0; m < list[i] / 10; m++)
				printf("*");
			printf("\n");
		}
		_getch();
	}

	return 0;
}
*/
/* // lab5 - 행렬 더하기
#include <stdio.h>
#define ROWS 3
#define COLS 3

int main(void)
{
	int r, c;

	int A[ROWS][COLS] = { {1,0,0},{0,1,0},{0,0,1} };
	int B[ROWS][COLS] = { {1,0,0},{0,1,0},{0,0,1} };
	int C[ROWS][COLS];

	// 두개의 행렬을 더한다.
	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
		{
			C[r][c] = A[r][c] + B[r][c];
			printf("%d ", C[r][c]);
		}
		printf("\n");
	}

	return 0;
}
*/
/* //miniproject - tictactoe
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define player1 'O'-' '
#define player2 'X'-' '

int board[3][3];
int win;
void displayBoard();		
int checkWin();			
void inputBoard(int);	
void printWinner();

int main() 
{

	int i;
	
	for (i = 0; i < 9; i++) 
	{
		displayBoard();
		win = checkWin();
		if (win) break;
		inputBoard(i);
	}

	printWinner();

	return 0;
}

void displayBoard() 
{
	int i;
	system("cls");
	printf("---|---|---\n");
	for (i = 0; i < 3; i++) 
	{
		printf(" %c | %c | %c\n", board[i][0]+' ', board[i][1]+' ', board[i][2]+' ');
		printf("---|---|---\n");
	}
}
void inputBoard(int n) 
{
	int play;
	int x, y;

	if (n % 2) play = player2;
	else play = player1;

	do {
		printf("\n");
		printf("(x, y) 좌표 : ");
		scanf("%d %d", &x, &y);
	} while (2 < x || x < 0 || 2 < y || y < 0 || board[x][y]);

	board[x][y] = play;
}

int checkWin() 
{
	int i;

	for (i = 0; i < 3; i++) 
	{
		if (board[i][0] != 0) 
		{		
			if (board[i][0] == board[i][1])
				if (board[i][0] == board[i][2])
				return board[i][0];
		}
	
		if (board[0][i] != 0) 
		{
			if (board[0][i] == board[1][i])
				if (board[0][i] == board[2][i])
					return board[0][i];
		}
	}

	if (board[0][0] != 0)
		if (board[0][0] == board[1][1])
			if (board[0][0] == board[2][2])
				return board[0][0];

	if (board[0][2] != 0)
		if (board[0][2] == board[1][1])
			if (board[0][2] == board[2][0])
				return board[0][2];
	return 0;
}

void printWinner()
{
	printf("\n");
	if (win == player1)
		printf("첫번째 플레이어 승리!");
	else if (win == player2)
		printf("두번째 플레이어 승리!");
	else
		printf("무승부!");
}
*/