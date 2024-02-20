#include <iostream>
#include <stdexcept>
using namespace std;

double monf(int x, int y, char operat) {
    int c,a,b;
    switch(operat) {
        case '+':
            c = a + b;
            cout << "La somme est : " << c << endl;
            break;
        case '-':
            c = a - b;
            cout << "La soustraction est : " << c << endl;
            break;
        case '*':
            c = a * b;
            cout << "La multiplication est : " << c << endl;
            break;
        case '/':
            try {
                if (b != 0) {
                    c = static_cast<double>(a) / b;
                    cout << "La division est : " << c << endl;
                } else {
                    throw runtime_error("Division par z�ro");
                }
            } catch (const exception& e) {
                cout << "Erreur : " << e.what() << endl;
            }
            break;
        case '%':
            try {
                if (b != 0) {
                    c = int(a % b);
                    cout << "Le reste de la division enti�re est : " << c << endl;
                }
            } catch (const exception& e) {
                cout << "Erreur : " << e.what() << endl;
            }
            break;
        default:
            cout << "Op�rateur invalide" << endl;
            c = 0;
    }
    return c;
}

int main() {
    int x, y;
    char z;
    cout << "Entrez deux nombres : ";
    cin >> x >> y;
    cout << "Entrez un op�rateur (+, -, *, /, %) : ";
    cin >> z;
    monf(x, y, z);
    return 0;
}
