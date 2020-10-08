#include <iostream>
using namespace std;
void divisao(int x, int y);
int main()
{
    int x,y;
    cin>>x>>y;
    divisao(x,y);
return 0;
}
void divisao(int x, int y){
    int r, q;
    r=x/y;
    q=x%y;

    cout<< "Q = " << r <<"\nR = "<< q;
}