#include "bits/stdc++.h"

using namespace std;

int main() {
    int n, a = 0, d = 0;
    string rounds;
    cin >> n >> rounds;
    for (int i = 0; i < rounds.size(); i++) {
        if (rounds[i] == 'A') {
            a++;
        } else {
            d++;
        }
    }
    if (a > d) {
        cout << "Anton" << endl;
    } else if (d > a) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
}
