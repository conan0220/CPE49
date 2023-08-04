#include <iostream>

using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) {
            break;
        }

        int carry = 0;
        int num_carry = 0;

        while (a > 0 || b > 0) {
            int a_d = a % 10;
            int b_d = b % 10;

            if (a_d + b_d + carry >= 10) {
                carry = 1;
                num_carry++;
            }
            else {
                carry = 0;
            }

            a = a / 10;
            b = b / 10;
        }
        if (num_carry <= 0) {
            cout << "No carry operation.\n"; 
        }
        else if (num_carry == 1) {
            cout << "1 carry operation.\n";
        }
        else {
            cout << num_carry << " carry operations.\n";
        }
    }
}