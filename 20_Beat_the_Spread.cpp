#include <iostream>

using namespace std;


/*
    a + b = s        2a = s + d
                => 
    a - b = d        2b = s - d

    a = (s + d) / 2
    b = (s - d) / 2
*/
int main() {
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int s = 0, d = 0;
        cin >> s >> d;
        int a = s + d;  // score1 * 2
        int b = s - d;  // score2 * 2
        if (a < 0 || b < 0 || a % 2 != 0 || b % 2 != 0) {   // score should more than 0 and can not be float
            cout << "impossible" << endl;
        }
        else {
            cout << a / 2 << " " << b / 2 << endl;
        }
    }
}