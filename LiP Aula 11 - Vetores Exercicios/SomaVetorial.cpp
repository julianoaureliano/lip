#include <iostream>
using namespace std;
int main(){
    int n,cont=0;
    cin>>n;
    int vetor1[n];
    int vetor2[n];
    int vetorSoma[n];
    
    for(int i=0;i<n;i++){
        cin>>vetor1[i];
    }
    for(int i=0;i<n;i++){
      cin>>vetor2[i];  
    }
    cout<<"[ ";
    
    for(int i=0;i<n;i++){
      vetorSoma[i]=vetor1[i]+vetor2[i] ; 
      if(cont==0){
      cout<<vetorSoma[i]<<" ";
      }
        else if(cont==(n)){
          cout<<", "<<vetorSoma[i]<<" ";
        }   else if(cont>0){
          cout<<", "<<vetorSoma[i]<<" ";
            }
      cont++;
    
    }

cout<<"]";
return 0;
}