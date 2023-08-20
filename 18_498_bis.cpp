#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

int main() {
    int x = 0;
    string aStr = "";
    while (cin >> x) {
        vector<int> a;
        getline(cin, aStr);
        getline(cin, aStr);
        string temp = "";
        for (const char& ch : aStr) {
            if (ch == ' ') {
                a.push_back(stoi(temp));
                temp = "";
            }
            else {
                temp += ch;
            }
        }

        double total = 0;
        int j = 0;
        for (int i = a.size()-1; i >= 0; i--) {
            total += (a[j] * i * pow(x, i-1)); 
            j++;
        }
        long long int ans = total;
        cout << ans << endl;
    }
}