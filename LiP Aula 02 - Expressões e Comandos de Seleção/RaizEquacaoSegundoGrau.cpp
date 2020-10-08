#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c,x1,x2,delta;
    cin>>a>>b>>c;
     
     delta=(b*b)-(4*a*c);
     if(delta<0){
        cout<< "Sem raiz real";
     }
     else{
         if(delta==0){
             x1=x2= -b/(2*a);
            cout<<x1;
         }
         else{
             x1=(-b + sqrt(delta))/2*a;
             x2=(-b - sqrt(delta))/2*a;
             
             if(x1<x2){
             cout<<x1<<" "<<x2;
             }
             if(x1>x2){
             cout<<x2<<" "<<x1;
             }
         }
     }
return 0;
}