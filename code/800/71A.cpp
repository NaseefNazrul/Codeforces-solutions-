#include <iostream> 
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        if (word.length() > 10) { // prints the first and last and the letters in between
            cout << word[0] << (word.length()-2) << word[word.length()-1] << "\n";
        }
        else { // otherwise prints the word itself 
            cout << word << "\n";
        }
    }
}