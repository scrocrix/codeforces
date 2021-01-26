#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int main() {
    int ts = 4, s = 0, ms = 0;
    vector<int> shoes;
    while (ts--) {
        cin >> s;
        if (find(shoes.begin(), shoes.end(), s) != shoes.end()) {
            ms++;
        } else {
            shoes.push_back(s);
        }
    }
    cout << ms << endl;
}
