#include <iostream>
using namespace std;
int main(){
int mat1[30][30],mat2[30][30];
int n,m;

cin>>n>>m;
//lendo a matriz
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
            cin>>mat1[i][j];
    }
}
//fazendo a matriz transposta
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
           mat2[j][i]=mat1[i][j];
    }
}
//mostrar matriz
cout<<"Transposta"<<endl;
                for( int i=0;i<n;i++){
                for (int j =0; j < n; j++)
                {
                   cout<<mat2[i][j]<<" "; 
                    
                    
                }
                cout<<endl;
            }

return 0;
}