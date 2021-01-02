#include "iostream"

using namespace std;

int main() {
    int stonesTotal, count = 0;
    string stones;
    cin >> stonesTotal >> stones;
    for (int i = 0; i < stonesTotal; i++) {
        while (stones[i] == stones[i+1]) {
            count++;
            i++;
        }
    }
    cout << count << endl;
}
