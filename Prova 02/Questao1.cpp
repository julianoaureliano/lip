#include <iostream>
using namespace std;
int menorElemento(float a[30],float b[30],int m,int n);
int main(){
    int m,n,func;
    float a[30];
    float b[30];

    cin>>m;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>b[i];  
    }
func=menorElemento(a,b,m,n);
if(func==1){
   cout<<"Saída "<<"\""<<"true"<<"\"";
}else{
       cout<<"Saída "<<"\""<<"false"<<"\"";
}

return 0;
}
int menorElemento(float a[30],float b[30],int m,int n){
float maior=(-10000.0);
float menor=10000.0;
    for(int i=0;i<m;i++){
        if(a[i]<menor){
            menor=a[i];
        }
    }
        for(int i=0;i<n;i++){
        if(b[i]>maior){
            maior=b[i];
        }
    }
    if(menor>maior){
        return 1;
    }else{
        return 0;
    }




}