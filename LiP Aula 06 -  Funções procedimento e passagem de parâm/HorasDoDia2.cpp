#include <iostream>
using namespace std;
int horaAtual(int x);
int main()
{
    int x,opa;
    cin>>x;
    opa = horaAtual(x);
    if(0<=opa && opa<6){
        cout<<"Madrugada";
    }if (6<=opa && opa<12){
        cout<<"Manhã";
    }if (12<=opa && opa<18){
        cout<<"Tarde";
    }if (18<=opa && opa<24){
        cout<<"Noite";
    }
return 0;
}

int horaAtual(int x){
int horas,minutos,segundos;
horas=(x/3600);
minutos=(x - (horas*3600))/60;
segundos = x%60;
return horas;
}