#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
    float n, j,nota=0;
    cin>>n;
    for(int i=0;i<n;i++){
        
        cin>>j;
        nota=j+nota; 
    }
    cout << fixed << setprecision(2);
    cout<<(nota/n);
return 0;
}