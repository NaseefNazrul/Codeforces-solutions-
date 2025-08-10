#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int max, min;
    bool first = true; //this will provide us with reference values to compare to
    int count = 0;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (first == true) {
            max = num;
            min = num;
            first = false;
            continue;
        }
        if (num > max) {
            max = num;
            count++;
        }
        else if (num < min) {
            min = num;
            count++;
        }
    }
    cout << count;
}