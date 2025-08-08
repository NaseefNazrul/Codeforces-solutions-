#include <iostream> 
using namespace std;

int main() {
    int n;
    cin >> n;

    int total; //number of problems they can solve (output)
    for (int i = 0; i < n; i++) {
        int count = 0; // if more than 2 then total++
        for (int i = 0; i < 3; i++) {
            int num; // either 0 or 1
            cin >> num;
            if (num == 1) {
                count++;
            }
        }
        if (count >= 2) {
            total++;
        }
    }

    cout << total;
}