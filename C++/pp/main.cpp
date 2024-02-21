#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
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
                    throw runtime_error("Division par z�ro");
                }
            } catch (const exception& e) {
                cout << "Erreur : " << e.what() << endl;
            }
            break;
        case '%':
            try {
                if (b != 0) {
                    c = a % b;
                    cout << "Le reste de la division enti�re est : " << c << endl;
                } else {
                    throw runtime_error("Division par z�ro");
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
    clrscr();
    return 0;
}
