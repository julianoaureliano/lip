#include <iostream>
using namespace std;
int main(){
    int x,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0;
    cin>>x;
    while (x>=200) {
       
        cont1++;
        x=x%200;
        cout<<x<<"\n";
    }
    while (x>=100){
       x=x%100;
        cont2++;
    }
    while (x>=50){
       x=x%50;
        cont3++;
    }
    while (x>=20){
       x=x%20;
        cont4++;
    }
    while (x>=10){
       x=x%10;
        cont5++;
    }
    while (x>=5){
       x=x%5;
        cont6++;
    }
    cout<<cont1<<" "<<cont2<<" "<<cont3<<" "<<cont4<<" "<<cont5<<" "<<cont6;

    
return 0;
}