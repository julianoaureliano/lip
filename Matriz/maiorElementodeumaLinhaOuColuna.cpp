#include <iostream>
using namespace std;
int main(){
    int mat[30][30],n,m,maior=(-100000),x;
    string carac;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
cin>>carac;
cin>>x;
//Caso carac seja igual 'l', o seu programa deve imprimir o maior
// elemento na linha x de A. Caso carac seja igual a 'c', o seu programa
// deve imprimir o maior elemento na coluna x de A.

//>>>>>>maior elemento da linha x da Matriz
if(carac=="l"){
    for(int i=x;i<=x;i++){
        for(int j=0;j<m;j++){   
            if(mat[i][j]>maior){
            maior=mat[i][j];
            }
        }
    }
        cout<<maior;
//>>>>>>maior elemento na coluna de x da Matriz     
}else{
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){   
            if(mat[i][x]>maior){
            maior=mat[i][x];
            }
        }
    }
        cout<<maior;

}
return 0;
}