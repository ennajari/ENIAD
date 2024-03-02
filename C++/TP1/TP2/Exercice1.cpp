#include<iostream>
using namespace std;

int Somme(int table[],int n);

    int main(){
        int n;
        cout << "Taper la taile de voter tablau : " << endl;
        cin >> n;
        int table[n];
        for (int i = 0 ; i < n ; i++){
            cout << "Enter elemnt :" << i+1 << endl;
            cin >>table[i]; 
        }
        cout<<"Somme des elements du tableau : "<< Somme(table , n)<<endl;
        return 0; 
    }

    int Somme(int table[], int n){
    int s = 0;
        for(int i = 0; i< n ; i++){
        s += table[i];
        }
        return s;
    }