#include <iostream>
#include <climits>
#include <math.h>
#include <algorithm>

using namespace std;

void printArray(int* arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printTwoElements(int& a, int& b){
    cout << a << " " << b << endl;
}

bool checkIfTwoElementsSum(int* arr, int n, int k){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == k){
                printTwoElements(i, j);
                return true;
            }
        }
    }
    return false;
}

int findMedian(int* arr, int n){
    if(n % 2 == 0){
        cout << "Enter an array with odd number of elements!" << endl;
        return INT_MIN;
    }
    for(int i = 0; i < n; i++){
        int lesser = 0,
            bigger = 0;
        for(int j = 0; j < n; j++){
            if(i == j){
                continue;
            }
            if(arr[j] < arr[i]){
                lesser++;
            }
            else if(arr[j] >= arr[i]){
                bigger++;
            }
        }
        if(lesser == bigger){
            return arr[i];
        }
    }
    return INT_MIN;
}

int minDiffFromElement(int* arr, int n, int k){
    int minDiff = abs(arr[0] - k);
    int minIdx = 0;
    for(int i = 1; i < n; i++){
        int curDiff = abs(arr[i] - k);
        if(curDiff < minDiff){
            minDiff = curDiff;
            minIdx = i;
        }
    }
    return minIdx;
}

/// Declare it here so it is not needed to make all elements zero
int holder[10000];
int findMostOccuringElement(int* arr, int n){

    int biggest = arr[0];
    for(int i = 0; i < n; i++){
        int currentNumber = arr[i];
        holder[currentNumber]++;
        if(arr[i] > biggest){
            biggest = arr[i];
        }
    }

    int mostOccuringNumber = 0,
        mostOccuringTimes = 0;
    for(int i = 0; i < biggest; i++){
        if(holder[i] > mostOccuringTimes){
            mostOccuringTimes = holder[i];
            mostOccuringNumber = i;
        }
    }

    return mostOccuringNumber;
}

void selectionSort(int* arr, int n){
    //temp[] was used for he idea with additional array.
    //In that scenario, the inner for loop starts from zero
    //All other parts of the code fro that idea are commented

    //int temp[10];

    for(int i = 0; i < n; i++){
        int minVal = INT_MAX;
        int minIdx = -1;
        for(int j = i; j < n; j++){
            if(arr[j] < minVal){
                minVal = arr[j];
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
        //temp[i] = minVal;
        //arr[minIdx] = INT_MAX;
    }
    //printArray(temp, n);
    printArray(arr, n);

}

int main(){
    int arr[100];
    int k, n;
    //cin >> n >>k;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //cout << checkIfTwoElementsSum(arr, n, k) << endl;
    //cout << findMedian(arr, n) << endl;
    //cout << minDiffFromElement(arr, n, k) << endl;
    //cout << findMostOccuringElement(arr, n) << endl;
    //cout << findMostOccuringElement(arr, n) << endl;
    selectionSort(arr, n);

}

/*
    10
    1 2 17 22 18 12 13 -10 22 1
*/

