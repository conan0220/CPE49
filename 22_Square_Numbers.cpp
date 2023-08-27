#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a, b;
    int count = 0;
    for (int i = 0; i < 201; i++) {
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        } 
        cout << floor(pow(b, 0.5)) - ceil(pow(a, 0.5)) + 1 << endl;
    }
}