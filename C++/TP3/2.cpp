#include <iostream>
using namespace std;

int main(){
    int size ;
    cout<<"veuillez taper la taile de votre tablau : "<<endl;
    cin>>size;
        int table[size];

    for(int i = 0 ; i < size ; i++){
        cout<<"enter elemt N:  "<<i+1<<"\n";
        cin>>table[i];
    }      

    int elemnt_cible;
    cout<<"donner un ement cible :"<<endl;
    cin>>elemnt_cible;
    
    for(int j = 0 ; j<size ;j++)
    {  
         if (table[j]==elemnt_cible){
                cout<<"le nombre est trouve a l'indice : "<<j+1<<endl;
        }

         else if(j==size){cout<<"le nombre n'est pas dans le tableau \n";
        }
    }
  return 0;
}