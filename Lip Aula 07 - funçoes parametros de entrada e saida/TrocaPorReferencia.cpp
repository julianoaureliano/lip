#include <iostream>
using namespace std;
int troca_Ref(int &x, int &y);
int main()
{
    int x,y;
    cin>>x>>y;
    troca_Ref(x,y);
    cout<<x<<" "<<y;
return 0;
}
int troca_Ref(int &x, int &y){
    int aux;
    aux=x;
    x=y;
    y=aux;
}