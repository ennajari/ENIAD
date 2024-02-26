#include<iostream>
using namespace std;
 double Fahrenheit1(double cels){
    return (cels*9/5) + 2;
 }
 double Fahrenheit2(double fah){
    return ( fah - 32)* 5/9;
 }
 int main()
 {
  int choix;
   double temperateur;
  do
   { 
   cout<<"choisi l'loption de conversion :\n "<<endl;
   cout<<"1.Celsius vers Fahrenheit\n"<<endl;
   cout << "2. Fahrenheit vers Celsius\n"<<endl;
   cin >>choix;
     switch (choix)
     {
     case 1 : 
     cout<<"Taper le noumber a convertire:\n"<<endl;
      cin>> temperateur;
     cout<<"la temperateur est:\n"<<Fahrenheit1(temperateur);
        break;
     case 2 :
      cout<<"Taper le noumber a convertire:\n"<<endl;
      cin>> temperateur;
     cout<<"la temperateur est:\n"<<Fahrenheit2(temperateur);
     default:
        break;
     }
     cout<<endl;
    
   }while (choix == 1 || choix == 2);
   
     return 0;
 }