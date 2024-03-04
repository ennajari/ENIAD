#include <iostream>
using namespace std;

// void Tri_du_tableau(int table[], int n);

// int main() {
//     int n;
//         cout << "Taper la taille de votre tableau : " << endl;
//         cin >> n;
//         int table[n];
//     for (int i = 0; i < n; i++) {
//         cout << "Taper element N° " << i + 1 << " : " << endl;
//         cin >> table[i];
//     }
//     Tri_du_tableau(table, n);

//       cout << "Le tableau trié est : ";
//     for (int i = 0; i < n; i++) {
//         cout << table[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// void Tri_du_tableau(int table[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (table[i] > table[j]) {
//                 int temp = table[i];
//                 table[i] = table[j];
//                 table[j] = temp;
//             }
//         }
//     }
// }

// Voici une implémentation du tri par sélection 

// void triSelection(int tableau[], int taille) {
//     for (int i = 0; i < taille - 1; ++i) {
//         int indiceMin = i;
//         for (int j = i + 1; j < taille; ++j) {
//             if (tableau[j] < tableau[indiceMin]) {
//                 indiceMin = j;
//             }
//         }
//         int temp = tableau[i];
//         tableau[i] = tableau[indiceMin];
//         tableau[indiceMin] = temp;
//     }
// }

// int main() {
//     int taille;
//     cout << "Entrez la taille du tableau : ";
//     cin >> taille;

//     int tableau[taille];
//     cout << "Entrez les éléments du tableau :\n";
//     for (int i = 0; i < taille; ++i) {
//         cout << "Element " << i + 1 << " : ";
//         cin >> tableau[i];
//     }
//     triSelection(tableau, taille);
//     cout << "Le tableau trié est : ";
//     for (int i = 0; i < taille; ++i) {
//         cout << tableau[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
// Voici une implémentation du tri par insertion

void triInsertion(int tableau[], int taille) {
    for (int i = 1; i < taille; ++i) {
        int elementCourant = tableau[i];
        int j = i - 1;
        while (j >= 0 && tableau[j] > elementCourant) {
            tableau[j + 1] = tableau[j];
            --j;
        }
        tableau[j + 1] = elementCourant;
    }
}

int main() {
    int taille;
    cout << "Entrez la taille du tableau : ";
    cin >> taille;

    int tableau[taille];
    cout << "Entrez les éléments du tableau :\n";
    for (int i = 0; i < taille; ++i) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
    }

    triInsertion(tableau, taille);

    cout << "Le tableau trié est : ";
    for (int i = 0; i < taille; ++i) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    return 0;
}
