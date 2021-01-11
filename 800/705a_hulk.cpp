#include "iostream"

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    string f;
    for (int i = 1; i <= n; i++) {
        if (i == 1 || i % 2 != 0) {
            f += "I hate";
        } else {
            f += "I love";
        }

        if (i != n) {
            f += " that ";
        }

        if (i == n) {
            f += " it";
        }
    }
    cout << f << endl;
}
