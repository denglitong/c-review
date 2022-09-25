//
// Created by Litong Deng on 2022/9/23.
//
#define ROW 20
#define COL 30
// 用来标记界面最上面那一行
#define STARTING_ROW 4
#define SCORE_ROW (STARTING_ROW-1)
#define SCORE_COL STARTING_ROW
#define LIFE_ROW (STARTING_ROW-1)
#define LIFE_COL (COL-9)
#define MAX_SNAKE_LEN ((ROW-STARTING_ROW-2)*(COL-2))

//  ANSI escape code
#define ESC 033
#define SNAKE_HEAD "\e[35m■\e[0m"
#define SNAKE_BODY "■"
#define FOOD SNAKE_BODY
#define WALL SNAKE_BODY

#define UP 'W'
#define DOWN 'S'
#define LEFT 'A'
#define RIGHT 'D'

/**
 * 0 --> x
 * |
 * y
 */
struct Coordinates {
    int x; // col
    int y; // row
};


void runSnake();

void clearBoard();

void expandBoard();

void setUpKeyBoard();

char getInputKey();

void gotoxy(int col, int row);

void initialize(int snakeLen, int life, int score);

void movingSnake(char direction, int snakeLen);

void showFood(int snakeLen);

void isKill(int *life, int snakeLen);

void isFoodEaten(int *snakeLen, int *score);

void respondKeyBoard(char *direction, int *snakeLen, int *life, int *score);
