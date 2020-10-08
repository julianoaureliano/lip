#include <iostream>
using namespace std;
int main()
{
    int numero;
    int cont=0,j=0;

    cin>>numero;
   
   while(numero !=0){

    for(int i=1;i<numero;i++){
        
        if(numero%i==0){
            cont++;
        }

    }
    if(cont==2){
       j++;
       cont=0;
    }else{
        cont=0;
    }
    cin>>numero;
   }
if(cont>j){
        cout<< cont <<" Número primo digitado";
    }else{
        cout<< cont << " Número primo não digitado";
    }
return 0;
}