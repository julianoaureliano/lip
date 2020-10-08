#include <iostream>
#include <iomanip>
using namespace std;
void horaAtual(int x);
int main()
{
    int x;
    cin>>x;
    horaAtual(x);
return 0;
}
void horaAtual(int x){
int horas,minutos,segundos;
horas=(x/3600);
minutos=(x - (horas*3600))/60;
segundos = x%60;
cout<<setw(2)<<setfill('0')<< horas<<":"<<setw(2)<<setfill('0')<<minutos<<":"<<setw(2)<<setfill('0')<<segundos;
}