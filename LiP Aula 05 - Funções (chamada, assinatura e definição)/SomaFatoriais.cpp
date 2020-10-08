#include <iostream>
using namespace std;
int fatorial(int x);
int main(){
    int soma=0;
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        soma=soma + fatorial(i);
    }
    cout<<soma;
return 0;
}
int fatorial(int x){
   int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;

}