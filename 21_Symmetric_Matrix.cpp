#include <iostream>

using namespace std;

int main() {
    int T = 0;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N = 0;
        scanf(" N = %d\n", &N);
        long long M[N*N];
        for (int j = 0; j < N*N; j++) {
            cin >> M[j];
        }
        long long last = N*N - 1;
        bool symmetric = true;
        for (int j = 0; j < N*N/2; j++) {
            if (M[j] != M[last-j]) {
                symmetric = false;
                break;
            }
        }
        cout << "Test #" << i+1 << ": ";
        if (symmetric) {
            cout << "Symmetric." << endl;
        }
        else {
            cout << "Non-symmetric." << endl;
        }
    }
}