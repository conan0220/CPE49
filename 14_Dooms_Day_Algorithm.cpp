#include <iostream>

using namespace std;

int main() {
    
    // 一月一號是禮拜六
    int day[13] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int M, D;
        int distance = 0;   // 跟一月一號差幾天
        cin >> M >> D;
        for (int j = 0; j < M - 1; j++) {
            distance += day[j];
        }
        distance += D;
        distance = distance - 1;

        switch (distance % 7)
        {
            case 0:
                cout << "Saturday" << endl;
                break;
            case 1:
                cout << "Sunday" << endl;
                break;
            case 2:
                cout << "Monday" << endl;
                break;
            case 3:
                cout << "Tuesday" << endl;
                break;
            case 4:
                cout << "Wednesday" << endl;
                break;
            case 5:
                cout << "Thursday" << endl;
                break;
            case 6:
                cout << "Friday" << endl;
                break;
            default:
                break;
        }
    }
}
