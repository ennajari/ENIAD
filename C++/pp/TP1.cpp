#include<iostream>
using namespace std;
  int main()
   {
       double s;
      for(int i = 0 ; i <= 10 ; i++ ){
        if(i%3==0 || i%5==0){
            s+=i;
        }
      }
      cout<<"la somme est:"<<s<<endl;
   }
