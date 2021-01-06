#include "bits/stdc++.h"

using namespace std;

int strtoint(string item) {
    stringstream ss;
    string s;
    ss << item;
    ss >> s;
    return stoi(s);
}

int main() {
    int year;
    cin >> year;
    bool ib = false;
    string cy = to_string(year + 1);
    while (!ib) {
        vector<char> cicu;
        bool isUnique = false;
        for (int i = 0; i < cy.size(); i++) {
            if (find(cicu.begin(), cicu.end(), cy[i]) != cicu.end()) {
                int nextYear = strtoint(cy) + 1;
                cy = to_string(nextYear);
                cicu.clear();
                ib = false;
                break;
            }
            cicu.push_back(cy[i]);
            ib = true;
        }
    }
    cout << cy << endl;
}
