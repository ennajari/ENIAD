#include<iostream>
using namespace std;
 bool verefie_Premier(int nbr){
    if ( nbr <=1 )
    {
      return false; 
    }
    for (int i = 2 ; i*i <= nbr; ++i)
    {
       if(nbr % i == 0)
       return false;
    }
    
     return true;
 }
int main()
{
    while (true)
    {
       
    
    int nbr;
    cout<<"donner un number:";
    cin>>nbr;
    if(verefie_Premier(nbr))
        cout<<nbr<<" est premier"<<endl;
      else
        cout<<nbr<<" n'ai pas un noumber premier"<<endl;
     
    }
        return 0;

}