#include <iostream>

int sommeDiviseurs(int nombre) {
    int somme = 0;
    for (int i = 1; i <= nombre / 2; i++) {
        if (nombre % i == 0) {
            somme += i;
        }
    }
    return somme + nombre;
}

int main() {
    int nombre;
    std::cout << "Entrez un nombre : ";
    std::cin >> nombre;
    std::cout << "La somme de tous les diviseurs de " << nombre << " est : " << sommeDiviseurs(nombre) << std::endl;
    return 0;
}