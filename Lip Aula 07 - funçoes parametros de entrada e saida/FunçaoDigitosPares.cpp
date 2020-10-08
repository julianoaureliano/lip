#include <iostream>
using namespace std;
int contaPares(int x);
int main()
{ 
    int x;
cin>>x;
contaPares(x);

return 0;
}
int contaPares(int x){
    int rest,cont1=0,cont2=0,opa=100000;
     do{
            rest=x%10;
            if(rest%2==0){
              cont1++;      
            //menor numero
            if(rest<opa){
                  opa=rest;
              } if(rest==opa){
                  cont2++;
              } 
                
            }

        x /=10;    
            
        }while(x !=0);
        if(cont1==0 ){
            cout<<"Nenhum";
        }else{
        cout<< cont1<<" digitos pares, ";
        if(cont2>=2){
            cout<<opa<<" ocorreu mais";
        }
        }else{
            cout<<"0 ocorreu mais";
        }
}
}