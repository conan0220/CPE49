#include <iostream>

using namespace std;

int algorithm(int n) 
{
    int count = 1;
    while (n != 1) {
        count++;
        n = n % 2 == 1 ? (3 * n + 1) : (n / 2); 
    }
    return count;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int i = 0, j = 0;
    while (cin >> i >> j) {
        int i_t = i, j_t = j;
        int maximum = 0;
        if (i > j) {
            swap(i, j);
        }
        for (int k = i; k <= j; k++) {
            int current = algorithm(k);
            maximum = current > maximum ? current : maximum;
        }
        cout << i_t << " " << j_t << " " << maximum << endl;
    }
}