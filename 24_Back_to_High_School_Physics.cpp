#include <iostream>

using namespace std;

// (2v * 2t / 2) (V-T圖下面積 -> 位移)
int main() {
    int v = 0, t = 0;
    while (cin >> v >> t) {
        cout << 2 * v * t << endl;
    }   
}