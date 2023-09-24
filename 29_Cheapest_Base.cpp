#include <iostream>

using namespace std;

void output(const int number, const int costs[37]) {
    int min = 99;
    int costsOfBases[37] = {0};
    for (int i = 2; i <= 36; i++) {
        int total = 0;
        int temp = number;
        while (temp > 0) {
            total += costs[temp % i];
            temp /= i;
        }
        costsOfBases[i] = total;
        if (min > total) {
            min = total;
        }
    }
    cout << "Cheapest base(s) for number " << number << ":";
    for (int i = 2; i <= 36; i++) {
        if (costsOfBases[i] == min) {
            cout << " " << i;
        }
    }
    cout << endl;
}

int main() {
    int testCases = 0;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        cout << "Case " << i+1 << ":" << endl;
        int costs[37] = {0};
        int numOfNumbers = 0;
        int number = 0;
        for (int j = 0; j < 36; j++) {
            cin >> costs[j];
        }
        cin >> numOfNumbers;
        for (int j = 0; j < numOfNumbers; j++) {
            cin >> number;
            output(number, costs);
        }
        if (i < testCases - 1) {
            cout << endl;
        }
    }
}