#include <iostream>
using namespace std;
int main() {
    int mat[30][30];
    int n,m,valor;
    bool tem=false;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
cin>>valor;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(valor==mat[i][j]){
            tem=true;
        }
    }
}
if(tem==true){
    cout<<"Matriz tem elemento "<<valor;
}else{
    cout<<"Matriz não tem elemento "<<valor;
}
return 0;
}