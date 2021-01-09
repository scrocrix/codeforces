#include "iostream"

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int priceForBananas = 0;
    for (int i = 1; i <= w; i++) {
        priceForBananas = priceForBananas + i * k;
    }
    if (priceForBananas - n <= 0) {
        cout << 0 << endl;
    } else {
        cout << priceForBananas - n << endl;
    }
}
