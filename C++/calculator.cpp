#include <iostream>
#include <stdexcept>
using namespace std;

double monf(int a, int b, char operat) {
    double c;
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
                    throw runtime_error("Division par zéro");
                }
            } catch (const exception& e) {
                cout << "Erreur : " << e.what() << endl;
            }
            break;
        case '%':
            try {
                if (b != 0) {
                    c = a % b;
                    cout << "Le reste de la division entière est : " << c << endl;
                } else {
                    throw runtime_error("Division par zéro");
                }
            } catch (const exception& e) {
                cout << "Erreur : " << e.what() << endl;
            }
            break;
        default:
            cout << "Opérateur invalide" << endl;
            c = 0; // Valeur par défaut en cas d'erreur
    }
    return c;
}

int main() {
    int x, y;
    char z;
    cout << "Entrez deux nombres : ";
    cin >> x >> y;
    cout << "Entrez un opérateur (+, -, *, /, %) : ";
    cin >> z;
    monf(x, y, z);
    return 0;
}
