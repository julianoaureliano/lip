#include <iostream>

using namespace std;
int main(){
    int x ;
    cin>>x;
  int c[x];
    for(int i=0;i<x;i++){
        cin>>c[i];
    }
    for(int i=(x-1);i>=0;i--){
        cout<< c[i]<<"\n";
    }
return 0;
}