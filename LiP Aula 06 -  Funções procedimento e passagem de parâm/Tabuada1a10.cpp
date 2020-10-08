#include <iostream>
using namespace std;
void tabuada(int x);
int main()
{
for(int x=1;x<=10;x++){
    tabuada(x);
}
return 0;
}
void tabuada(int x){
    
    for(int i=1;i<=10;i++){
        cout<<x<<" x "<<i<<" = "<<(x*i)<<"\n";
    }
}