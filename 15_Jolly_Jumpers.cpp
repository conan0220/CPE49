#include <iostream>

using namespace std;

int main() {
    int n = 0;
    while (cin >> n) {
        bool diff[3001] = {false};
        diff[0] = true;
        int currentNumber = 0;
        int lastNumber = 0;
        cin >> lastNumber;
        for (int i = 0; i < n-1; i++) {
            cin >> currentNumber;
            diff[abs(currentNumber - lastNumber)] = true;
            lastNumber = currentNumber;
        }
        int i = 0;
        for (i = 0; i < n-1; i++) {
            if (diff[i] == false) {
                break;
            }
        }
        if (diff[i] == false) {
            cout << "Not jolly" << endl;
            continue;
        }
        else {
            cout << "Jolly" << endl;
        }
    }
}