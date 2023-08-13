#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> s;
    int maxLength = 0;
    string sentence = "";;
    
    while (getline(cin, sentence)) {
        s.push_back(sentence);
        maxLength = sentence.size() > maxLength ? sentence.size() : maxLength;
    }
    
    for (int i = 0; i < maxLength; i++) {
        for (int j = s.size() - 1; j >= 0; j--) {
            if (i > s[j].size() - 1) {
                cout << " ";
            } 
            else {
                cout << s[j][i];
            }
        }
        cout << endl;
    }
}