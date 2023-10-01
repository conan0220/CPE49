#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0, m = 0;
    while (cin >> n >> m) {
        if (m == 1) {
            cout << "Boring!" << endl;
            continue;
        }
        vector<int> a;
        bool isBoring = false;
        a.push_back(n);
        while (true) {
            if (n != 1 && n % m != 0) {
                isBoring = true;
                break;
            }
            else if (n == 1) {
                isBoring = false;
                break;
            }
            n /= m;
            a.push_back(n);
        }        
        if (!isBoring) {
            for (int i = 0; i < a.size(); i++) {
                if (i != a.size()-1) {
                    cout << a[i] << " ";
                }
                else {
                    cout << a[i];
                }
            }
        }
        else {
            cout << "Boring!";
        }
        cout << endl;
    }
}