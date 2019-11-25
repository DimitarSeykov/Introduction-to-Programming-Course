#include <iostream>
using namespace std;

void printOddRows(int arr[][100], int n, int m){
    for(int i = 0; i < n; i++){
        if(i % 2 == 1){
            for(int j = 0; j < m; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}

void printReversedOddRows(int arr[][100], int n, int m){
    for(int i = 0; i < n; i++){
        if(i % 2 == 1){
            for(int j = m - 1; j >= 0; j--){
                cout << arr[i][j] << " ";
            }
        } else {
            for(int j = 0; j < m; j++){
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}


void printAboveMainDiagonal(int arr[][100], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i <= j){
                cout << arr[i][j] << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void printAboveSecondaryDiagonal(int arr[][100], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j <= n - 1){
                cout << arr[i][j] << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}


void matMul(int mat1[][100], int mat2[][100], int n){
    int res[100][100];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            res[i][j] = 0;
            for(int k = 0; k < n; k++){
                res[i][j] += (mat1[i][k] * mat2[k][j]);
            }

        }
    }

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n; j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}


int main(){
    int n, m, arr[100][100], arr2[100][100];

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            //cout << arr[i][j] << " ";
        }
        //cout << endl;
    }

    int n1, m1;
    cin >> n1 >> m1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr2[i][j];
            //cout << arr[i][j] << " ";
        }
        //cout << endl;
    }



    cout << endl;
    //printAboveSecondaryDiagonal(arr, n);
    matMul(arr, arr2, n);

}


/*
4 4
1 2 3 4
2 3 4 5
3 4 5 6
4 5 6 7

4 4
3 4 5 6
8 7 6 1
-5 6 -5 9
1 1 1 1

*/
