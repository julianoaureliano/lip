#include <iostream>
using namespace std;

struct Data{
    int dia;
    int mes;
    int ano;
};
int maisVelha(Data d1, Data d2);
int main(){
Data d1;
Data d2;
cin>>d1.dia>>d1.mes>>d1.ano>>d2.dia>>d2.mes>>d2.ano;
if(maisVelha(d1,d2)==1){
    cout<<"Pessoa 1 é mais velha";
}else if(maisVelha(d1,d2)==0){
    cout<<"Pessoas são da mesma idade";
}else{
    cout<<"Pessoa 2 é mais velha";
}
return 0;
}
int maisVelha(Data d1, Data d2){
    if(d1.ano<d2.ano){
        return 1;
    }else if(d1.ano==d2.ano){
        if(d1.mes<d2.mes){
            return 1;
        }if(d1.mes==d2.mes){
            if(d1.dia<d2.dia){
                return 1;
            }
        }
    }if(d1.ano==d2.ano&&d1.mes==d2.mes&&d1.dia==d2.dia){
        return 0;
    }else{
        return (-1);
    }
    
}