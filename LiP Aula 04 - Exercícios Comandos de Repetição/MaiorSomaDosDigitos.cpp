#include <iostream>
using namespace std;
int main(){
    int n,d,soma=0,maior=0,p;
    cin>>n;
    
 for(int i=1;i<n;i++){ 
     p=n;
    while(n>0){
      d=n%10;
      soma=soma+d;
      n=n/10;  
    }
    if(soma>maior){
        maior=p;
    }
 cin>>n;
 }
 
return 0;
}