#include "iostream"

using namespace std;

int main() {
    int n, a, b, p = 0, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        p = p - a;
        p = p + b;
        if (p > c) {
            c = p;
        }
    }
    cout << c << endl;
}
