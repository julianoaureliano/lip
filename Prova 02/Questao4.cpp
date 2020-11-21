#include <iostream>
using namespace std;
int elementosIdenticos(int mat[30][30],int n, int coluna, int linha);
int main(){
    int mat[30][30],n,linha,coluna,vetLinha[30],vetColuna[30];
    cin>>n;
    cin>>linha>>coluna;
    int opa;
    
    //ler matriz
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }

opa=elementosIdenticos(mat,n,coluna,linha);
if(opa==n){
    cout<<"O conteudo da linha "<<linha<<" corresponde ao da coluna "<<coluna;
}else{
    cout<<"O conteudo da linha "<<linha<<" nao corresponde ao da coluna "<<coluna;
}

return 0;
}
int elementosIdenticos(int mat[30][30],int n, int coluna, int linha){
int vetLinha[30],vetColuna[30];
int opa=0;
//vetor para linha
for(int i=linha;i<=linha;i++){
        for(int j=0;j<n;j++){   
        vetLinha[j]=mat[i][j] ;   
        }
    }
    //vetor para coluna
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){   
        if(j==coluna){
        vetColuna[i]=mat[i][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        if(vetColuna[i]==vetLinha[i]){
            opa++;
        }
    }
    return opa;
}