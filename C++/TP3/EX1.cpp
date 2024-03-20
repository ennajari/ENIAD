#include <iostream>
#include <string>
using namespace std;

class Persone {
    private :
            string nom;
            int age;
    public :
            Persone(string _nom,int _age) : nom(_nom),age(_age){}
 
string getNom() const {return nom;}
int getage() const {return age;}

void setNom(string _nom)  { nom = _nom;}
void setAge(int _age)  { nom = _age;}

void afficher(){
    cout<<"votre nom & perenom est :"<<nom<<"\net votre age est:"<<age<<endl;
  }

};

int main()
{
    string nom;
    int age;
    cout<<"donner votre Nom et Prenom : ";
    getline(cin,nom);
    cout<<"donner votre age : ";
    cin>>age;
    cin.ignore();
   Persone P1 = Persone(nom , age);
   P1.afficher();
   return 0;
}