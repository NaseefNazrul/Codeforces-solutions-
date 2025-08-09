#include <iostream> 
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    bool flag = false; // if this is not triggered then output is 0

    for (int i = 0; i < s1.length(); i++) {
        if ((char)tolower(s1[i]) != (char)tolower(s2[i])) { // lowering both of them
            if ((int)(char)tolower(s1[i]) > (int)(char)tolower(s2[i])) {
                cout << 1;
                flag = true;
                break;
            }
            else {
                cout << -1;
                flag = true;
                break;
            }
        }
    }
    if (flag == false) {
        cout << 0;
    }
}