#include "iostream"
#include "string"
#include "algorithm"

using namespace std;

int main() {
    string word;
    cin >> word;
    int u = 0, l = 0;
    for (int i = 0; i < word.size(); i++) {
        if (isupper(word[i])) {
            u++;
        } else {
            l++;
        }
    }
    if (u > l) {
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    } else {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    }
    cout << word << endl;
}
