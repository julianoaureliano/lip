#include <iostream>
using namespace std;
void ordenarVetor(int v[30], int ultimo,int n);
int main(){
    int n;
    int v[30];
    cin>>n;
    int ultimo=n-1;
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
ordenarVetor(v,ultimo,n);
return 0;
}

void ordenarVetor(int v[30], int ultimo,int n){
bool troca;
int aux;
cout<<"[ ";

for(int i=0;i<n;i++){
    if(i==n-1){
        cout<<v[i]<<" ";
    }else{
        cout<<v[i]<<" , ";
    }
}
cout<<"]"<<endl;
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

cout<<"[ ";
for(int i=0;i<n;i++){
    if(i==n-1){
        cout<<v[i]<<" ";
    }else{
        cout<<v[i]<<" , ";
    }

}
cout<<"]"<<endl;
}