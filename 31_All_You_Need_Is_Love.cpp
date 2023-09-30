#include <iostream>
#include <math.h>

using namespace std;

int binaryToDecimal(string s) {
    int b = 0;
    for (int i = 0; i < s.size(); i++) {
        b += s[i] == '1' ? pow(2, s.size()-i-1) : 0;
    }
    return b;
}

int main() {
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string S1 = "", S2 = "";
        cin >> S1 >> S2;
        int s1 = binaryToDecimal(S1);
        int s2 = binaryToDecimal(S2);
        int small = s1 < s2 ? s1 : s2;
        int j = 2;
        for (j = 2; j <= small; j++) {
            if (s1 % j == 0 && s2 % j == 0) {
                break;
            }
        }
        cout << "Pair #" << i+1 << ": ";
        if (j > small) {
            cout << "Love is not all you need!" << endl;
        }
        else {
            cout << "All you need is love!" << endl;
        }
    }
}