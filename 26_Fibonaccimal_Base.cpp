#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    long long int number;
    vector<long long int> seq {1, 2};   
    long long int sum = 0; 
    for (int i = 0; i < 38; i++) {
        seq.push_back(seq[seq.size()-1] + seq[seq.size()-2]);
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        sum = 0;
        cin >> number;
        cout << number << " = ";
        for (int j = seq.size()-1; j >= 0; j--) {
            if (seq[j] <= number) {
                if (sum+seq[j] <= number) {
                    sum += seq[j];
                    cout << "1";
                    if (--j >= 0) {
                        cout << "0";
                    }
                }
                else {
                    cout << "0";
                }
            }
        }
        cout << " (fib)" << endl;
        
    }
}