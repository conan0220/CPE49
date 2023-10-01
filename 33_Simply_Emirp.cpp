#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N = 0;
    while (cin >> N) {
        if (!isPrime(N)) {
            cout << N << " is not prime." << endl;
            continue;
        }
        else {
            int reversedN = 0;
            int temp = N;
            while (temp > 0) {
                reversedN = reversedN * 10 + temp % 10;
                temp /= 10;
            }
            if (isPrime(reversedN) && reversedN != N) {
                cout << N << " is emirp." << endl;
            }
            else {
                cout << N << " is prime." << endl;
            }
        }
    }
}