#include <iostream>
#include <string>

using namespace std;

int charToInt(char ch) {
    return ch - '0';
}

int main() {
    string number = "";
    while (cin >> number) {
        if (number == "0") {
            break;
        }
        int i = 0;
        int carry = charToInt(number[0]) * 10;
        for (i = 0; i < number.size() - 1; i++) {
            carry = (carry + charToInt(number[i+1])) % 11;
            carry *= 10;
        }
        if (carry == 0) {
            cout << number << " is a multiple of 11.\n";
        } 
        else {
            cout << number << " is not a multiple of 11.\n";
        }
    }
}