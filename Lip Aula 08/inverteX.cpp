#include <iostream>
using namespace std;
int inverteX(int x);
int main()
{
    int x,opa,asd;
    cin>>x;
    cout<<"X = "<<x<<"\n";
    inverteX(x);
        if(x>=10000){
        opa= x/10000;
        asd= x%10;
    }
    
    if(x>=1000 && x<9999){
        opa= x/1000;
        asd= x%10;
    }
        if(x>=100 && x<999){
        opa= x/100;
        asd= x%10;
    }
    if(asd>opa){
        cout<<"X é menor que X invertido";
    }
        if(asd<opa){
        cout<<"X é maior que X invertido";
    }
    if(asd==opa){
        cout<<"X é igual que X invertido";
    }
    
    
    
    
return 0;
}
int inverteX(int x){
    int rest, asd;
    asd=x;
    cout<<"X invertido = ";
    if(x>=0){
        do{
            rest=x%10;
            cout<<rest;
            if(x!=0){
                x /=10;
            }
            
            
        }while(x !=0);
       cout<<"\n";
    } 

}