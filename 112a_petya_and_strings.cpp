#include "iostream"
#include "strings.h"
#include "algorithm"

using namespace std;

int main() {
    string j, k;
    cin >> j >> k;
    transform(j.begin(), j.end(), j.begin(), ::tolower);
    transform(k.begin(), k.end(), k.begin(), ::tolower);
    if (k.compare(j) > 0) {
        cout << -1;
    }
    if (k.compare(j) < 0) {
        cout << 1;
    }
    if (k.compare(j) == 0) {
        cout << 0;
    }
}

