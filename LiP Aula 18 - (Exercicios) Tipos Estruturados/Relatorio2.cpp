#include <iostream>
#include <string>
#include <cstring>
#define MAX 30
using namespace std;

struct Movel{
    char descricao[50];
    float peso;
    char tipo;

};
int main(){
    int n,tipos=0,k=0,peso=(-10000);
    Movel v[MAX];
    char real[50]="Real";
    string maisPesado;
    cin>>n;

for(int i=0;i<n;i++){
    cin.ignore();
    cin.getline(v[i].descricao,50);
    cin>>v[i].peso>>v[i].tipo;
}
for(int i=0;i<n;i++){
    if(v[i].peso>10.0&&v[i].tipo=='s'){
    tipos++;
    }
}

for(int i=0;i<n;i++){
            for(int j=strlen(v[i].descricao), b=3;j>(strlen(v[i].descricao)-4);j--,b--){
            if(real[b]==v[i].descricao[j-1]){
                k++;
            }
        }
}

for(int i=0;i<n;i++){
    if(v[i].peso>peso){
    peso=v[i].peso;
    maisPesado=v[i].descricao;
    }
}

cout<<"Tipo 's' acima de 10Kg: "<<tipos<<endl;
cout<<"Termina em  \"Real\": "<<(k/4)<<endl;
cout<<"Mais pesado: \""<<maisPesado<<"\"";

return 0;
}