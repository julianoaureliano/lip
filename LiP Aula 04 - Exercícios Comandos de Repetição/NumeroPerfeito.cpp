#include <iostream>
using namespace std;
int soma_divisores(int num){
int s=0,d;
 for(int d=1;d<=num/2;d++){
         if(num%d==0){
             s=d+s;
         }
 }
 return s;
}

int main(){
    int num,j;
    cin>>num;    
    j=num;
for (int num=2;num<=j;num++){
    if(soma_divisores(num)==num){
    cout<<soma_divisores(num)<< "\n";
    }
}
return 0;
}