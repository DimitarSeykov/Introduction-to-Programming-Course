#include <iostream>
#include <cstring>

using namespace std;

int fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int fact(int n){
    if (n == 0){
        return 1;
    }
    return n * fact(n - 1);
}


int countDigits(int n){
    if(n == 0){
        return 0 ;
    }
    return 1 + countDigits(n / 10);
}


int pascal(int i, int j){
    if(j == 0 || i == j){
        return 1;
    }
    else return pascal(i - 1, j - 1) + pascal(i - 1, j);
}

int fastPow(int x, int n){
    if(n == 0){
        return 1;
    }

    int partialResult = fastPow(x, n / 2);
    if (n % 2 == 0){
        return partialResult * partialResult;
    } else {
        return x * partialResult * partialResult;
    }
}

bool checkIfPalindrome(char* str, int left, int right){
    if(right - left <= 1){
        return true;
    }
    return str[left] == str[right];
}

int main(){
    //int n;
    //cin >> n;
    //cout << countDigits(n) << endl;
    //int x, y;
    //cin >> x >> y;
    //cout << pascal(x, y) << endl;
    //cout << fastPow(x, y) << endl;

    char str[20];
    cin >> str;
    cout << checkIfPalindrome(str, 0, strlen(str) - 1);
}
