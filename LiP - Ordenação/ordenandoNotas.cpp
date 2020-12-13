#include <iostream>
#include <iomanip>
using namespace std;
float ordenarVetor(double v[30], int ultimo,int n);
int main(){
    int n,x;
    double v[50];
    double media;
    cin>>n>>x;
    int ultimo=x-1;
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    cout << fixed << setprecision(2);
    cout<<"[ ";
    for(int i=0;i<x;i++){
      if(i==x-1){
        cout<<v[i];
      }  else{
          cout<<v[i]<<" , ";
      }
    }
    cout<<" ]"<<endl;


media=ordenarVetor(v,ultimo,n);
cout<<"Média = "<<media;


return 0;
}
float ordenarVetor(double v[30], int ultimo,int n){
bool troca;
double aux;
double soma =0.0;
double media;

//para ordenar do maior para o maior ou vice-versa é so mudar o ">" ou "<" no if;
    do{
        troca =false;
        for(int j=0;j<ultimo;j++){
            if(v[j]<v[j+1]){
                troca=true;
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
      ultimo--;  
    }while(troca==true);

for(int i=0;i<n;i++){
    soma=soma+v[i];
}

media=soma/n;
return media;

}