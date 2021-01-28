#include "iostream"
#include "algorithm"
#include "string"
#include "vector"

using namespace std;

int main() {
    string s;
    getline(cin, s);
    s.erase(remove(s.begin(), s.end(), '{'), s.end());
    s.erase(remove(s.begin(), s.end(), '}'), s.end());
    s.erase(remove(s.begin(), s.end(), ','), s.end());
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    vector<char> v;
    for (int i = 0; i < s.size(); i++) {
        if (find(v.begin(), v.end(), s[i]) != v.end()) {
            continue;
        }
        v.push_back(s[i]);
    }
    cout << v.size() << endl;
}
