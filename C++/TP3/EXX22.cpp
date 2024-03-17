#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Livre
{
private:
    string Titre;
    string Auteur;
    int AnneeDePublication;
public :
Livre(string _Titre , string _Auteur , int _AnneDePublication):Titre(_Titre),Auteur(_Auteur),AnneeDePublication(_AnneDePublication){}
public:
    string getTitre()const{return Titre;}
    string getAuteur()const{return Auteur;}
    int getAnneeDePublication()const{return AnneeDePublication;}

    void setTitre(string _Titre){ this->Titre = _Titre;}
    void setAuteur(string _Auteur){ this->Auteur = _Auteur;}
    void setTitre(int _AnneeDePublication){ this->AnneeDePublication = _AnneeDePublication;}
};

class Bibliotheque
{
private:
    vector<Livre>livers;
public :
    void AjouterLivre(const Livre& liver){
        livers.push_back(liver);
    }
    void afficherlliver(){
        for(Livre& livre : livers){
            cout<<"Titre :"<<livre.getTitre()<<endl;
            cout<<"Auteur : "<<livre.getAuteur()<<endl; 
        }
    }
    Livre* RechercheLiver(const string& Titre){
        for(Livre& liver : livers){ 
            if(liver.getTitre() == Titre){
                return &liver;
            }
        }
        return nullptr;
    }
};
int int main()
{
    Bibliotheque Biblio;
    return 0;
}
