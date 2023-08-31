#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int round = 0;
    while (cin >> n) {
        round++;
        int b[101] = {0};
        int bSumNum[20001] = {0};
        bool notB2 = false;
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int sum = 0;
        int i = 0, j = 0;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                sum = b[i] + b[j];
                if (bSumNum[sum] == 3) {
                    notB2 = true;
                    cout << "Case #" << round << ": It is not a B2-Sequence." << endl << endl;
                    break;
                } 
                else {
                    bSumNum[sum]++;
                }
            }
            if (notB2 == true) {
                break;
            } 
        }
        if (!notB2) {
            cout << "Case #" << round << ": It is a B2-Sequence." << endl << endl;
        }
    }
}