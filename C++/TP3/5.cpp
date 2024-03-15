#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int taille;
     vector<int> vect1;
    cout << "Donner la taille du vecteur 1 : ";
    cin >> taille;
    for(int i = 0 ; i < taille ; i++){
        int elemnt;
        cout << "Taper elemnt"<<i+1<<" de vecteur 1 :" ;
        cin>>elemnt;
        vect1.push_back(elemnt);
    }
     vector<int>vect2;
    for(int i = 0 ; i < taille ; i++){
        int elemnt;
        cout << "Taper elemnt"<<i+1<<" de vecteur 2 :" ;
        cin>>elemnt;
        vect2.push_back(elemnt);
    }
    vector<int>vect3(taille);
    for(int i = 0 ; i < taille ; i++){
       vect3 += vect1[i] * vect2[i];
    }
    //Affichage des resultats
    for (size_t i = 0; i < taille; i++)
    {
       cout <<vect3[i]<<endl;
    }
    return 0;
}