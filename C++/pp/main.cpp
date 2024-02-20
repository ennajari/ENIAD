#include<iostream>
#include<cmath>
using namespace std;
 int main(){
  cout <<"=================si un programe qui calculer la solution de equation de 2eme degrée================="<<endl;
   double a,b,c;
    cout<<"donner les valeur a b c respectivment:"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
 double D = b*b-4*a*c;
   if(D>0){
        double x1=(-b+sqrt(D)/2*a);
        double x2=(-b-sqrt(D)/2*a);
    cout<<"les solution est: X1="<<x1<<"X2="<<x2 <<endl;
   }
   else if(D<0){
       double f = -b/2*a;
    cout<<"la solution est:"<<f<<endl;
   }
   else{
      cout<<"pas de solutions dans IR"<<endl;
   }
 }
