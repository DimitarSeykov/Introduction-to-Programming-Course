#include <iostream>
#include <utility>

using namespace std;

void swapInts(int& a, int& b){
    int c = a;
    a = b;
    b = c;
}

/*
void increment(int& a){
    a++;
}
*/


void selectionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int minEl = arr[i],
            minElIdx = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < minEl){
                minEl = arr[j];
                minElIdx = j;
            }
        }
        swapInts(arr[i], arr[minElIdx]);
    }

}

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swapInts(arr[j], arr[j + 1]);
            }
        }
    }
}

void insertionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int j = i;
        while(j > 0 and arr[j] <= arr[j - 1]){
            swapInts(arr[j], arr[j - 1]);
            j--;
        }
    }
}

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    const int N = 10;
    int arr[N] = {3, 4, -1, 7, -6, 11, 4, 1, 9, 2};

    insertionSort(arr, N);

    printArr(arr, N);


    /*int a = 10,
        b = 5;

    swapInts(a, b);
    cout << a << " " << b << endl;
    */
    /// pass by reference
    /// pass by value
}
