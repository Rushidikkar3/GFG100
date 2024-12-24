#include<iostream>
using namespace std;

int main(){
   int a,b,c;
   cin>>a>>b>>c;
   
   if(a>b && a>c){
       cout<<"Gretest Number is "<<a;
       
   }
   else if(b>c && b>a){
       cout<<"Gretest Number is "<<b;
   }
   
   else{
        cout<<"Gretest Number is "<<c;
   }
   return 0;
}