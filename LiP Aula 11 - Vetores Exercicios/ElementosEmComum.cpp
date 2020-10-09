#include <iostream>
using namespace std;
int main(){
    int n1,n2,cont=0;
    cin>>n1;
    int v1[n1];
    for(int i=0;i<n1;i++){
        cin>>v1[i];
    }
    cin>>n2;
    int v2[n2];
    for(int i=0;i<n2;i++){
        cin>>v2[i];
    }


    for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(v1[i]==v2[j]){
                    cont++;
                    cout<<v1[i]<<" ";
                }
    }
    }

if(cont==0){
    cout<<"Nenhum";
}
return 0;
}