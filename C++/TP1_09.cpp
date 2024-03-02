#include <iostream>
#include <string>
#include <cctype>

int compterVoyelles(const std::string& chaine) {
    int nombreVoyelles = 0;
    for (char c : chaine) {
        char lowercaseC = std::tolower(c);
        if (lowercaseC == 'a' || lowercaseC == 'e' || lowercaseC == 'i' || lowercaseC == 'o' || lowercaseC == 'u') {
            nombreVoyelles++;
        }
    }
    return nombreVoyelles;
}

int main() {
    std::string chaine;
    std::cout << "Entrez une chaine de caracteres : ";
    std::getline(std::cin, chaine);
    int voyelles = compterVoyelles(chaine);
    std::cout << "Le nombre de voyelles dans la chaine est : " << voyelles << std::endl;
    return 0;
}
