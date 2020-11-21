#include <iostream>
#include <math.h>
using namespace std;

struct Ponto{
    int x , y;
};
int distanciaPonto(Ponto p1, Ponto p2);

int main(){
    Ponto p1,p2;
cin>>p1.x>>p1.y>>p2.x>>p2.y;

cout<<distanciaPonto(p1,p2);
return 0;
}
int distanciaPonto(Ponto p1, Ponto p2){
    int dis=0;
    dis= pow(p2.x-p1.x,2) + pow(p2.y-p1.y,2) ;
return dis;
}