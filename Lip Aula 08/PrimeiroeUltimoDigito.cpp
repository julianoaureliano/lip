#include <iostream>
using namespace std;
int primeiro_ultimo(int x);
int main()
{
    int x;
    cin>>x;
    primeiro_ultimo(x);
return 0;
}
int primeiro_ultimo(int x){
    int opa,asd;
    if(x>=10000){
        opa= x/10000;
        asd= x%10;
        
    }
    
    if(x>=1000 && x<9999){
        opa= x/1000;
        asd= x%10;
    }
        if(x>=100 && x<999){
        opa= x/100;
        asd= x%10;
    }
    if(x>=10 && x<99){
        opa= x/10;
        asd= x%10;
    } 
    if(x<10){
        asd=x;
        opa=x;
    }
    cout<<"primeiro="<<opa<<" ultimo="<<asd;

}