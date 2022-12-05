// 전자정보공학부 IT융합전공 20221594 류석준 프로그래밍및실습 9장 lab/miniproject 과제
/* // lab: 유용한 배열 함수 작성
#include <stdio.h>
#define SIZE 5
double get_array_avg(int values[], int n);
void print_array(int values[], int n);

int main() {
    int i;
    int data[SIZE] = { 10,20,30,40,50 };
    double result;

    print_array(data, SIZE);
    result = get_array_avg(data, SIZE);
    printf("배열 원소들의 평균 = %f\n", result);
    return 0;
}

// 배열 요소의 평균을 계산하는 함수
double get_array_avg(int values[], int n) {
    int i;
    double sum = 0.0;
    for (i = 0; i < n; i++) {
        sum += values[i];
    }
    return sum / n;
}

// 배열 요소를 화면에 출력하는 함수
void print_array(int values[], int n) {
    int i;
    printf("[");
    for (i = 0; i < n; i++) {
        printf("%d ", values[i]);
    }
    printf("]\n");
}
*/
// miniproject: 어드벤쳐 게임 만들기 // 포인터를 주로 사용해보았다.
/*
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SIZE 10
int arr[SIZE][SIZE]; // 게임 보드

void GameInit(int *p1, int *p2, int *x1, int *y1, int *x2, int *y2, int *g1, int *g2) { // 어드벤쳐 게임 초기화 함수
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            arr[i][j] = 0;
        }
    }
    arr[*p1][*p2] = 1; // 주인공 플레이어 '#'
    arr[*g1][*g2] = 100; // 금 'G'
    arr[*x1][*y1] = 2; // 몬스터 'M' 1
    arr[*x2][*y2] = 3; // 몬스터 'M' 2
}

void GamePrint() { // 어드벤쳐 게임 프린트 함수
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (arr[i][j] == 1) printf("#");
            else if (arr[i][j] == 2) printf("M");
            else if (arr[i][j] == 100) printf("G");
            else printf(".");
        }
        printf("\n");
    }
}

void MoveMonster(int *p1, int *p2, int *x1, int *y1, int *x2, int *y2) { // 몬스터 랜덤 이동 함수
    for (;;) {
        *x1 = rand() % 9; *y1 = rand() % 9;
        *x2 = rand() % 9; *y2 = rand() % 9;
        if (*x1 != *p1 && *y1 != *p2 && *x2 != *p1 && *y2 != *p2 && *x1 != *x2 && *y1 != *y2) break;
    }
}

int main() {
    int p1 = 0, p2 = 0; // 주인공 플레이어 '#'
    int x1 = 4, y1 = 4, x2 = 5, y2 = 5; // 몬스터 'M' 1, 몬스터 'M' 2;
    int g1 = 9, g2 = 9; // 금 'G'
    char control; // 유저 wasd 컨트롤 변수 선언

    GameInit(&p1, &p2, &x1, &y1, &x2, &y2, &g1, &g2);
    GamePrint();

    while (1) {
        if (p1 == g1 && p2 == g2) {
            printf("어드벤쳐 게임 승리!\n");
            break;
        }
        control = _getch();
        switch (control) {
        case 'w':
            if (p1 == 0 || p1 == x1 || p1 == x2) break;
            arr[p1][p2] = 0;
            p1--;
            break;
        case 's':
            if (p1 == 9 || p1 == x1 || p1 == x2) break;
            arr[p1][p2] = 0;
            p1++;
            break;
        case 'a':
            if (p2 == 0 || p2 == y1 || p2 == y2) break;
            arr[p1][p2] = 0;
            p2--;
            break;
        case 'd':
            if (p2 == 9 || p2 == y1 || p2 == y2) break;
            arr[p1][p2] = 0;
            p2++;
            break;
        }
        arr[p1][p2] = 1;
        arr[x1][y1] = 0;
        arr[x2][y2] = 0;

        MoveMonster(&p1, &p2, &x1, &y1, &x2, &y2);

        arr[x1][y1] = 2;
        arr[x2][y2] = 2;

        system("cls");
        GamePrint();
    }
}
*/