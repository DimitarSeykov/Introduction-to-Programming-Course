#include <iostream>
#include <cstring>

using namespace std;

char* getTime(int sec, char* other){

    int a = sec / 3600;
    sec %= 3600;
    int b = sec / 60;

    char* res = new char[6];

    res[0] = char(a / 10 + '0');
    res[1] = char(a % 10 + '0');
    res[2] = ':';
    res[3] = char(b / 10 + '0');
    res[4] = char(b % 10 + '0');


    strcpy(other, res);

    delete[] res;
    return other;
}


int main(){

    int sec;
    cin >> sec;

    char* ch = new char[10];
    ch = getTime(sec, ch);

    cout << ch << endl;

    delete[] ch;
}
