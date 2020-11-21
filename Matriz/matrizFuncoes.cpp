
#include <iostream>
#define MAX_L 30
#define MAX_C 30

using namespace std;
//declara funçao
int somarElementos(int a[MAX_L][MAX_C],int n, int m);

int main(){
int mat[MAX_L][MAX_C], m , n,soma;
cin>>n>>m;
//ler matriz
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>mat[i][j];
    }
}
soma = somarElementos(mat,n,m);
cout<<"soma valores: "<<soma;
return 0;
}
//faz a funçao
int somarElementos(int a[MAX_L][MAX_C],int n, int m){
    int soma =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        soma=soma+a[i][j];
        }
    }
    return soma;
}