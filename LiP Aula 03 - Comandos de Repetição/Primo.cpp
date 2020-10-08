#include <iostream>
using namespace std;
int main()
{
    int numero;
    bool primo=true;
    cin>>numero;
 while (numero!=0){

    for(int i=2;i<numero;i++){
        if(numero%i==0){
            primo=false;
        }

    }
    if(numero==1 || numero==0){
       cout<<"O numero "<<numero<<" nao e primo"; 
    }
    else if(primo==true){
        cout<<"O numero "<<numero<<" e primo";
    }else{
        cout<<"O numero "<<numero<<" nao e primo";
    }
  cin>>numero;  
}

return 0;
}