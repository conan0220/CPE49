#include <iostream>

using namespace std;

int main() {
    int T = 0;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N = 0, P = 0, h[101] = {0}, numHartal = 0;
        cin >> N >> P;
        for (int j = 0; j < P; j++) {
            cin >> h[j];
        }
        for (int j = 1; j <= N; j++) {
            for (int k = 0; k < P; k++) {
                if (j % h[k] == 0 && j % 7 != 6 && j % 7 != 0) {
                    numHartal++;
                    break;
                }
            }
        }
        cout << numHartal << endl;
    }
}