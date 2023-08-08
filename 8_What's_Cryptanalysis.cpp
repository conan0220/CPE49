#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct {
    char ch;
    int times = 1;
} LetterTimes;

bool compareByTimesAndCh(const LetterTimes& a, const LetterTimes& b) {
    if (a.times != b.times) {
        return a.times > b.times;
    }
    else {
        return a.ch < b.ch;
    }
}

void charInTheVector(vector<LetterTimes>& vec, char ch) {
    for (LetterTimes& element : vec) {
        if (element.ch == ch) {
            element.times++;
            return;
        }
    }
    vec.push_back(LetterTimes{ch});
}

int main() {
    int n = 0;
    while (cin >> n) {

        // 為了清空 cin 在 buffer 存放的換行符
        string sentence;
        getline(cin, sentence);     

        // 以下是另一種清空 buffer 的方法
        // cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<LetterTimes> output;
        for (int i = 0; i < n; i++) {
            sentence = "";
            getline(cin, sentence);
            for (const char& ch : sentence) {
                if (isalpha(ch)) {
                    charInTheVector(output, toupper(ch));
                }
            }
        }

        sort(output.begin(), output.end(), compareByTimesAndCh);

        for (const LetterTimes& element : output) {
            cout << element.ch << " " << element.times << endl;
        }
    }
}