#include <iostream>
using namespace std;
int main(){
    int n,x,cont=0;
    cin>>n;
    int valores_das_vendas[n];
    for(int i=0;i<n;i++){
        cin>>valores_das_vendas[i];
    }
    cin>>x;
    for(int i=0;i<n;i++){
        if(valores_das_vendas[i]==x){
            cont++;
        }
    }
    if(cont>0){
        cout<<"Vendeu "<<x;
    }else{
        cout<<"Não vendeu "<<x;
    }
return 0;
}