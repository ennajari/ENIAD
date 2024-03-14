#include<iostream>
using namespace std;
int main()
{
    while (true)
    {
        
    
    int n ;
     cout<<"donner un number pour calculer sa factoriel: "<<endl;
     cin>> n ;
       int f=1;
         for (int i = 1 ; i < n; i++)
         {
           f = f*i+f;
         }
         cout<<"le factoriel est : "<<f<<endl;
    }
         
} 