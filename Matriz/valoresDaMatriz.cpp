#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int mat1[30][30],valores=0;
    float media;
    float n,m,maior=0,menor=100000;
    cin>>n>>m;
   for (int i = 0; i < n; i++){
       for(int j=0;j<m;j++){
           cin>>mat1[i][j];
       }
   }
   for (int i = 0; i < n; i++){
       for(int j=0;j<m;j++){
          valores=mat1[i][j]+valores;
        if(mat1[i][j]>maior){
            maior=mat1[i][j];
        }
        if(mat1[i][j]<menor){
            menor=mat1[i][j];
        }
       }
   }
media=valores/(n*m);
cout<<"Menor valor: "<<menor<<"\nMaior valor: "<<maior<<endl;
cout<<fixed<<setprecision(2);
cout<<"Média dos valores: "<<media;
   
return 0;
}