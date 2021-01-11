#include "iostream"

using namespace std;

int main() {
    int n, to = 0;
    cin >> n;
    while (n--) {
        int o;
        cin >> o;
        to += o;
    }
    if (to > 0) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }
}
