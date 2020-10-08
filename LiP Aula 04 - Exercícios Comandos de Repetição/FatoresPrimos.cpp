#include <iostream>
using namespace std;
int main(){
int num, maior =0;
cin>>num;
for(int i=2;num>1;i++){
    int contador = 0;
    while(num%i==0){
      contador++;
      num=num/i;
      if(num%i !=0){
          if(contador >1)maior=i;
          else if (num>1) maior=i;
          else maior=i;
      }
    }
}
cout<<maior;

return 0;
}