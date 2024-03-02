#include <iostream>
using namespace std;

void Function(int T[] , int n , int nbr);

int main(){
    int n;
        cout<<"Enter la taille de votre tablau :"<<endl;
        cin>>n;
        int T[n];
    for(int i = 0 ; i < n ; i++){
        cout<<"Taper elemnt N :"<<i+1<<endl;
        cin>>T[i];
    }

    int nbr;
        cout<<"Donner elements a chercher:"<<endl;
        cin>>nbr;

    Function(T , n , nbr);
   return 0;
}
void Function(int T[] , int n , int nbr){
    for(int i = 0 ; i < n ; i++){
        if(T[i] == nbr){
            cout<<"j'ai trouver ce ements dans la case :"<<i+1;
           return;
        }
    }
    cout<<"je ne trouve pas ce ements :( ";
}