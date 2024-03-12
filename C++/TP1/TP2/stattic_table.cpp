#include <iostream>
using 
namespace std;
int main() {
    int taille;
    cout<<"donner la taile de votre tableau :"<<endl;
    cin>>taille;
    int table[taille];
    for(int i = 0 ; i <= taille ; i++){
        cout<<"Taper elemet"<<i+1<<":";
        cin>>table[i];
    }
    for(auto elemnt : table){
        cout<<elemnt<<endl;
    }
} 

