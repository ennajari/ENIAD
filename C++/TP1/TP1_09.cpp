#include <iostream>
using namespace std;

int compterVoyelles(const string& chaine);

int main() {
    string saisie;
    cout << "Entrez une chaine de caracteres : ";
    getline(cin, saisie);

    int resultat = compterVoyelles(saisie);
    cout << "Nombre de voyelles : " << resultat <<endl;

    return 0;
}

int compterVoyelles(const string& chaine) {
    int nbVoyelles = 0;
    for (char caractere : chaine) {
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' ||caractere == 'o' || caractere == 'u' || caractere == 'y') {
             nbVoyelles++;
        }
    }
    return nbVoyelles;
}