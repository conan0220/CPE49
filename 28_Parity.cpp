#include <iostream>

using namespace std;

string decimalToBinary(int d) {
    string b = "";
    while (d > 0) {
        b += (d % 2 == 0 ? "0" : "1");
        d /= 2;
    }
    string bReverse = "";
    for (int i = b.size() - 1; i >= 0; i--) {
        bReverse += b[i];
    }
    return bReverse;
}

int main() {
    int I = 0;
    while (cin >> I) {
        if (I == 0) {
            break;
        }
        string b = decimalToBinary(I);
        int count = 0;
        for (char c : b) {
            if (c == '1') {
                count++;
            }
        }
        cout << "The parity of " << b << " is " << count << " (mod 2)." << endl;
    }
}