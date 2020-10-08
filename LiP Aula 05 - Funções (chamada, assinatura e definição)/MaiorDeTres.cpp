#include <iostream>
using namespace std;
int maximo(int a,int b,int c);

int main(){
    int x,y,z,maior;
    cin>>x>>y>>z;
    maior=maximo(x,y,z);
    cout<<maior;

return 0;
}
int maximo(int a,int b,int c){
    int trono=-2000000000;
    if(a >trono){
        trono=a;
    }
    if(b >trono){
        trono=b;
    }
    if(c >trono){
        trono=c;
    }
    return trono;

}