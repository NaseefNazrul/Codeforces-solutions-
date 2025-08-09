#include <iostream> 
using namespace std;

int main() {
    int n, x ,y;
    cin >> n >> x >> y;
    // to make a semmetrical cut the broken line has to go through the middle
    // therefore if the marked box is near the middle then its a NO

    n /=2; // this is middle with n+1

    if (((x == n) || (x == n+1)) && ((y == n) || (y == n+1))) {
        cout << "NO";
    }
    else {
        cout << "YES";
    }

}