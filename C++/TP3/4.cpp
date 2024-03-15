#include <iostream>
#include <vector>
using namespace std;

int main() {
    int taille1;
    cout << "Donner la taille du tableau 1 : ";
    cin >> taille1;
    vector<int> tableau1;
    for(int i = 0; i < taille1; i++) {
        int element;
        cout << "Taper element N" << i + 1 << ": ";
        cin >> element;
        tableau1.push_back(element);
    }

    int taille2;
    cout << "Donner la taille du tableau 2 : ";
    cin >> taille2;
    vector<int> tableau2;
    for(int j = 0; j < taille2; j++) {
        int element;
        cout << "Taper element N" << j + 1 << ": ";
        cin >> element;
        tableau2.push_back(element);
    }

    vector<int> tableau3;
    for(int k = 0; k < taille1; k++) {
        tableau3.push_back(tableau1[k]);
    }
    for(int k = 0; k < taille2; k++) {
        tableau3.push_back(tableau2[k]);
    }

    cout << "Le tableau 3 après la concaténation : ";
    for(int k = 0; k < tableau3.size(); k++) {
        cout << tableau3[k] << " ";
    }

    return 0;
}

// #include <iostream>
// #include <vector>
// #include <algorithm> // Pour la fonction merge
// using namespace std;

// int main() {
//     int taille1;
//     cout << "Donner la taille du tableau 1 : ";
//     cin >> taille1;
//     vector<int> tableau1;
//     for(int i = 0; i < taille1; i++) {
//         int element;
//         cout << "Taper element N" << i + 1 << ": ";
//         cin >> element;
//         tableau1.push_back(element);
//     }

//     int taille2;
//     cout << "Donner la taille du tableau 2 : ";
//     cin >> taille2;
//     vector<int> tableau2;
//     for(int j = 0; j < taille2; j++) {
//         int element;
//         cout << "Taper element N" << j + 1 << ": ";
//         cin >> element;
//         tableau2.push_back(element);
//     }

//     vector<int> tableau3(taille1 + taille2); // Déclaration d'un vecteur pour contenir la fusion

//     merge(tableau1.begin(), tableau1.end(), tableau2.begin(), tableau2.end(), tableau3.begin()); // Fusion des deux vecteurs triés

//     cout << "Le tableau 3 après la concaténation : ";
//     for(int k = 0; k < tableau3.size(); k++) {
//         cout << tableau3[k] << " ";
//     }

//     return 0;
// }
