#include <iostream>
#include <map>
#include <string>
using namespace std;

struct Compare {
    bool operator()(const string& a, const string& b) const {
        return a < b;
    }
};

int main() {
    int n = 0;
    
    while (cin >> n) {
        // Compare 可以替換成 std::less or std::greater
        map<string, int, Compare> countryAndName;
        for (int i = 0; i < n; i++) {
            string country = "";
            string firstName = "";
            string secondName = "";
            cin >> country >> firstName >> secondName;
            countryAndName[country]++;
        }
        for (const auto temp : countryAndName) {
            cout << temp.first << " " << temp.second << endl;
        }
    }
}