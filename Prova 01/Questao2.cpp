#include <iostream>
using namespace std;
int ultimoOuPrimeiro(int x);
int main(){
int x;
cin>>x;
cout<<ultimoOuPrimeiro(x);
return 0;
}
int ultimoOuPrimeiro(int x){
    int primeiro;
    if(x%2==0){
do{
            primeiro=x%10;
            
            if(x!=0){
                x /=10;
            }
            
            
        }while(x !=0);
        return primeiro;
    }
  else{
      return (x%10);
  }  
}