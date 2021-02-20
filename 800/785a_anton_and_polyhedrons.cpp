#include "iostream"
#include "string"

using namespace std;

int main() {
    int n, faces = 0;
    cin >> n;
    while (n--) {
        string polyhedron;
        cin >> polyhedron;
        if (polyhedron.find("Cube") != string::npos) {
            faces = faces + 6;
        }
        if (polyhedron.find("Tetrahedron") != string::npos) {
            faces = faces + 4;
        }
        if (polyhedron.find("Octahedron") != string::npos) {
            faces = faces + 8;
        }
        if (polyhedron.find("Dodecahedron") != string::npos) {
            faces = faces + 12;
        }
        if (polyhedron.find("Icosahedron") != string::npos) {
            faces = faces + 20;
        }
    }
    cout << faces << endl;
}
