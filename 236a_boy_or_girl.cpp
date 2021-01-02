#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

int main() {
    string name;
    cin >> name;
    int distinctCharacters = 0;
    vector<char> visitedCharacters;
    for (int i = 0; i < name.size(); i++) {
        if (find(visitedCharacters.begin(), visitedCharacters.end(), name[i]) != visitedCharacters.end()) {
            continue;
        }
        visitedCharacters.push_back(name[i]);
        distinctCharacters++;
    }
    if (distinctCharacters % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
}
