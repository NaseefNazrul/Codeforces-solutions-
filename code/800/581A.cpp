#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    // The smaller number of socks will give the total number of days with diff socks
    if (a == b) {
        cout << a << " " << 0;
    }
    else if (a < b) {
        cout << a << " " << ((b-a)/2);
    }
    else {
        cout << b << " " << ((a-b)/2);
    }
}