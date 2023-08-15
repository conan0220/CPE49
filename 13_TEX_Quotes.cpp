#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    bool isFirst = true;
    while (getline(cin, line)) {
        for (const auto& ch : line) {
            if (ch == '"') {
                cout << (isFirst ? "``" : "''");
                isFirst = isFirst ? false : true;
            }
            else {
                cout << ch;
            }
        }
        cout << endl;
    }
}