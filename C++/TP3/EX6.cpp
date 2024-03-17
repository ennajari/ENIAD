#include <iostream>
#include <string>
#include <vector>

using namespace std;
 
class Vehicule{
private :
    string marque;
    string modele;
    int anneeFabrication;
public :
Contact(string _marque,int _modele,string _anneeFabrication):_marque(__marque),modele(_modele),anneeFabrication(_anneeFabrication){}
public :
   string getMarque(void) const {return marque;}
   string getModele(void)const { return modele ;}
   int getAnneeFabrication(void) const { return anneeFabrication ; }
   void setMarque(string _marque){ marque = _marque;}
   void setModele(string _modele) { modele = _modele ;}
   void setAnneeFabrication(int _anneeFabrication ) {anneeFabrication = _anneeFabrication ;}
};
class ParcAutomobile
{
private:
    vector<Vehicule> voiture;
public:
    void AjouterVehicule(const Vehicule& voit){
            voit.push_back(voit);
    }
    void afficherVehicule()const{
        for(const Vehicule&  v : voiture)
           cout << "La voiture de la marque "<<v.getMarque()<<" est une "<<v.getModele()<<" fabriquée en "<<v.getAnneeFabrication<<endl;
    }
    Vehicule* RechercherVehicule(cont string* marque){
            for(const Vehicule&  v : voiture){
                if(v.getMarque() == marque)
                    return &v;
            }else
            {
                return false;
            }
    }
};
