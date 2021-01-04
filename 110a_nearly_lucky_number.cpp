#include "iostream"
#include "string"
#include "algorithm"

using namespace std;

int main() {
    string n;
    cin >> n;
    int c = 0;
    for (int i = 0; i < n.size(); i++) {
        if (n[i] == '4' || n[i] == '7') {
            c++;
        }
    }
    if (c == 4 || c == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
