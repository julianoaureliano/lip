#include <iostream>
using namespace std;
int main(){
    int n,menorValor=10000,cont=0,cont2=0,maiorValor=0;
    cin>>n;
    int vetor[n];
    int vetor2[n];
    for(int i=0;i<n;i++){
        cin>>vetor[i];
    }
    //pegando o menor valor
    for(int i=0;i<n;i++){
        if(vetor[i]<menorValor){
            menorValor=vetor[i];
        }
    }
    //valores repetidos
       for(int i=0;i<n;i++){
           for(int j=0;j<i;j++){
               if(vetor[i]==vetor[j]){
                   
                   vetor2[cont2]=vetor[j];
                   cont2++;
                   
                   
                   cont++;
               }
           }

        }
        //como no for anterior nao consegui imprimmir o maior valor dos repetidos, 
        //criei outro vetor com valores repetidos para pegar o maior deles depois.
    for(int i=0;i<cont2;i++){
        if(vetor2[i]>maiorValor){
            maiorValor=vetor2[i];
        }
    }


    if(cont==0){
            cout<<menorValor;
    }else{
        cout<<maiorValor;
    }
return 0;
}