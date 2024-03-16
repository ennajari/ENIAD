#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Livre
{
private :
       string titre;
       string auteur;
       int  Annepublication; 
public :
Livre(String _titre , string _auteur , int _Annepublication ) : titre(_titre) , auteur(_auteur) , Annepublication(_Annepublication) {}
string getTitre() const{
    return titre;
}
string getauteur() const{
    return auteur;
}
int getAnnepublication() const{
    return Annepublication;
}
void setTitre(string _titre){
    titre = _titre;
}
void setAnnepublication(string _Annepublication){
    Annepublication = _Annepublication;
}
void setauteur(string _auteur){
    auteur = _auteur;
}
};

class Bibliotheque{
        vector<Livre> livres;
    void ajouterLivre(const Livre& livre){
        livres.push_back(livre);
    }
    
};
