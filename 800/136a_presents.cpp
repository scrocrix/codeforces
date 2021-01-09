#include "bits/stdc++.h"

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> friends, presentOrder;
    for (int p = 1; p <= n; p++) {
        int i;
        cin >> i;
        friends.push_back(i);
    }
    for (int i = 0; i < friends.size(); i++) {
        int po;
        for (int j = 0; j < friends.size(); j++) {
            if (i + 1 == friends[j]) {
                po = j + 1;
            }
        }
        presentOrder.push_back(po);
    }
    ostringstream vts;
    copy(presentOrder.begin(), presentOrder.end(), ostream_iterator<int>(vts, " "));
    cout << vts.str() << endl;
}
