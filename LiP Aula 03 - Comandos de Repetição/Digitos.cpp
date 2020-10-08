#include <iostream>
using namespace std;
int main()
{
    int numero,contador=0;
    cin>>numero;
if(numero>0){
    while (numero>0)
    {
        numero=numero/10;
        contador++;
    }    
}else
{
    while(numero<0){
        numero=numero/10;
        contador++;
    }
}

 cout<<contador;
return 0;
}