#include <bits/stdc++.h>

using namespace std;

int strtoint(char item) {
    stringstream ss;
    string s;

    ss << item;
    ss >> s;

    return stoi(s);
}

int main() {
    string x;
    cin >> x;
    vector<int> nums;
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == '+') {
            continue;
        }
        nums.push_back(strtoint(x[i]));
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        const char* plus ="+";
        if (i == nums.size() - 1) {
            plus = "";
        }
        cout << nums[i] << plus;
    }
}
