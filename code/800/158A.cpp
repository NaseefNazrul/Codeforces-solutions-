#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int count = 0; // number of players 
    int k_score = 0; // kth score

    for (int i = 1; i <= n; i++) {
        int score; 
        cin >> score;
        if (score <= 0) {
            break;
        }
        else if (i == k) {
            k_score = score; 
            count++;
        }
        else if (i < k) {
            count++;
        }
        else { // all the scores after the kth position
            if (score == k_score) {
                count++;
            }
            else {
                break;
            }
        }
    }

    cout << count;
}