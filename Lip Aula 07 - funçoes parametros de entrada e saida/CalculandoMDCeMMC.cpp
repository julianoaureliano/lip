#include <iostream>
using namespace std;
int mmc(int x,int y);
int mdc(int x,int y);
void calc_mdc_mmc(int x, int y);
int main(){
    int x,y,opa,opa1;
    cin>>x>>y;
calc_mdc_mmc(x,y);
return 0;
}



int mmc(int x,int y){
    for(int i=1;i<=(x*y);i++){
        if(i%x==0 && i%y==0){
            return i;
        }
    }
}
int mdc(int x,int y){
   int rest;
    while(y!=0){
        rest=x%y;
        x=y;
        y=rest;

    }
    return x;
}

void calc_mdc_mmc(int x, int y){
    int x1,x2;
    x1=mdc(x,y);
    x2=mmc(x,y);
    cout<<"MDC = "<<x1<<", MMC = "<<x2;
}