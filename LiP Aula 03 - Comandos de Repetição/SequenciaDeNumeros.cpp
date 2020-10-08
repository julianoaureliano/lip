#include <iostream>
using namespace std;
int main()
{
    int trono=10000000,numero;
    cin>>numero;
    while(numero!=0){
      if(numero<trono){
          trono=numero;
      }  
    cin>>numero;
    }
cout<<trono;
return 0;
}