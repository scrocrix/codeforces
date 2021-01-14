#include "iostream"

using namespace std;

int main() {
    string o, t, n;
    cin >> o;
    cin >> t;
    for (int i = 0; i < o.size(); i++) {
        if (o[i] != t[i]) {
            n.append("1");
        } else {
            n.append("0");
        }
    }
    cout << n << endl;
}
