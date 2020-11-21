#include <iostream>
using namespace std;
int main(){
    int n;
    int mat1[100][100];
    cin>>n;

    //preenchendo a matriz
    for( int i=0;i<n;i++){
        for (int j =0; j < n; j++)
        {
            if (i==j)
            {
                mat1[i][j]=1;
            } else
            {
                mat1[i][j]=0;
            }
            
            
        }
        
    }   
                //mostrando a matriz
                for( int i=0;i<n;i++){
                for (int j =0; j < n; j++)
                {
                   cout<<mat1[i][j]<<" "; 
                    
                    
                }
                cout<<endl;
            }
return 0;
}