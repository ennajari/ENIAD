#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "Combien d'entiers voulez-vous saisir ? : ";
    cin >> size;

    vector<int> tab;
   
    for (int i = 0; i < size; i++) {
       cout << "Veuillez saisir element " << i+1 << " : ";
        int element;
        cin >> element;
        tab.push_back(element);
    }

    // Suppression des éléments impairs
    for (auto it = tab.begin(); it != tab.end();) {
        if (*it % 2 == 1) {
            it = tab.erase(it);
        } else {
            ++it;
        }
    }

    // Affichage du vecteur résultant
    cout << "Le vecteur résultant après la suppression des éléments impairs est : ";
    for (int i = 0; i < tab.size(); i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    return 0;
}
