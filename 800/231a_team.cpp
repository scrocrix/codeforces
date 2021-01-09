#include "iostream"
#include "algorithm"

using namespace std;

int main() {
    int ic;
    cin >> ic;
    int nn = 0;
    for (int i = 0; i <= ic; i++) {
        char opinion[6];
        cin.getline(opinion, 6);
        int to = 0;
        for (int k = 0; k < 6; k++) {
            char o = opinion[k];
            if (o == '1') {
                to++;
            }
        }
        if (to >= 2) {
            nn++;
        }
    }
    cout << nn;
}