#include <iostream>
using namespace std;
int somando_intervalo(int x, int y);
int main()
{

    int x,y,opa;
    cin>>x>>y;
   opa=somando_intervalo(x,y);
   cout<<opa;
return 0;
}
int somando_intervalo(int x, int y){
    int intervalo=0;
    for(y;x<=y;y--){
    intervalo=intervalo+y;
    }
    return intervalo;
}