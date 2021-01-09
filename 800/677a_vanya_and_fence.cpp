#include "bits/stdc++.h"

using namespace std;

int main() {
    int n, h, w = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++) {
        int ph;
        cin >> ph;
        if (ph > h) {
            w = w + 2;
        } else {
            w++;
        }
    }
    cout << w << endl;
}
