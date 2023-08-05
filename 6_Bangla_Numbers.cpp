#include <iostream>
#include <stdio.h>

using namespace std;

void bangla(long long int number) {
    if (number >= 10000000) {
        bangla(number / 10000000);
        cout << " kuti";
        number = number % 10000000;
    }
    if (number >= 100000) {
        bangla(number / 100000);
        cout << " lakh";
        number = number % 100000;
    }    
    if (number >= 1000) {
        bangla(number / 1000);
        cout << " hajar";
        number = number % 1000;
    }    
    if (number >= 100) {
        bangla(number / 100);
        cout << " shata";
        number = number % 100;
    }    
    if (number > 0) {
        cout << " " << number;
    }
}

int main() {
    long long int number = 0;
    int count = 0;
    while (cin >> number) {
        printf("%4d.", ++count);
        if (number == 0) {
            cout << " 0";
        }
        bangla(number);
        cout << endl;
    }
}