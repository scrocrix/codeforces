#include "iostream"
#include "bits/stdc++.h"

using namespace std;

int main() {
    string be, bi;
    cin >> be >> bi;
    reverse(be.begin(), be.end());
    if (be == bi) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
