#include <iostream>

using namespace std;

int main() {
    int T = 0;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        int total = 0;
        int a = 0, b = 0;
        cin >> a >> b;
        for (int j = (a % 2 == 1 ? a : a+1); j <= b; j+=2) {
            total += j;
        }
        cout << "Case " << i << ": " << total << endl;
    }
}