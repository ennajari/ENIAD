#include <iostream>
using namespace std;
int Somme_des_elements(int table[],int taille);

int main(){
    int taille;
   cout<<"donner la taille de votre tableau : "<<endl;
  cin>>taille;
  int table[taille];
  int resulta = Somme_des_elements(table , taille);
  cout << "La somme des elements du tableau est : "<<resulta<<endl;

  
}
int Somme_des_elements(int table[],int taille){
    int  somme=0;
    for ( int i = 0 ; i < taille ; i++){
        cout<<"veullez taper l'element  numero "<<i+1<<": ";
      	cin>>table[i];
        somme+=(table[i]);
    }
    return  somme;
}