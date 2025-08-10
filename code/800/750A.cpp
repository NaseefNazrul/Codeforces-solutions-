#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int time = 240 - k; // The amount of time he has left to work with
    int total = 0; // this is the amount of time getting spent doing each problem

    for (int i = 1; i <= n; i++) {
        total += 5 * i;
        if (total > time) {
            cout << (i-1);
            break;
        }
        else if (total <= time && i == n) {
            cout << i;
        }
    }
}