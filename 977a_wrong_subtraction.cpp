#include "iostream"

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        int ln = n % 10;
        if (ln == 0) {
            n = n / 10;
        } else {
            n = n - 1;
        }
    }
    cout << n << endl;
}
