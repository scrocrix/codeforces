#include "iostream"
#include "regex"
#include "string"

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if (regex_match(s, regex("^(?=.*a)(?=.*b)(?=.*c)(?=.*d)(?=.*e)(?=.*f)(?=.*g)(?=.*h)(?=.*i)(?=.*j)(?=.*k)(?=.*l)(?=.*m)(?=.*n)(?=.*o)(?=.*p)(?=.*q)(?=.*r)(?=.*s)(?=.*t)(?=.*u)(?=.*v)(?=.*w)(?=.*x)(?=.*y)(?=.*z).*$"))) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
