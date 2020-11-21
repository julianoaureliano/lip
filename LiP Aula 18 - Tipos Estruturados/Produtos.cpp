#include <iostream>
#include <string>
#include <cstring>
#define MAX 30

using namespace std;

//estrutura
struct Produto{
    char nome[100];
    int codigo;
    float preco;
    int tipo;// (0) Electrodoméstico, (1) Moda ou (2) Outros)
};

//declarando funçoes
void imprimirProduto(Produto v[MAX],int n);
void produtoCaro(Produto v[MAX],int n);
bool temIpad(Produto v[MAX],int n);
float lucroLoja(Produto v[MAX],int n);

//main
int main(){
int n;
Produto v[MAX];
bool tem;
cin>>n;

for(int i=0;i<n;i++){
    cin.ignore();
    cin.getline(v[i].nome,100);
    cin>>v[i].codigo>>v[i].preco>>v[i].tipo;
}

imprimirProduto(v,n);

produtoCaro(v,n);

    if(temIpad(v,n)==true){
    cout<<"Tem iPad"<<endl;
    }else{
    cout<<"Não tem iPad"<<endl;
    }   
    cout<<"Lucro: "<<lucroLoja(v,n);
return 0;
}
void imprimirProduto(Produto v[MAX],int n){
    for(int i=0;i<n;i++){
        cout<<"{ código: "<<v[i].codigo<<" , nome: "<<v[i].nome<<" , preço: "<<v[i].preco;
        if(v[i].tipo==0){
        cout<<" , tipo = Eletrodoméstico }";
        }
            if(v[i].tipo==1){
            cout<<" , tipo = Moda }";
            }
                if(v[i].tipo==2){
                cout<<" , tipo = Outro }";
                }
                cout<<endl;
    }
}

void produtoCaro(Produto v[MAX], int n){
float trono = (-100000.0);
int maior=0;

for(int i=0;i<n;i++){
    if(v[i].preco>trono){
        trono=v[i].preco;
        maior=i;
    }
}
cout<<"Mais caro"<<endl;
cout<<"{ código: "<<v[maior].codigo<<" , nome: "<<v[maior].nome<<" , preço: "<<v[maior].preco;
        if(v[maior].tipo==0){
        cout<<" , tipo = Eletrodoméstico }";
        }
        if(v[maior].tipo==1){
        cout<<" , tipo = Moda }";
        }
        if(v[maior].tipo==2){
        cout<<" , tipo = Outro }";
        }
        cout<<endl;
}

bool temIpad(Produto v[MAX],int n){
int k=0;
char ipad[50]="iPad";

for(int i=0;i<n;i++){
            for(int j=0;j<strlen(v[i].nome);j++){
            if(ipad[j]==v[i].nome[j]){
                k++;
            }
        }
}
    if(k == strlen(ipad)){
    return true;
    }else{
        return false;
     }
}

float lucroLoja(Produto v[MAX],int n){
float lucro=0.0;
for(int i=0;i<n;i++){
    if(v[i].tipo==0){
        lucro += v[i].preco;
    }
}
return lucro;
}