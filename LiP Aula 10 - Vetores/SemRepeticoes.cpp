#include <iostream>
using namespace std;
int main(){
    int n,cont=0;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
   cout<<"[" ;
   bool flag;
   for(int i=0;i<n;i++){
       flag=false;
            for(int j=0;j<i;j++){
                if(x[i]==x[j]){
                    
                    flag = true;
                    
                    break;
                }
            }
     if(flag==false){
         cont++;
         if(cont==1){
             cout<<" "<<x[i];
         }else
            cout<<" , "<<x[i];
        }
   } 
   cout<<" ]";

return 0;
}