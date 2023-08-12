#include <iostream>
#include <string>

using namespace std;


int main() {
    string a, b;
    while (getline(cin, a) && getline(cin, b)) {
        int tableA[26] = {0};
        int tableB[26] = {0};

        for (const char& ch : a) {
            tableA[ch - 'a']++;
        }
        for (const char& ch : b) {
            tableB[ch - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (tableA[i] > 0 && tableB[i] > 0) {
                char alphabet = 'a' + i;
                int count = tableA[i] < tableB[i] ? tableA[i] : tableB[i];
                for (int j = 0; j < count; j++) {
                    cout << alphabet;
                }
            }
        }

        cout << endl;
    }
}