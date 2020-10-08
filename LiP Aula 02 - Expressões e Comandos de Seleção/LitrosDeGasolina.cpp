#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float tempo,velo,gasolina;
    cin>>tempo;
    cin>>velo;

gasolina=(velo/12)*tempo;
cout << fixed << setprecision(2);
cout<<gasolina;

return 0;
}