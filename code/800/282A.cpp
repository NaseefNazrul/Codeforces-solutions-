#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string line;
        cin >> line; // I am going to just check the first and the lest element
        if (line[0] == '+' || line[0] == '-') {
            if (line[0] == '+') {
                x++;
            }
            else {
                x--;
            }
        }
        else {
            if (line[line.length()-1] == '+') {
                x++;
            }
            else {
                x--;
            }
        }
        
    }
    cout << x;
}