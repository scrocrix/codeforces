#include "iostream"
#include "vector"

using namespace std;

int main() {
    int n = 0, m = 0;

    cin >> n;

    if (n / 100) {
        m += (n / 100);
        n -= (n / 100) * 100;
    }

    if (n / 20) {
        m += (n / 20);
        n -= (n / 20) * 20;
    }

    if (n / 10) {
        m += (n / 10);
        n -= (n / 10) * 10;
    }

    if (n / 5) {
        m += (n / 5);
        n -= (n / 5) * 5;
    }

    m += n;

    cout << m << endl;
}
