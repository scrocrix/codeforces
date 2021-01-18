#include "iostream"

using namespace std;

int main() {
    int n, tp = 0;
    float on;
    cin >> n;
    on = n;
    while (n--) {
        int p;
        cin >> p;
        tp += p;
    }
    float s = (tp / (100 * on)) * 100;
    cout << s << endl;
}
