#include "iostream"

using namespace std;

int main() {
    int n, t;
    string positions;
    cin >> n >> t >> positions;
    while (t--) {
        for (int i = 1; i <= n; i++) {
            if (positions[i] == 'G' && positions[i-1] == 'B') {
                positions[i] = 'B';
                positions[i-1] = 'G';
                i++;
            }
        }
    }
    cout << positions << endl;
}
