#include <iostream>
#include <vector>
using namespace std;

int main() {
    int taille;
    cout << "Donner la taille des vecteurs : ";
    cin >> taille;

    vector<int> vect1(taille);
    vector<int> vect2(taille);
    vector<int> vect3(taille);

    // Input elements for vect1
    cout << "Taper les éléments du vecteur 1 : ";
    for(int i = 0; i < taille; i++) {
        cin >> vect1[i];
    }

    // Input elements for vect2
    cout << "Taper les éléments du vecteur 2 : ";
    for(int i = 0; i < taille; i++) {
        cin >> vect2[i];
    }

    // Element-wise multiplication and storing in vect3
    for(int i = 0; i < taille; i++) {
        vect3[i] = vect1[i] * vect2[i];
    }

    // Displaying the result
    cout << "Le résultat de la multiplication élément par élément des deux vecteurs est : ";
    for(int i = 0; i < taille; i++) {
        cout << vect3[i] << " ";
    }
    cout << endl;

    return 0;
}
