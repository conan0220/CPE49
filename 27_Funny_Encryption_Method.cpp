#include <iostream>
#include <math.h>
#include <string>

using namespace std;

string decimalToBinary(int d) {
    string b = "";
    while (d > 0) {
        b += (d % 2 == 0 ? "0" : "1");
        d /= 2;
    }
    return b;
}

int numOfOne(string s) {
    int count = 0;
    for (char c : s) {
        if (c == '1') {
            count++;
        }
    }
    return count;
}

int main() {
    int n = 0;
    int N = 0;
    cin >> n;
    for (int j = 0; j < n; j++) {
        cin >> N;
        int x1 = N;
        int x2 = 0;
        int i = 0;
        while (N > 0) {
            x2 += (N % 10) * pow(16, i);
            N /= 10;
            i++;
        }
        cout << numOfOne(decimalToBinary(x1)) << " " << numOfOne(decimalToBinary(x2)) << endl;
    }
}