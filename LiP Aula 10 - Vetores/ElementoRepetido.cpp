#include <iostream>
using namespace std;
int main(){
    int n,cont=0;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    
   bool flag;
   for(int i=0;i<n;i++){
       flag=false;
            for(int j=0;j<i;j++){
                if(x[i]==x[j]){
                    flag = true;
                    cont++;
                    break;
                }
            }
        
   } 
   if(cont>0){
            cout<<"Existem elementos repetidos";
        }else{
            cout<<"Não existem elementos repetidos";
        }
 

return 0;
}