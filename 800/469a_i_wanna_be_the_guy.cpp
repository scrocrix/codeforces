#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int main() {
    int totalLevels = 0, lxl = 0, lyl = 0;
    vector<int> levels;
    cin >> totalLevels;

    cin >> lxl;
    while (lxl--) {
        int x = 0;
        cin >> x;
        if (find(levels.begin(), levels.end(), x) == levels.end()) {
            levels.push_back(x);
        }
    }

    cin >> lyl;
    while (lyl--) {
        int y = 0;
        cin >> y;
        if (find(levels.begin(), levels.end(), y) == levels.end()) {
            levels.push_back(y);
        }
    }

    if (levels.size() >= totalLevels) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
}
