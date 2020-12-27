#include "iostream"

using namespace std;

int main() {
    int n, nn = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s.find("++") != string::npos) {
            nn++;
        }
        if (s.find("--") != string::npos) {
            nn--;
        }
    }
    cout << nn;
}
