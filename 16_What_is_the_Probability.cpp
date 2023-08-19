#include <iostream>
#include <math.h>

using namespace std;

// q = 1 - p
// (q^((R-1)*N))*(q^(I-1))*p
double probability(int N, double p, int I, int R) {
    double q = 1 - p;
    return pow(q, (R-1)*N) * pow(q, I-1) * p;
}

int main() {
    int S = 0;
    cin >> S;
    int N = 0, I = 0;
    double p = 0;
    int R = 100;
    for (int i = 0; i < S; i++) {
        cin >> N >> p >> I;
        double total = 0;
        for (int r = 1; r <= R; r++) {
            total += probability(N, p, I, r);
        }
        printf("%.4f\n", total);
    }
}