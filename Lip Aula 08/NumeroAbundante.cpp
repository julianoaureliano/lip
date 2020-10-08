#include <iostream>
using namespace std;
int numeroAbundante(int x);
int main()
{
    int x,opa;
    cin>>x;
    opa = numeroAbundante(x);

   if(x>=opa){
       cout<<x<<" nao e um numero abundante";
   }else{
       cout<<x<<" e um numero abundante";
   }
return 0;
}
int numeroAbundante(int x){
    int opa=0;
    for(int i=1;i<=x;i++){
        if(x%i==0 && x!=i){
            opa = opa +i;
        }
    }
    return opa;
}