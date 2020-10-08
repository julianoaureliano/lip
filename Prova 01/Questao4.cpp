#include <iostream>
using namespace std;
float equacao(float a, float b);
int main(){
    int a,b;
    cin>>a>>b;
equacao(a,b);
return 0;
}
float equacao(float a, float b){
    float y=0;
    for(a;a<=b;a++){
        y=y+( (3*a + 2)/(a+1) );
    }
    cout<<y;
}