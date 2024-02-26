#include<iostream>
using namespace std;

int main(){
    int s ; 
      for(int i = 0;i<100;i++){
        if(i%3==0 || i%5==0)
        s+=i;
      } 
      cout<<"le resulta est :"<<s<<endl;
}
