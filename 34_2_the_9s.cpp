#include <iostream>
#include <string>

using namespace std;

int sumOfDigits(string digits) {
    int total = 0;
    for (const char& digit : digits) {
        total += digit - '0';
    }
    return total;
}

int numNineDegree(string digits, int count) {
    int newDigits = sumOfDigits(digits);
    if (newDigits % 9 == 0) {
        count++;
    }
    if (newDigits >= 10)
        return numNineDegree(to_string(newDigits), count);
    else
        return count;
}

int main() {
    string N = "";
    while (cin >> N) {
        if (N == "0") {
            break;
        }
        if (sumOfDigits(N) % 9 == 0) {
            cout << N << " is a multiple of 9 and has 9-degree " << numNineDegree(N, 0) << "." << endl;
        }
        else {
            cout << N << " is not a multiple of 9." << endl;
        }
    }
}