#include <iostream>
using namespace std;

int main() {
    // I will be using vector position 
    int center_x = 3;
    int center_y = 3;
    int pos_x, pos_y = 0; // position of 1
    for (int i = 1; i <= 5; i++) {
        for (
            int j = 1; j <= 5; j++) {
            int num;
            cin >> num;
            if (num == 1) {
                pos_x = j;
                pos_y = i;
            }
        }
    }

    // time to check wether position is bigger or smaller to fix vector sum
    if (pos_x > center_x) {
        pos_x = pos_x - center_x; //storing it back to pos_x
    }
    else {
        pos_x = center_x - pos_x;
    }
    // similarly for pos_y
    if (pos_y > center_y) {
        pos_y = pos_y - center_y; 
    }
    else {
        pos_y = center_y - pos_y;
    }

    cout << (pos_x + pos_y);
}