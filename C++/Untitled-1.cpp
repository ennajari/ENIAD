#include <iostream>

int main() {
    int somme = 0;

    for (int i = 1; i < 1000; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            somme += i;
        }
    }

    std::cout << "La somme des multiples de 3 ou 5 inférieurs à 1000 est : " << somme << std::endl;

    return 0;
}
