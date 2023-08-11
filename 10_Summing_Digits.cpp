#include <iostream>

using namespace std;

int main() {
    long long int number = 0;

    while (cin >> number) {
        if (number == 0) {
            break;
        }
        while (number >= 10) {
            long long int nextNumber = 0;
            while (number > 0) {
                nextNumber = nextNumber + number % 10;
                number /= 10;
            }     
            number = nextNumber;
        }
        cout << number << endl;
    }
}