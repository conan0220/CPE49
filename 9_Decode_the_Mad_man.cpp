#include <iostream>
#include <string>
using namespace std;

int main() {
    string coding = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string sentence = "";
    while (getline(cin, sentence)) {
        for (char ch : sentence) {
            if (ch == ' ') {
                cout << " ";
            }
            else {
                if (isalpha(ch)) {
                    ch = tolower(ch);
                }
                cout << coding[coding.find(ch) - 2];
            }
        }
        cout << endl;
    }
}