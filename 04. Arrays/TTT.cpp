#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

const int N = 3;
const char EMPTY = '-';
const char X = 'X';
const char O = 'O';
char board[N][N];

void printBoard(){
    for(int i = 0; i < N; i++){
        for(int j = 0 ; j < N; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

void initBoard(){
    for(int i = 0; i < N; i++){
        for(int j = 0 ; j < N; j++){
            board[i][j] = EMPTY;
        }
    }
}

void inputBoard(){
    for(int i = 0; i < N; i++){
        for(int j = 0 ; j < N; j++){
            cin >> board[i][j];
        }
    }
}

void inputUserCoordinates(){
    int x, y;
    do{
        cout << "Input valid coordinates: " <<  endl;
        cin >> x >> y;
    } while((x >= N or x < 0) or (y >= N or y < 0) or board[x][y] != EMPTY);
    board[x][y] = X;
    printBoard();
}

void generateComputerCoordinates(){
    int x, y;
    do{
        x = rand() % N;
        y = rand() % N;
    } while(board[x][y] != EMPTY);
    cout << "computer chose: " << x << " " << y << endl;
    board[x][y] = O;
    printBoard();
}

char wonOnRowsOrCols(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(board[i][j] != EMPTY){
                /// could be boolean flag starting as true
                int cnt = 0;
                for(int k = 0; k < N; k++){
                    if(board[i][k] == board[i][j]){
                        cnt++;
                    }
                }
                if(cnt == N){
                    cout << "row: " << i <<  endl;
                    return board[i][j];
                }

                cnt = 0;
                for(int k = 0; k < N; k++){
                    if(board[k][j] == board[i][j]){
                        cnt++;
                    }
                }
                if(cnt == N){
                    cout << "col: " << j << endl;
                    return board[i][j];
                }
            }
        }
    }

    return 'T';
}


int main(){
    srand(time(nullptr));
    inputBoard();
    printBoard();
    /*while(true){
        inputUserCoordinates();
        generateComputerCoordinates();
    }*/
    cout << wonOnRowsOrCols() <<  endl;
}

/*
+ init board
+ print board
+ input user coordinates
+ generate computer coordinates
- is game over?
	- game won?
		+ won on rows?
		+ won on columns?
		- won on diagonals?
	- game tied?
		- 0 empty cells (and no winner from above functions)
- play the game / game manager
*/


/*

XXO
XOX
XOO

OXO
XXX
OOX

OXO
XXO
XOO

XXX
XOO
OXO

XOX
XXO
OOO

XOX
OXO
OXO

X-X
XOO
---

*/
