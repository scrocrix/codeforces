#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &e : v) {
            cin >> e;
        }
        sort(v.rbegin(), v.rend());
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                if (v[i] % 2 == 0) {
                    ans += v[i];
                }
            } else {
                if (v[i] % 2 == 1) {
                    ans -= v[i];
                }
            }
        }
        if (ans == 0) {
            cout << "Tie" << endl;
        } else if (ans > 0) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }
}
