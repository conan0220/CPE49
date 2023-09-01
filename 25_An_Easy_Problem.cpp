#include <iostream>

using namespace std;

// 一個 r 進制的數，如果是 (r - 1) 的倍數，其所有數字總和必為 (r - 1) 的倍數。
int main() {
    string r = "";
    while (cin >> r) {
        int max = 1;
        int sum = 0;
        int temp = 0;
        for (int i = 0; i < r.size(); i++) {
            temp = 0;
            if ('0' <= r[i] && r[i] <= '9') {
                temp = r[i] - '0';
            }
            else if ('A' <= r[i] && r[i] <= 'Z') {
                temp = r[i] - 'A' + 10;
            }
            else if ('a' <= r[i] && r[i] <= 'z') {
                temp = r[i] - 'a' + 36;
            }

            max = temp > max ? temp : max;
            sum += temp;
        }

        int i;
        for (i = max + 1; i <= 62; i++) {
            if (sum % (i-1) == 0) {
                cout << i << endl;
                break;
            }
        }
        if (i == 63) {
            cout << "such number is impossible!" << endl;
        }
    }
}