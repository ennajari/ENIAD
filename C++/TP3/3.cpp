#include <iostream>
using namespace std;
int main() {
        int taille_tableau;
        try{
        while (true)
        {
     cout <<  "Veuillez saisir la taille du tableau : ";
     cin >> taille_tableau;
     int table[taille_tableau];
     for(int i = 0 ; i < taille_tableau ; i++){
       cout << "taper element : "<<i+1<<endl;
       cin>>table[i] ;
     }
     for (size_t i = 0; i < taille_tableau; i++)
     {
        int temp;
      for (size_t j = i+1; j < taille_tableau; j++)
      {
       if (table[i]<table[j])
       {
       temp = table[j];
       table[j] = table[i];
       table[i] = temp;
       }
      }
     }
      for(int k = 0 ; k < taille_tableau ; k++){
       cout << "taper element : "<<table[k]<<endl;
     }
    }
    }catch(exception e){
     cout<<"hhhhhhhhhhhhhhhhhh";
    }
    return 0;
} 