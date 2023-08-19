#include <iostream>

using namespace std;

int main() {
    long long int S, D, date = 1;
    while (cin >> S >> D) {
        date = 1;
        S--;
        while (date <= D) {
            S++;
            date += S;
        }
        cout << S << endl;
    }
}